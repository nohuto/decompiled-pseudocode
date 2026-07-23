/*
 * XREFs of LdrpInitializeNode @ 0x18011A0B0
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E73B0 (LdrpInitializeGraphRecurse.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpApplyPatchImage @ 0x1800915AC (LdrpApplyPatchImage.c)
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeNode(__int64 a1, __int64 **a2, __int64 a3, char *a4)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rcx
  unsigned int v8; // edi
  __int64 i; // rsi
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ecx
  __int64 v14; // r14
  __int64 v15; // r12
  char v16; // r13
  __int64 v17; // r9
  __int64 v18; // [rsp+30h] [rbp-E8h]
  __int64 v19; // [rsp+58h] [rbp-C0h]
  int *v20; // [rsp+80h] [rbp-98h]
  _QWORD v21[2]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-78h]
  __int128 v23; // [rsp+B0h] [rbp-68h]
  __int128 v24; // [rsp+C0h] [rbp-58h]
  __int64 v25; // [rsp+D0h] [rbp-48h]

  v20 = (int *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = 8;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = LdrpImageEntry;
  if ( v5 != a1 )
  {
    a4 = (char *)&qword_1801CA8F0;
    a2 = (__int64 **)qword_1801CA8F8;
    do
    {
      if ( v5 - 160 != v6 )
      {
        v7 = (__int64 *)(v5 - 160 + 32);
        if ( *a2 != &qword_1801CA8F0 )
          __fastfail(3u);
        *v7 = (__int64)&qword_1801CA8F0;
        *(_QWORD *)(v5 - 160 + 40) = a2;
        *a2 = v7;
        a2 = (__int64 **)(v5 - 160 + 32);
        qword_1801CA8F8 = (__int64)a2;
      }
      v5 = *(_QWORD *)(v5 + 8);
    }
    while ( v5 != a1 );
  }
  v8 = 0;
  for ( i = *(_QWORD *)(a1 + 8); i != a1; i = *(_QWORD *)(i + 8) )
  {
    v10 = i - 160;
    if ( i - 160 != v6 )
    {
      if ( *(_DWORD *)(v10 + 268) == 9 )
      {
        v11 = LdrpApplyPatchImage(i - 160, (__int64)a2, v6, a4);
        v8 = v11;
        if ( v11 < 0 )
        {
          LODWORD(v18) = v11;
          LdrpLogInternal(
            "minkernel\\ldr\\ldrsnap.c",
            1483,
            (__int64)"LdrpInitializeNode",
            0,
            "Applying patch \"%wZ\" failed - Status = 0x%x\n",
            v10 + 72,
            v18);
          break;
        }
      }
      v19 = LdrpCurrentDllInitializer;
      LdrpCurrentDllInitializer = i - 160;
      v14 = *(_QWORD *)(v10 + 56);
      v15 = v10 + 72;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        1502,
        (__int64)"LdrpInitializeNode",
        2,
        "Calling init routine %p for DLL \"%wZ\"\n",
        v14,
        v10 + 72);
      v16 = 1;
      v21[0] = 72LL;
      v21[1] = 1LL;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)v21, *(_QWORD *)(v10 + 136));
      if ( *(_WORD *)(v10 + 110) )
        LdrpCallTlsInitializers(1u, i - 160);
      if ( v14 )
      {
        v17 = 0LL;
        if ( (*(_DWORD *)(v10 + 104) & 0x20) != 0 )
          v17 = LdrpProcessInitContextRecord;
        v16 = LdrpCallInitRoutine(v14, *(_QWORD *)(v10 + 48), 1u, v17);
      }
      RtlDeactivateActivationContextUnsafeFast((__int64)v21);
      LdrpCurrentDllInitializer = v19;
      *(_DWORD *)(v10 + 104) |= 0x80000u;
      if ( !v16 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrsnap.c",
          1556,
          (__int64)"LdrpInitializeNode",
          0,
          "Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
          v14,
          v15);
        v8 = -1073741502;
        *(_DWORD *)(v10 + 104) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_QWORD *)(v10 + 48), v15, 0x14AEu);
      v6 = LdrpImageEntry;
    }
  }
  v12 = -4;
  if ( !v8 )
    v12 = 9;
  *v20 = v12;
  return v8;
}

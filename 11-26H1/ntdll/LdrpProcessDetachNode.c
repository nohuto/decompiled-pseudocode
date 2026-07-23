/*
 * XREFs of LdrpProcessDetachNode @ 0x18011AE58
 * Callers:
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     LdrpRecordUnloadEvent @ 0x1800D3560 (LdrpRecordUnloadEvent.c)
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 */

void __fastcall LdrpProcessDetachNode(_QWORD **a1)
{
  _QWORD *i; // rbx
  _QWORD *v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rdx
  __int64 v7; // r15
  _QWORD v8[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v9; // [rsp+60h] [rbp-58h]
  __int128 v10; // [rsp+70h] [rbp-48h]
  __int128 v11; // [rsp+80h] [rbp-38h]
  __int64 v12; // [rsp+90h] [rbp-28h]

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v3 = i - 20;
    *((_WORD *)i - 26) = 0;
    LdrpRecordUnloadEvent((__int64)(i - 20));
    v4 = i - 16;
    v5 = *v4;
    if ( *v4 )
    {
      v6 = (__int64 **)v3[5];
      if ( *(__int64 **)(v5 + 8) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      *v4 = 1LL;
    }
    v7 = v3[7];
    if ( v7 && (v3[13] & 0x80000) != 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        2769,
        (__int64)"LdrpProcessDetachNode",
        2,
        "Uninitializing DLL \"%wZ\" (Init routine: %p)\n",
        v3 + 9,
        v3[7]);
      v8[0] = 72LL;
      v8[1] = 1LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)v8, v3[17]);
      if ( *((_WORD *)v3 + 55) )
        LdrpCallTlsInitializers(0, (__int64)(i - 20));
      LdrpCallInitRoutine(v7, v3[6], 0, 0LL);
      RtlDeactivateActivationContextUnsafeFast((__int64)v8);
    }
  }
}

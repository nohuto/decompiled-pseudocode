/*
 * XREFs of AcquireGPUResourcesFromPreferredSegmentSet @ 0x140114670
 * Callers:
 *     AcquireGpuResources @ 0x1400D2F84 (AcquireGpuResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ValidateSegmentForAcquisitionOfResource @ 0x1400D32C8 (ValidateSegmentForAcquisitionOfResource.c)
 */

__int64 __fastcall AcquireGPUResourcesFromPreferredSegmentSet(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v7; // r9d
  int v8; // esi
  bool v9; // r15
  unsigned int v10; // edi
  unsigned int v11; // r14d
  bool v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  _DWORD *v17; // r10
  bool v18; // cl
  __int64 v19; // rcx
  int v21; // eax
  int v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+80h] [rbp+8h]

  v23 = *a2;
  v7 = a3;
  v8 = -1071775488;
  v9 = ((a3 - 3) & 0xFFFFFFFA) == 0
    && a3 != 8
    && ((v21 = **(_DWORD **)(*a2 + 368), (v21 & 0x20000000) == 0) || v21 >= 0)
    && (v21 & 0x80000) == 0;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 56) + 7104LL) || v9 )
    v10 = 2;
  else
    v10 = 0;
  do
  {
    v11 = 0;
    do
    {
      v12 = ((*((_DWORD *)a2 + 11) >> (6 * v11)) & 0x20) == 0;
      if ( *((_DWORD *)a2 + 12) >= 0xA0000000 && (unsigned __int64)a2[2] >= 0x1000000 )
        v12 = ((*((_DWORD *)a2 + 11) >> (6 * v11)) & 0x20) != 0;
      if ( ((*((_DWORD *)a2 + 11) >> (6 * v11)) & 0x1F) != 0 )
      {
        v13 = (unsigned __int16)(((*((_DWORD *)a2 + 11) >> (6 * v11)) & 0x1F) - 1);
        v8 = ValidateSegmentForAcquisitionOfResource(a1, a2, v13, v7, 0);
        if ( v8 >= 0 )
        {
          v16 = *(_QWORD *)(a1 + 1752);
          v17 = *(_DWORD **)(v16 + 8 * v13);
          if ( (*(_BYTE *)(a1 + 556) & 0x48) != 0
            && (v17[16] & 1) != 0
            && (**(_DWORD **)(v23 + 368) & 0x8000) == 0
            && (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 6984LL) & 0x400000) == 0 )
          {
            LOWORD(v13) = *(_WORD *)(a1 + 144);
            v17 = *(_DWORD **)(v16 + 8LL * (unsigned __int16)v13);
          }
          v18 = v10 == 1 || v9;
          LOBYTE(v14) = v12;
          LOBYTE(v22) = v18;
          LOBYTE(v15) = v10 == 0;
          v8 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *, __int64, __int64, int, int, __int64))(*(_QWORD *)v17 + 16LL))(
                 v17,
                 a2,
                 v14,
                 v15,
                 v22,
                 a3,
                 -1LL);
          if ( v8 >= 0 )
            return (unsigned int)v8;
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = (unsigned __int16)v13;
            WdLogGlobalForLineNumber = 2454;
          }
        }
        v7 = a3;
      }
      ++v11;
    }
    while ( v11 <= a5 );
    ++v10;
  }
  while ( v10 <= 2 );
  return (unsigned int)v8;
}

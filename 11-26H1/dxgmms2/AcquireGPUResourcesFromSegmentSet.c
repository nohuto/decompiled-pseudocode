/*
 * XREFs of AcquireGPUResourcesFromSegmentSet @ 0x1400D26E8
 * Callers:
 *     ?VidMmAcquireTemporaryResourcesForLegacyAllocation@@YAJPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B3598 (-VidMmAcquireTemporaryResourcesForLegacyAllocation@@YAJPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ValidateSegmentForAcquisitionOfResource @ 0x1400D32C8 (ValidateSegmentForAcquisitionOfResource.c)
 */

__int64 __fastcall AcquireGPUResourcesFromSegmentSet(__int64 a1, __int64 *a2, int a3, char a4, int a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned int v11; // edi
  __int64 v12; // rbp
  __int64 v13; // rbx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v17; // r8
  char v18; // dl
  _DWORD *v19; // r10
  int v20; // eax
  char v21; // cl
  int v22; // eax
  __int16 v23; // ax
  int v24; // [rsp+20h] [rbp-48h]

  v6 = *a2;
  v11 = -1071775488;
  LOWORD(v12) = 0;
  if ( *(_DWORD *)(a1 + 136) )
  {
    v13 = a6;
    v14 = 0;
    while ( 1 )
    {
      if ( v13 != -1 )
      {
        v23 = a5 ? a5 - 1 : *(_WORD *)(a1 + 144);
        if ( (_WORD)v12 != v23 )
          goto LABEL_5;
      }
      v11 = ValidateSegmentForAcquisitionOfResource(a1, (_DWORD)a2, v14, a3, a4);
      if ( (v11 & 0x80000000) != 0 )
        goto LABEL_5;
      v17 = *(_QWORD *)(a1 + 1752);
      v18 = *(_BYTE *)(a1 + 556);
      v19 = *(_DWORD **)(v17 + 8LL * (unsigned __int16)v12);
      if ( (v18 & 0x48) == 0 )
        goto LABEL_9;
      if ( (v19[16] & 1) == 0 )
        goto LABEL_9;
      v15 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 6984LL);
      if ( (v15 & 0x400000) != 0 )
        goto LABEL_9;
      if ( a4 && ((dword_14008A65C & 2) != 0 || (v15 & 0x200000) != 0) )
        goto LABEL_24;
      if ( (**(_DWORD **)(v6 + 368) & 0x8000) == 0 )
        break;
      if ( !a4 )
      {
LABEL_10:
        if ( (_WORD)v12 != *(_WORD *)(a1 + 144) || (**(_DWORD **)(v6 + 368) & 0x8000) == 0 )
        {
          if ( ((a3 - 3) & 0xFFFFFFFA) != 0
            || a3 == 8
            || (v20 = **(_DWORD **)(v6 + 368), (v20 & 0x20000000) != 0) && v20 < 0
            || (v21 = 1, (v20 & 0x80000) != 0) )
          {
            v21 = 0;
          }
          LOBYTE(v17) = 1;
          LOBYTE(v24) = v21;
          v22 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *, __int64, _QWORD, int, int, __int64))(*(_QWORD *)v19 + 16LL))(
                  v19,
                  a2,
                  v17,
                  0LL,
                  v24,
                  a3,
                  v13);
LABEL_18:
          v11 = v22;
          if ( v22 >= 0 )
            return v11;
          goto LABEL_22;
        }
        goto LABEL_21;
      }
      if ( v18 < 0 )
        break;
LABEL_34:
      if ( (_WORD)v12 != *(_WORD *)(a1 + 144) )
      {
LABEL_25:
        v22 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *, __int64, _QWORD))(*(_QWORD *)v19 + 48LL))(
                v19,
                a2,
                v17,
                0LL);
        goto LABEL_18;
      }
LABEL_21:
      v11 = -1071775488;
LABEL_22:
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = (unsigned __int16)v12;
        v13 = a6;
        WdLogGlobalForLineNumber = 2595;
      }
LABEL_5:
      LOWORD(v12) = v12 + 1;
      v14 = (unsigned __int16)v12;
      if ( (unsigned int)(unsigned __int16)v12 >= *(_DWORD *)(a1 + 136) )
        return v11;
    }
    v12 = *(unsigned __int16 *)(a1 + 144);
    v19 = *(_DWORD **)(v17 + 8 * v12);
LABEL_9:
    if ( !a4 )
      goto LABEL_10;
LABEL_24:
    if ( v18 < 0 )
      goto LABEL_25;
    goto LABEL_34;
  }
  return v11;
}

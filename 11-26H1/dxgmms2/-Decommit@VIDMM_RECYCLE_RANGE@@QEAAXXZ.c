/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F3E34
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAEK@Z @ 0x1400ACF54 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAEK@Z.c)
 *     ?FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400F4DC0 (-FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400F439C (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this)
{
  int v1; // ebp
  __int64 v2; // r14
  __int64 v3; // rdx
  int v5; // ecx
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // eax
  _QWORD *v11; // rcx
  int *v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbp
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-18h]
  __int64 v35; // [rsp+28h] [rbp-10h]

  v3 = *((int *)this + 16);
  v5 = *((_DWORD *)this + 16) - 1;
  if ( v5 )
  {
    if ( v5 == 2 )
    {
      v6 = (_QWORD *)((char *)this + 104);
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
      v8 = *((_QWORD *)this + 13);
      if ( *(VIDMM_RECYCLE_RANGE **)(v8 + 8) != (VIDMM_RECYCLE_RANGE *)((char *)this + 104) )
        goto LABEL_8;
      v9 = (_QWORD *)*((_QWORD *)this + 14);
      if ( (_QWORD *)*v9 != v6 )
        goto LABEL_8;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = *((_DWORD *)this + 16);
      *((_QWORD *)this + 14) = 0LL;
      *v6 = 0LL;
      *((_QWORD *)this + 12) = 0LL;
      if ( v10 != 5 )
      {
        if ( (unsigned int)(v10 - 3) > 1
          || (v18 = *((_QWORD *)this + 4) - *((_QWORD *)this + 5),
              (__int64)(v18
                      + _InterlockedExchangeAdd64(
                          (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                          v18)) >= 0)
          || !g_IsInternalRelease )
        {
LABEL_7:
          *((_QWORD *)this + 12) = *(_QWORD *)(v7 + 1576) + (unsigned int)dword_14008A50C;
          v11 = *(_QWORD **)(v7 + 1552);
          if ( *v11 == v7 + 1544 )
          {
            *v6 = v7 + 1544;
            v6[1] = v11;
            *v11 = v6;
            *(_QWORD *)(v7 + 1552) = v6;
            if ( !_InterlockedExchange((volatile __int32 *)(v7 + 1536), 1) && !*(_DWORD *)(v7 + 1584) )
              KeSetTimer((PKTIMER)(v7 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v7 + 1440));
            v14 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
            if ( (__int64)(v14
                         + _InterlockedExchangeAdd64(
                             (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                             v14)) < 0
              && g_IsInternalRelease )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
              WdLogGlobalForLineNumber = 213;
              goto LABEL_27;
            }
            v1 = 4;
            WdLogSingleEntry3(4LL, this, *((int *)this + 16), 4LL);
            WdLogGlobalForLineNumber = 2257;
            if ( (byte_14008A202 & 0x40) == 0 )
            {
LABEL_14:
              v2 = *((_QWORD *)this + 9);
              v17 = *(__int64 **)(v2 + 152);
              if ( !v17 )
              {
LABEL_15:
                *((_DWORD *)this + 16) = v1;
                return;
              }
LABEL_27:
              v20 = *v17;
              v21 = 144 * v17[1];
              *(_DWORD *)(v21 + v20) = 2;
              *(_QWORD *)(v21 + v20 + 8) = this;
              RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v21 + v20 + 16), 0LL);
              ++*(_QWORD *)(*(_QWORD *)(v2 + 152) + 8LL);
              v22 = *(_QWORD *)(v2 + 152);
              if ( *(_QWORD *)(v22 + 8) == *(_QWORD *)(v22 + 48) )
              {
                *(_QWORD *)(v22 + 8) = 0LL;
                *(_BYTE *)(*(_QWORD *)(v2 + 152) + 16LL) = 1;
              }
              goto LABEL_15;
            }
LABEL_22:
            LODWORD(v35) = v1;
            LODWORD(v34) = *((_DWORD *)this + 16);
            McTemplateK0pqq_EtwWriteTransfer(v15, &EventRecycleRangeTransition, v16, this, v34, v35);
            goto LABEL_14;
          }
LABEL_8:
          __fastfail(3u);
        }
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
      }
      v19 = *((_QWORD *)this + 4) - *((_QWORD *)this + 5);
      if ( (__int64)(v19 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v19)) < 0
        && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_22;
      }
      goto LABEL_7;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 1LL, v3, 0LL);
    WdLogGlobalForLineNumber = 213;
    while ( 1 )
    {
      v23 = *((_QWORD *)v12 + 1);
      *((_QWORD *)this + 12) = *(_QWORD *)(v23 + 1576) + (unsigned int)dword_14008A510;
      v24 = (_QWORD *)((char *)this + 104);
      v25 = *(_QWORD **)(v23 + 1568);
      if ( *v25 != v23 + 1560 )
        goto LABEL_8;
      *v24 = v23 + 1560;
      *((_QWORD *)this + 14) = v25;
      *v25 = v24;
      *(_QWORD *)(v23 + 1568) = v24;
      if ( !_InterlockedExchange((volatile __int32 *)(v23 + 1536), 1) && !*(_DWORD *)(v23 + 1584) )
        KeSetTimer((PKTIMER)(v23 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v23 + 1440));
      v26 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
      if ( (__int64)(v26 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v26)) >= 0
        || !g_IsInternalRelease )
      {
        break;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
LABEL_43:
      if ( (unsigned int)(v13 - 4) <= 2 || (unsigned int)(v13 - 9) <= 1 )
        goto LABEL_10;
    }
    WdLogSingleEntry3(4LL, this, *((int *)this + 16), 5LL);
    WdLogGlobalForLineNumber = 2257;
    if ( (byte_14008A202 & 0x40) != 0 )
    {
      LODWORD(v35) = 5;
      LODWORD(v34) = *((_DWORD *)this + 16);
      McTemplateK0pqq_EtwWriteTransfer(v27, &EventRecycleRangeTransition, v28, this, v34, v35);
    }
    v29 = *((_QWORD *)this + 9);
    v30 = *(__int64 **)(v29 + 152);
    if ( v30 )
    {
      v31 = *v30;
      v32 = 144 * v30[1];
      *(_DWORD *)(v32 + v31) = 2;
      *(_QWORD *)(v32 + v31 + 8) = this;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v32 + v31 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v29 + 152) + 8LL);
      v33 = *(_QWORD *)(v29 + 152);
      if ( *(_QWORD *)(v33 + 8) == *(_QWORD *)(v33 + 48) )
      {
        *(_QWORD *)(v33 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v29 + 152) + 16LL) = 1;
      }
    }
    *((_DWORD *)this + 16) = 5;
  }
  else
  {
    v12 = *(int **)(*((_QWORD *)this + 9) + 32LL);
    v13 = *v12;
    if ( *v12 != 3 )
      goto LABEL_43;
LABEL_10:
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
  }
}

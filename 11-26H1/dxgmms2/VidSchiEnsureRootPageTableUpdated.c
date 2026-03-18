/*
 * XREFs of VidSchiEnsureRootPageTableUpdated @ 0x140106870
 * Callers:
 *     VidSchiSuspendResumeHwContext @ 0x14000619C (VidSchiSuspendResumeHwContext.c)
 *     VidSchSubmitCommandToHwQueue @ 0x14000AED0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchCreateHwQueue @ 0x14004A8B0 (VidSchCreateHwQueue.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1400430E4 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043EE0 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

__int64 __fastcall VidSchiEnsureRootPageTableUpdated(char *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  UINT v7; // edx
  UINT64 SegmentOffset; // r12
  UINT v9; // r9d
  __int64 v10; // rax
  const struct VIDMM_PROCESS *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  struct _DXGKARG_SETROOTPAGETABLE v20; // [rsp+58h] [rbp-50h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  result = *(unsigned int *)(v1 + 12);
  v5 = *(_QWORD *)(v3 + 40);
  if ( (result & 0x10) != 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 320, 0LL);
    v6 = 0LL;
    v7 = 0;
    SegmentOffset = 0LL;
    v9 = 0;
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8LL) + 64LL);
    if ( v10 )
    {
      v11 = *(const struct VIDMM_PROCESS **)(v10 + 8);
      if ( v11 )
      {
        v12 = *(_QWORD *)(*((_QWORD *)v11 + 4) + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 16) + 240LL));
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 24);
          if ( v13 )
          {
            v14 = *(unsigned __int16 *)(v1 + 6);
            v15 = *(_QWORD *)(v13 + 128) + 32LL * (unsigned int)v14;
            if ( v15
              && (v16 = *(_QWORD *)v15) != 0
              && (v17 = *(_QWORD *)(v16 + 24)) != 0
              && (*(_DWORD *)(*(_QWORD *)v17 + 56LL) & 1) != 0 )
            {
              v6 = *(_QWORD *)(v15 + 8);
              v9 = *(_DWORD *)(v15 + 16);
              v7 = *(_DWORD *)(v15 + 24);
              SegmentOffset = *(_QWORD *)(v16 + 8);
            }
            else
            {
              WdLogSingleEntry2(1LL, v13, v14);
              WdLogGlobalForLineNumber = 3401;
              DxgkLogInternalTriageEvent(v18, 0x40000LL);
              v9 = 0;
              v7 = 0;
            }
          }
        }
        if ( *((_QWORD *)a1 + 41) != v6 && v9 )
        {
          v19 = (*((_DWORD *)a1 + 14) & 0x1000) == 0;
          v20.hContext = (HANDLE)*((_QWORD *)a1 + 6);
          *((_QWORD *)a1 + 41) = v6;
          *(&v20.Address.SegmentId + 1) = 0;
          *(&v20.NumEntries + 1) = 0;
          v20.Address.SegmentId = v7;
          v20.Address.SegmentOffset = SegmentOffset;
          v20.NumEntries = v9;
          if ( v19 )
          {
            ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v5 + 8), &v20);
            SegmentOffset = v20.Address.SegmentOffset;
          }
          *((_QWORD *)a1 + 42) = SegmentOffset;
          VidMmRecordVaPagingHistorySetPageDirectory(
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 768LL),
            v11,
            &v20,
            a1);
        }
      }
    }
    return ExReleasePushLockExclusiveEx(a1 + 320, 0LL);
  }
  return result;
}

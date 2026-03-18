/*
 * XREFs of ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x14012540C
 * Callers:
 *     VidMmSuspendDevices @ 0x14010107C (VidMmSuspendDevices.c)
 * Callees:
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x140100F78 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x14011ADDC (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x14011C300 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_SEGMENT::GetDeviceToSuspend(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int8 a4,
        struct VIDMM_DEVICE **a5)
{
  _QWORD *v5; // rbp
  _QWORD *v6; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  _QWORD *v10; // rdi
  _QWORD *v11; // r15
  _QWORD *v12; // r14
  VIDMM_DEVICE *v13; // rdi
  VIDMM_DEVICE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx

  v5 = (_QWORD *)(a1 + 112);
  v6 = *(_QWORD **)(a1 + 112);
  while ( 1 )
  {
    v8 = v6;
    v9 = v6;
    if ( v6 == v5 )
      break;
    v10 = v6 - 3;
    v6 = (_QWORD *)*v6;
    if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(*v10 + 16LL))
      && (*(_BYTE *)(*(_QWORD *)(*v10 + 72LL) + 408LL) & 1) == 0 )
    {
      v11 = v9 + 2;
      v12 = (_QWORD *)*v11;
      while ( v12 != v11 )
      {
        v13 = (VIDMM_DEVICE *)v12[4];
        v12 = (_QWORD *)*v12;
        if ( VIDMM_DEVICE::CanSuspendThisDevice(v13, a2, a3, a4) )
        {
          if ( !VIDMM_DEVICE::IsResumedRecently(v13) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
              WdLogGlobalForLineNumber = 6243;
            }
            v16 = *v8;
            if ( *(_QWORD **)(*v8 + 8LL) != v8
              || (v17 = (_QWORD *)v8[1], (_QWORD *)*v17 != v8)
              || (*v17 = v16, *(_QWORD *)(v16 + 8) = v17, v18 = *(_QWORD **)(a1 + 120), *v18 != a1 + 112) )
            {
              __fastfail(3u);
            }
            *v8 = a1 + 112;
            v8[1] = v18;
            *v18 = v8;
            *(_QWORD *)(a1 + 120) = v8;
            return v13;
          }
          if ( VIDMM_DEVICE::IsBetterYieldCandidate(v14, *a5) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v13;
              WdLogGlobalForLineNumber = 6259;
            }
            *a5 = v13;
          }
        }
      }
    }
  }
  return 0LL;
}

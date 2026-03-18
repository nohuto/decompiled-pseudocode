/*
 * XREFs of ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1403BDB78
 * Callers:
 *     ?AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1401D4F88 (-AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER.c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1403BDA94 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402FAE34 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 *     ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402FB018 (-ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetProcessEntry@DripsBlockerTrackingHelper@@IEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1403BDCBC (-GetProcessEntry@DripsBlockerTrackingHelper@@IEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z.c)
 *     ?AddNewReasonForProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1403BDD8C (-AddNewReasonForProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEAD0W4_DXGKETW_PROFILER_TYPE@@P.c)
 *     ?AddNewProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEADW4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1403BDE50 (-AddNewProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEADW4_DXGKETW_PROFILER_TYPE@@PEAI3@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::DoGetProcessEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // ebx
  DripsBlockerTrackingHelper *v10; // rcx
  _BYTE *v11; // r9
  const char *v12; // r10
  struct _EPROCESS *v13; // r11
  unsigned __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  char v16[16]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v17; // [rsp+58h] [rbp-50h]
  char v18; // [rsp+68h] [rbp-40h]

  v9 = 0;
  if ( DripsBlockerTrackingHelper::ShouldIgnore(a1, a5) )
  {
    *v11 = 1;
    return 0LL;
  }
  else
  {
    v15 = 0LL;
    v18 = 0;
    *(_OWORD *)v16 = 0LL;
    v17 = 0LL;
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v10, v12, v13, v16, 0x21u, &v15);
    if ( !(unsigned __int8)DripsBlockerTrackingHelper::GetProcessEntry(a1, a2, v16, v15, a5, a6, a7) )
    {
      v9 = DripsBlockerTrackingHelper::AddNewReasonForProcessEntry(a1, a2, v16, v15, a5, a6, a7);
      if ( v9 == -1073741275 )
        return (unsigned int)DripsBlockerTrackingHelper::AddNewProcessEntry(a1, a2, v16, a5, a6, a7);
    }
    return v9;
  }
}

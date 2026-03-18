/*
 * XREFs of ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402FB018
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402FB050 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1403BDB78 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 * Callees:
 *     <none>
 */

char __fastcall DripsBlockerTrackingHelper::ShouldIgnore(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp+8h]

  v2 = 0LL;
  v4 = 0x1F4E000003F1LL;
  while ( 1 )
  {
    if ( (unsigned int)v2 >= 2 )
      return 0;
    if ( a2 == *((_DWORD *)&v4 + v2) )
      break;
    v2 = (unsigned int)(v2 + 1);
  }
  return 1;
}

/*
 * XREFs of ACPIBuildDiscoverPowerNodeCompletion @ 0x140057920
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 *     WPP_RECORDER_SF_sqqDqs @ 0x14005A5FC (WPP_RECORDER_SF_sqqDqs.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall ACPIBuildDiscoverPowerNodeCompletion(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v6; // r10

  if ( a2 >= 0 )
  {
    if ( a3 )
    {
      v6 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(v6 + 136) = a3;
      _InterlockedOr64((volatile signed __int64 *)(v6 + 16), 0x8000uLL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqqDqs(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    }
  }
  ACPIBuildCompleteGeneric(0LL, a2, 0LL, a1);
}

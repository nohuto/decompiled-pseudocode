/*
 * XREFs of RaidAdapterPowerDownDevice @ 0x14002EBC0
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x14002E9E4 (RaidAdapterSetDevicePowerIrp.c)
 * Callees:
 *     GatewayRegisterForEmptyNotification @ 0x14002ECBC (GatewayRegisterForEmptyNotification.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterPowerDownDevice(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, a1, a2);
  }
  ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  RaidPauseAdapterQueue(a1);
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = GatewayRegisterForEmptyNotification(
         *(_QWORD *)(a1 + 1024),
         *(_QWORD *)(a1 + 8),
         a2,
         0,
         (__int64)RaidAdapterStopOnPowerdown);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 24LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, a1, a2, v4);
  }
  return 259LL;
}

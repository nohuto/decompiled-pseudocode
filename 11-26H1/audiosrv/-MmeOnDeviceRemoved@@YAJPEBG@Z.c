/*
 * XREFs of ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x1801069C8
 * Callers:
 *     s_mmeNotifyDeviceRemoved @ 0x180106D50 (s_mmeNotifyDeviceRemoved.c)
 * Callees:
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 */

__int64 __fastcall MmeOnDeviceRemoved(const unsigned __int16 *a1)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, (__int64)&WPP_62e65b1aa5e43d79debbf88575ed7e0c_Traceguids, a1);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
  return 0LL;
}

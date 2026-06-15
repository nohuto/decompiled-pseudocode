/*
 * XREFs of ?MME_ServiceStart@@YAJXZ @ 0x180106844
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800D9110 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     ?InitializePnpInfo@@YAHXZ @ 0x1801063F8 (-InitializePnpInfo@@YAHXZ.c)
 */

__int64 MME_ServiceStart(void)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_62e65b1aa5e43d79debbf88575ed7e0c_Traceguids);
  }
  if ( !ConvertStringSidToSidW(L"S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775", &AudiosrvSid) )
    goto LABEL_8;
  if ( !ConvertStringSidToSidW(
          L"S-1-5-80-1580948945-3239616721-2529237571-3761093093-1214243633",
          &AudioEndpointBuilderSid) )
  {
    LocalFree(AudiosrvSid);
LABEL_8:
    AudiosrvSid = 0LL;
    AudioEndpointBuilderSid = 0LL;
    return 0LL;
  }
  if ( (unsigned int)InitializePnpInfo() )
  {
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
  return 0LL;
}

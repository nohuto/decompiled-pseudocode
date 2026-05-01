/*
 * XREFs of ?HasFallbackOccurredRecently@GamingPosturePositioner@@AEAA_NXZ @ 0x1804FE7A8
 * Callers:
 *     ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z @ 0x1804FD780 (-HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FE334 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$CheckedTimeSinceLastFallback@AEA_K@GamingPosturePositionerTelemetryProvider@@SAXAEA_K@Z @ 0x1804F3554 (--$CheckedTimeSinceLastFallback@AEA_K@GamingPosturePositionerTelemetryProvider@@SAXAEA_K@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall GamingPosturePositioner::HasFallbackOccurredRecently(GamingPosturePositioner *this)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r9
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 650) )
    return 0;
  if ( *((_BYTE *)this + 651) )
    return 0;
  v1 = *((_QWORD *)this + 82);
  if ( !v1 )
    return 0;
  v2 = GetTickCount64() - v1;
  v6 = v2;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    GamingPosturePositionerTelemetryProvider::CheckedTimeSinceLastFallback<unsigned __int64 &>((__int64 *)&v6);
  if ( v2 >= 0x7530 )
    return 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v3 = GamingPosturePositionerTelemetryProvider::Provider();
    if ( *(_DWORD *)v3 > 4u )
    {
      v6 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v3,
        byte_180815437,
        0LL,
        v4,
        (__int64)&v6);
    }
  }
  return 1;
}

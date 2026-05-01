/*
 * XREFs of ?ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180503870
 * Callers:
 *     ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z @ 0x1804FD780 (-HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FE334 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804FEE84 (-IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall GamingPosturePositioner::ShouldImmediatelyMakeViewPrimary(
        GamingPosturePositioner *this,
        struct IApplicationView *a2)
{
  __int64 v3; // rcx
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  unsigned __int8 *v6; // rdx
  __int64 v7; // rcx
  struct IApplicationView *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_WORD *)this + 325) )
  {
    if ( !*((_QWORD *)this + 31) )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
        return 1;
      v4 = GamingPosturePositionerTelemetryProvider::Provider(v3);
      if ( *(_DWORD *)v4 <= 4u )
        return 1;
      v6 = (unsigned __int8 *)&unk_180816144;
LABEL_11:
      v9 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v4,
        v6,
        0LL,
        v5,
        (__int64)&v9);
      return 1;
    }
    if ( !*((_BYTE *)this + 649) && GamingPosturePositioner::IsGamingAppView(this, a2) )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
        return 1;
      v4 = GamingPosturePositionerTelemetryProvider::Provider(v7);
      if ( *(_DWORD *)v4 <= 4u )
        return 1;
      v6 = (unsigned __int8 *)&unk_18081621D;
      goto LABEL_11;
    }
  }
  return 0;
}

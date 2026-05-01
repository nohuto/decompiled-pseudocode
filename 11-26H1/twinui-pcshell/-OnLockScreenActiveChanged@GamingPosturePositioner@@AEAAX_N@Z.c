/*
 * XREFs of ?OnLockScreenActiveChanged@GamingPosturePositioner@@AEAAX_N@Z @ 0x180500DF8
 * Callers:
 *     wistd::__function::__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1804F8710 (wistd--__function--__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$IgnoreNextDesktopSwitch@PEBG@GamingPosturePositionerTelemetryProvider@@SAX$$QEAPEBG@Z @ 0x1804F4030 (--$IgnoreNextDesktopSwitch@PEBG@GamingPosturePositionerTelemetryProvider@@SAX$$QEAPEBG@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingPosturePositioner::OnLockScreenActiveChanged(GamingPosturePositioner *this, unsigned __int8 a2)
{
  int v2; // ebx
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  const char *v6; // r9
  const WCHAR *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const WCHAR *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  try
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v4 = GamingPosturePositionerTelemetryProvider::Provider();
      if ( *(_DWORD *)v4 > 4u )
      {
        LODWORD(v9) = v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)v4,
          byte_180815FE0,
          0LL,
          v5,
          (__int64)&v9);
      }
    }
    *((_BYTE *)this + 168) = 1;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v7 = L"Lock screen active";
      if ( !(_BYTE)v2 )
        v7 = L"Lock screen no longer active";
      v9 = v7;
      GamingPosturePositionerTelemetryProvider::IgnoreNextDesktopSwitch<unsigned short const *>(&v9);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xAAA,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v6);
  }
}

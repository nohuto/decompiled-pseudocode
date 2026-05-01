/*
 * XREFs of ?OnDesktopSwitch@GamingPosturePositioner@@AEAAXXZ @ 0x1805009E8
 * Callers:
 *     _lambda_fe44875c696bc544c1b0599fc0c72566_::_lambda_invoker_cdecl_ @ 0x1804F2670 (_lambda_fe44875c696bc544c1b0599fc0c72566_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$OnDesktopSwitched@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEA_N@Z @ 0x1804F507C (--$OnDesktopSwitched@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEA_N@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetLastFallbackTimestamp@GamingPosturePositionerTelemetryProvider@@SAXXZ @ 0x1805033C4 (-SetLastFallbackTimestamp@GamingPosturePositionerTelemetryProvider@@SAXXZ.c)
 */

void __fastcall GamingPosturePositioner::OnDesktopSwitch(GamingPosturePositioner *this)
{
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  _BYTE *v4; // rbx
  const char *v5; // r9
  const struct _tlgProvider_t *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int pvInfo; // [rsp+48h] [rbp+10h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop )
  {
    pvInfo = 0;
    if ( GetUserObjectInformationW(ThreadDesktop, 6, &pvInfo, 4u, 0LL) )
    {
      if ( pvInfo )
      {
        try
        {
          if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
          {
            v4 = (char *)this + 168;
            GamingPosturePositionerTelemetryProvider::OnDesktopSwitched<bool &>((char *)this + 168);
            if ( !*((_BYTE *)this + 168) )
            {
              *((_QWORD *)this + 82) = GetTickCount64();
              GamingPosturePositionerTelemetryProvider::SetLastFallbackTimestamp();
            }
          }
          else
          {
            if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
            {
              v6 = GamingPosturePositionerTelemetryProvider::Provider();
              if ( *(_DWORD *)v6 > 4u )
              {
                pvInfo = *((unsigned __int8 *)this + 168);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                  (__int64)v6,
                  byte_180816011,
                  0LL,
                  (__int64)v5,
                  (__int64)&pvInfo);
              }
            }
            v4 = (char *)this + 168;
            if ( !*((_BYTE *)this + 168) )
              *((_QWORD *)this + 82) = GetTickCount64();
          }
          *v4 = 0;
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xA9C,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
            v5);
        }
      }
    }
  }
}

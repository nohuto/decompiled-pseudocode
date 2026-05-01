/*
 * XREFs of ?EnterFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804FA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?AddView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F8AA0 (-AddView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1K@Z@std@@@Z @ 0x1804FF208 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$function@$$A6AXPE.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall GamingPosturePositioner::EnterFullScreenForView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rdx
  struct IApplicationView *v8; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v9[7]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v10; // [rsp+78h] [rbp-20h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v9[0] = off_180750388;
    v10 = v9;
    GamingPosturePositioner::LogViewDiagnosticInfo(a2);
    if ( v10 )
    {
      v6 = v9;
      LOBYTE(v6) = v10 != v9;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v6);
    }
  }
  else if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v4 = GamingPosturePositionerTelemetryProvider::Provider();
    if ( *(_DWORD *)v4 > 4u )
    {
      v8 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v4,
        byte_1808164F2,
        0LL,
        v5,
        (__int64)&v8);
    }
  }
  GamingApplicationViewCollection::AddView(this + 79, (struct IUnknown *)a2);
  return 0LL;
}

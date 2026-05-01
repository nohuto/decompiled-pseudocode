/*
 * XREFs of _lambda_f24517619e04b8c6c046d1f7bd6f10fb_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_ @ 0x1804F27CC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___::Invoke @ 0x1804FEC40 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_f24517619e0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$ExecutedFallbackTimerCallback@AEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAJ@Z @ 0x1804F3AF4 (--$ExecutedFallbackTimerCallback@AEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___ @ 0x1804F591C (CreationThreadDispatcher--RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f24517619e04b8c6c046d1f7bd6f10fb_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  char v4; // si
  char IsEnabled; // al
  __int64 v6; // rbx
  __int64 v7[2]; // [rsp+20h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  char v11; // [rsp+48h] [rbp-8h]
  __int64 v12; // [rsp+68h] [rbp+18h] BYREF

  v12 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    v7,
    (__int64 *)a1);
  v7[1] = v3;
  v4 = *(_BYTE *)(a1 + 16);
  v8 = v4;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL);
  if ( IsEnabled )
  {
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      &v9,
      v7);
    v10 = v3;
    v11 = v4;
    LODWORD(v12) = CreationThreadDispatcher::RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___(v6, &v9);
    GamingPosturePositionerTelemetryProvider::ExecutedFallbackTimerCallback<long &>(&v12);
  }
  else
  {
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      &v9,
      v7);
    v10 = v3;
    v11 = v4;
    CreationThreadDispatcher::RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___(v6, &v9);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v7);
}

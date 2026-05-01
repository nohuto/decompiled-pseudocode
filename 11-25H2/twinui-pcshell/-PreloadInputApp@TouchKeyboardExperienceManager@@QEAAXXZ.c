/*
 * XREFs of ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1804634F4
 * Callers:
 *     ?OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z @ 0x1801C60B0 (-OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputPro.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180256E20 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18001E320 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001E768 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180049814 (-StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B0E94 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18021D030 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802B5448 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5a946cfacaeb0e3185d961cd96352272___ @ 0x180459504 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5a946cfacaeb0e3185d961cd96352272___.c)
 *     _lambda_5a946cfacaeb0e3185d961cd96352272_::_lambda_5a946cfacaeb0e3185d961cd96352272_ @ 0x18045B73C (_lambda_5a946cfacaeb0e3185d961cd96352272_--_lambda_5a946cfacaeb0e3185d961cd96352272_.c)
 *     _lambda_5a946cfacaeb0e3185d961cd96352272_::__lambda_5a946cfacaeb0e3185d961cd96352272_ @ 0x18045C258 (_lambda_5a946cfacaeb0e3185d961cd96352272_--__lambda_5a946cfacaeb0e3185d961cd96352272_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperience@@@details@wil@@QEAA_NXZ @ 0x180468910 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperience@@@de.c)
 *     ?IsInputAppEnabled@KeyboardHosting@@YA_NXZ @ 0x180472720 (-IsInputAppEnabled@KeyboardHosting@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::PreloadInputApp(TouchKeyboardExperienceManager *this)
{
  KeyboardHosting *v2; // rcx
  KeyboardHosting *v3; // rcx
  __int64 *v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // r8
  int v13; // ebx
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v16[42]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17[44]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v16,
    (__int64)"OnPreloadInputAppActivity");
  v16[0] = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v16);
  if ( KeyboardHosting::IsRunningOnServerSku(v2)
    || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableNewKeyboardExperience>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DisableNewKeyboardExperience>::GetImpl'::`2'::impl)
    && !KeyboardHosting::IsInputAppEnabled(v3) )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v16,
      -2147024846);
    goto LABEL_12;
  }
  if ( *((_QWORD *)this + 73) )
  {
    v14 = 0LL;
    v15 = &v14;
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
    v5 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v4);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v15 = (__int64 *)this;
      v9 = lambda_5a946cfacaeb0e3185d961cd96352272_::_lambda_5a946cfacaeb0e3185d961cd96352272_(
             v17,
             &v14,
             (__int64 *)&v15,
             v16);
      v13 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5a946cfacaeb0e3185d961cd96352272___(
              v11,
              v10,
              v12,
              v9);
      lambda_5a946cfacaeb0e3185d961cd96352272_::__lambda_5a946cfacaeb0e3185d961cd96352272_(v17);
      v6 = retaddr;
      if ( v13 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        goto LABEL_12;
      }
      v7 = (unsigned int)v13;
      v8 = 1678LL;
    }
    else
    {
      v7 = (unsigned int)v5;
      v8 = 1647LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_10;
  }
LABEL_12:
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v16);
}

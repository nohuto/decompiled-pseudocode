/*
 * XREFs of ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18046F438
 * Callers:
 *     ?OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z @ 0x1801BCF10 (-OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputPro.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800144F8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180019D04 (-StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF6F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1800BF6F4.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800BFE24 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18020F160 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802A6E34 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___ @ 0x1804656F4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___.c)
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_ @ 0x180467AE8 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_.c)
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_ @ 0x1804685C8 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_.c)
 *     ?IsInputAppEnabled@KeyboardHosting@@YA_NXZ @ 0x1804813A0 (-IsInputAppEnabled@KeyboardHosting@@YA_NXZ.c)
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
  int v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v16[42]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17[44]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v16,
    (__int64)"OnPreloadInputAppActivity");
  v16[0] = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v16);
  if ( KeyboardHosting::IsRunningOnServerSku(v2) || !KeyboardHosting::IsInputAppEnabled(v3) )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v16,
      -2147024846);
    goto LABEL_11;
  }
  if ( *((_QWORD *)this + 73) )
  {
    *(_QWORD *)v14 = 0LL;
    v15 = (__int64 *)v14;
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
    v5 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v4);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v15 = (__int64 *)this;
      v9 = lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_(
             v17,
             (__int64 *)v14,
             (__int64 *)&v15,
             v16);
      v13 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___(
              v11,
              v10,
              v12,
              v9);
      lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_(v17);
      v6 = retaddr;
      if ( v13 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
        goto LABEL_11;
      }
      v7 = (unsigned int)v13;
      v8 = 1697LL;
    }
    else
    {
      v7 = (unsigned int)v5;
      v8 = 1666LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_9;
  }
LABEL_11:
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v16);
}

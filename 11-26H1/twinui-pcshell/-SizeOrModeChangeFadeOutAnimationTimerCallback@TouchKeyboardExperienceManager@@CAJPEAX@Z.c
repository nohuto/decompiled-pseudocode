/*
 * XREFs of ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180470600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800BA8C4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x1800BB438 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF6F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1800BF6F4.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1802BD030 (-InternalAddRef@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C5378 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802C861C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180468BD4 (--1SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@.c)
 *     ?Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N@Z @ 0x1804712AC (-Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback(
        TouchKeyboardExperienceManager *this)
{
  bool v2; // di
  unsigned int *v3; // rcx
  int ViewInfo; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  struct KBViewInfo *v9; // rsi
  int v10; // eax
  TouchKeyboardExperienceManager *v12; // [rsp+28h] [rbp-E0h] BYREF
  struct KBViewInfo *v13[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct tagRECT v14; // [rsp+48h] [rbp-C0h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v16[42]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v16,
    (__int64)"SizeOrModeChangeFadeOutAnimationTimerCallbackActivity");
  v16[0] = &TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::`vftable';
  v2 = 0;
  v12 = this;
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalAddRef((__int64 *)&v12);
  if ( !this
    || *((_DWORD *)this + 154) != 1
    || (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)this + 235) != 1
    && (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(v3) != 2 )
  {
LABEL_23:
    TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::Stop(
      (TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity *)v16,
      v2);
    v5 = 0;
    goto LABEL_24;
  }
  _InterlockedExchange((volatile __int32 *)v3, 0);
  *(_OWORD *)v13 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, *((_DWORD *)this + 153), v13);
  v5 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v6 = 1022LL;
    goto LABEL_17;
  }
  v7 = 1;
  while ( _InterlockedExchange((volatile __int32 *)this + 210, 1) )
  {
    while ( *((_DWORD *)this + 210) )
    {
      v8 = v7;
      if ( !v7 )
        goto LABEL_12;
      do
      {
        _mm_pause();
        --v8;
      }
      while ( v8 );
      if ( v7 >= 64 )
        v7 = 64;
      else
LABEL_12:
        v7 *= 2;
    }
  }
  v15 = *(struct tagRECT *)((char *)this + 844);
  *((_DWORD *)this + 210) = 0;
  v9 = v13[0];
  TouchKeyboardExperienceManager::ApplyRequestedRect(this, v13[0], &v15);
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v9 + 1) + 40LL))(*((_QWORD *)v9 + 1), 0LL);
  v5 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, v9, 0);
    v14 = *(struct tagRECT *)((char *)v9 + 120);
    v10 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
            (KeyboardHosting::TabTipAdapter **)this,
            (const struct tagRECT *)*((unsigned int *)this + 153),
            &v14,
            (struct tagRECT *)((char *)v9 + 136));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x403,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    v2 = 1;
    if ( v13[1] )
      std::_Ref_count_base::_Decref(v13[1]);
    goto LABEL_23;
  }
  v6 = 1025LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
LABEL_24:
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v12);
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::~SizeOrModeChangeFadeOutAnimationTimerCallbackActivity((TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity *)v16);
  return v5;
}

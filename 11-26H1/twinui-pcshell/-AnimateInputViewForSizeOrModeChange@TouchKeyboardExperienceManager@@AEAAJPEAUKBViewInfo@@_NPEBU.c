/*
 * XREFs of ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046BEF0
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046A598 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x18046F1B8 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800BA8C4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x1800BB438 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF6F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1800BF6F4.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18020BB64 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802304DC (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18029C58C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802C861C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180468BA8 (--1SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NPEBG@Z @ 0x180470978 (-StartActivity@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@.c)
 *     ?Stop@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x180470FC8 (-Stop@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 a3,
        const struct tagRECT *a4,
        int a5,
        unsigned __int16 *a6)
{
  int v6; // edi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  CExperienceManagerAnimationHelper *v14; // r13
  int v15; // edi
  int v16; // edi
  bool v17; // r12
  char v18; // r14
  volatile __int32 *v19; // rbx
  __int32 v20; // edx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  unsigned int *v24; // rcx
  int v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _QWORD *v29; // r14
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), __int64, __int64); // rbx
  const char *v33; // [rsp+20h] [rbp-1D8h]
  int v35; // [rsp+44h] [rbp-1B4h]
  _QWORD v37[42]; // [rsp+50h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v6 = a3;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v37,
    (__int64)"SizeOrModeChangeAnimationScheduleActivity");
  v37[0] = &TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v37,
    v6,
    a6);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2[1] + 112LL))(a2[1]);
  v10 = v9;
  v11 = 0;
  if ( v9 < 0 )
  {
    v12 = 912LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::~SizeOrModeChangeAnimationScheduleActivity((TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v37);
    return v10;
  }
  switch ( a5 )
  {
    case 1:
      v13 = 680LL;
      break;
    case 2:
      v13 = 712LL;
      break;
    case 3:
      v13 = 744LL;
      break;
    default:
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x39F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        "AnimationType is not supported",
        v33);
  }
  v14 = (CExperienceManagerAnimationHelper *)(a1 + v13);
  v15 = v6 ^ 1;
  v35 = v15 + 25;
  v16 = v15 << 29;
  v17 = 0;
  v18 = 1;
  v19 = (volatile __int32 *)(a1 + 940);
  if ( a3 )
  {
    TouchKeyboardExperienceManager::ApplyRequestedRect(
      (TouchKeyboardExperienceManager *)a1,
      (struct KBViewInfo *)a2,
      a4);
    if ( (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)(a1 + 940)) != 3 )
    {
      v18 = std::_Atomic_storage<bool,1>::load((__int64)a2 + 34);
      _InterlockedExchange(v19, v20);
      v21 = CExperienceManagerAnimationHelper::Begin(
              (__int64)v14,
              a2[1],
              v35 | (unsigned int)v16,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2[1] + 40LL))(a2[1], 0LL);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B8,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
      TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
        (TouchKeyboardExperienceManager *)a1,
        (struct KBViewInfo *)a2,
        0);
      v23 = CExperienceManagerAnimationHelper::End(v14);
      if ( v21 < 0 || v23 < 0 )
      {
        _InterlockedExchange(v19, 0);
        v11 = 1;
      }
      v17 = 1;
    }
  }
  else
  {
    std::_Atomic_storage<bool,1>::load((__int64)a2 + 34);
    if ( (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)(a1 + 940)) != 1
      && (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(v24) != 2 )
    {
      _InterlockedExchange(v19, 1);
      v26 = CExperienceManagerAnimationHelper::Begin(
              (__int64)v14,
              a2[1],
              v25 | (unsigned int)v16,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D4,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v26);
      v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2[1] + 40LL))(a2[1], 1LL);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D5,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v27);
      TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
        (TouchKeyboardExperienceManager *)a1,
        (struct KBViewInfo *)a2,
        1u);
      v28 = CExperienceManagerAnimationHelper::End(v14);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D7,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v28);
      v29 = (_QWORD *)(a1 + 816);
      if ( !*(_QWORD *)(a1 + 816) )
      {
        v30 = *(_QWORD *)(a1 + 800);
        v31 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), __int64, __int64))(*(_QWORD *)v30 + 144LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 816));
        v9 = v31(v30, TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback, a1, a1 + 816);
        v10 = v9;
        if ( v9 < 0 )
        {
          v12 = 990LL;
          goto LABEL_33;
        }
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v29 + 96LL))(*v29);
      v10 = v9;
      if ( v9 < 0 )
      {
        v12 = 993LL;
        goto LABEL_33;
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v29 + 80LL))(*v29, 15000000LL, 0LL);
      v10 = v9;
      if ( v9 < 0 )
      {
        v12 = 994LL;
        goto LABEL_33;
      }
      v17 = 1;
      v18 = 1;
    }
  }
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::Stop(
    (TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v37,
    v18,
    v17);
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::~SizeOrModeChangeAnimationScheduleActivity((TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v37);
  return v11;
}

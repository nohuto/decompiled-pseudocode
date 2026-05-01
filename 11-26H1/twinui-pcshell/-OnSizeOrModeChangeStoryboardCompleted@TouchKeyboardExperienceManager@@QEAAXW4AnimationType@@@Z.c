/*
 * XREFs of ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x18046F1B8
 * Callers:
 *     ?OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ @ 0x18046F3D0 (-OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18028992C (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802C861C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$SizeOrModeChangeAnimationCompleted@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z @ 0x1804659DC (--$SizeOrModeChangeAnimationCompleted@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046BEF0 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::OnSizeOrModeChangeStoryboardCompleted(__int64 a1, int a2)
{
  __int32 v4; // eax
  int v5; // eax
  std::_Ref_count_base *v6; // rsi
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  int v13; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v14[2]; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v16; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v13 = a2;
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationCompleted<unsigned int>(&v13);
  *(_OWORD *)v14 = 0LL;
  TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)a1, *(_DWORD *)(a1 + 612), v14);
  if ( *(_DWORD *)(a1 + 616) == 1 )
  {
    if ( std::_Atomic_storage<bool,1>::load(a1 + 944)
      && (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)(a1 + 940)) == 1 )
    {
      v4 = 2;
LABEL_24:
      _InterlockedExchange((volatile __int32 *)(a1 + 940), v4);
      goto LABEL_28;
    }
    v5 = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)(a1 + 940));
    v6 = v14[0];
    if ( v5 != 1 && !std::_Atomic_storage<bool,1>::load((__int64)v14[0] + 34) )
    {
      v16 = *(struct tagRECT *)((char *)v6 + 120);
      v7 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)a1,
             (const struct tagRECT *)*(unsigned int *)(a1 + 612),
             &v16,
             (struct tagRECT *)((char *)v6 + 136));
      v8 = retaddr;
      if ( v7 < 0 )
      {
        v9 = 1068LL;
LABEL_22:
        wil::details::in1diag3::_Log_Hr(
          v8,
          (void *)v9,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_23;
      }
      goto LABEL_23;
    }
    v10 = *(_QWORD *)(a1 + 816);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 96LL))(v10);
    v11 = 1;
    while ( _InterlockedExchange((volatile __int32 *)(a1 + 840), 1) )
    {
      while ( *(_DWORD *)(a1 + 840) )
      {
        v12 = v11;
        if ( !v11 )
          goto LABEL_16;
        do
        {
          _mm_pause();
          --v12;
        }
        while ( v12 );
        if ( v11 >= 64 )
          v11 = 64;
        else
LABEL_16:
          v11 *= 2;
      }
    }
    v16 = *(struct tagRECT *)(a1 + 844);
    *(_DWORD *)(a1 + 840) = 0;
    if ( (int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                a1,
                (__int64 *)v6,
                1u,
                &v16,
                a2,
                L"StoryboardCompleted") < 0 )
    {
      v15 = *(struct tagRECT *)((char *)v6 + 120);
      v7 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)a1,
             (const struct tagRECT *)*(unsigned int *)(a1 + 612),
             &v15,
             (struct tagRECT *)((char *)v6 + 136));
      v8 = retaddr;
      if ( v7 < 0 )
      {
        v9 = 1061LL;
        goto LABEL_22;
      }
LABEL_23:
      v4 = 0;
      goto LABEL_24;
    }
  }
  else if ( !std::_Atomic_storage<bool,1>::load(a1 + 937) && *(_DWORD *)(a1 + 620) != 1 )
  {
    TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
      (TouchKeyboardExperienceManager *)a1,
      *(_DWORD *)(a1 + 612),
      0);
  }
LABEL_28:
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
}

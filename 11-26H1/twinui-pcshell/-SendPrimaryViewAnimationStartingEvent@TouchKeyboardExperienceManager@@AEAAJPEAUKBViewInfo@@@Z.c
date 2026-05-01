/*
 * XREFs of ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1804702E4
 * Callers:
 *     ?AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x18046C2A0 (-AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801D33C8 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x1802ABDF0 (-NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::SendPrimaryViewAnimationStartingEvent(
        TouchKeyboardExperienceManager *this,
        const struct tagRECT *a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // eax
  const struct tagRECT *v4; // r9
  KeyboardHosting::TabTipAdapter *v5; // r11
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // eax
  __int64 v10; // r8
  KeyboardHosting::TabTipAdapter *v11; // r11
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( KeyboardHosting::IsRectNull((KeyboardHosting *)&a2[8].right, a2) )
  {
    v9 = std::_Atomic_storage<unsigned int,4>::load(v2);
    v6 = KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(
           v11,
           (const struct tagRECT *)(v10 + 120),
           v9);
    if ( v6 < 0 )
    {
      v7 = 1162LL;
      goto LABEL_4;
    }
  }
  else
  {
    v3 = std::_Atomic_storage<unsigned int,4>::load(v2);
    v6 = KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(v5, v4, v3);
    if ( v6 < 0 )
    {
      v7 = 1156LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  return 0LL;
}

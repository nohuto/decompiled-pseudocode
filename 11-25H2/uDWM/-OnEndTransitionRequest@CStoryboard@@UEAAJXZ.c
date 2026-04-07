/*
 * XREFs of ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180069860
 * Callers:
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800697B0 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800C81C0 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x1800C8270 (-OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800C82B0 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800C8330 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800C83B0 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x1800C8430 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800C8460 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x1800C84F0 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800698D0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18006D9A4 (-Release@CStoryboard@@QEAAKXZ.c)
 */

__int64 __fastcall CStoryboard::OnEndTransitionRequest(CStoryboard **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CStoryboard *v4; // rcx

  v2 = CStoryboard::_EnumerateWindows(this, 1LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x14FEu, 0LL);
  }
  else
  {
    v4 = this[11];
    if ( v4 )
    {
      CStoryboard::Release(v4);
      this[11] = 0LL;
    }
  }
  return v3;
}

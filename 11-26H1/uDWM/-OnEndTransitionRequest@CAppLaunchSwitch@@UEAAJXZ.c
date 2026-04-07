/*
 * XREFs of ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800C21B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180031F90 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180069C28 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnEndTransitionRequest(CStoryboard **this)
{
  int v2; // eax
  CAnimationScheduler *v3; // rcx
  const int *v4; // rdx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = CStoryboard::OnEndTransitionRequest(this);
  if ( v2 < 0 )
  {
    v4 = &CStoryboard::MILINSTRUMENTATIONHRESULTLIST;
    v6 = 2616;
    goto LABEL_9;
  }
  v3 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  if ( *((_BYTE *)this + 128) )
  {
    v2 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Bu, (struct CStoryboard *)this);
    if ( v2 < 0 )
    {
      v6 = 2625;
LABEL_5:
      v4 = (const int *)&unk_1800F98CC;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, v4, 1LL, v2, v6, 0LL);
    }
  }
  else
  {
    v2 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Au, (struct CStoryboard *)this);
    if ( v2 < 0 )
    {
      v6 = 2629;
      goto LABEL_5;
    }
  }
  return 0LL;
}

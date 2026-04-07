/*
 * XREFs of ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180045A00
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18002CDFC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 * Callees:
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18000571C (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180005A2C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180005AF0 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180044E80 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 */

__int64 __fastcall CLivePreview::_FadeInToNormal(CLivePreview *this)
{
  float AnimationDuration; // xmm0_4
  int v3; // r9d
  int v4; // eax
  unsigned int v5; // ebx

  *((_DWORD *)this + 108) = 4;
  AnimationDuration = CLivePreview::GetAnimationDuration();
  CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 41), v3, AnimationDuration);
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  v4 = CLivePreview::_HideExistingVisuals(this, 0);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x567u, 0LL);
  return v5;
}

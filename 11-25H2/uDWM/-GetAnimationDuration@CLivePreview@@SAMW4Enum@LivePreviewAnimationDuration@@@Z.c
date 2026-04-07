/*
 * XREFs of ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180038250
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180037914 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x180046D44 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180049148 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x1800399F0 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 */

float CLivePreview::GetAnimationDuration()
{
  float result; // xmm0_4
  int v1; // r8d
  int v2; // r8d

  result = FLOAT_0_001;
  if ( CDesktopManager::IsWindowAnimationEnabled() )
  {
    if ( v1 && (v2 = v1 - 1) != 0 )
    {
      if ( (unsigned int)(v2 - 1) <= 1 )
        return FLOAT_0_15000001;
    }
    else
    {
      return FLOAT_0_2;
    }
  }
  return result;
}

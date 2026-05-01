/*
 * XREFs of ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x1803D2CDC
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803D2794 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180388DB4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 */

__int64 GetCortanaHeightForImmersiveSearch(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = 640;
  if ( (int)CortanaFeatureConfiguration::GetDWORD(0LL, &v2) >= 0 && v2 && (unsigned int)(v2 - 1) <= 2 )
    return 684;
  return v0;
}

/*
 * XREFs of ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x180066BB0
 * Callers:
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180066AA0 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Initialize(CDesktopThumbnailCVIVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CSpriteVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x264u, 0LL);
  return v2;
}

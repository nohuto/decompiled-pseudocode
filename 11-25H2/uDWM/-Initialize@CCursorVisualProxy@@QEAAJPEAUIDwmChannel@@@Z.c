/*
 * XREFs of ?Initialize@CCursorVisualProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800AB61C
 * Callers:
 *     ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800AB4A0 (-Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x1800076B4 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?InitializeDCompositionVisual@CVisualProxy@@IEAAJXZ @ 0x1800076D0 (-InitializeDCompositionVisual@CVisualProxy@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCursorVisualProxy::Initialize(CCursorVisualProxy *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  v3 = CResourceProxy::Initialize((__int64)this, 9u, (__int64)a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xEu, 0LL);
  }
  else
  {
    v5 = CVisualProxy::InitializeDCompositionVisual(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xFu, 0LL);
  }
  return v4;
}

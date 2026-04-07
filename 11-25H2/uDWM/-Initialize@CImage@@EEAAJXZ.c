/*
 * XREFs of ?Initialize@CImage@@EEAAJXZ @ 0x180054DA0
 * Callers:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054CA8 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CImage::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CContainerVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x13u, 0LL);
  else
    *((_DWORD *)this + 62) = 1;
  return v3;
}

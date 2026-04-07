/*
 * XREFs of ?Initialize@CAccent@@MEAAJXZ @ 0x18006E560
 * Callers:
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18006E418 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 50) = 6;
  *((_BYTE *)this + 216) = 0;
  v1 = CContainerVisual::Initialize((struct CContainerVisualProxy **)this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x52u, 0LL);
  return v2;
}

/*
 * XREFs of ?Initialize@CCanvasVisual@@MEAAJXZ @ 0x180010EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CCanvasVisual::Initialize(CCanvasVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CContainerVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x27u, 0LL);
  return v2;
}

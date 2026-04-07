/*
 * XREFs of ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180075D5C
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18001C670 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAnimationEngine@@AEAA@XZ @ 0x180075DD4 (--0CAnimationEngine@@AEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CAnimationEngine::CreateInstance(struct CAnimationEngine **a1)
{
  unsigned int v2; // ebx
  CAnimationEngine *v3; // rax
  struct CAnimationEngine *v4; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CAnimationEngine *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4 = CAnimationEngine::CAnimationEngine(v3);
  if ( v4 )
  {
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x40u, 0LL);
  }
  return v2;
}

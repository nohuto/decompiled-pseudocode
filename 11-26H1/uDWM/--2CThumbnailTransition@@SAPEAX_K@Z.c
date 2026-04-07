/*
 * XREFs of ??2CThumbnailTransition@@SAPEAX_K@Z @ 0x1800C9500
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800739C4 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CThumbnailTransition::operator new()
{
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x28uLL);
  if ( !result )
    ModuleFailFastForHRESULT(0x8007000E, retaddr);
  return result;
}

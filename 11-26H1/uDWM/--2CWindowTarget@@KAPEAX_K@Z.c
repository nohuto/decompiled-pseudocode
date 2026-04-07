/*
 * XREFs of ??2CWindowTarget@@KAPEAX_K@Z @ 0x180085B1C
 * Callers:
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180005914 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x180077BE0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800E5388 (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1800E5454 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CWindowTarget::operator new()
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x88uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}

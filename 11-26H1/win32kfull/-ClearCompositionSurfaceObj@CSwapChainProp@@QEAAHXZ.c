/*
 * XREFs of ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x140202888
 * Callers:
 *     ?Delete@CSwapChainProp@@UEAAXXZ @ 0x140201BF0 (-Delete@CSwapChainProp@@UEAAXXZ.c)
 *     UserSetWindowedSwapChain @ 0x1402024A8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1402249C0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::ClearCompositionSurfaceObj(CSwapChainProp *this)
{
  unsigned int v2; // ebx
  void *v3; // rcx

  v2 = 0;
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    DxgkReleaseCompositionObjectReference(v3);
    *((_QWORD *)this + 3) = 0LL;
    return 1;
  }
  return v2;
}

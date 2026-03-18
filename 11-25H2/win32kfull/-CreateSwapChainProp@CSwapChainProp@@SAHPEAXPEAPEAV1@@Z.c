/*
 * XREFs of ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x14017340C
 * Callers:
 *     UserSetWindowedSwapChain @ 0x140172368 (UserSetWindowedSwapChain.c)
 * Callees:
 *     ??$CreateWindowProp@VCSwapChainProp@@@CWindowProp@@SAJPEAPEAVCSwapChainProp@@@Z @ 0x14026CE0C (--$CreateWindowProp@VCSwapChainProp@@@CWindowProp@@SAJPEAPEAVCSwapChainProp@@@Z.c)
 *     ?SetCompositionSurfaceObj@CSwapChainProp@@QEAAXPEAX@Z @ 0x1402C0B70 (-SetCompositionSurfaceObj@CSwapChainProp@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall CSwapChainProp::CreateSwapChainProp(void *a1, struct CSwapChainProp **a2)
{
  unsigned int v3; // edi
  void *v5; // rdx
  CSwapChainProp *v6; // rbx
  CSwapChainProp *v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v8 = 0LL;
  *a2 = 0LL;
  if ( (int)CWindowProp::CreateWindowProp<CSwapChainProp>(&v8) >= 0 )
  {
    v5 = a1;
    v6 = v8;
    CSwapChainProp::SetCompositionSurfaceObj(v8, v5);
    *((_DWORD *)v6 + 8) = 0;
    v3 = 1;
    *a2 = v6;
  }
  return v3;
}

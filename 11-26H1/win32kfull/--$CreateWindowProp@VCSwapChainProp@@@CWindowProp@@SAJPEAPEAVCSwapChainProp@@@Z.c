/*
 * XREFs of ??$CreateWindowProp@VCSwapChainProp@@@CWindowProp@@SAJPEAPEAVCSwapChainProp@@@Z @ 0x1402028CC
 * Callers:
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1402027FC (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CSwapChainProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax

  v2 = 0;
  v3 = (_QWORD *)Win32AllocPoolZInit(40LL, 1668772693LL);
  if ( v3 )
  {
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *v3 = &CSwapChainProp::`vftable';
    *a1 = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}

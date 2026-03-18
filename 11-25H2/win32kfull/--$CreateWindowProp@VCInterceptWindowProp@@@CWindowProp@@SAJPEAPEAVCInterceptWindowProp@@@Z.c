/*
 * XREFs of ??$CreateWindowProp@VCInterceptWindowProp@@@CWindowProp@@SAJPEAPEAVCInterceptWindowProp@@@Z @ 0x1402CA87C
 * Callers:
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402CB58C (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 * Callees:
 *     ??0CInterceptWindowProp@@QEAA@XZ @ 0x1402CA938 (--0CInterceptWindowProp@@QEAA@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CInterceptWindowProp>(CInterceptWindowProp **a1)
{
  unsigned int v2; // ebx
  CInterceptWindowProp *v3; // rax
  CInterceptWindowProp *v4; // rdi

  v2 = 0;
  v3 = (CInterceptWindowProp *)Win32AllocPoolZInit(96LL, 1886871893LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x60uLL);
    CInterceptWindowProp::CInterceptWindowProp(v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}

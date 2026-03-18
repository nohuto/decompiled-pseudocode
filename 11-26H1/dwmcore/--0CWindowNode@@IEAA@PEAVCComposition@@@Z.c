/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x1802459C4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18008C9A8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *(_QWORD *)this = &CWindowNode::`vftable';
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 2LL;
  *((_QWORD *)this + 104) = 2LL;
  *((_DWORD *)this + 210) = 1065353216;
  *((_DWORD *)this + 211) = 1065353216;
  *((_DWORD *)this + 212) = 1065353216;
  *(_QWORD *)((char *)this + 852) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 860) = 0LL;
  *((_DWORD *)this + 217) = 0;
  *((_BYTE *)this + 872) = 0;
  *((_QWORD *)this + 110) = 0LL;
  *((_BYTE *)this + 888) = 0;
  return result;
}

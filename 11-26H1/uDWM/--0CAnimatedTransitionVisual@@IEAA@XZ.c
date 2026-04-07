/*
 * XREFs of ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180037B18
 * Callers:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRectangleVisual@@IEAA@XZ @ 0x180027600 (--0CRectangleVisual@@IEAA@XZ.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 */

CAnimatedTransitionVisual *__fastcall CAnimatedTransitionVisual::CAnimatedTransitionVisual(
        CAnimatedTransitionVisual *this)
{
  CAnimatedTransitionVisual *result; // rax

  CRectangleVisual::CRectangleVisual((CAnimatedTransitionVisual *)((char *)this + 8));
  CGraphicsResourceOwner::CGraphicsResourceOwner((CAnimatedTransitionVisual *)((char *)this + 216));
  *(_QWORD *)this = &CAnimatedTransitionVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 1) = &CAnimatedTransitionVisual::`vftable'{for `CRectangleVisual'};
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 27) = &CAnimatedTransitionVisual::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 178) = 1056964608;
  *(_QWORD *)((char *)this + 716) = 1056964608LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = -1082130432;
  *((_QWORD *)this + 107) = 0LL;
  *((_DWORD *)this + 216) = 1065353216;
  *((_DWORD *)this + 217) = 1065353216;
  *((_QWORD *)this + 109) = 1066192077LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_WORD *)this + 452) = 0;
  *(_DWORD *)((char *)this + 907) = 0;
  *(_WORD *)((char *)this + 911) = 0;
  *((_DWORD *)this + 229) = 0;
  *((_QWORD *)this + 115) = 0LL;
  *((_BYTE *)this + 936) = 0;
  *((_BYTE *)this + 952) = 0;
  *(_QWORD *)((char *)this + 956) = 2LL;
  *((_WORD *)this + 486) = 256;
  *(_QWORD *)((char *)this + 724) = 0LL;
  *(_QWORD *)((char *)this + 732) = 0LL;
  *(_QWORD *)((char *)this + 740) = 0LL;
  *((_DWORD *)this + 175) = 1065353216;
  *((_DWORD *)this + 176) = 1065353216;
  *((_DWORD *)this + 177) = 1065353216;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_DWORD *)this + 187) = 1065353216;
  *((_DWORD *)this + 188) = 1065353216;
  *((_DWORD *)this + 189) = 1065353216;
  *(_QWORD *)((char *)this + 964) = 0LL;
  *(_OWORD *)((char *)this + 552) = 0LL;
  *(_OWORD *)((char *)this + 568) = 0LL;
  *(_OWORD *)((char *)this + 584) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  result = this;
  *(_OWORD *)((char *)this + 776) = 0LL;
  return result;
}

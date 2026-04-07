/*
 * XREFs of ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18008C8A8
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180032CA0 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRectangleVisual@@IEAA@XZ @ 0x180027600 (--0CRectangleVisual@@IEAA@XZ.c)
 */

CTransitionWindowSnapshot *__fastcall CTransitionWindowSnapshot::CTransitionWindowSnapshot(
        CTransitionWindowSnapshot *this)
{
  CTransitionWindowSnapshot *result; // rax

  CRectangleVisual::CRectangleVisual(this);
  *(_QWORD *)this = &CTransitionWindowSnapshot::`vftable';
  result = this;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 68) = 1065353216;
  *((_BYTE *)this + 276) = 1;
  return result;
}

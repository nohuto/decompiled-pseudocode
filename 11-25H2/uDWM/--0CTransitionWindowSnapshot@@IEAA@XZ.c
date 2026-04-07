/*
 * XREFs of ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180002F60
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180002D48 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180002E90 (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTransitionWindowSnapshot *__fastcall CTransitionWindowSnapshot::CTransitionWindowSnapshot(
        CTransitionWindowSnapshot *this)
{
  CTransitionWindowSnapshot *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *((_DWORD *)this + 78) = 1065353216;
  *(_QWORD *)this = &CTransitionWindowSnapshot::`vftable';
  result = this;
  *((_BYTE *)this + 316) = 1;
  return result;
}

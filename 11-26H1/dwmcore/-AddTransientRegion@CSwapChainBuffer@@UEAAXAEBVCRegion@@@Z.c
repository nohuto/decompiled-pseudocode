/*
 * XREFs of ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801D5CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18012F968 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CSwapChainBuffer::AddTransientRegion(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int v4; // eax
  FastRegion::CRegion *v5[10]; // [rsp+20h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  CRegion::CRegion((CRegion *)v5, (const struct MilRectU *)(this + 2));
  v4 = FastRegion::CRegion::Intersect(v5, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B1,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
      (const char *)(unsigned int)v4,
      (int)v5[0]);
  CRegion::Union(this + 15, v5);
  FastRegion::CRegion::FreeMemory(v5);
}

/*
 * XREFs of ?LostCapture@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804B0A50
 * Callers:
 *     ?LostCapture@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804B8520 (-LostCapture@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewElementBase::LostCapture(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  CMultitaskingViewElementBase::_ResetCapture(this);
}

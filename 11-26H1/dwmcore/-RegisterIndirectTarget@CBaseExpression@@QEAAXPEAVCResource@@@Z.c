/*
 * XREFs of ?RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z @ 0x180191BA4
 * Callers:
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@PEAVCBaseExpression@@@Z @ 0x1801D99BC (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractio.c)
 * Callees:
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E554 (-AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?Create@?$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z @ 0x180191C28 (-Create@-$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x180208720 (--$emplace_back@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBaseExpression::RegisterIndirectTarget(CBaseExpression *this, struct CResource *a2)
{
  CExpressionManager *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  CResource::AddAnimationProducer(a2, this);
  v5 = 0LL;
  CWeakReference<CResource>::Create(a2, &v5);
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>(
    (char *)this + 256,
    &v5);
  v4 = *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL);
  *((_BYTE *)v4 + 418) = 1;
  CExpressionManager::Invalidate(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}

/*
 * XREFs of ?ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ @ 0x180274D58
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180271730 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::ProcessSetInertiaCenterpointX(CInteractionTracker2 *this)
{
  __int64 *v1; // rdi
  CExpressionManager *v3; // rcx

  v1 = (__int64 *)((char *)this + 944);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 86, (__int64 *)this + 118);
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)this + 272LL))(this) )
  {
    v3 = *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL);
    *((_BYTE *)v3 + 418) = 1;
    CExpressionManager::Invalidate(v3);
  }
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease(v1);
}

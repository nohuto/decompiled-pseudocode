/*
 * XREFs of ?InsertDependenciesForConditionalIfExists@CInteractionTracker@@UEAAXAEBUExpressionWalkContext@@PEAVCConditionalExpression@@@Z @ 0x1801DE9A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::InsertDependenciesForConditionalIfExists(
        CInteractionTracker *this,
        const struct ExpressionWalkContext *a2,
        struct CConditionalExpression *a3)
{
  if ( a3 )
    (*(void (__fastcall **)(struct CConditionalExpression *, const struct ExpressionWalkContext *))(*(_QWORD *)a3 + 208LL))(
      a3,
      a2);
}

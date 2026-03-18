/*
 * XREFs of ?InsertDependenciesInOrder@CConditionalExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18026C050
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 */

void __fastcall CConditionalExpression::InsertDependenciesInOrder(
        CConditionalExpression *this,
        const struct ExpressionWalkContext *a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 i; // rbx
  CBaseExpression *v6; // rcx
  CBaseExpression *v7; // rcx
  CBaseExpression *v8; // rcx

  v4 = (__int64)(*((_QWORD *)this + 40) - *((_QWORD *)this + 39)) >> 3;
  if ( (__int64)(*((_QWORD *)this + 37) - *((_QWORD *)this + 36)) >> 3 < v4 )
    v4 = (__int64)(*((_QWORD *)this + 37) - *((_QWORD *)this + 36)) >> 3;
  for ( i = 0LL; i < v4; ++i )
  {
    v6 = *(CBaseExpression **)(*((_QWORD *)this + 36) + 8 * i);
    if ( v6 )
      CBaseExpression::InsertInOrder(v6, a2);
    v7 = *(CBaseExpression **)(*((_QWORD *)this + 39) + 8 * i);
    if ( v7 )
      CBaseExpression::InsertInOrder(v7, a2);
  }
  v8 = (CBaseExpression *)*((_QWORD *)this + 42);
  if ( v8 )
    CBaseExpression::InsertInOrder(v8, a2);
}

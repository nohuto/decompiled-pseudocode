/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource @ 0x1401D4060
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1401630E0 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401D3B5C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 */

__int64 __fastcall ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 *i; // rcx
  __int64 v8; // rax

  if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    return 0LL;
  *(_QWORD *)(a1 + 808) &= ((__int64)~a2 << 30) | 0xFFFFFFC03FFFFFFFuLL;
  if ( ForegroundBoost::_anonymous_namespace_::HasBoostSource(a1, 0) )
    return 2LL;
  for ( i = (__int64 *)(W32GetUserSessionState(v5, v4, v6) + 36408); ; i = (__int64 *)(v8 + 1112) )
  {
    v8 = *i;
    if ( !*i )
      break;
    if ( v8 == a1 )
    {
      *i = *(_QWORD *)(a1 + 1112);
      break;
    }
  }
  *(_QWORD *)(a1 + 1112) = 0LL;
  return 1LL;
}

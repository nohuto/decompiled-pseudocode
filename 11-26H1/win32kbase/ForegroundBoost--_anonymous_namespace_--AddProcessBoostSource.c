/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource @ 0x1401D370C
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1401630E0 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 */

unsigned __int64 __fastcall ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 UserSessionState; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 result; // rax

  v3 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
  {
    *(_QWORD *)(a1 + 1112) = *(_QWORD *)(UserSessionState + 36408);
    *(_QWORD *)(UserSessionState + 36408) = a1;
  }
  v6 = *(_QWORD *)(a1 + 808);
  v7 = v6 | (v3 << 30);
  v8 = v6 ^ v7;
  result = 0xFFFFFFC03FFFFFFFuLL;
  *(_QWORD *)(a1 + 808) = v7 ^ v8 & 0xFFFFFFC03FFFFFFFuLL;
  return result;
}

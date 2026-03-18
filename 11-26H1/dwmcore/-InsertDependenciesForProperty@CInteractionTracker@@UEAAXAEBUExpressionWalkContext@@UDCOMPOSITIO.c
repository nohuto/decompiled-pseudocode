/*
 * XREFs of ?InsertDependenciesForProperty@CInteractionTracker@@UEAAXAEBUExpressionWalkContext@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801B3C00
 * Callers:
 *     <none>
 * Callees:
 *     _CInteractionTracker2::InsertDependenciesForProperty_::_2_::_lambda_1_::operator() @ 0x1801E0D60 (_CInteractionTracker2--InsertDependenciesForProperty_--_2_--_lambda_1_--operator().c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionTracker::InsertDependenciesForProperty(__int64 a1, __int64 a2, int a3)
{
  int v3; // r8d
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+40h] [rbp-20h] BYREF
  int v8; // [rsp+44h] [rbp-1Ch]
  int v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+4Ch] [rbp-14h]

  v6[0] = a2;
  v6[1] = a1;
  v3 = a3 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return result;
    v7 = 29;
    v8 = 30;
    v9 = 64;
    v5[0] = 3LL;
  }
  else
  {
    v7 = 2;
    v8 = 23;
    v9 = 26;
    v10 = 61;
    v5[0] = 4LL;
  }
  v5[1] = &v7;
  return CInteractionTracker2::InsertDependenciesForProperty_::_2_::_lambda_1_::operator()(v6, v5);
}

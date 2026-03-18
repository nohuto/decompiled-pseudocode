/*
 * XREFs of ?InsertDependenciesForProperty@CInteractionTracker2@@UEAAXAEBUExpressionWalkContext@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180273F80
 * Callers:
 *     <none>
 * Callees:
 *     _CInteractionTracker2::InsertDependenciesForProperty_::_2_::_lambda_1_::operator() @ 0x1801E0D60 (_CInteractionTracker2--InsertDependenciesForProperty_--_2_--_lambda_1_--operator().c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker2::InsertDependenciesForProperty(__int64 a1, __int64 a2, int a3)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v4[2]; // [rsp+30h] [rbp-30h] BYREF
  int v5; // [rsp+40h] [rbp-20h] BYREF
  int v6; // [rsp+44h] [rbp-1Ch]
  int v7; // [rsp+48h] [rbp-18h]
  int v8; // [rsp+4Ch] [rbp-14h]

  v4[0] = a2;
  v4[1] = a1;
  if ( a3 == 66 )
  {
    v5 = 69;
    v6 = 6;
    v7 = 7;
    v8 = 67;
    v3[0] = 4LL;
  }
  else
  {
    if ( a3 != 69 )
      return;
    v5 = 8;
    v6 = 10;
    v7 = 70;
    v3[0] = 3LL;
  }
  v3[1] = &v5;
  CInteractionTracker2::InsertDependenciesForProperty_::_2_::_lambda_1_::operator()((__int64)v4, v3);
}

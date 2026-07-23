/*
 * XREFs of ValidFilter @ 0x140AD9910
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x140950E2C (PiDqQueryValidateQueryData.c)
 * Callees:
 *     ValidFilterExpression @ 0x1404B7C48 (ValidFilterExpression.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FilterEvalStrict @ 0x140968990 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x14096971C (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall ValidFilter(unsigned int a1, _DWORD *a2)
{
  int v4; // eax
  unsigned int i; // ebx
  int v7; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v9[3]; // [rsp+48h] [rbp-38h] BYREF

  v7 = 0;
  v8[0] = 1LL;
  v8[1] = v9;
  memset(v9, 0, sizeof(v9));
  if ( !a1 )
    return 0LL;
  v4 = (*a2 & 0xFF00000) != 0
     ? FilterEvalStrict((int)GetPropertyFromPropArray, (__int64)v8, a1, a2, &v7)
     : FilterEvalImpliedAnd((__int64)GetPropertyFromPropArray, (__int64)v8, a1, (__int64)a2, &v7);
  if ( v4 == -1073741811 )
    return 0LL;
  for ( i = 0; i < a1; ++i )
  {
    if ( !ValidFilterExpression((__int64)&a2[14 * i]) )
      return 0LL;
  }
  return 1LL;
}

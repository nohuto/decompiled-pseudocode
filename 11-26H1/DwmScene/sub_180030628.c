/*
 * XREFs of sub_180030628 @ 0x180030628
 * Callers:
 *     sub_1800305DC @ 0x1800305DC (sub_1800305DC.c)
 * Callees:
 *     sub_18000D2DC @ 0x18000D2DC (sub_18000D2DC.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 */

__int64 __fastcall sub_180030628(RTL_CONDITION_VARIABLE *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  while ( 1 )
  {
    sub_180012B20(&v9);
    if ( v9 >= *a3 )
      break;
    v6 = *a3 - v9;
    if ( v6 <= 86400000000000LL )
    {
      v7 = v6 / 1000000;
      if ( 1000000 * (v6 / 1000000) < v6 )
        LODWORD(v7) = v7 + 1;
    }
    else
    {
      LODWORD(v7) = 86400000;
    }
    result = sub_18000D2DC(a1, *a2, v7);
    if ( !(_DWORD)result )
      return result;
  }
  return 1LL;
}

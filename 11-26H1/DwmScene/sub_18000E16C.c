/*
 * XREFs of sub_18000E16C @ 0x18000E16C
 * Callers:
 *     sub_180010390 @ 0x180010390 (sub_180010390.c)
 *     sub_1800104EC @ 0x1800104EC (sub_1800104EC.c)
 * Callees:
 *     sub_180010238 @ 0x180010238 (sub_180010238.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 */

__int64 __fastcall sub_18000E16C(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi

  if ( a1 != a2 && a3 && *a3 && (v6 = sub_180010238(a3), v9 = v8 - a1, v10 = v6, v9 >= v6) )
  {
    sub_1800114C0(a1, v9, v7, v6);
    if ( a4 )
      *a4 = a1;
    return v10 + a1;
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}

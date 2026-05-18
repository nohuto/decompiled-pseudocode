/*
 * XREFs of sub_1800305DC @ 0x1800305DC
 * Callers:
 *     sub_1800364D0 @ 0x1800364D0 (sub_1800364D0.c)
 * Callees:
 *     sub_18002F288 @ 0x18002F288 (sub_18002F288.c)
 *     sub_180030628 @ 0x180030628 (sub_180030628.c)
 */

__int64 __fastcall sub_1800305DC(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( *a3 <= 0 )
    return 1LL;
  v6 = sub_18002F288(&v7, a3);
  return sub_180030628(a1, a2, v6);
}

/*
 * XREFs of sub_180029BAC @ 0x180029BAC
 * Callers:
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 * Callees:
 *     sub_1800294D4 @ 0x1800294D4 (sub_1800294D4.c)
 *     sub_180029D50 @ 0x180029D50 (sub_180029D50.c)
 */

__int64 *__fastcall sub_180029BAC(__int64 a1, __int64 *a2, char a3)
{
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *result; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v6 = (__int64 *)sub_180029D50();
  v10 = a1;
  v11 = a3;
  v7 = *v6;
  v8 = v6[1];
  while ( v7 != v8 && !sub_1800294D4(v7, (__int64)&v10) )
    v7 += 16LL;
  result = a2;
  *a2 = v7;
  return result;
}

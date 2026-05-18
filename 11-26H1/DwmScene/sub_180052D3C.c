/*
 * XREFs of sub_180052D3C @ 0x180052D3C
 * Callers:
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180052ED8 @ 0x180052ED8 (sub_180052ED8.c)
 */

__int64 *__fastcall sub_180052D3C(__int64 *a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v8 = sub_18001C514(64LL);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *a4;
    v12 = *a3;
    *a3 = 0LL;
    v9 = sub_180052ED8(v8, a2, &v12, v10);
  }
  *a1 = v9;
  return a1;
}

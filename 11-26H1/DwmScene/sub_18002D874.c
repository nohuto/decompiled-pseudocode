/*
 * XREFs of sub_18002D874 @ 0x18002D874
 * Callers:
 *     sub_18002CEDC @ 0x18002CEDC (sub_18002CEDC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18003141C @ 0x18003141C (sub_18003141C.c)
 */

__int64 __fastcall sub_18002D874(__int64 *a1, char *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  unsigned __int64 i; // r8
  char v11; // cl
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = a3;
  a1[2] = 0LL;
  a1[3] = 15LL;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180012A10();
  if ( a4 > 0xF )
  {
    v7 = sub_18001275C(a4, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    *a1 = sub_180011790(v7 + 1);
    a1[3] = v7;
  }
  v8 = sub_1800148EC((__int64)a1);
  v9 = (_BYTE *)v8;
  for ( i = a4; i; --i )
  {
    v11 = *a2;
    a2 += 2;
    *v9++ = v11;
  }
  a1[2] = a4;
  *(_BYTE *)(v8 + a4) = 0;
  v13 = 0LL;
  return sub_18003141C(&v13, v9, i);
}

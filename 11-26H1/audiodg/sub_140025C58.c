/*
 * XREFs of sub_140025C58 @ 0x140025C58
 * Callers:
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_14000D630 @ 0x14000D630 (sub_14000D630.c)
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 *     sub_140025D60 @ 0x140025D60 (sub_140025D60.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

unsigned __int64 __fastcall sub_140025C58(_QWORD *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // r12
  __int64 v15; // [rsp+68h] [rbp+20h]

  v6 = a1[1];
  if ( a2 < v6 )
  {
    v15 = a1[1];
    if ( !(unsigned __int8)sub_140025D60(a1, v6 + 1) )
LABEL_3:
      sub_14004639C(2147942414LL, v8);
    v12 = 8 * a2;
    v7 = a2 + 1;
    sub_14000D7A4((void *)(*a1 + 8 * (a2 + 1)), 8 * (v6 - a2), (const void *)(8 * a2 + *a1), 8 * (v6 - a2));
    try
    {
      sub_14000D630();
    }
    catch ( ... )
    {
      sub_14000D7A4((void *)(*a1 + 8 * a2), 8 * (v15 - a2), (const void *)(*a1 + 8 * (a2 + 1)), 8 * (v15 - a2));
      sub_140025D60(a1, v15);
      throw;
    }
  }
  else
  {
    v7 = a2 + 1;
    if ( !(unsigned __int8)sub_140025D60(a1, a2 + 1) )
      goto LABEL_3;
    v12 = 8 * a2;
  }
  v10 = a2;
  result = v7 - a2;
  if ( a2 < v7 )
  {
    if ( result < 2 )
      goto LABEL_26;
    v9 = v12 + *a1;
    if ( v9 <= (unsigned __int64)a1 && v9 >= (unsigned __int64)a1 )
      goto LABEL_26;
    if ( v9 <= (unsigned __int64)a3 && v9 >= (unsigned __int64)a3 )
      goto LABEL_26;
    do
    {
      v10 += 2LL;
      result = v10;
    }
    while ( v10 < a2 );
    if ( v10 < v7 )
    {
LABEL_26:
      do
      {
        result = *a3;
        *(_QWORD *)(*a1 + 8 * v10++) = *a3;
      }
      while ( v10 < v7 );
    }
  }
  return result;
}

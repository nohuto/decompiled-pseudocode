/*
 * XREFs of sub_18004F194 @ 0x18004F194
 * Callers:
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 *     sub_18004E514 @ 0x18004E514 (sub_18004E514.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18004EA04 @ 0x18004EA04 (sub_18004EA04.c)
 *     sub_18004EAF0 @ 0x18004EAF0 (sub_18004EAF0.c)
 * Callees:
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 */

__int64 *__fastcall sub_18004F194(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 *result; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_18001CC6C((__int64)a1, &v8, a3);
  v5 = v9;
  if ( !sub_18001CD34(v6, v9) )
    v5 = *a1;
  result = a2;
  *a2 = v5;
  return result;
}

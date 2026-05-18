/*
 * XREFs of sub_180056940 @ 0x180056940
 * Callers:
 *     sub_180057650 @ 0x180057650 (sub_180057650.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 */

__int64 *__fastcall sub_180056940(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 *result; // rax

  for ( i = a2; i != a3; i += 32LL )
  {
    sub_1800141BC(a4);
    v8 = sub_1800141BC(i);
    if ( sub_18001F05C(v8, *(_QWORD *)(i + 16), v9, *(_QWORD *)(a4 + 16)) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}

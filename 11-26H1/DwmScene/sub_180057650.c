/*
 * XREFs of sub_180057650 @ 0x180057650
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 * Callees:
 *     sub_1800251F4 @ 0x1800251F4 (sub_1800251F4.c)
 *     sub_1800563BC @ 0x1800563BC (sub_1800563BC.c)
 *     sub_180056940 @ 0x180056940 (sub_180056940.c)
 */

__int64 *__fastcall sub_180057650(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 416);
  result = sub_180056940((__int64 *)&v8, *(_QWORD *)(a1 + 416), *(_QWORD *)(a1 + 424), a2);
  v7 = *(_QWORD **)(a1 + 424);
  if ( v8 == v7 )
  {
    if ( v7 == (_QWORD *)v2[2] )
    {
      return sub_1800563BC(v2, (__int64)v7, a2);
    }
    else
    {
      result = sub_1800251F4(v6, v7, a2);
      v2[1] += 32LL;
    }
  }
  return result;
}

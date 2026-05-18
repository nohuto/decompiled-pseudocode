/*
 * XREFs of sub_18004C1F8 @ 0x18004C1F8
 * Callers:
 *     sub_18004C1F8 @ 0x18004C1F8 (sub_18004C1F8.c)
 *     sub_18004D198 @ 0x18004D198 (sub_18004D198.c)
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 * Callees:
 *     sub_18004C1F8 @ 0x18004C1F8 (sub_18004C1F8.c)
 *     sub_18004C2A8 @ 0x18004C2A8 (sub_18004C2A8.c)
 */

__int64 __fastcall sub_18004C1F8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18004C2A8(v7, v6) )
  {
    sub_18004C1F8(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}

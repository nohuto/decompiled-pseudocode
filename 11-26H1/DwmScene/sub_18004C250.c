/*
 * XREFs of sub_18004C250 @ 0x18004C250
 * Callers:
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004C250 @ 0x18004C250 (sub_18004C250.c)
 *     sub_18005CC20 @ 0x18005CC20 (sub_18005CC20.c)
 * Callees:
 *     sub_18004C250 @ 0x18004C250 (sub_18004C250.c)
 *     sub_18004C2D4 @ 0x18004C2D4 (sub_18004C2D4.c)
 */

__int64 __fastcall sub_18004C250(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18004C2D4(v7, v6) )
  {
    sub_18004C250(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}

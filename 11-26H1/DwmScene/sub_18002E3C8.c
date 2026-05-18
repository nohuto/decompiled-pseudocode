/*
 * XREFs of sub_18002E3C8 @ 0x18002E3C8
 * Callers:
 *     sub_18002E3C8 @ 0x18002E3C8 (sub_18002E3C8.c)
 *     sub_1800314BC @ 0x1800314BC (sub_1800314BC.c)
 *     sub_18003809C @ 0x18003809C (sub_18003809C.c)
 * Callees:
 *     sub_18002E3C8 @ 0x18002E3C8 (sub_18002E3C8.c)
 *     sub_18002EC70 @ 0x18002EC70 (sub_18002EC70.c)
 */

__int64 __fastcall sub_18002E3C8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002EC70(v7, v6) )
  {
    sub_18002E3C8(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}

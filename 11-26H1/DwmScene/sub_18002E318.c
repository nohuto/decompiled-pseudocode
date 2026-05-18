/*
 * XREFs of sub_18002E318 @ 0x18002E318
 * Callers:
 *     sub_18002E318 @ 0x18002E318 (sub_18002E318.c)
 *     sub_18003145C @ 0x18003145C (sub_18003145C.c)
 *     sub_18003A8A0 @ 0x18003A8A0 (sub_18003A8A0.c)
 *     sub_18003AB58 @ 0x18003AB58 (sub_18003AB58.c)
 * Callees:
 *     sub_18002E318 @ 0x18002E318 (sub_18002E318.c)
 *     sub_18002EC18 @ 0x18002EC18 (sub_18002EC18.c)
 */

__int64 __fastcall sub_18002E318(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002EC18(v7, v6) )
  {
    sub_18002E318(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}

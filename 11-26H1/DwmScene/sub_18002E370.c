/*
 * XREFs of sub_18002E370 @ 0x18002E370
 * Callers:
 *     sub_18002E370 @ 0x18002E370 (sub_18002E370.c)
 *     sub_18003148C @ 0x18003148C (sub_18003148C.c)
 *     sub_180037D10 @ 0x180037D10 (sub_180037D10.c)
 * Callees:
 *     sub_18002E370 @ 0x18002E370 (sub_18002E370.c)
 *     sub_18002EC44 @ 0x18002EC44 (sub_18002EC44.c)
 */

__int64 __fastcall sub_18002E370(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002EC44(v7, v6) )
  {
    sub_18002E370(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}

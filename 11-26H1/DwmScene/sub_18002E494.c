/*
 * XREFs of sub_18002E494 @ 0x18002E494
 * Callers:
 *     sub_18002E494 @ 0x18002E494 (sub_18002E494.c)
 *     sub_18003151C @ 0x18003151C (sub_18003151C.c)
 * Callees:
 *     sub_18002E494 @ 0x18002E494 (sub_18002E494.c)
 *     sub_18002EC9C @ 0x18002EC9C (sub_18002EC9C.c)
 */

__int64 __fastcall sub_18002E494(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002EC9C(v7, v6) )
  {
    sub_18002E494(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}

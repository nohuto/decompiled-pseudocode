/*
 * XREFs of sub_140021A88 @ 0x140021A88
 * Callers:
 *     sub_1400204AC @ 0x1400204AC (sub_1400204AC.c)
 *     sub_140021640 @ 0x140021640 (sub_140021640.c)
 *     sub_140021650 @ 0x140021650 (sub_140021650.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 *     sub_140045350 @ 0x140045350 (sub_140045350.c)
 *     sub_14005334C @ 0x14005334C (sub_14005334C.c)
 *     sub_14005F388 @ 0x14005F388 (sub_14005F388.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_140021A88(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[3];
  if ( v1 > 7 )
    sub_1400453E4(*a1, 2 * v1 + 2);
  result = 0LL;
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}

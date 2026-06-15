/*
 * XREFs of sub_14005EDB0 @ 0x14005EDB0
 * Callers:
 *     sub_14005F080 @ 0x14005F080 (sub_14005F080.c)
 * Callees:
 *     sub_14005DB08 @ 0x14005DB08 (sub_14005DB08.c)
 */

__int64 __fastcall sub_14005EDB0(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_14005DB08((__int64)a1, (__int64)v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}

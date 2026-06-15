/*
 * XREFs of sub_14001C46C @ 0x14001C46C
 * Callers:
 *     sub_14001C44C @ 0x14001C44C (sub_14001C44C.c)
 * Callees:
 *     sub_14001C490 @ 0x14001C490 (sub_14001C490.c)
 */

__int64 sub_14001C46C()
{
  __int64 v0; // rcx
  __int64 result; // rax

  sub_14001C490();
  result = v0;
  *(_QWORD *)(v0 + 8) = &off_1400B8DE0;
  return result;
}

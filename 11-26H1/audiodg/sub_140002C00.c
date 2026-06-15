/*
 * XREFs of sub_140002C00 @ 0x140002C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_140002C00()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_1400E8808 = 0;
  qword_1400E87F8 = (__int64)&off_1400BB148;
  qword_1400E8800 = (__int64)ProcessHeap;
  return sub_14004967C(sub_1400B48A0);
}

/*
 * XREFs of RtlpInitFeatureConfiguration @ 0x18010C54C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 *__fastcall RtlpInitFeatureConfiguration(int a1)
{
  int v1; // ecx
  __int64 *result; // rax

  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 == 1 )
      dword_1801CBD98 = 2;
  }
  else
  {
    memset_thunk_772440563353939046(&RtlpFcProcessManager, 0, 0x120uLL);
    memset_thunk_772440563353939046(&unk_1801CBCA0, 0, 0xD0uLL);
    qword_1801CBC98 = 0LL;
    xmmword_1801CBC88 = 0LL;
    memset_thunk_772440563353939046(&unk_1801CBCA0, 0, 0x60uLL);
    memset_thunk_772440563353939046(&unk_1801CBD00, 0, 0x60uLL);
    result = &qword_1801CBD88;
    stru_1801CBD70.Value = 0LL;
    qword_1801CBD90 = (__int64)&qword_1801CBD88;
    qword_1801CBD88 = (__int64)&qword_1801CBD88;
    stru_1801CBD80.0 = 0LL;
    dword_1801CBD98 = 1;
  }
  return result;
}

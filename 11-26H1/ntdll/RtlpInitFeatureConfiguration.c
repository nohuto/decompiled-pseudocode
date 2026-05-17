/*
 * XREFs of RtlpInitFeatureConfiguration @ 0x18010C9FC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 *__fastcall RtlpInitFeatureConfiguration(int a1)
{
  int v1; // ecx
  __int64 *result; // rax

  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 == 1 )
      dword_1801CCD58 = 2;
  }
  else
  {
    memset_thunk_772440563353939046(RtlpFcProcessManager, 0, 0x120uLL);
    memset_thunk_772440563353939046(&unk_1801CCC60, 0, 0xD0uLL);
    qword_1801CCC58 = 0LL;
    xmmword_1801CCC48 = 0LL;
    memset_thunk_772440563353939046(&unk_1801CCC60, 0, 0x60uLL);
    memset_thunk_772440563353939046(&unk_1801CCCC0, 0, 0x60uLL);
    result = &qword_1801CCD48;
    qword_1801CCD30 = 0LL;
    qword_1801CCD50 = (__int64)&qword_1801CCD48;
    qword_1801CCD48 = (__int64)&qword_1801CCD48;
    qword_1801CCD40 = 0LL;
    dword_1801CCD58 = 1;
  }
  return result;
}

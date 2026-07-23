/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x1800D0E2C
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x1800D0D40 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapInitialize @ 0x1800D0EC0 (RtlCSparseBitmapInitialize.c)
 *     RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x1800D0F04 (RtlpHpCustomVaCallbacksRegistrarInitialize.c)
 *     RtlpHpVaMgrCtxInitialize @ 0x1800D0F68 (RtlpHpVaMgrCtxInitialize.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *result; // rax
  __int64 v4; // rcx

  memset_thunk_772440563353939046(&qword_1801C6908, 0, 0x38D8uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset_thunk_772440563353939046(&qword_1801C6908, 0, 0x50uLL);
  RtlCSparseBitmapInitialize(&BaseAddress, 72LL);
  RtlpHpVaMgrCtxInitialize(&unk_1801C6958);
  RtlpHpCustomVaCallbacksRegistrarInitialize();
  result = &unk_1801CA1A0;
  qword_1801CA1D8 = *a2;
  v4 = 4LL;
  do
  {
    *result = 0LL;
    result += 2;
    --v4;
  }
  while ( v4 );
  return result;
}

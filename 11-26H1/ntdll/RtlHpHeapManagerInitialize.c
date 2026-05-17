/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x180089AEC
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x180089A00 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapInitialize @ 0x180089B80 (RtlCSparseBitmapInitialize.c)
 *     RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x180089BC4 (RtlpHpCustomVaCallbacksRegistrarInitialize.c)
 *     RtlpHpVaMgrCtxInitialize @ 0x180089C28 (RtlpHpVaMgrCtxInitialize.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *result; // rax
  __int64 v4; // rcx

  memset_thunk_772440563353939046(&qword_1801C78B8, 0, 0x38D8uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset_thunk_772440563353939046(&qword_1801C78B8, 0, 0x50uLL);
  RtlCSparseBitmapInitialize(&unk_1801C78C0, 72LL);
  RtlpHpVaMgrCtxInitialize(&unk_1801C7908);
  RtlpHpCustomVaCallbacksRegistrarInitialize();
  result = &unk_1801CB150;
  qword_1801CB188 = *a2;
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

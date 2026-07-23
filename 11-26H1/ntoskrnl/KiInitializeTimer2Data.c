/*
 * XREFs of KiInitializeTimer2Data @ 0x1405FA8FC
 * Callers:
 *     KeInitializeTimerTable @ 0x140B26EB8 (KeInitializeTimerTable.c)
 * Callees:
 *     <none>
 */

_QWORD *KiInitializeTimer2Data()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = &unk_140F26DA8;
  v1 = 7LL;
  do
  {
    *(result - 1) = 0LL;
    *result = 0LL;
    result[1] = -1LL;
    result += 3;
    --v1;
  }
  while ( v1 );
  KiNextTimer2DueTime = -1LL;
  return result;
}

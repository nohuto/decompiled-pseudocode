/*
 * XREFs of KiInitializeTimer2Data @ 0x1405F7EDC
 * Callers:
 *     KeInitializeTimerTable @ 0x140B24A18 (KeInitializeTimerTable.c)
 * Callees:
 *     <none>
 */

_QWORD *KiInitializeTimer2Data()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = &unk_140F26C08;
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

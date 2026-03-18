/*
 * XREFs of CmpShutdownWorkers @ 0x140854BA4
 * Callers:
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 * Callees:
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 */

BOOLEAN CmpShutdownWorkers()
{
  struct _KTIMER *v0; // rbx
  __int64 v1; // rdi
  BOOLEAN result; // al

  v0 = &CmpLazyWriterData;
  v1 = 3LL;
  do
  {
    result = KeCancelTimer(v0);
    v0 += 3;
    --v1;
  }
  while ( v1 );
  return result;
}

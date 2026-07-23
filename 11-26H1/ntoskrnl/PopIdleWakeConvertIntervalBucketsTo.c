/*
 * XREFs of PopIdleWakeConvertIntervalBucketsTo @ 0x140B2ADDC
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B2A9B0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140B2AC20 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 */

void __fastcall PopIdleWakeConvertIntervalBucketsTo(unsigned int a1, __int64 a2, ULONGLONG *a3, unsigned __int64 a4)
{
  ULONGLONG *v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rdi

  if ( a1 )
  {
    v4 = a3;
    v5 = a1;
    v7 = a2 - (_QWORD)a3;
    do
    {
      *v4 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v4 + v7), a4);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}

/*
 * XREFs of PopIdleWakeSourceAccountingToDiagnostic @ 0x140B2AF00
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B2A9B0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140B2AC20 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140B2AFCC (PopIdleWakeGenerateDescriptionString.c)
 */

__int64 __fastcall PopIdleWakeSourceAccountingToDiagnostic(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  unsigned __int16 v5; // dx
  __int64 v6; // rax
  __int64 v7; // rcx
  int DescriptionString; // eax

  memset_0(a2, 0, 0x498uLL);
  v4 = 0;
  *a2 = *(_DWORD *)a1;
  v5 = 0;
  a2[1] = *(_DWORD *)(a1 + 408);
  do
  {
    v6 = *((unsigned __int16 *)a2 + 424) + 85LL;
    *((_WORD *)a2 + 5 * v6) = v5;
    if ( v5 >= *(_WORD *)(a1 + 144) )
      v7 = 0LL;
    else
      v7 = *(_QWORD *)(a1 + 8LL * v5 + 152);
    *(_QWORD *)((char *)a2 + 10 * v6 + 2) = v7;
    if ( v7 )
      ++*((_WORD *)a2 + 424);
    ++v5;
  }
  while ( v5 < 0x20u );
  PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets(a1 + 416, (__int64)(a2 + 2));
  PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets(a1 + 800, (__int64)(a2 + 96));
  DescriptionString = PopIdleWakeGenerateDescriptionString(a1, a2);
  if ( DescriptionString < 0 )
    return (unsigned int)DescriptionString;
  return v4;
}

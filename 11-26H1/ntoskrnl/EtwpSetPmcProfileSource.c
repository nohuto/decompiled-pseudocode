/*
 * XREFs of EtwpSetPmcProfileSource @ 0x140827FB0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     KeInitializeProfileCallback @ 0x1407BAD28 (KeInitializeProfileCallback.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetPmcProfileSource(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdi

  v2 = 0;
  v3 = a2;
  if ( !a2 || a2 > ExpPlatformBinaryLock.ExpectedRunTime )
    return 3221225485LL;
  KeWaitForSingleObject(&EtwpSecurityLock.SchedulerApcFill5[72], Executive, 0, 0, 0LL);
  if ( (WORD2(PerfGlobalGroupMask) & 0x400) != 0 )
  {
    v2 = -1073741053;
  }
  else
  {
    if ( qword_140F03988 )
    {
      ExFreePoolWithTag(qword_140F03988, 0);
      qword_140F03988 = 0LL;
      EtwpPmcProfile = 0;
    }
    v5 = v3;
    qword_140F03988 = (PVOID)ExAllocatePool2(0x40uLL);
    if ( qword_140F03988 )
    {
      EtwpPmcProfile = v3;
      if ( (_DWORD)v3 )
      {
        v6 = 0LL;
        do
        {
          KeInitializeProfileCallback((char *)qword_140F03988 + v6, (__int64)EtwpPmcInterrupt, (unsigned int)*a1, *a1);
          v6 += 616LL;
          ++a1;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.SchedulerApcFill5[72], 0);
  return v2;
}

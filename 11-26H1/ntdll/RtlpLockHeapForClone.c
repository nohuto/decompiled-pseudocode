/*
 * XREFs of RtlpLockHeapForClone @ 0x180145318
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144290 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x18000C670 (RtlTryEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x18005FBB4 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800714A4 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpIsProtectedHeap @ 0x18007653C (RtlpIsProtectedHeap.c)
 *     ZwDelayExecution @ 0x18015F4C0 (ZwDelayExecution.c)
 */

__int64 __fastcall RtlpLockHeapForClone(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // esi
  _RTL_SRWLOCK *v5; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !(unsigned int)RtlpIsProtectedHeap(a1) )
  {
    if ( *(_DWORD *)(v2 + 16) == -571548178 )
    {
      RtlpAcquireDescriptorPseudoGlobalLockEx(*(_QWORD *)(v2 + 56), 0);
      RtlpHpLockHeapForProcessCloneOrTerminate((_RTL_SRWLOCK *)a1);
    }
    else if ( (*(_BYTE *)(v2 + 112) & 1) == 0 )
    {
      v4 = 0;
      DelayInterval.QuadPart = -250000LL;
      while ( !RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
      {
        ZwDelayExecution(0, &DelayInterval);
        if ( (unsigned int)++v4 >= 0x64 )
          return (unsigned int)-1073741420;
      }
      if ( *(_BYTE *)(a1 + 418) == 2 )
      {
        v5 = *(_RTL_SRWLOCK **)(a1 + 408);
        if ( v5 )
          RtlAcquireSRWLockExclusive(v5);
      }
    }
  }
  return v3;
}

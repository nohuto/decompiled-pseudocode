/*
 * XREFs of RtlpLockHeapForClone @ 0x180145468
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144390 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180014484 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 *     RtlTryEnterCriticalSection @ 0x1800215A0 (RtlTryEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpIsProtectedHeap @ 0x18009178C (RtlpIsProtectedHeap.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x180096BC0 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

__int64 __fastcall RtlpLockHeapForClone(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // rdx
  volatile signed __int64 *v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !(unsigned int)RtlpIsProtectedHeap(a1) )
  {
    if ( *(_DWORD *)(v2 + 16) == -571548178 )
    {
      RtlpAcquireDescriptorPseudoGlobalLockEx(*(_QWORD *)(v2 + 56), 0);
      RtlpHpLockHeapForProcessCloneOrTerminate(a1, v4);
    }
    else if ( (*(_BYTE *)(v2 + 112) & 1) == 0 )
    {
      v5 = 0;
      v9 = -250000LL;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352)) )
      {
        ZwDelayExecution(0LL, &v9);
        if ( (unsigned int)++v5 >= 0x64 )
          return (unsigned int)-1073741420;
      }
      if ( *(_BYTE *)(a1 + 418) == 2 )
      {
        v7 = *(volatile signed __int64 **)(a1 + 408);
        if ( v7 )
          RtlAcquireSRWLockExclusive(v7, v6);
      }
    }
  }
  return v3;
}

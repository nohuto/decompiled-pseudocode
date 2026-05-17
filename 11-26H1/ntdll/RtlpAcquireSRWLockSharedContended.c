/*
 * XREFs of RtlpAcquireSRWLockSharedContended @ 0x18004B7F0
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x18002BA50 (RtlpHpStackTraceRemoveStack.c)
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     LdrpFindLoadedDllByName @ 0x180052F40 (LdrpFindLoadedDllByName.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C6170 (LdrpFindLoadedDllByAddress.c)
 * Callees:
 *     RtlBackoff @ 0x180013BB0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18002A5E0 (RtlpOptimizeSRWLockList.c)
 *     RtlAbPreAcquire @ 0x1800BD6D0 (RtlAbPreAcquire.c)
 *     RtlpWaitCouldDeadlock @ 0x1800D1630 (RtlpWaitCouldDeadlock.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlpAcquireSRWLockSharedContended(
        volatile signed __int64 *UniqueThread,
        unsigned __int64 i,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  signed __int64 v4; // rdi
  unsigned __int64 v5; // r14
  volatile signed __int64 *v6; // rsi
  signed __int64 v7; // rcx
  signed __int64 result; // rax
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h]
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+30h] BYREF

  v16 = 0;
  v13 = 0LL;
  v4 = a3;
  v5 = i;
  v14 = 0LL;
  v6 = UniqueThread;
  v15 = 0LL;
  while ( ((v4 & 2) != 0 || (v4 & 1) != 0 && (v4 & 0xFFFFFFFFFFFFFFF0uLL) == 0)
       && (!RtlpSrwLockAllowImplicitUpgrade || (v4 & 1) != 0) )
  {
    if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, i, a3, a4, v13, *((_QWORD *)&v13 + 1)) )
      ZwTerminateProcess(-1LL, 3221225547LL);
    UniqueThread = (volatile signed __int64 *)NtCurrentTeb()->ClientId.UniqueThread;
    *((_QWORD *)&v14 + 1) = UniqueThread;
    LOBYTE(UniqueThread) = 0;
    DWORD1(v15) = 2;
    *(_QWORD *)&v14 = 0LL;
    if ( (v4 & 2) != 0 )
    {
      *((_QWORD *)&v13 + 1) = 0LL;
      LODWORD(v15) = -1;
      *(_QWORD *)&v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
      i = (unsigned __int64)&v13 | v4 & 9 | 6;
      LOBYTE(UniqueThread) = (v4 & 4) == 0;
    }
    else
    {
      LODWORD(v15) = -2;
      *((_QWORD *)&v13 + 1) = &v13;
      i = (unsigned __int64)&v13 + 3;
    }
    v10 = _InterlockedCompareExchange64(v6, i, v4);
    v9 = v4 == v10;
    v4 = v10;
    if ( v9 )
    {
      if ( (_BYTE)UniqueThread )
        RtlpOptimizeSRWLockList(v6, i);
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        if ( MEMORY[0x7FFE0297] )
        {
          a3 = __rdtsc();
          a4 = a3 + (unsigned int)SRWLockSpinCycleCount;
          while ( 1 )
          {
            i = 0LL;
            __asm { monitorx rax, rcx, rdx }
            UniqueThread = (volatile signed __int64 *)DWORD1(v15);
            if ( (BYTE4(v15) & 2) == 0 )
              break;
            UniqueThread = (volatile signed __int64 *)a3;
            v12 = __rdtsc();
            i = (unsigned __int64)HIDWORD(v12) << 32;
            a3 = v12;
            if ( v12 < (unsigned __int64)UniqueThread || v12 >= a4 )
              break;
            __asm { mwaitx  rax, rcx, rbx }
          }
        }
        else
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            UniqueThread = (volatile signed __int64 *)DWORD1(v15);
            if ( (BYTE4(v15) & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
              break;
            _mm_pause();
          }
        }
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)&v15 + 1, 1u) )
      {
        do
        {
          NtWaitForAlertByThreadId(v6, 0LL);
          if ( v5 )
            RtlAbPreAcquire(v6, v5);
        }
        while ( (BYTE4(v15) & 4) == 0 );
      }
    }
    else
    {
LABEL_26:
      RtlBackoff(&v16);
      _m_prefetchw((const void *)v6);
      v4 = *v6;
    }
  }
  v7 = (v4 | 1) + 16;
  if ( (v4 & 2) != 0 )
    v7 = v4 | 1;
  result = _InterlockedCompareExchange64(v6, v7, v4);
  if ( v4 != result )
    goto LABEL_26;
  return result;
}

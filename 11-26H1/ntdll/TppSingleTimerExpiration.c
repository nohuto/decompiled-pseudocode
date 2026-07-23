/*
 * XREFs of TppSingleTimerExpiration @ 0x180089240
 * Callers:
 *     TppTimerQueueExpiration @ 0x180088790 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppWorkPost @ 0x18002BCE0 (TppWorkPost.c)
 *     TppIteWakeWaiters @ 0x1800880C0 (TppIteWakeWaiters.c)
 *     TppEnqueueTimer @ 0x1800880F0 (TppEnqueueTimer.c)
 *     TppUpdateSubQueueTimer @ 0x180088FF0 (TppUpdateSubQueueTimer.c)
 *     TppWaitTimerExpiration @ 0x1800FB6CC (TppWaitTimerExpiration.c)
 *     TppETWTimerExpiration @ 0x18010D1B0 (TppETWTimerExpiration.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 **v14; // rdi
  __int64 v15; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
  {
    v15 = 1LL;
    if ( !a3 )
      v15 = 16LL;
    TppETWTimerExpiration(&a2[v15], a1);
  }
  v8 = (_RTL_SRWLOCK *)(a1 + 240);
  v9 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v10 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v10 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      *(_QWORD *)(a1 + 328) = 0LL;
      if ( !(unsigned __int8)TppWaitTimerExpiration(a1) )
        goto LABEL_8;
    }
    else
    {
      v11 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v11 )
      {
        if ( a3 )
        {
          *(_QWORD *)(a1 + 328) = v9;
          v8 = (_RTL_SRWLOCK *)(a1 + 240);
        }
        v13 = 10000 * v11 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v13;
        if ( v13 <= v9 )
          *(_QWORD *)(a1 + 328) = v9 + 10000 * v11 - (v9 - v13) % (10000 * v11);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer((__int64)&a2[16], a1);
        TppUpdateSubQueueTimer((__int64)&a2[16], 0);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_8:
    RtlReleaseSRWLockExclusive(v8);
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v14 = *(__int64 ***)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppIteWakeWaiters(v14);
LABEL_9:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}

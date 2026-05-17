/*
 * XREFs of TppSingleTimerExpiration @ 0x180068DF0
 * Callers:
 *     TppTimerQueueExpiration @ 0x180068340 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppWorkPost @ 0x180041770 (TppWorkPost.c)
 *     TppIteWakeWaiters @ 0x180067C70 (TppIteWakeWaiters.c)
 *     TppEnqueueTimer @ 0x180067CA0 (TppEnqueueTimer.c)
 *     TppUpdateSubQueueTimer @ 0x180068BA0 (TppUpdateSubQueueTimer.c)
 *     TppWaitTimerExpiration @ 0x1800FBF7C (TppWaitTimerExpiration.c)
 *     TppETWTimerExpiration @ 0x18010D660 (TppETWTimerExpiration.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, volatile signed __int64 *a2, char a3)
{
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
  {
    v18 = 1LL;
    if ( !a3 )
      v18 = 16LL;
    TppETWTimerExpiration(&a2[v18], a1);
  }
  v8 = (volatile signed __int64 *)(a1 + 240);
  v9 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), MEMORY[0x7FFE03B0]);
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
          v8 = (volatile signed __int64 *)(a1 + 240);
        }
        v13 = 10000 * v11;
        v14 = 10000 * v11 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v14;
        if ( v14 <= v9 )
        {
          v14 = (v9 - v14) % v13;
          *(_QWORD *)(a1 + 328) = v9 + v13 - v14;
        }
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2, v14);
        TppEnqueueTimer((__int64)(a2 + 16), a1);
        TppUpdateSubQueueTimer((__int64)(a2 + 16), 0);
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
  v15 = *(_QWORD **)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  TppIteWakeWaiters(v15, v16, v17);
LABEL_9:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}

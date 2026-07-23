/*
 * XREFs of ExTimedWaitForUnblockPushLock @ 0x140478630
 * Callers:
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140353B34 (RtlpCSparseBitmapWaitOnAddress.c)
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 *     CmpWaitForLateUnloadWorker @ 0x140478434 (CmpWaitForLateUnloadWorker.c)
 *     ExWaitForUnblockPushLock @ 0x140478510 (ExWaitForUnblockPushLock.c)
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 */

__int64 __fastcall ExTimedWaitForUnblockPushLock(volatile __int64 *a1, _DWORD *a2, LARGE_INTEGER *a3)
{
  __int64 v3; // rbx
  volatile signed __int32 *v4; // r9
  int v8; // edx
  unsigned int v10; // ebx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax

  v3 = (unsigned int)ExpSpinCycleCount;
  *(_WORD *)a2 = 0;
  v4 = a2 + 13;
  *((_BYTE *)a2 + 2) = 6;
  a2[1] = 0;
  *((_QWORD *)a2 + 2) = a2 + 2;
  *((_QWORD *)a2 + 1) = a2 + 2;
  if ( MEMORY[0xFFFFF7800000036A] <= 1u )
  {
LABEL_9:
    if ( _interlockedbittestandreset(v4, 1u) )
    {
      v10 = KeWaitForSingleObject(a2, WrPushLock, 0, 0, a3);
      if ( v10 )
        ExpUnblockPushLock(a1, a2, 1);
    }
    else
    {
      return 0;
    }
    return v10;
  }
  else
  {
    if ( a2 != (_DWORD *)-52LL && MEMORY[0xFFFFF78000000297] )
    {
      v11 = __rdtsc();
      v12 = v11 + v3;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (a2[13] & 2) == 0 )
          break;
        v13 = v11;
        v14 = __rdtsc();
        v11 = v14;
        if ( v14 < v13 || v14 >= v12 )
          goto LABEL_9;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      v8 = 0;
      while ( (a2[13] & 2) != 0 )
      {
        if ( v8 == (unsigned int)v3 / MEMORY[0xFFFFF780000002D6] )
          goto LABEL_9;
        _mm_pause();
        ++v8;
      }
    }
    return 0LL;
  }
}

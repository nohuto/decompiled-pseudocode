/*
 * XREFs of ExpPlGrowTableIfNeeded @ 0x1406D0990
 * Callers:
 *     ExpTrackTableInsertLimit @ 0x1406D0D90 (ExpTrackTableInsertLimit.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 ExpPlGrowTableIfNeeded()
{
  __int64 v0; // rbx
  unsigned int v1; // eax
  char v2; // di
  unsigned int v3; // edi
  char *Pool2; // rsi
  unsigned int v5; // edi
  char i; // cl
  unsigned __int64 v7; // rcx
  char RealtimePriorityFloor; // dl
  unsigned int v9; // edi
  __int64 v10; // r8
  _QWORD *KernelShadowStack; // r11
  _QWORD *v12; // r9
  __int64 v13; // rdx
  char *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0LL;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  v1 = 2 * ((unsigned int)stru_140E285C0.RealtimePriorityFloor >> 5);
  if ( stru_140E285C0.SchedulerAssistPriorityFloor >= v1 )
  {
    v0 = v1;
    v2 = 1;
    if ( v1 < 4 )
      v0 = 4LL;
  }
  else
  {
    v2 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    while ( 1 )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      v5 = 2 * ((unsigned int)stru_140E285C0.RealtimePriorityFloor >> 5);
      if ( stru_140E285C0.SchedulerAssistPriorityFloor < v5 )
        break;
      if ( v5 < 4 )
        v5 = 4;
      if ( (unsigned int)v0 >= v5 )
      {
        if ( (((_DWORD)v0 - 1) & (unsigned int)v0) != 0 )
        {
          for ( i = -1; (_DWORD)v0; LODWORD(v0) = (unsigned int)v0 >> 1 )
            ++i;
          v0 = (unsigned int)(1 << i);
        }
        if ( (unsigned int)v0 > 0x4000000 )
          v0 = 0x4000000LL;
        v7 = (unsigned int)v0;
        if ( Pool2 > &Pool2[8 * v0] )
          v7 = 0LL;
        if ( v7 )
          memset64(Pool2, (unsigned __int64)&stru_140E285C0.SchedulerAssistPriorityFloor + 1, v7);
        RealtimePriorityFloor = stru_140E285C0.RealtimePriorityFloor;
        v9 = 0;
        v10 = -1LL << (stru_140E285C0.RealtimePriorityFloor & 0x1F);
        if ( (stru_140E285C0.RealtimePriorityFloor & 0xFFFFFFE0) != 0 )
        {
          do
          {
            KernelShadowStack = stru_140E285C0.KernelShadowStack;
            while ( 1 )
            {
              v12 = (_QWORD *)KernelShadowStack[v9];
              if ( ((unsigned __int8)v12 & 1) != 0 )
                break;
              KernelShadowStack[v9] = *v12;
              v17 = v10 & v12[1];
              v13 = ((_DWORD)v0 - 1) & (HIBYTE(v17)
                                      + 37
                                      * (BYTE6(v17)
                                       + 37
                                       * (BYTE5(v17)
                                        + 37
                                        * (BYTE4(v17)
                                         + 37
                                         * (BYTE3(v17)
                                          + 374026047
                                          + 37
                                          * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * (unsigned int)(unsigned __int8)v17)))))));
              *v12 = *(_QWORD *)&Pool2[8 * v13];
              *(_QWORD *)&Pool2[8 * v13] = v12;
            }
            RealtimePriorityFloor = stru_140E285C0.RealtimePriorityFloor;
            ++v9;
          }
          while ( v9 < (unsigned int)stru_140E285C0.RealtimePriorityFloor >> 5 );
        }
        v14 = (char *)stru_140E285C0.KernelShadowStack;
        stru_140E285C0.KernelShadowStack = Pool2;
        Pool2 = v14;
        stru_140E285C0.RealtimePriorityFloor = (32 * v0) | RealtimePriorityFloor & 0x1F;
        break;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExFreePoolWithTag(Pool2, 0);
      v0 = v5;
    }
    v3 = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return 0;
  }
  return v3;
}

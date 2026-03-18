/*
 * XREFs of IoDecrementKeepAliveCount @ 0x1404C7930
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAlertThread @ 0x1402C5C40 (KeAlertThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebp
  unsigned __int64 v4; // rdi
  int v5; // ebx
  __int64 v7; // rsi
  KSPIN_LOCK *v8; // r15
  KIRQL v9; // al
  __int64 *v10; // rcx
  KIRQL v11; // si
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 *v14; // rax

  v2 = *(_QWORD *)(a1 + 208);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( v2 && (v7 = *(_QWORD *)(v2 + 16)) != 0 )
  {
    v8 = (KSPIN_LOCK *)(a1 + 184);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    v10 = *(__int64 **)(v7 + 24);
    if ( v10 )
    {
      while ( v10 )
      {
        if ( v10[1] == a2 )
        {
          v3 = --*((_DWORD *)v10 + 4);
          v4 = v10[3];
          goto LABEL_7;
        }
        v10 = (__int64 *)*v10;
      }
    }
    v5 = -1073741811;
LABEL_7:
    KeReleaseSpinLock(v8, v9);
    if ( v5 >= 0 && !v3 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc(&IopSessionNotificationLock.Padding[4]);
      v12 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v4 + 48) = MEMORY[0xFFFFF78000000014];
      v13 = (unsigned int)(10000 * IopKeepAliveTimeMs);
      --*(_DWORD *)(v4 + 32);
      *(_QWORD *)(v4 + 48) = v12 + v13;
      if ( *(_BYTE *)(v4 + 16) )
      {
        if ( qword_140F85360 )
          KeAlertThread(qword_140F85360, 0LL, v12);
      }
      else
      {
        v14 = (unsigned __int64 *)IopSessionNotificationLock.Padding[3];
        if ( *(struct _KTHREAD **)IopSessionNotificationLock.Padding[3] != (struct _KTHREAD *)&IopSessionNotificationLock.Padding[2] )
          __fastfail(3u);
        *(_QWORD *)v4 = &IopSessionNotificationLock.Padding[2];
        *(_QWORD *)(v4 + 8) = v14;
        *v14 = v4;
        IopSessionNotificationLock.Padding[3] = v4;
        *(_BYTE *)(v4 + 16) = 1;
        if ( !byte_140F85358 )
        {
          byte_140F85358 = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)&IopSessionNotificationLock.SchedulerAssistYieldCounter, DelayedWorkQueue);
        }
      }
      KeReleaseSpinLock(&IopSessionNotificationLock.Padding[4], v11);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}

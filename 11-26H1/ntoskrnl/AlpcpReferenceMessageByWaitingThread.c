/*
 * XREFs of AlpcpReferenceMessageByWaitingThread @ 0x140AEDC60
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1407C448C (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1407C4154 (AlpcpReferenceMessageByWaitingThreadPort.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThread(__int64 a1, __int64 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v6; // r14
  struct _KTHREAD *v7; // rsi
  unsigned int v8; // r15d
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbx
  struct _KTHREAD *i; // rdi
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  struct _KLOCK_ENTRIES *v15; // r9
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rbp
  __int64 result; // rax

  v6 = 0LL;
  v7 = 0LL;
  v8 = -1073741275;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.FirstArgument, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.FirstArgument, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&AlpcpMessageLogLock.FirstArgument,
      v9,
      (__int64)&AlpcpMessageLogLock.FirstArgument);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  for ( i = *(struct _KTHREAD **)((char *)&AlpcpMessageLogLock.116 + 4);
        i != (struct _KTHREAD *)(&AlpcpMessageLogLock.MiscFlags + 1);
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( ObReferenceObjectSafe((__int64)i) )
    {
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&AlpcpMessageLogLock.FirstArgument,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.FirstArgument);
      KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.FirstArgument);
      if ( v7 )
        ObfDereferenceObject(v7);
      v7 = i;
      v6 = AlpcpReferenceMessageByWaitingThreadPort(a1, (__int64)i, v13, v14);
      if ( v6 )
      {
        v8 = 0;
        goto LABEL_23;
      }
      v16 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.FirstArgument, 0LL, 0LL, v15);
      v18 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.FirstArgument, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&AlpcpMessageLogLock.FirstArgument,
          v16,
          (__int64)&AlpcpMessageLogLock.FirstArgument);
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v17);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock.FirstArgument, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.FirstArgument);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.FirstArgument);
LABEL_23:
  if ( v7 )
    ObfDereferenceObject(v7);
  result = v8;
  *a2 = v6;
  return result;
}

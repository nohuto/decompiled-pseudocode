/*
 * XREFs of EtwpDemuxPrivateTraceHandle @ 0x140B5857C
 * Callers:
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PidNodeCompare @ 0x140833710 (PidNodeCompare.c)
 */

__int64 __fastcall EtwpDemuxPrivateTraceHandle(unsigned int a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  struct _LIST_ENTRY *Flink; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbx
  __int64 v13; // rbx
  int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  __int64 **v17; // rbx
  __int64 *i; // rax
  unsigned int v19; // ebx
  signed __int64 v20; // rax
  signed __int64 v21; // rdx
  struct _LIST_ENTRY *v22; // rtt
  unsigned int v23; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 >= 0x40u )
  {
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&Flink[273], 0LL, 0LL, v9);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[273], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[273], v10, (__int64)&Flink[273]);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v23 = a1;
    v13 = (__int64)Flink[272].Flink;
    if ( ((__int64)Flink[272].Blink & 1) != 0 )
    {
      if ( v13 )
        v13 ^= (unsigned __int64)&Flink[272];
      else
        v13 = 0LL;
    }
    v14 = (__int64)Flink[272].Blink & 1;
    if ( v13 )
    {
      do
      {
        v15 = PidNodeCompare(&v23, v13);
        if ( v15 >= 0 )
        {
          if ( v15 <= 0 )
            break;
          v16 = *(_QWORD *)(v13 + 8);
        }
        else
        {
          v16 = *(_QWORD *)v13;
        }
        if ( v14 && v16 )
          v13 ^= v16;
        else
          v13 = v16;
      }
      while ( v13 );
      if ( v13 )
      {
        v17 = (__int64 **)(v13 + 32);
        for ( i = *v17; i != (__int64 *)v17; i = (__int64 *)*i )
        {
          if ( *((_WORD *)i + 9) == a2 )
          {
            v19 = 0;
            *a3 = *((_WORD *)i + 8);
            goto LABEL_30;
          }
        }
      }
    }
    v19 = -1073741162;
LABEL_30:
    _m_prefetchw(&Flink[273]);
    v20 = (signed __int64)Flink[273].Flink;
    v21 = v20 - 16;
    if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v21 = 0LL;
    if ( (v20 & 2) != 0
      || (v22 = Flink[273].Flink,
          v22 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)&Flink[273], v21, v20)) )
    {
      ExfReleasePushLock(&Flink[273].Flink);
    }
    KeAbPostRelease((unsigned __int64)&Flink[273]);
    KeLeaveCriticalRegion();
    return v19;
  }
  else
  {
    *a3 = a2;
    return 0LL;
  }
}

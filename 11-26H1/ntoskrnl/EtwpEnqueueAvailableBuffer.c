/*
 * XREFs of EtwpEnqueueAvailableBuffer @ 0x140219758
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1402191F4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x140219B3C (EtwpAllocateFreeBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406CC2F0 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1406CC34C (EtwpRotateCompressionTarget.c)
 *     EtwpFlushActiveBuffers @ 0x140A133D8 (EtwpFlushActiveBuffers.c)
 *     EtwpCompleteBuffer @ 0x140ADFA18 (EtwpCompleteBuffer.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     EtwpBufferQueueRemoveAfter @ 0x14048F94C (EtwpBufferQueueRemoveAfter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpEnqueueAvailableBuffer(__int64 a1, unsigned int *a2, unsigned int a3)
{
  ULONG_PTR v3; // rax
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  volatile signed __int32 *v9; // rcx
  _QWORD *v10; // rcx
  signed __int64 *v11; // rdi
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  signed __int64 v14; // rtt
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // rdi
  _QWORD *v20; // rdx
  __int64 v21; // r9
  _QWORD *v22; // rcx
  _QWORD *v23; // rsi
  _QWORD *v24; // r10
  int v25; // eax
  _QWORD *v26; // r9

  v3 = *a2;
  v6 = *(unsigned int *)(a1 + 4);
  CurrentIrql = 0;
  if ( (_DWORD)v6 != (_DWORD)v3 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, (unsigned int)v6, v3);
  a2[11] = a3;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 808));
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v17 = KeAbPreAcquire((struct _KTHREAD *)(a1 + 696), 0LL);
    v19 = (AutoBoost *)v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 696), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 696, v17, a1 + 696);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v6, 15LL);
    }
    v9 = (volatile signed __int32 *)(a1 + 696);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v9, 0LL) )
        KxWaitForSpinLockAndAcquire(v9);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v9);
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0
    || (v20 = (_QWORD *)(a1 + 56), (v21 = *(_QWORD *)(a1 + 56)) == 0)
    || a3 == 4 )
  {
    v10 = a2 + 8;
    goto LABEL_13;
  }
  v22 = (_QWORD *)(a1 + 48);
  if ( a3 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      v25 = *(_DWORD *)(v21 + 12);
      if ( v24 )
      {
        if ( v25 != 6 )
        {
LABEL_49:
          v20 = (_QWORD *)v21;
          goto LABEL_44;
        }
      }
      else if ( !v25 )
      {
        goto LABEL_49;
      }
      v24 = v20;
      if ( v25 != 6 )
        goto LABEL_49;
      EtwpBufferQueueRemoveAfter(v22);
      *v26 = *(_QWORD *)(a1 + 1448);
      *(_QWORD *)(a1 + 1448) = v26;
LABEL_44:
      v21 = *v20;
      if ( !*v20 )
      {
        v10 = a2 + 8;
        if ( v24 )
        {
          *v10 = *v24;
          *v24 = v10;
          if ( v24 != *(_QWORD **)(a1 + 48) )
            goto LABEL_15;
LABEL_14:
          *(_QWORD *)(a1 + 48) = v10;
          goto LABEL_15;
        }
LABEL_13:
        *v10 = 0LL;
        **(_QWORD **)(a1 + 48) = v10;
        goto LABEL_14;
      }
    }
  }
  v23 = a2 + 8;
  *v23 = v21;
  *(_QWORD *)(a1 + 56) = v23;
  if ( a1 + 56 == *(_QWORD *)(a1 + 48) )
    *v22 = v23;
LABEL_15:
  v11 = (signed __int64 *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _m_prefetchw(v11);
    v12 = *v11;
    v13 = *v11 - 16;
    if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (v12 & 2) != 0 || (v14 = *v11, v14 != _InterlockedCompareExchange64(v11, v13, v12)) )
      ExfReleasePushLock(a1 + 696, v13);
    result = KeAbPostRelease((struct _KTHREAD *)(a1 + 696));
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 696));
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  return result;
}

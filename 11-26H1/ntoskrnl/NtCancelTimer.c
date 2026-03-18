/*
 * XREFs of NtCancelTimer @ 0x1406CF780
 * Callers:
 *     DifNtCancelTimerWrapper @ 0x14066E780 (DifNtCancelTimerWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpSetTimerObject2 @ 0x1403A9988 (ExpSetTimerObject2.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ObDereferenceObjectExWithTag2 @ 0x14047F848 (ObDereferenceObjectExWithTag2.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     ExpCancelTimer @ 0x1406CECB0 (ExpCancelTimer.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1408F9EF0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtCancelTimer(HANDLE Handle, _BYTE *a2)
{
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v5; // rdx
  int v6; // r14d
  _QWORD *v7; // rsi
  struct _OBJECT_TYPE *v8; // rcx
  KIRQL v9; // al
  _QWORD *v10; // r12
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  volatile unsigned __int8 *v13; // rdx
  AutoBoost *v14; // r12
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int16 v21[2]; // [rsp+40h] [rbp-68h] BYREF
  int v22[3]; // [rsp+44h] [rbp-64h] BYREF
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  _QWORD *v25; // [rsp+60h] [rbp-48h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+10h]
  char v27; // [rsp+C0h] [rbp+18h]

  Object = 0LL;
  v27 = 0;
  v21[0] = 0;
  v22[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    LOBYTE(v5) = RtlReadUCharFromUser(a2);
    RtlWriteUCharToUser(a2, v5);
  }
  v6 = ObReferenceObjectByHandleWithTag(Handle, 2u, 0LL, PreviousMode, 0x634E6954u, &Object, 0LL);
  v22[1] = v6;
  v7 = Object;
  if ( v6 >= 0 )
  {
    v8 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v8 == ExpIRTimerObjectType )
    {
      if ( a2 )
        v6 = -1073741811;
      else
        v6 = ExpSetTimerObject2((__int64)Object, 0LL, 0LL, 0LL);
    }
    else if ( v8 == (struct _OBJECT_TYPE *)ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
      NewIrql = v9;
      v10 = (_QWORD *)v7[32];
      v25 = v10;
      if ( v10 )
      {
        KeReleaseSpinLock(v7 + 8, v9);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v12 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime, 0LL, 0LL, v11);
        v14 = v12;
        if ( _interlockedbittestandset64(
               (volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
               0LL) )
        {
          ExfAcquirePushLockExclusiveEx(
            &ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
            v12,
            (__int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
        }
        if ( v14 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            LOBYTE(v13) = 2;
            AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v14 + 33), v13, 1);
          }
          else
          {
            *((_BYTE *)v14 + 10) = 1;
          }
        }
        v27 = 1;
        NewIrql = KeAcquireSpinLockRaiseToDpc(v7 + 8);
        v10 = (_QWORD *)v7[32];
        v25 = v10;
        v7[32] = 0LL;
      }
      ExpCancelTimer((PKTIMER)v7, v21, v22);
      KeReleaseSpinLock(v7 + 8, NewIrql);
      if ( v27 )
      {
        if ( v10 )
        {
          v16 = v7 + 33;
          v17 = v7[33];
          v18 = (_QWORD *)v7[34];
          if ( *(_QWORD **)(v17 + 8) != v7 + 33 || (_QWORD *)*v18 != v16 )
            __fastfail(3u);
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          *v16 = 0LL;
        }
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
        KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19);
      }
      if ( a2 )
        *a2 = *((_DWORD *)v7 + 1);
      if ( v10 )
        PoDestroyReasonContext(v10);
      if ( v21[0] > 0 )
        ObDereferenceObjectExWithTag2((ULONG_PTR)v7, v21[0], 0x44695445u, 1);
      if ( v22[0] > 0 )
        ObDereferenceObjectExWithTag2((ULONG_PTR)v7, v22[0], 0x41695445u, 1);
    }
    else
    {
      v6 = -1073741788;
    }
  }
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x634E6954u);
  return (unsigned int)v6;
}

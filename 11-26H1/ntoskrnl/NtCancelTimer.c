/*
 * XREFs of NtCancelTimer @ 0x1406D37B0
 * Callers:
 *     DifNtCancelTimerWrapper @ 0x140672360 (DifNtCancelTimerWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpSetTimerObject2 @ 0x1403B3598 (ExpSetTimerObject2.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     ExpCancelTimer @ 0x1406D2CE0 (ExpCancelTimer.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v5; // rdx
  NTSTATUS v6; // r14d
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
  if ( CurrentState && PreviousMode )
  {
    LOBYTE(v5) = RtlReadUCharFromUser(CurrentState);
    RtlWriteUCharToUser(CurrentState, v5);
  }
  v6 = ObReferenceObjectByHandleWithTag(TimerHandle, 2u, 0LL, PreviousMode, 0x634E6954u, &Object, 0LL);
  v22[1] = v6;
  v7 = Object;
  if ( v6 >= 0 )
  {
    v8 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v8 == ExpIRTimerObjectType )
    {
      if ( CurrentState )
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
        v12 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.1008, 0LL, 0LL, v11);
        v14 = v12;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.1008, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.1008,
            v12,
            (__int64)&ExSaPageGroupDescriptorArrayLock.1008);
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
                (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.1008);
        KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.1008);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19);
      }
      if ( CurrentState )
        *CurrentState = *((_DWORD *)v7 + 1);
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
  return v6;
}

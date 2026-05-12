/*
 * XREFs of RaidResumeAdapterQueue @ 0x140010650
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x140010118 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterCancelPauseTimer @ 0x1400495EC (RaidAdapterCancelPauseTimer.c)
 *     StorPortAdapterActiveCondition @ 0x1400553B0 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterSetPauseTimer @ 0x140068E50 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x14006C160 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x14006CF40 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x14007B250 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x14007BE90 (StorPortPause.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     StorAcquireLockForAllGateways @ 0x1400AED38 (StorAcquireLockForAllGateways.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  char v5; // bp
  KSPIN_LOCK *v7; // rcx
  signed __int32 v8; // ebx
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v14; // esi
  __int64 i; // rsi
  __int64 *j; // r14
  KIRQL v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rax
  __int16 v20; // cx
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v25[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v26; // [rsp+70h] [rbp-48h]
  __int64 v27; // [rsp+80h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 1032);
  LOBYTE(a4) = 0;
  v5 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v24, 0, sizeof(v24));
  if ( (_BYTE)a2 )
  {
    v7 = *(KSPIN_LOCK **)(a1 + 1024);
    if ( v7 )
    {
      if ( v4 <= 1 )
      {
        KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
        v8 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1052));
LABEL_5:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_6;
      }
      LOBYTE(a4) = StorAcquireLockForAllGateways(
                     a1,
                     a2,
                     a3,
                     a4,
                     LockHandle.LockQueue.Next,
                     LockHandle.LockQueue.Lock,
                     *(_QWORD *)&LockHandle.OldIrql,
                     v24.LockQueue.Next,
                     v24.LockQueue.Lock,
                     *(_QWORD *)&v24.OldIrql);
    }
  }
  v8 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1052));
  if ( (_BYTE)a4 )
  {
    if ( v4 <= 1 )
      goto LABEL_5;
    if ( *(_QWORD *)(a1 + 6136) )
    {
      v14 = *(_DWORD *)(a1 + 1032);
      if ( v14 )
      {
        for ( i = (unsigned int)(v14 - 1); (_DWORD)i != -1; i = (unsigned int)(i - 1) )
          KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6136) + 24 * i));
      }
    }
  }
LABEL_6:
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    if ( !v5 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &v24);
    for ( j = *(__int64 **)(a1 + 144); j != (__int64 *)(a1 + 144); j = (__int64 *)*j )
    {
      memset(v25, 0, sizeof(v25));
      v27 = 0LL;
      v26 = 0LL;
      if ( *(j - 4) && (unsigned __int8)RaidIsUnitControlSupported(j - 8, 31LL) )
      {
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(j - 4) + 24));
        --*(_DWORD *)(*(j - 4) + 84);
        v18 = *(j - 4);
        if ( (*(_DWORD *)(v18 + 80) & 0x1E0) == 0 && *(int *)(v18 + 84) <= 0 )
        {
          *(_QWORD *)&v25[0] = 0x3800000038LL;
          DWORD2(v25[0]) = 3;
          if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline() )
          {
            v19 = *(j - 5);
            WORD4(v26) = 1;
            HIDWORD(v26) = 4;
            v20 = *(_WORD *)(v19 + 56);
            LOWORD(v27) = *((_WORD *)j + 20);
            BYTE2(v27) = *((_BYTE *)j + 42);
            WORD5(v26) = v20;
          }
          v21 = (_DWORD *)*(j - 5);
          if ( *v21 == 1094997074 )
          {
            v22 = v21 + 94;
          }
          else if ( *v21 == 1314275652 )
          {
            v22 = v21 + 42;
          }
          else
          {
            v22 = 0LL;
          }
          RaCallMiniportUnitControl(v22, 31LL, v25);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(*(j - 4) + 24), v17);
      }
    }
    if ( !v5 )
      KeReleaseInStackQueuedSpinLock(&v24);
  }
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v9 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v10 = *(_DWORD *)(a1 + 4996);
      if ( v10 )
      {
        v11 = *(_QWORD *)(a1 + 5000);
        if ( v11 )
        {
          v12 = v11 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4992)) % v10);
          *(_DWORD *)v12 = 7;
          *(_QWORD *)(v12 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v12 + 16) = v8;
          *(_QWORD *)(v12 + 8) = retaddr;
          *(_QWORD *)(v12 + 24) = a1;
          *(_QWORD *)(v12 + 32) = v9;
        }
      }
    }
  }
  return (unsigned int)v8;
}

/*
 * XREFs of StorResumeIoGateway @ 0x14002BBC0
 * Callers:
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     StorAcquireLockForAllGateways @ 0x1400AED38 (StorAcquireLockForAllGateways.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorResumeIoGateway(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  char v5; // bp
  KSPIN_LOCK *v7; // rcx
  unsigned __int32 v8; // ebx
  int v10; // esi
  __int64 i; // rsi
  __int64 *v12; // r14
  __int64 *j; // rdi
  KIRQL v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  KIRQL v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax
  __int16 v21; // cx
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v26[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v27; // [rsp+70h] [rbp-48h]
  __int64 v28; // [rsp+80h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 1032);
  LOBYTE(a4) = 0;
  v5 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v25, 0, sizeof(v25));
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
                     v25.LockQueue.Next,
                     v25.LockQueue.Lock,
                     *(_QWORD *)&v25.OldIrql);
    }
  }
  v8 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1052));
  if ( (_BYTE)a4 )
  {
    if ( v4 <= 1 )
      goto LABEL_5;
    if ( *(_QWORD *)(a1 + 6136) )
    {
      v10 = *(_DWORD *)(a1 + 1032);
      if ( v10 )
      {
        for ( i = (unsigned int)(v10 - 1); (_DWORD)i != -1; i = (unsigned int)(i - 1) )
          KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6136) + 24 * i));
      }
    }
  }
LABEL_6:
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    if ( !v5 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &v25);
    v12 = (__int64 *)(a1 + 144);
    for ( j = *(__int64 **)(a1 + 144); j != v12; j = (__int64 *)*j )
    {
      memset(v26, 0, sizeof(v26));
      v28 = 0LL;
      v27 = 0LL;
      if ( *(j - 4) && RaidIsUnitControlSupported((__int64)(j - 8), 31) )
      {
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(j - 4) + 24));
        v17 = *(j - 4);
        v18 = v14;
        --*(_DWORD *)(v17 + 84);
        v19 = *(j - 4);
        if ( (*(_DWORD *)(v19 + 80) & 0x1E0) == 0 && *(int *)(v19 + 84) <= 0 )
        {
          *(_QWORD *)&v26[0] = 0x3800000038LL;
          DWORD2(v26[0]) = 3;
          if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(
                               v17,
                               v19,
                               v15,
                               v16,
                               LockHandle.LockQueue.Next,
                               LockHandle.LockQueue.Lock,
                               *(_QWORD *)&LockHandle.OldIrql) )
          {
            v20 = *(j - 5);
            WORD4(v27) = 1;
            HIDWORD(v27) = 4;
            v21 = *(_WORD *)(v20 + 56);
            LOWORD(v28) = *((_WORD *)j + 20);
            BYTE2(v28) = *((_BYTE *)j + 42);
            WORD5(v27) = v21;
          }
          v22 = (_DWORD *)*(j - 5);
          if ( *v22 == 1094997074 )
          {
            v23 = v22 + 94;
          }
          else if ( *v22 == 1314275652 )
          {
            v23 = v22 + 42;
          }
          else
          {
            v23 = 0LL;
          }
          RaCallMiniportUnitControl(v23, 31LL, v26);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(*(j - 4) + 24), v18);
      }
    }
    if ( !v5 )
      KeReleaseInStackQueuedSpinLock(&v25);
  }
  return v8;
}

/*
 * XREFs of PopDequeueQuerySetIrp @ 0x1403B3D2C
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403B46F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140C0DBB0 (PopSystemIrpCompletion.c)
 * Callees:
 *     PopDiagTraceIrpStart @ 0x140218C6C (PopDiagTraceIrpStart.c)
 *     PopDiagTraceIrpFinish @ 0x14021A300 (PopDiagTraceIrpFinish.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopEnableIrpWatchdog @ 0x1403AACCC (PopEnableIrpWatchdog.c)
 *     PopCompleteIrpWatchdog @ 0x1403B3FD0 (PopCompleteIrpWatchdog.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 *     PopDisableIrpWatchdog @ 0x1404DCE04 (PopDisableIrpWatchdog.c)
 */

void __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  bool v6; // zf
  _QWORD *v7; // rcx
  __int64 *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // bl
  __int64 *v11; // rax
  IRP *v12; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 v14; // rdx
  __int64 ***v15; // rcx
  _QWORD *v16; // rax
  __int64 *v17; // rdx
  _QWORD *v18; // rax
  __int64 *v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 ***v24; // rcx
  _QWORD *v25; // rax
  __int64 *v26; // [rsp+20h] [rbp-30h] BYREF
  __int64 **v27; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopDiagTraceIrpFinish(a1);
  PopCompleteIrpWatchdog(a1);
  v27 = &v26;
  v26 = (__int64 *)&v26;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(qword_140F10540, &LockHandle);
  v5 = (_QWORD *)(v4 + 264);
  v6 = *(_DWORD *)(v2 + 188) == 0;
  stru_140F10070.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  if ( v6 && *(_BYTE *)(v2 + 184) == 2 && *(int *)(v2 + 192) > 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(v4 + 296), 0x8000u);
    if ( *v5 )
      PopDisableIrpWatchdog();
  }
  if ( *(_DWORD *)(v2 + 188) != 1 )
    v5 = (_QWORD *)(v4 + 280);
  v6 = a1 == qword_140F0FB50;
  *v5 = 0LL;
  if ( v6 )
  {
    v17 = (__int64 *)qword_140F10560;
    qword_140F0FB50 = 0LL;
    while ( 1 )
    {
      if ( v17 == &qword_140F10560 )
        goto LABEL_7;
      v19 = v17 - 21;
      v20 = *(_QWORD *)(v17[9 * *((char *)v17 - 102) + 4] + 24);
      v21 = v20 ? *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL) : 0LL;
      if ( !*(_QWORD *)(v21 + 264) && *(__int64 **)(v21 + 272) == v19 )
        break;
      v17 = (__int64 *)*v17;
    }
    v22 = *v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      goto LABEL_27;
    v23 = (__int64 *)v17[1];
    if ( (__int64 *)*v23 != v17 )
      goto LABEL_27;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    v24 = (__int64 ***)(v19 + 15);
    *(_QWORD *)(v21 + 264) = v19;
    *(_QWORD *)(v21 + 272) = v19[15];
    v25 = v27;
    qword_140F0FB50 = (__int64)(v17 - 21);
    if ( *v27 != (__int64 *)&v26 )
      goto LABEL_27;
    v19[16] = (__int64)v27;
    *v24 = &v26;
    *v25 = v24;
    v27 = (__int64 **)(v19 + 15);
  }
LABEL_7:
  if ( *v5 )
    goto LABEL_9;
  v7 = (_QWORD *)v5[1];
  if ( !v7 )
    goto LABEL_9;
  v14 = v7[21];
  if ( (_QWORD *)v14 == v7 + 21 )
    goto LABEL_26;
  if ( qword_140F0FB50 )
    goto LABEL_9;
  qword_140F0FB50 = v5[1];
  if ( *(_QWORD **)(v14 + 8) != v7 + 21 || (v18 = (_QWORD *)v7[22], (_QWORD *)*v18 != v7 + 21) )
LABEL_27:
    __fastfail(3u);
  *v18 = v14;
  *(_QWORD *)(v14 + 8) = v18;
LABEL_26:
  *v5 = v7;
  v15 = (__int64 ***)(v7 + 15);
  v5[1] = *v15;
  v16 = v27;
  if ( *v27 != (__int64 *)&v26 )
    goto LABEL_27;
  v15[1] = v27;
  *v15 = &v26;
  *v16 = v15;
  v27 = (__int64 **)v15;
LABEL_9:
  stru_140F10070.ApcState.ApcListHead[1].Flink = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    v8 = v26;
    if ( v26 == (__int64 *)&v26 )
      break;
    if ( (__int64 **)v26[1] != &v26 )
      goto LABEL_27;
    v11 = (__int64 *)*v26;
    if ( *(__int64 **)(*v26 + 8) != v26 )
      goto LABEL_27;
    v26 = (__int64 *)*v26;
    v11[1] = (__int64)&v26;
    v12 = (IRP *)(v8 - 15);
    DeviceObject = v12->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart((__int64)&v26, (__int64)v12);
    PopEnableIrpWatchdog((__int64)v12);
    IofCallDriver(DeviceObject, v12);
  }
  if ( *(_BYTE *)(v2 + 184) == 2 && *(_DWORD *)(v2 + 188) == 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&qword_140F10570);
    v6 = dword_140F0FB44-- == 1;
    v10 = v9;
    if ( v6 )
    {
      PopDeepSleepClearDisengageReason(2LL);
      if ( !byte_140F0FB48 )
      {
        byte_140F0FB48 = 1;
        ExQueueWorkItem(&qword_140F10580, DelayedWorkQueue);
      }
    }
    KeReleaseSpinLock(&qword_140F10570, v10);
  }
}

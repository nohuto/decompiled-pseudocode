/*
 * XREFs of PopWakeDeviceList @ 0x1404B2F38
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopIsNotifyForDirectedPowerTransition @ 0x1404B33D8 (PopIsNotifyForDirectedPowerTransition.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopIssueDirectedPowerTransition @ 0x140B5D89C (PopIssueDirectedPowerTransition.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140C03138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopNotifyDevice @ 0x140C13C14 (PopNotifyDevice.c)
 */

int __fastcall PopWakeDeviceList(_QWORD *a1, __int64 a2)
{
  int v4; // r12d
  _QWORD *v5; // r15
  int v6; // r14d
  int v7; // ecx
  _QWORD *v8; // rax
  int v9; // ebx
  _BYTE *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v16[4]; // [rsp+50h] [rbp-11h] BYREF
  int v17; // [rsp+54h] [rbp-Dh]
  _QWORD v18[2]; // [rsp+58h] [rbp-9h] BYREF
  int v19; // [rsp+68h] [rbp+7h]
  int v20; // [rsp+6Ch] [rbp+Bh]
  _BYTE Object[4]; // [rsp+70h] [rbp+Fh] BYREF
  int v22; // [rsp+74h] [rbp+13h]
  _QWORD v23[2]; // [rsp+78h] [rbp+17h] BYREF
  int v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+8Ch] [rbp+2Bh]

  v16[1] = 0;
  v16[3] = 0;
  v20 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Object[1] = 0;
  Object[3] = 0;
  v25 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) != 0 )
    v4 = -1073741779;
  else
    v4 = PopPushPowerStateTransitionRecordWithCallback(
           KeGetCurrentThread()->ApcState.Process,
           KeGetCurrentThread(),
           (__int64)PopBroadcastBlameBugcheckCallback);
  v5 = (_QWORD *)(a2 + 40);
  v6 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 4);
  v7 = 0;
  v8 = *(_QWORD **)(a2 + 40);
  v9 = 0;
  while ( v8 != v5 )
  {
    v8 = (_QWORD *)*v8;
    ++v7;
  }
  Object[0] = 5;
  v23[1] = v23;
  v23[0] = v23;
  v18[1] = v18;
  v18[0] = v18;
  a1[4] = Object;
  v10 = v16;
  a1[5] = v16;
  Object[2] = 8;
  v22 = v7;
  v24 = v6;
  v16[0] = 5;
  v16[2] = 8;
  v17 = 0;
  v19 = v6;
  if ( v6 > 0 )
  {
    do
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140F103F0 + 1, &LockHandle);
      v11 = (_QWORD *)*v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5
        || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11)
        || (*v5 = v12, *(_QWORD *)(v12 + 8) = v5, v13 = (_QWORD *)a1[55], (_QWORD *)*v13 != a1 + 54) )
      {
        __fastfail(3u);
      }
      v11[1] = v13;
      *v11 = a1 + 54;
      *v13 = v11;
      a1[55] = v11;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      --v6;
      ++v9;
      if ( (unsigned __int8)PopIsNotifyForDirectedPowerTransition(v11) )
        LODWORD(v10) = PopIssueDirectedPowerTransition(a1, v11);
      else
        LODWORD(v10) = PopNotifyDevice(a1, v11);
      if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x80000) != 0 )
      {
        while ( v9 > 0 )
        {
          LODWORD(v10) = KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
          --v9;
        }
      }
    }
    while ( v6 > 0 );
    while ( v9 > 0 )
    {
      LODWORD(v10) = KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
      --v9;
    }
  }
  if ( v4 >= 0 )
    LODWORD(v10) = PoDelistPowerStateTransitionBlocker();
  a1[4] = 0LL;
  a1[5] = 0LL;
  return (int)v10;
}

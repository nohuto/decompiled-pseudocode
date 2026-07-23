/*
 * XREFs of PopSystemIrpCompletion @ 0x140C13DC0
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x1404D4680 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxNotifyPendingSIrpReady @ 0x140607E58 (PopFxNotifyPendingSIrpReady.c)
 *     PopFxUnregisterDevice @ 0x140B08758 (PopFxUnregisterDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     PopDequeueQuerySetIrp @ 0x1403BDC38 (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x1403BFDEC (PopFreeIrp.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxLockDevice @ 0x1403C13A4 (PopFxLockDevice.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1404AB6C8 (PopCompleteNotifyTransitionCommon.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1404C88C0 (PopFxIncrementDeviceSleepCount.c)
 *     IoFindDeviceThatFailedIrp @ 0x1404CD600 (IoFindDeviceThatFailedIrp.c)
 *     PopDiagTraceIrpPended @ 0x140509520 (PopDiagTraceIrpPended.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x140603CFC (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 *     PopFxNotifyPostSIrpCompletion @ 0x140607EA8 (PopFxNotifyPostSIrpCompletion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 DeviceThatFailedIrp; // rdi
  __int64 *v5; // r14
  __int64 v6; // rbp
  int v7; // ebx
  NTSTATUS Status; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ebp
  KIRQL v12; // al
  __int64 v13; // r8
  KIRQL v14; // bp
  int v15; // ebp
  PRKSEMAPHORE *v16; // rbx
  IRP *v18; // [rsp+30h] [rbp-48h] BYREF
  NTSTATUS v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v21[2]; // [rsp+40h] [rbp-38h] BYREF

  DeviceThatFailedIrp = 0LL;
  v5 = *(__int64 **)(a3 + 216);
  v6 = *((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10);
  v7 = *(_DWORD *)(v6 + 192);
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v20 = 0;
    v18 = a2;
    v19 = Status;
    v21[1] = 16LL;
    v21[0] = &v18;
    EtwTraceKernelEvent((int)v21, 1, 0x80008000, 4647, 5249026);
  }
  if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
  {
    if ( *(_BYTE *)(v6 + 184) == 2 )
    {
      v9 = PopFxLockDevice((__int64)(v5 - 20), 0, 0);
      v10 = v9;
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 136) ? PopFxNotifyPostSIrpCompletion(v9, (__int64)a2) : 0;
        PopFxDereferenceDevice(v10, 0);
        if ( v11 == 259 )
          return 3221225494LL;
      }
    }
  }
  else if ( v7 == 1 )
  {
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5 - 18);
    v13 = *(v5 - 10);
    v14 = v12;
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 136) )
      {
        _m_prefetchw((const void *)(v13 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) & 0x800) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x400u);
          PopDiagTraceIrpPended((__int64)a2);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v5 - 18, v14);
          return 3221225494LL;
        }
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v5 - 18, v12);
  }
  v15 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) == 0 )
    v15 = a2->IoStatus.Status;
  if ( v15 < 0 )
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v16 = (PRKSEMAPHORE *)qword_140F103F0;
  if ( (*(_BYTE *)qword_140F103F0 == 2 || *(_BYTE *)qword_140F103F0 == 3) && *((int *)qword_140F103F0 + 1) > 1 )
  {
    Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline();
    PopFxIncrementDeviceSleepCount(*(v5 - 16));
    ObfDereferenceObjectWithTag((PVOID)*(v5 - 16), 0x72496F50u);
  }
  PopCompleteNotifyTransitionCommon((__int64)v16, v5, v15, DeviceThatFailedIrp);
  KeReleaseSemaphore(v16[5], 0, 1, 0);
  return 3221225494LL;
}

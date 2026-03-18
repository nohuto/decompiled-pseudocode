/*
 * XREFs of PiDrvDbLoadNode @ 0x140A78308
 * Callers:
 *     PiDrvDbNodeActionCallback @ 0x140A781E0 (PiDrvDbNodeActionCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404E091C (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwWaitForSingleObject @ 0x140723470 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall PiDrvDbLoadNode(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  NTSTATUS v10; // eax
  int v11; // edi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 80) )
  {
    v4 = -1073740697;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 488) )
    {
      KeCancelTimer((PKTIMER)(a1 + 264));
      *(_BYTE *)(a1 + 488) = 0;
    }
    v6 = (_QWORD *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 72) )
    {
      v4 = RegRtlOpenKeyTransacted(0LL, *(const WCHAR **)(a1 + 40), 0, 0x2000000u, &Handle, 0LL);
      if ( v4 >= 0 )
      {
        v4 = PnpCtxRegOpenKey(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72);
        ZwClose(Handle);
      }
      if ( v4 < 0 )
      {
        if ( PnpShutdownEvent.Header.SignalState )
        {
          v4 = -1073741077;
          goto LABEL_6;
        }
        v10 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
        v11 = v10;
        if ( !*(_BYTE *)(a1 + 489) )
        {
          *(_BYTE *)(a1 + 489) = 1;
          PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop, (unsigned __int16 *)(a1 + 16), v10);
          PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, (unsigned __int16 *)(a1 + 16), v11);
        }
        *(_QWORD *)(a1 + 248) = a1;
        *(_QWORD *)(a1 + 240) = PiDrvDbLoadNodeWorkerCallback;
        *(_QWORD *)(a1 + 224) = 0LL;
        KeInitializeEvent((PRKEVENT)(a1 + 200), SynchronizationEvent, 0);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 224), CriticalWorkQueue);
        KeWaitForSingleObject((PVOID)(a1 + 200), Executive, 0, 0, 0LL);
        if ( *v6 )
        {
          v4 = 0;
        }
        else if ( *(_BYTE *)(a1 + 80) )
        {
          v4 = -1073740697;
        }
        else
        {
          v4 = -1073741823;
          if ( *(int *)(a1 + 256) < 0 )
            v4 = *(_DWORD *)(a1 + 256);
        }
      }
    }
    *a2 = *v6;
  }
LABEL_6:
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8);
  return (unsigned int)v4;
}

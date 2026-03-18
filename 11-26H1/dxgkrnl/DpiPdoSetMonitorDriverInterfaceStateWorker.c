/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceStateWorker @ 0x1404222F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoSetMonitorDriverInterfaceStateWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v7; // rax
  IRP *v8; // rsi
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_140169228, Executive, 0, 0, 0LL);
    v4 = (PDEVICE_OBJECT *)qword_140169260;
    if ( (__int64 *)qword_140169260 == &qword_140169260 )
    {
      v4 = 0LL;
      byte_140169220 = 0;
    }
    else
    {
      if ( *(__int64 **)(qword_140169260 + 8) != &qword_140169260
        || (v5 = *(_QWORD *)qword_140169260, *(_QWORD *)(*(_QWORD *)qword_140169260 + 8LL) != qword_140169260) )
      {
        __fastfail(3u);
      }
      qword_140169260 = *(_QWORD *)qword_140169260;
      *(_QWORD *)(v5 + 8) = &qword_140169260;
    }
    KeReleaseMutex(&stru_140169228, 0);
    if ( !v4 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v4[2]);
    if ( !AttachedDeviceReference )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4362;
      goto LABEL_19;
    }
    v7 = IoBuildDeviceIoControlRequest(
           0x232437u,
           AttachedDeviceReference,
           v4 + 3,
           1u,
           0LL,
           0,
           1u,
           &Object,
           &IoStatusBlock);
    v8 = v7;
    if ( v7 )
    {
      v7->IoStatus.Status = -1073741637;
      KeClearEvent(&Object);
      Status = IofCallDriver(AttachedDeviceReference, v8);
      if ( Status != 259 )
        goto LABEL_16;
      if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL) )
      {
        Status = IoStatusBlock.Status;
LABEL_16:
        if ( Status < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4418;
        }
        goto LABEL_18;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4406;
    }
    else
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 4386;
    }
LABEL_18:
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_19:
    ObfDereferenceObject(v4[2]);
    ExFreePoolWithTag(v4, 0);
  }
  IoFreeWorkItem(IoWorkItem);
}

/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x14024CEB8
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x14024C490 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x140013EF0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DpiMiracastSendAsyncUserModeRequest(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        PDEVICE_OBJECT DeviceObject,
        IRP **a11)
{
  _QWORD *v14; // rbx
  void *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 Pool2; // rax
  _QWORD *v22; // r14
  PIRP Irp; // rax
  IRP *v24; // rbx
  struct _IO_STACK_LOCATION *v26; // rax
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  char v32; // [rsp+88h] [rbp+10h]
  int v33; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]
  __int64 CurrentStackLocation; // [rsp+D0h] [rbp+58h]

  v33 = a3;
  v32 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(0LL, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( (struct _KTHREAD *)a1[11] == KeGetCurrentThread() )
  {
    v14 = a1 + 11;
  }
  else
  {
    v32 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    v14 = a1 + 11;
    a1[11] = KeGetCurrentThread();
  }
  v15 = (void *)a1[22];
  DeviceObjecta = (PDEVICE_OBJECT)a1[23];
  if ( v15 )
    ObfReferenceObject(v15);
  if ( v32 )
  {
    *v14 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v15 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3373;
    v18 = -1073741130;
    goto LABEL_35;
  }
  v19 = Size;
  if ( (unsigned int)Size <= a7 )
    v19 = a7;
  v20 = v19 + 64;
  if ( v20 < 0x40 )
  {
    v18 = -1073741675;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3394;
    goto LABEL_34;
  }
  Pool2 = ExAllocatePool2(64LL, v20, 1953656900LL);
  v22 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v18 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3415;
LABEL_34:
    ObfDereferenceObject(v15);
    goto LABEL_35;
  }
  *(_QWORD *)Pool2 = v15;
  *(_QWORD *)(Pool2 + 8) = a1[12];
  *(_QWORD *)(Pool2 + 32) = a8;
  *(_QWORD *)(Pool2 + 40) = a9;
  *(_DWORD *)(Pool2 + 56) = a11 == 0LL;
  Irp = IoAllocateIrp(DeviceObjecta->StackSize, 0);
  v24 = Irp;
  if ( !Irp )
  {
    v18 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3440;
    ExFreePoolWithTag(v22, 0);
    goto LABEL_34;
  }
  CurrentStackLocation = (__int64)Irp->Tail.Overlay.CurrentStackLocation;
  *(_BYTE *)(CurrentStackLocation - 72) = 14;
  *(_DWORD *)(CurrentStackLocation - 64) = a7;
  *(_DWORD *)(CurrentStackLocation - 56) = Size;
  *(_DWORD *)(CurrentStackLocation - 48) = v33;
  if ( !a7 )
    a6 = 0LL;
  v24->UserBuffer = a6;
  v22[6] = a6;
  if ( (_DWORD)Size || a7 )
  {
    v24->AssociatedIrp.MasterIrp = (struct _IRP *)(v22 + 8);
    if ( (_DWORD)Size )
      memmove(v22 + 8, a4, (unsigned int)Size);
  }
  *(_QWORD *)(CurrentStackLocation - 24) = v15;
  v26 = v24->Tail.Overlay.CurrentStackLocation;
  v26[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
  v26[-1].Context = v22;
  v26[-1].Control = -32;
  if ( a11 )
    *a11 = v24;
  v18 = IofCallDriver(DeviceObjecta, v24);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 1;
LABEL_35:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
  {
    LODWORD(v31) = v18;
    LODWORD(v30) = a7;
    LODWORD(v29) = Size;
    LODWORD(v28) = 0;
    McTemplateK0pqtqq_EtwWriteTransfer(v16, &EventLeaveMiracastSendUserModeRequest, v17, a1[12], v28, v29, v30, v31);
  }
  return v18;
}

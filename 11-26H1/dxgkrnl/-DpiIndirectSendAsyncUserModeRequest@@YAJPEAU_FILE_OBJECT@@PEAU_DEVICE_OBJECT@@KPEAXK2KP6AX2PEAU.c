/*
 * XREFs of ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1403FCE48
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1403FCD40 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1400553D4 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DpiIndirectSendAsyncUserModeRequest(
        struct _FILE_OBJECT *Object,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3,
        void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        void (*a8)(void *, struct _IO_STATUS_BLOCK *),
        void *a9)
{
  size_t v12; // rdi
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 Pool2; // rax
  _QWORD *v17; // rbx
  NTSTATUS v18; // esi
  PIRP Irp; // rax
  IRP *v20; // rsi
  __int64 result; // rax
  unsigned int v22; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  void *v24; // rax
  struct _IO_STACK_LOCATION *v25; // rax
  void *v26; // [rsp+50h] [rbp+8h] BYREF

  if ( Object )
  {
    v12 = (unsigned int)Size;
    v13 = a7;
    v14 = Size;
    if ( (unsigned int)Size <= a7 )
      v14 = a7;
    v15 = v14 + 56;
    if ( v15 < 0x38 )
    {
      v22 = -1073741675;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 721;
      return v22;
    }
    Pool2 = ExAllocatePool2(64LL, v15, 1953656900LL);
    v17 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = Object;
      *(_QWORD *)(Pool2 + 24) = a8;
      *(_QWORD *)(Pool2 + 32) = a9;
      *(_DWORD *)(Pool2 + 48) = 1;
      v18 = ObReferenceObjectByPointer(Object, 0x10000000u, (POBJECT_TYPE)IoFileObjectType, 0);
      if ( v18 < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 747;
        goto LABEL_9;
      }
      Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
      v20 = Irp;
      if ( !Irp )
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 759;
        ObfDereferenceObject(Object);
        v18 = -1073741801;
LABEL_9:
        ExFreePoolWithTag(v17, 0);
        return (unsigned int)v18;
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v24 = a6;
      if ( !v13 )
        v24 = 0LL;
      CurrentStackLocation[-1].MajorFunction = 14;
      CurrentStackLocation[-1].Parameters.Read.Length = v13;
      CurrentStackLocation[-1].Parameters.Create.Options = v12;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2296832;
      v20->UserBuffer = v24;
      v17[5] = v24;
      if ( (_DWORD)v12 || v13 )
      {
        v20->AssociatedIrp.MasterIrp = (struct _IRP *)(v17 + 7);
        if ( (_DWORD)v12 )
          memmove(v17 + 7, a4, v12);
      }
      CurrentStackLocation[-1].FileObject = Object;
      v25 = v20->Tail.Overlay.CurrentStackLocation;
      v26 = 0LL;
      v25[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiIndirectIoCompleteRoutine;
      v25[-1].Context = v17;
      v25[-1].Control = -32;
      v22 = IofCallDriver(DeviceObject, v20);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v26);
      return v22;
    }
    WdLogSingleEntry1(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 734;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 706;
  }
  return result;
}

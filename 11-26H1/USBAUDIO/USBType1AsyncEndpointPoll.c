/*
 * XREFs of USBType1AsyncEndpointPoll @ 0x140003EE0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14001CAC0 (memset.c)
 *     USBHwAbortOrResetPipe @ 0x14003BD84 (USBHwAbortOrResetPipe.c)
 */

void __fastcall USBType1AsyncEndpointPoll(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rsi
  ULONG_PTR v6; // r15
  struct _DEVICE_OBJECT *v7; // r14
  IRP *v8; // r12
  KIRQL v9; // al
  KIRQL v10; // bp
  _QWORD *v11; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v13; // rax
  KIRQL v14; // dl
  __int64 v15; // r10
  unsigned int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 v19; // rdx
  KIRQL v20; // al
  KIRQL v21; // bl

  v2 = (_QWORD *)Context[2];
  v4 = v2[19];
  v5 = v2 + 14;
  v6 = *(_QWORD *)(v4 + 880);
  v7 = *(struct _DEVICE_OBJECT **)(v2[2] + 40LL);
  v8 = *(IRP **)(v4 + 888);
  v9 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  v10 = v9;
  if ( *(_BYTE *)(v4 + 116) )
  {
    *(_BYTE *)(v4 + 933) = 1;
    KeReleaseSpinLock(v2 + 14, v9);
    if ( (int)USBHwAbortOrResetPipe(v7) < 0 )
    {
      v15 = v2[19];
      v16 = 0;
      v17 = v2[18];
      while ( 1 )
      {
        if ( v16 >= *(_DWORD *)(v15 + 56) )
          goto LABEL_13;
        v18 = *(_QWORD *)(v15 + 72);
        if ( *(_BYTE *)(v18 + 24LL * v16 + 2) == *(_BYTE *)(*(_QWORD *)(v17 + 176) + 2LL) )
          break;
        ++v16;
      }
      v19 = *(_QWORD *)(v18 + 24LL * v16 + 8);
      if ( !v19 || (v11 = (_QWORD *)(v4 + 904), *(_QWORD *)(v4 + 904) = v19, (int)USBHwAbortOrResetPipe(v7) < 0) )
      {
LABEL_13:
        v20 = KeAcquireSpinLockRaiseToDpc(v5);
        *(_BYTE *)(v4 + 933) = 0;
        v21 = v20;
        KeSetEvent((PRKEVENT)(v4 + 936), 0, 0);
        *(_BYTE *)(v4 + 932) = 0;
        KeSetEvent((PRKEVENT)(v4 + 960), 0, 0);
        v14 = v21;
        goto LABEL_6;
      }
    }
    else
    {
      v11 = (_QWORD *)(v4 + 904);
    }
    memset((void *)(v6 + 4), 0, 0xA0uLL);
    *(_DWORD *)v6 = 655524;
    *(_QWORD *)(v6 + 24) = *v11;
    *(_DWORD *)(v6 + 32) = 1;
    *(_DWORD *)(v6 + 128) = *(_DWORD *)(v4 + 912);
    *(_QWORD *)(v6 + 40) = v4 + 992;
    *(_DWORD *)(v6 + 132) = 1;
    *(_DWORD *)(v6 + 140) = 0;
    *(_DWORD *)(v6 + 36) = 3;
    IoInitializeIrp(v8, 72 * v7->StackSize + 208, v7->StackSize);
    CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = v6;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v13 = v8->Tail.Overlay.CurrentStackLocation;
    v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBType1AsyncEndpointPollCallback;
    v13[-1].Context = Context;
    v13[-1].Control = -32;
    IofCallDriver(v7, v8);
  }
  else
  {
    *(_BYTE *)(v4 + 932) = 0;
    KeSetEvent((PRKEVENT)(v4 + 960), 0, 0);
    v14 = v10;
LABEL_6:
    KeReleaseSpinLock(v5, v14);
  }
}

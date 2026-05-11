/*
 * XREFs of USBCaptureSubmitRequest @ 0x14003A5B0
 * Callers:
 *     USBCaptureRequeueWorker @ 0x140003AC0 (USBCaptureRequeueWorker.c)
 *     USBCaptureStartTransfers @ 0x14003A460 (USBCaptureStartTransfers.c)
 * Callees:
 *     memset @ 0x14001CAC0 (memset.c)
 */

NTSTATUS __fastcall USBCaptureSubmitRequest(_QWORD *a1)
{
  IRP *v2; // r13
  _WORD *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r12
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v13; // rax

  v2 = (IRP *)a1[2];
  v3 = (_WORD *)a1[3];
  v4 = *(_QWORD *)(a1[5] + 16LL);
  v5 = *(_QWORD *)(v4 + 152);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_DWORD *)(*(_QWORD *)(v4 + 144) + 220LL);
  v8 = 12 * *(_DWORD *)(v5 + 124) + 152;
  memset(v3, 0, v8);
  *v3 = v8;
  v3[1] = 10;
  *((_QWORD *)v3 + 3) = *(_QWORD *)(v5 + 64);
  v9 = 0LL;
  *((_DWORD *)v3 + 32) = 0;
  *((_DWORD *)v3 + 8) = 5;
  *((_DWORD *)v3 + 33) = *(_DWORD *)(v5 + 124);
  if ( *(_DWORD *)(v5 + 124) )
  {
    v10 = 0;
    do
    {
      v11 = 3 * v9;
      v9 = (unsigned int)(v9 + 1);
      *(_DWORD *)&v3[2 * v11 + 70] = v10;
      v10 += v7;
    }
    while ( (unsigned int)v9 < *(_DWORD *)(v5 + 124) );
  }
  *((_QWORD *)v3 + 5) = a1[6];
  *((_DWORD *)v3 + 9) = *(_DWORD *)(v5 + 124) * v7;
  IoInitializeIrp(v2, 72 * *(char *)(*(_QWORD *)(v6 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v6 + 40) + 76LL));
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v3;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  v13 = v2->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBCaptureCompleteCallback;
  v13[-1].Context = a1;
  v13[-1].Control = -32;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 56));
  return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 40), v2);
}

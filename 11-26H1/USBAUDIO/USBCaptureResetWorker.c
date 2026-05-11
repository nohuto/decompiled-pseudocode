/*
 * XREFs of USBCaptureResetWorker @ 0x1400042A0
 * Callers:
 *     <none>
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x140004FA8 (PinWaitForStarvationTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005060 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBCaptureWaitForWorkerComplete @ 0x14000BBD0 (USBCaptureWaitForWorkerComplete.c)
 *     USBCaptureStartTransfers @ 0x14003A460 (USBCaptureStartTransfers.c)
 */

void __fastcall USBCaptureResetWorker(PDEVICE_OBJECT DeviceObject, struct _KSPIN *Context)
{
  _QWORD *v2; // r15
  __int64 v4; // rdi
  int v5; // edx
  KIRQL v6; // bp
  int v7; // r8d
  char v8; // bl
  KSPIN_LOCK *v9; // rcx
  _QWORD **v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // r9
  unsigned int *v15; // rcx
  __int64 v16; // rdx
  int v17; // edx
  int v18; // r8d
  KIRQL v19; // bl

  v2 = Context->Context;
  v4 = v2[19];
  KsPinAcquireProcessingMutex(Context);
  USBCaptureWaitForWorkerComplete(v2, v4 + 264, v4 + 272);
  v6 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(v7) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v5 || (_BYTE)v7 )
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v5, v7, WPP_GLOBAL_Control->DeviceExtension);
  v9 = v2 + 14;
  if ( *(_BYTE *)(v4 + 112) )
  {
    KeReleaseSpinLock(v9, v6);
    PinWaitForStarvationTimeout(Context, 0LL);
    *(_QWORD *)(v4 + 144) = v4 + 136;
    v10 = (_QWORD **)(v4 + 152);
    *(_QWORD *)(v4 + 136) = v4 + 136;
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == v10 )
        break;
      if ( (_QWORD **)v11[1] != v10 || (v12 = (_QWORD *)*v11, *(_QWORD **)(*v11 + 8LL) != v11) )
        __fastfail(3u);
      *v10 = v12;
      v13 = 0;
      v12[1] = v10;
      v14 = v11[3];
      if ( *(_DWORD *)(v14 + 132) )
      {
        v15 = (unsigned int *)(v14 + 144);
        do
        {
          if ( (v15[1] & 0x80000000) == 0 )
            v2[11] -= *v15;
          ++v13;
          v15 += 3;
        }
        while ( v13 < *(_DWORD *)(v14 + 132) );
      }
    }
  }
  else
  {
    KeReleaseSpinLock(v9, v6);
  }
  KsPinReleaseProcessingMutex(Context);
  if ( *(_BYTE *)(v4 + 112) )
  {
    LOBYTE(v16) = 1;
    if ( (int)USBCaptureStartTransfers(Context, v16) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = v8;
        LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v17, v18, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
  }
  v19 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  KeSetEvent((PRKEVENT)(v4 + 232), 0, 0);
  *(_BYTE *)(v4 + 224) = 0;
  KeReleaseSpinLock(v2 + 14, v19);
}

/*
 * XREFs of USBCaptureStateChangePin @ 0x140004540
 * Callers:
 *     <none>
 * Callees:
 *     KsGateTurnInputOff @ 0x140003BC0 (KsGateTurnInputOff.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140004E88 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005060 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBCaptureWaitForWorkerComplete @ 0x14000BBD0 (USBCaptureWaitForWorkerComplete.c)
 *     USBHwDataPipeReset @ 0x14002D724 (USBHwDataPipeReset.c)
 *     USBCaptureStartTransfers @ 0x14003A460 (USBCaptureStartTransfers.c)
 *     USBType1SetSampleRate @ 0x14003B2D0 (USBType1SetSampleRate.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003B95C (USBHwSelectStreamingAudioInterface.c)
 */

__int64 __fastcall USBCaptureStateChangePin(PKSPIN Pin, int a2, __int64 a3)
{
  _QWORD *Context; // rdi
  int v4; // esi
  int v5; // r12d
  int started; // ebx
  __int64 v8; // r14
  __int64 v9; // r13
  char v10; // r15
  void *v11; // r9
  int v12; // esi
  __int64 v13; // r9
  KIRQL v14; // r12
  struct _KSGATE *v15; // rax
  KIRQL v16; // al
  int v17; // edi
  KIRQL v19; // al

  Context = Pin->Context;
  v4 = a3;
  v5 = a2;
  started = 0;
  v8 = Context[19];
  v9 = Context[18];
  v10 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v11 = &WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  if ( v5 != v4 )
  {
    if ( !v4 )
    {
      v19 = KeAcquireSpinLockRaiseToDpc(Context + 14);
      *(_BYTE *)(v8 + 115) = 0;
      Context[10] = 0LL;
      Context[11] = 0LL;
      Context[12] = 0LL;
      KeReleaseSpinLock(Context + 14, v19);
      return 0;
    }
    v12 = v4 - 2;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        started = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 136), a3, v11);
        if ( started >= 0 )
        {
          started = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
          if ( started < 0 )
          {
            LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_qd(
                WPP_GLOBAL_Control->AttachedDevice,
                a2,
                a3,
                WPP_GLOBAL_Control->DeviceExtension);
            USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144), a3, v13);
          }
        }
        else
        {
          LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qd(
              WPP_GLOBAL_Control->AttachedDevice,
              a2,
              a3,
              WPP_GLOBAL_Control->DeviceExtension);
          }
        }
        if ( !*((_BYTE *)Context + 47) && started >= 0 )
        {
          started = USBCaptureStartTransfers(Pin, 0LL);
          if ( started < 0 )
          {
            LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qd(
                WPP_GLOBAL_Control->AttachedDevice,
                a2,
                a3,
                WPP_GLOBAL_Control->DeviceExtension);
            }
          }
        }
      }
    }
    else if ( v5 == 3 )
    {
      if ( !*((_BYTE *)Context + 47) )
      {
        KeWaitForSingleObject((PVOID)(v8 + 168), Executive, 0, 0, 0LL);
        v14 = KeAcquireSpinLockRaiseToDpc(Context + 14);
        *(_BYTE *)v8 = 0;
        *(_BYTE *)(v8 + 112) = 0;
        *((_BYTE *)Context + 45) = 0;
        if ( *(_BYTE *)(v8 + 113) )
        {
          v15 = KsPinGetAndGate(Pin);
          KsGateTurnInputOff(v15);
          *(_BYTE *)(v8 + 113) = 0;
        }
        KeReleaseSpinLock(Context + 14, v14);
        USBCaptureWaitForWorkerComplete(Context, v8 + 264, v8 + 272);
        USBHwDataPipeReset(Pin);
        v16 = KeAcquireSpinLockRaiseToDpc(Context + 14);
        *(_QWORD *)(v8 + 144) = v8 + 136;
        *(_QWORD *)(v8 + 136) = v8 + 136;
        *(_QWORD *)(v8 + 160) = v8 + 152;
        *(_QWORD *)(v8 + 152) = v8 + 152;
        KeReleaseSpinLock(Context + 14, v16);
        KeReleaseMutex((PRKMUTEX)(v8 + 168), 0);
      }
      started = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144), a3, v11);
    }
  }
  v17 = 0;
  if ( started != -1073741632 )
    v17 = started;
  if ( v17 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v10;
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v17;
}

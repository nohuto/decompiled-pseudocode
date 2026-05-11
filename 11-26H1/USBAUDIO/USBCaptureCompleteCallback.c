/*
 * XREFs of USBCaptureCompleteCallback @ 0x140003730
 * Callers:
 *     <none>
 * Callees:
 *     USBHwResetFrameTimestamps @ 0x1400035EC (USBHwResetFrameTimestamps.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x14000E80C (WPP_RECORDER_AND_TRACE_SF_dD.c)
 */

__int64 __fastcall USBCaptureCompleteCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KSPIN *v3; // r15
  int *v5; // rbx
  __int64 Context; // rbp
  __int64 v8; // r14
  unsigned int v9; // edx
  int v10; // r8d
  KIRQL v11; // r13
  bool v12; // r12
  unsigned int v14; // eax
  unsigned int *v15; // rcx
  _QWORD *v16; // rcx
  PKSGATE i; // rax
  bool v18; // zf
  struct _IO_WORKITEM *v19; // rcx

  v3 = (struct _KSPIN *)a3[5];
  v5 = (int *)a3[3];
  Context = (__int64)v3->Context;
  v8 = *(_QWORD *)(Context + 152);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
  v12 = _InterlockedAdd((volatile signed __int32 *)(Context + 56), 0xFFFFFFFF) == 0;
  if ( *(int *)(a2 + 48) < 0 || v5[1] < 0 )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v10) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v9 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_dD(WPP_GLOBAL_Control->AttachedDevice, v9, v10, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( v12 )
  {
    USBHwResetFrameTimestamps(Context);
    KeSetEvent((PRKEVENT)(Context + 120), 0, 0);
    if ( *(_BYTE *)(v8 + 112) )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v10) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v9 || (_BYTE)v10 )
        WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v9, v10, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  if ( *(_BYTE *)(v8 + 112) && !*(_BYTE *)v8 )
  {
    v14 = (unsigned int)v5[1] >> 31;
    *(_BYTE *)v8 = v5[1] < 0;
    if ( !(_BYTE)v14 )
    {
      *(_BYTE *)(Context + 45) = 1;
      v9 = 0;
      *(_DWORD *)(v8 + 120) = v5[33] + v5[32];
      if ( v5[33] )
      {
        v15 = (unsigned int *)(v5 + 36);
        do
        {
          if ( (v15[1] & 0x80000000) == 0 )
            *(_QWORD *)(Context + 88) += *v15;
          ++v9;
          v15 += 3;
        }
        while ( v9 < v5[33] );
      }
      v16 = *(_QWORD **)(v8 + 160);
      if ( *v16 != v8 + 152 )
        __fastfail(3u);
      *a3 = v8 + 152;
      a3[1] = v16;
      *v16 = a3;
      *(_QWORD *)(v8 + 160) = a3;
      if ( !*(_BYTE *)(v8 + 113) )
      {
        *(_BYTE *)(v8 + 113) = 1;
        for ( i = KsPinGetAndGate(v3); i; i = i->NextGate )
        {
          if ( _InterlockedIncrement(&i->Count) != 1 )
            break;
        }
        KsPinAttemptProcessing(v3, 1u);
      }
    }
    if ( v12 )
    {
      *(_BYTE *)v8 = 1;
    }
    else if ( !*(_BYTE *)v8 )
    {
      goto LABEL_5;
    }
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v10) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v9 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v9, v10, WPP_GLOBAL_Control->DeviceExtension);
    *(_BYTE *)(Context + 45) = 0;
    v18 = *(_BYTE *)(v8 + 224) == 0;
    *(_BYTE *)(v8 + 115) = 1;
    if ( v18 )
    {
      v19 = *(struct _IO_WORKITEM **)(v8 + 256);
      *(_BYTE *)(v8 + 224) = 1;
      IoQueueWorkItem(v19, USBCaptureResetWorker, CriticalWorkQueue, v3);
    }
  }
LABEL_5:
  KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), v11);
  return 3221225494LL;
}

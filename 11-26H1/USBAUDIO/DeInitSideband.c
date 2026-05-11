/*
 * XREFs of DeInitSideband @ 0x14000B4B4
 * Callers:
 *     DeviceStart @ 0x14002E790 (DeviceStart.c)
 *     DeviceStop @ 0x14002EEA0 (DeviceStop.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x14002F950 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     DeviceSurpriseRemoval @ 0x140040850 (DeviceSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DeInitSideband(PKSDEVICE Device, int a2)
{
  int v2; // r15d
  NTSTATUS v3; // edi
  char v5; // bl
  char v6; // r8
  char *Context; // rbp
  __int64 v8; // rsi
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  void *v13; // rdx

  v2 = a2;
  v3 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v6 = 0;
  }
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, a2, v6, WPP_GLOBAL_Control->DeviceExtension);
  Context = (char *)Device->Context;
  v8 = *((_QWORD *)Context + 109);
  if ( v8 )
  {
    v3 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Context + 728), 0LL, File, 1u, 0x20u);
    if ( v3 >= 0 )
    {
      if ( v2 == 3 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v9) = 0;
        }
        if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v9 || (_BYTE)v10 )
          WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v9, v10, WPP_GLOBAL_Control->DeviceExtension);
        KsReleaseDevice(Device);
      }
      KeSetEvent((PRKEVENT)Context + 35, 0, 0);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v2 == 3 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (LOBYTE(v12) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v11 || (_BYTE)v12 )
          WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v11, v12, WPP_GLOBAL_Control->DeviceExtension);
        KsAcquireDevice(Device);
      }
      IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(Context + 728), 0LL, 0x20u);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = &WPP_74de0be54ead3cda59d335c16d367676_Traceguids;
    LOBYTE(v13) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v3;
}

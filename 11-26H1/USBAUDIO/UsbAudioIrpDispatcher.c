/*
 * XREFs of UsbAudioIrpDispatcher @ 0x14003A290
 * Callers:
 *     <none>
 * Callees:
 *     IsSidebandIrp @ 0x140002DE0 (IsSidebandIrp.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     SidebandDispatchIrp @ 0x140005FC8 (SidebandDispatchIrp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 */

NTSTATUS __fastcall UsbAudioIrpDispatcher(PDEVICE_OBJECT FunctionalDeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PKSDEVICE DeviceForDeviceObject; // rax
  int v6; // edx
  char *Context; // rbp
  int v8; // edx
  ULONG *v10; // r8
  ULONG *v11; // r8
  __int64 v12; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(FunctionalDeviceObject);
  if ( DeviceForDeviceObject )
  {
    Context = (char *)DeviceForDeviceObject->Context;
    if ( (unsigned int)IsSidebandIrp(FunctionalDeviceObject, (__int64)Irp) )
    {
      return SidebandDispatchIrp(FunctionalDeviceObject, Irp);
    }
    else
    {
      if ( CurrentStackLocation->MajorFunction == 27 && CurrentStackLocation->MinorFunction == 20 )
      {
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v11 = &WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            (_DWORD)v11,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        KeWaitForSingleObject(Context + 760, Executive, 0, 0, 0LL);
        v12 = *((unsigned int *)Context + 248);
        if ( (_DWORD)v12 )
          Irp->IoStatus.Information = v12 | LODWORD(Irp->IoStatus.Information);
        KeReleaseMutex((PRKMUTEX)(Context + 760), 0);
      }
      return KsDispatchIrp(FunctionalDeviceObject, Irp);
    }
  }
  else
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v10 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        (_DWORD)v10,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    return -1073741811;
  }
}

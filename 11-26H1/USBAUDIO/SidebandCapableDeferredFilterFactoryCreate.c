/*
 * XREFs of SidebandCapableDeferredFilterFactoryCreate @ 0x14002F950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DeInitSideband @ 0x14000B4B4 (DeInitSideband.c)
 *     IsDeviceInSidebandMode @ 0x14000F104 (IsDeviceInSidebandMode.c)
 */

void __fastcall SidebandCapableDeferredFilterFactoryCreate(
        PVOID IoObject,
        struct _KSDEVICE *Context,
        PIO_WORKITEM IoWorkItem)
{
  char *v3; // rsi
  struct _IO_WORKITEM *v4; // rbx
  struct _KSDEVICE *v5; // rbp
  int v6; // r14d
  int v7; // r15d
  char v8; // di
  GUID *v9; // rbx
  int v10; // r8d
  GUID v11; // xmm0
  int v12; // eax
  struct _KEVENT *v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  void *v15; // rdx
  int v16; // [rsp+78h] [rbp+10h] BYREF
  PKSFILTERFACTORY FilterFactory; // [rsp+88h] [rbp+20h] BYREF

  v3 = (char *)Context->Context;
  v4 = IoWorkItem;
  v5 = Context;
  FilterFactory = 0LL;
  v6 = -1073741437;
  v16 = 0;
  v7 = 0;
  v8 = 1;
  LOBYTE(Context) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)Context || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(IoWorkItem) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)Context,
      (_DWORD)IoWorkItem,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  KeSetEvent((PRKEVENT)(v3 + 968), 0, 0);
  IoFreeWorkItem(v4);
  if ( !*((_DWORD *)v3 + 44) )
    goto LABEL_20;
  v9 = (GUID *)*((_QWORD *)v3 + 23);
  v6 = IsDeviceInSidebandMode((__int64)v5, &v16);
  if ( v6 < 0 )
    goto LABEL_20;
  if ( v16 )
  {
    v11 = USBSIDEBANDAUDIO_KSCATEGORY_AUDIO;
    v7 = 1;
  }
  else
  {
    v11 = KSCATEGORY_AUDIO;
  }
  *v9 = v11;
  v12 = *((_DWORD *)v3 + 217);
  if ( v12 == 1 || v12 == 2 )
  {
    KsAcquireDevice(v5);
    v6 = KsCreateFilterFactory(
           v5->FunctionalDeviceObject,
           (const KSFILTER_DESCRIPTOR *)(v3 + 128),
           (PWSTR)L"GLOBAL",
           0LL,
           8u,
           0LL,
           0LL,
           &FilterFactory);
    if ( v6 >= 0 )
    {
      v6 = KsFilterFactorySetDeviceClassesState(FilterFactory, 1u);
      *((_QWORD *)v3 + 15) = FilterFactory;
    }
    KsReleaseDevice(v5);
  }
  if ( !v7 )
  {
LABEL_20:
    KeWaitForSingleObject(v3 + 760, Executive, 0, 0, 0LL);
    DeInitSideband(v5, 1);
    KeReleaseMutex((PRKMUTEX)(v3 + 760), 0);
  }
  v13 = (struct _KEVENT *)*((_QWORD *)v3 + 125);
  if ( v13 )
    KeSetEvent(v13, 0, 0);
  if ( v7 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = &WPP_9385499e5bb03f2485fcdf1eb6a96ba7_Traceguids;
LABEL_38:
      LOBYTE(v15) = v8;
      WPP_RECORDER_AND_TRACE_SF_(v14->AttachedDevice, (_DWORD)v15, v10, v14->DeviceExtension);
    }
  }
  else
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = &WPP_9385499e5bb03f2485fcdf1eb6a96ba7_Traceguids;
      goto LABEL_38;
    }
  }
  if ( v6 < 0 )
  {
    KeWaitForSingleObject(v3 + 760, Executive, 0, 0, 0LL);
    *((_DWORD *)v3 + 248) |= 4u;
    KeReleaseMutex((PRKMUTEX)(v3 + 760), 0);
    IoInvalidateDeviceState(v5->PhysicalDeviceObject);
  }
}

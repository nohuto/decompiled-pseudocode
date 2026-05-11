/*
 * XREFs of DeviceSurpriseRemoval @ 0x140040850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DeInitSideband @ 0x14000B4B4 (DeInitSideband.c)
 *     ExitIrpThreadAndQueue @ 0x14000BE20 (ExitIrpThreadAndQueue.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall DeviceSurpriseRemoval(PKSDEVICE Device))(PKSDEVICE)
{
  char *Context; // r14
  bool v3; // dl
  void *v4; // rcx
  PVOID i; // rax
  struct _KSFILTER *j; // rax
  ULONG k; // ebp
  PKSPIN m; // rax
  _QWORD *v9; // r13
  void (__fastcall *v10)(struct _KSPIN *); // rax
  struct _KSPIN *v11; // rsi
  struct _KSFILTER *v12; // rbx
  void *v13; // rdi
  struct _KSFILTERFACTORY *v14; // rcx
  __int64 (__fastcall *result)(PKSDEVICE); // rax

  Context = (char *)Device->Context;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  KeWaitForSingleObject(Context + 760, Executive, 0, 0, 0LL);
  DeInitSideband(Device, 3);
  KeReleaseMutex((PRKMUTEX)(Context + 760), 0);
  v4 = (void *)*((_QWORD *)Context + 125);
  if ( v4 )
  {
    KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*((PVOID *)Context + 125), 0x65627845u);
    *((_QWORD *)Context + 125) = 0LL;
  }
  ExitIrpThreadAndQueue((__int64)Context);
  for ( i = KsGetFirstChild(Device); ; i = KsGetNextSibling(v13) )
  {
    v13 = i;
    if ( !i )
      break;
    for ( j = (struct _KSFILTER *)KsGetFirstChild(i); ; j = (struct _KSFILTER *)KsGetNextSibling(v12) )
    {
      v12 = j;
      if ( !j )
        break;
      KsAcquireControl(j);
      for ( k = 0; k < v12->Descriptor->PinDescriptorsCount; ++k )
      {
        for ( m = KsFilterGetFirstChildPin(v12, k); ; m = KsPinGetNextSiblingPin(v11) )
        {
          v11 = m;
          if ( !m )
            break;
          v9 = m->Context;
          v10 = *(void (__fastcall **)(struct _KSPIN *))(*(_QWORD *)(v9[18] + 128LL) + 32LL);
          if ( v10 )
            v10(v11);
          *((_BYTE *)v9 + 46) = 1;
        }
      }
      KsReleaseControl(v12);
    }
  }
  v14 = (struct _KSFILTERFACTORY *)*((_QWORD *)Context + 15);
  if ( v14 )
  {
    KsFilterFactorySetDeviceClassesState(v14, 0);
    *((_QWORD *)Context + 15) = 0LL;
  }
  *((_BYTE *)Device->Context + 67) = 1;
  result = *(__int64 (__fastcall **)(PKSDEVICE))(pExtBusDeviceDispatchTable + 32);
  if ( result )
    return (__int64 (__fastcall *)(PKSDEVICE))result(Device);
  return result;
}

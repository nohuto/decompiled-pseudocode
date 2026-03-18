/*
 * XREFs of PnpRequestHwProfileChangeNotification @ 0x1407A1E04
 * Callers:
 *     PpProfileCancelHardwareProfileTransition @ 0x1407AD270 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1407AD2F8 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1407AD3A4 (PpProfileCommitTransitioningDock.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407AD5BC (PpProfileQueryHardwareProfileChange.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     PnpSetHwProfileChangeEvent @ 0x1407ADAF0 (PnpSetHwProfileChangeEvent.c)
 *     PnpNotifyHwProfileChange @ 0x140B6A1EC (PnpNotifyHwProfileChange.c)
 */

__int64 __fastcall PnpRequestHwProfileChangeNotification(GUID *Source1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( Source1 == &GUID_HWPROFILE_QUERY_CHANGE )
    goto LABEL_10;
  if ( RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) != 16
    && Source1 != &GUID_HWPROFILE_CHANGE_CANCELLED
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_CHANGE_CANCELLED, 0x10uLL) != 16
    && Source1 != &GUID_HWPROFILE_CHANGE_COMPLETE
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_CHANGE_COMPLETE, 0x10uLL) != 16 )
  {
    return 3221225488LL;
  }
  if ( RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) != 16 )
    return PnpSetHwProfileChangeEvent((_DWORD)Source1, 0, 0, 0, 0LL);
LABEL_10:
  if ( a2 != 1 )
    return PnpNotifyHwProfileChange(Source1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpSetHwProfileChangeEvent((_DWORD)Source1, (unsigned int)&Event, (unsigned int)&v10, a3, a4);
  if ( (int)result >= 0 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return v10;
  }
  return result;
}

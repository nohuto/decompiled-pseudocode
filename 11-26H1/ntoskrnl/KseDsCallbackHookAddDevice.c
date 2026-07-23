/*
 * XREFs of KseDsCallbackHookAddDevice @ 0x140600D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KsepDsEventAddDevice @ 0x14060154C (KsepDsEventAddDevice.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 */

__int64 __fastcall KseDsCallbackHookAddDevice(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int v4; // ebx
  NTSTATUS DeviceProperty; // eax
  const WCHAR *v6; // rdx
  ULONG ResultLength; // [rsp+40h] [rbp-438h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-430h] BYREF
  _BYTE PropertyBuffer[1024]; // [rsp+60h] [rbp-418h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  guard_dispatch_icall_no_overrides(a1, a2);
  v4 = guard_dispatch_icall_no_overrides(a1, a2);
  DeviceProperty = IoGetDeviceProperty(a2, DevicePropertyHardwareID, 0x400u, PropertyBuffer, &ResultLength);
  v6 = (const WCHAR *)PropertyBuffer;
  if ( DeviceProperty < 0 )
    v6 = L"<error>";
  RtlInitUnicodeString(&DestinationString, v6);
  KsepDsEventAddDevice(
    *(_QWORD *)(a1 + 24),
    *(_DWORD *)(a1 + 32),
    a1,
    (_DWORD)a2,
    v4,
    *(_QWORD *)(a1 + 48) + 24LL,
    (__int64)&DestinationString);
  return v4;
}

/*
 * XREFs of sub_140041560 @ 0x140041560
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140178190 @ 0x140178190 (sub_140178190.c)
 *     sub_14017B33C @ 0x14017B33C (sub_14017B33C.c)
 */

__int64 __fastcall sub_140041560(PDRIVER_OBJECT DriverObject)
{
  PVOID DriverObjectExtension; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_140055C18(off_140168120->AttachedDevice, 10LL, &unk_140148948, DriverObject);
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, StorPortGetSrb);
  sub_140178190(DriverObjectExtension);
  if ( _InterlockedExchangeAdd(&dword_140168758, 0xFFFFFFFF) == 1 )
  {
    if ( DeviceObject )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\StorportControl");
      IoDeleteSymbolicLink(&DestinationString);
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
    if ( byte_140168749 )
    {
      sub_14017B33C(v4, v3);
      byte_140168749 = 0;
    }
    if ( Registration )
    {
      PcwUnregister(Registration);
      Registration = 0LL;
    }
    if ( qword_1401685C0 )
    {
      PcwUnregister(qword_1401685C0);
      qword_1401685C0 = 0LL;
    }
    if ( qword_1401686E8 )
    {
      PcwUnregister(qword_1401686E8);
      qword_1401686E8 = 0LL;
    }
    if ( qword_140168538 )
    {
      PcwUnregister(qword_140168538);
      qword_140168538 = 0LL;
    }
  }
  return 0LL;
}

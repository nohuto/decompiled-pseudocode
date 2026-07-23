/*
 * XREFs of PipResetDevice @ 0x140CC8F58
 * Callers:
 *     PipResetMatchingFilteredDevices @ 0x140CC9240 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     _CmDeleteDevice @ 0x14089CD0C (_CmDeleteDevice.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     _CmDeleteDeviceRegKey @ 0x1409B7554 (_CmDeleteDeviceRegKey.c)
 *     _CmIsRootEnumeratedDevice @ 0x140A19290 (_CmIsRootEnumeratedDevice.c)
 */

__int64 __fastcall PipResetDevice(__int64 a1, const WCHAR *a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+40h] [rbp-49h] BYREF
  int v11; // [rsp+44h] [rbp-45h] BYREF
  int v12; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  GUID Guid; // [rsp+60h] [rbp-29h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-19h] BYREF

  v12 = 0;
  v11 = 0;
  Guid = 0LL;
  DestinationString = 0LL;
  DbgPrintEx(0x20u, 0, "Resetting device '%ws'\n", a2);
  if ( PipResetDeviceBreakOnReset )
    __debugbreak();
  v10 = 78;
  if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 9u, (__int64)&v11, (__int64)SourceString, (__int64)&v10, 0) < 0
    || v11 != 1
    || v10 < 2
    || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0
    || RtlGUIDFromString(&DestinationString, &Guid) < 0 )
  {
    Guid = 0LL;
  }
  if ( CmIsRootEnumeratedDevice(a2) || !memcmp(&Guid, qword_14002DC30, 0x10uLL) )
  {
    v5 = CmDeleteDeviceRegKey(a1, (__int64)a2, 17, 0);
    v4 = 0;
    if ( v5 < 0 )
      v4 = v5;
    v6 = CmDeleteDeviceRegKey(a1, (__int64)a2, 18, 0);
    if ( v4 >= 0 && v6 < 0 )
      v4 = v6;
    v10 = 4;
    if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 0xBu, (__int64)&v11, (__int64)&v12, (__int64)&v10, 0) >= 0
      && v11 == 4
      && v10 == 4 )
    {
      v7 = v12;
    }
    else
    {
      v7 = 0;
    }
    if ( (v7 & 0x20) == 0 )
    {
      v12 = v7 | 0x20;
      v8 = CmSetDeviceRegProp(a1, (__int64)a2, 0LL, 0xBu, 4, (__int64)&v12, 4, 0);
      if ( v4 >= 0 && v8 < 0 )
        return (unsigned int)v8;
    }
  }
  else
  {
    return (unsigned int)CmDeleteDevice(a1, (__int64)a2, 0);
  }
  return (unsigned int)v4;
}

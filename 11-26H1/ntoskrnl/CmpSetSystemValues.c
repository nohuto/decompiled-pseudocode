/*
 * XREFs of CmpSetSystemValues @ 0x140CEBA30
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     CmpSetSystemRegistryString @ 0x1406E21A0 (CmpSetSystemRegistryString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140D01EC4 (BcdSetBootBcdAsSystemStore.c)
 */

__int64 __fastcall CmpSetSystemValues(__int64 *a1)
{
  int v2; // ebx
  int v3; // ecx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  int Data; // [rsp+40h] [rbp-C8h] BYREF
  int v7; // [rsp+44h] [rbp-C4h] BYREF
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+88h] [rbp-80h] BYREF

  Data = 0;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v7 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"df";
  ResultLength[0] = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpSystemStartOptionsString,
           0,
           1u,
           CmpLoadOptions.Buffer,
           CmpLoadOptions.Length);
    if ( v2 >= 0 )
    {
      v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpSystemBootDeviceString, a1[23]);
      if ( v2 >= 0 )
      {
        v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpFirmwareBootDeviceString, a1[24]);
        if ( v2 >= 0 )
        {
          v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpWindowsSysPartString, a1[43]);
          if ( v2 >= 0 )
          {
            v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpOsBootstatPathString, a1[41]);
            if ( v2 >= 0 )
            {
              Data = *(_DWORD *)(a1[30] + 132) & 1;
              v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootSucceededString, 0, 4u, &Data, 4u);
              if ( v2 >= 0 )
              {
                Data = (*(_DWORD *)(a1[30] + 132) >> 1) & 1;
                v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootShutdownString, 0, 4u, &Data, 4u);
                if ( v2 >= 0 )
                {
                  if ( (*(_DWORD *)(a1[30] + 132) & 2) != 0
                    || (ZwQueryValueKey(
                          KeyHandle,
                          (PUNICODE_STRING)&CmpDirtyShutdownCountString,
                          KeyValueFullInformation,
                          KeyValueInformation,
                          0x100u,
                          ResultLength) < 0
                     || KeyValueInformation[1] != 4
                      ? (v3 = 1)
                      : (v3 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1),
                        v7 = v3,
                        v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpDirtyShutdownCountString, 0, 4u, &v7, 4u),
                        v2 >= 0) )
                  {
                    if ( (*(_DWORD *)(a1[30] + 2648) & 0x10000LL) == 0 || (v2 = BcdSetBootBcdAsSystemStore(), v2 >= 0) )
                      v2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}

/*
 * XREFs of DCompositionIsVailContainer @ 0x140228844
 * Callers:
 *     ?CreateSection@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@EEAAJ_KPEAPEAX@Z @ 0x14023F080 (-CreateSection@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@EEAAJ_KPEA.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x14023F190 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall DCompositionIsVailContainer(__int64 a1)
{
  _BYTE *DCompSessionState; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp+37h] BYREF
  int v9; // [rsp+9Ch] [rbp+43h]

  DCompSessionState = (_BYTE *)W32GetDCompSessionState(a1);
  if ( !*DCompSessionState )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    KeyHandle = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ValueName = 0LL;
      RtlInitUnicodeString(&ValueName, L"IsVailContainer");
      ResultLength = 0;
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
        DCompSessionState[1] = v9 != 0;
      ZwClose(KeyHandle);
    }
    *DCompSessionState = 1;
  }
  return (unsigned __int8)DCompSessionState[1];
}

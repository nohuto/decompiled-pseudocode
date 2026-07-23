/*
 * XREFs of RtlpHpApplyGlobalSegmentHeapConfigurations @ 0x180144E54
 * Callers:
 *     RtlSetGlobalHeapFeatures @ 0x180144408 (RtlSetGlobalHeapFeatures.c)
 * Callees:
 *     RtlpHpPgSamplingProcessInitialize @ 0x18011D004 (RtlpHpPgSamplingProcessInitialize.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

int RtlpHpApplyGlobalSegmentHeapConfigurations()
{
  int result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+70h] [rbp+37h] BYREF
  int v5; // [rsp+80h] [rbp+47h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ResultLength = 0;
  v5 = 0;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180171B68;
  KeyValueInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180171B48,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && DWORD2(KeyValueInformation) == 4 )
    {
      if ( (BYTE12(KeyValueInformation) & 3) != 0 )
      {
        if ( (BYTE12(KeyValueInformation) & 3) == 1 )
        {
          RtlpLowFragHeapGlobalFlags |= 0x10u;
        }
        else if ( (BYTE12(KeyValueInformation) & 3) == 3 )
        {
          RtlpLowFragHeapGlobalFlags |= 0x30u;
        }
      }
      else
      {
        RtlpLowFragHeapGlobalFlags |= 8u;
      }
      if ( (BYTE12(KeyValueInformation) & 4) != 0 )
      {
        result = NtQueryValueKey(
                   KeyHandle,
                   (PUNICODE_STRING)&stru_180171B58,
                   KeyValuePartialInformation,
                   &KeyValueInformation,
                   0x14u,
                   &ResultLength);
        if ( result >= 0 && DWORD2(KeyValueInformation) == 4 )
          result = (unsigned int)RtlpHpPgSamplingProcessInitialize(SBYTE12(KeyValueInformation));
      }
    }
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}

/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x140151C10
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1401513D4 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x140151730 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1400743C0 (WdmlibRtlInitUnicodeStringEx.c)
 */

NTSTATUS __fastcall CmRegUtilOpenExistingWstrKey(__int64 a1, const WCHAR *a2, __int64 a3, HANDLE *a4)
{
  NTSTATUS result; // eax
  ACCESS_MASK v6; // r9d
  void *v7; // r10
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    KeyHandle = 0LL;
    *a4 = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v7;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, v6, &ObjectAttributes);
    if ( result >= 0 )
      *a4 = KeyHandle;
  }
  return result;
}

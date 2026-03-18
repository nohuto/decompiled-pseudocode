/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1400DBAE0
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1400DB2A4 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1400DB600 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1400ABBA8 (WdmlibRtlInitUnicodeStringEx.c)
 */

int __fastcall CmRegUtilOpenExistingWstrKey(
        void *BaseHandle,
        wchar_t *KeyName,
        unsigned int DesiredAccess,
        void **Handle)
{
  int result; // eax
  ACCESS_MASK v6; // r9d
  void *v7; // r10
  void *KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  _UNICODE_STRING unicodeStringKeyName; // [rsp+28h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  unicodeStringKeyName = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringKeyName, KeyName);
  if ( result >= 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    KeyHandle = 0LL;
    *Handle = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &unicodeStringKeyName;
    ObjectAttributes.RootDirectory = v7;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, v6, &ObjectAttributes);
    if ( result >= 0 )
      *Handle = KeyHandle;
  }
  return result;
}

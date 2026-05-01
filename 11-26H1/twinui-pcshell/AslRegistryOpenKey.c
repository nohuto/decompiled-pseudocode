/*
 * XREFs of AslRegistryOpenKey @ 0x18015BC88
 * Callers:
 *     AslEnvBuildBasic @ 0x18015A770 (AslEnvBuildBasic.c)
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18015BD48 (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1802C3E28 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryOpenKey(PHANDLE KeyHandle, const WCHAR *a2, ACCESS_MASK a3)
{
  NTSTATUS inited; // eax
  unsigned int v6; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  v6 = inited;
  if ( inited < 0 )
  {
    AslLogCallPrintf(1LL, "AslRegistryOpenKey", 904LL, "AslRegistryOpenKey passed bad Path [%x]", inited);
  }
  else
  {
    *KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(KeyHandle, a3, &ObjectAttributes);
  }
  return v6;
}

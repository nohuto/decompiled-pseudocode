/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x14095720C
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140956A68 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x1409A3A80 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140958260 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuid(int a1, int a2, GUID *a3)
{
  GUID *v3; // rbx
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+50h] [rbp-68h] BYREF

  v3 = a3;
  LOBYTE(a3) = 1;
  DestinationString = 0LL;
  result = CmGetDeviceInterfaceSubkeyPath(a1, a2, (_DWORD)a3, (unsigned int)SourceString, 0LL, 0);
  if ( !result )
    return -1073741595;
  if ( result == -1073741789 )
  {
    SourceString[38] = 0;
  }
  else if ( result < 0 )
  {
    return result;
  }
  result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( result >= 0 )
    return RtlGUIDFromString(&DestinationString, v3);
  return result;
}

/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x140962ED4
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14095F698 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1409623E0 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     ScanHexFormat @ 0x140962AB0 (ScanHexFormat.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int result; // eax
  unsigned int v5; // ecx
  _BYTE *v6; // rdx
  __int128 *v7; // r8
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-29h] BYREF
  __int128 v9; // [rsp+80h] [rbp-19h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-9h] BYREF

  DestinationString = 0LL;
  result = CmGetDeviceInterfaceSubkeyPath(a1, a2, 1, SourceString, 0LL, 0);
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
  {
    v9 = 0LL;
    if ( (unsigned int)ScanHexFormat(
                         DestinationString.Buffer,
                         DestinationString.Length >> 1,
                         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                         a3,
                         a3 + 4,
                         a3 + 6,
                         &v9,
                         (char *)&v9 + 2,
                         (char *)&v9 + 4,
                         (char *)&v9 + 6,
                         (char *)&v9 + 8,
                         (char *)&v9 + 10,
                         (char *)&v9 + 12,
                         (char *)&v9 + 14) == -1 )
    {
      return -1073741811;
    }
    else
    {
      v5 = 0;
      v6 = (_BYTE *)(a3 + 8);
      v7 = &v9;
      do
      {
        ++v5;
        *v6 = *(_BYTE *)v7;
        v7 = (__int128 *)((char *)v7 + 2);
        ++v6;
      }
      while ( v5 < 8 );
      return 0;
    }
  }
  return result;
}

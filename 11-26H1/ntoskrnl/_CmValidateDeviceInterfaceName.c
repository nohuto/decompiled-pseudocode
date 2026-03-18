/*
 * XREFs of _CmValidateDeviceInterfaceName @ 0x1409A0350
 * Callers:
 *     _CmDeviceClassesSubkeyCallback @ 0x140898860 (_CmDeviceClassesSubkeyCallback.c)
 *     PiDmObjectCreate @ 0x140987A90 (PiDmObjectCreate.c)
 *     _PnpDispatchDeviceInterface @ 0x14099E8E0 (_PnpDispatchDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     PiUEventCopyEventData @ 0x1409D6DB0 (PiUEventCopyEventData.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1409DB608 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1409DB6F8 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140AB191C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiSwDeviceInterfaceSetState @ 0x140AF9604 (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140AF971C (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1409A2050 (ScanHexFormat.c)
 */

__int64 __fastcall CmValidateDeviceInterfaceName(__int64 a1, const WCHAR *a2)
{
  int v3; // esi
  _WORD *v4; // rbx
  unsigned __int64 Length; // r8
  _QWORD *v6; // rdx
  _WORD *i; // rax
  unsigned __int64 v8; // rbx
  NTSTATUS inited; // ecx
  WCHAR *v11; // rax
  __int64 j; // r8
  WCHAR v13; // dx
  WCHAR *v14; // rcx
  int v15; // eax
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  __int128 v17; // [rsp+80h] [rbp-39h] BYREF
  __int128 v18; // [rsp+90h] [rbp-29h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-19h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  v4 = 0LL;
  v17 = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, a2) < 0 || (DestinationString.MaximumLength & 0xFFFEu) < 0x62 )
    return (unsigned int)-1073741773;
  PsGetCurrentServerSiloGlobals();
  Length = DestinationString.Length;
  if ( DestinationString.Length < 8u || *(_QWORD *)L"\\??\\" != *(_QWORD *)DestinationString.Buffer )
  {
    PsGetCurrentServerSiloGlobals();
    if ( (unsigned int)Length < 8 || *(_QWORD *)L"\\\\?\\" != *v6 )
      return (unsigned int)-1073741773;
  }
  for ( i = a2 + 4; *i; ++i )
  {
    if ( *i == 92 )
    {
      if ( (unsigned int)++v3 > 1 )
        return (unsigned int)-1073741773;
      v4 = i;
    }
  }
  v8 = v4 ? v4 - a2 : Length >> 1;
  if ( v8 <= 0xFFFFFFFF && (unsigned int)v8 >= 0x30 )
  {
    v11 = SourceString;
    for ( j = 39LL; j != 1; --j )
    {
      v13 = *(const WCHAR *)((char *)a2 + 2LL * (unsigned int)v8 - 76 - (_QWORD)SourceString + (_QWORD)v11);
      if ( !v13 )
        break;
      *v11++ = v13;
    }
    v14 = v11 - 1;
    if ( j )
      v14 = v11;
    *v14 = 0;
    inited = -2147483643;
    if ( j )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( inited >= 0 )
      {
        v18 = 0LL;
        v15 = ScanHexFormat(
                DestinationString.Buffer,
                DestinationString.Length >> 1,
                L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                &v17,
                (char *)&v17 + 4,
                (char *)&v17 + 6,
                &v18,
                (char *)&v18 + 2,
                (char *)&v18 + 4,
                (char *)&v18 + 6,
                (char *)&v18 + 8,
                (char *)&v18 + 10,
                (char *)&v18 + 12,
                (char *)&v18 + 14);
        inited = -1073741773;
        if ( v15 != -1 )
          return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741773;
  }
  return (unsigned int)inited;
}

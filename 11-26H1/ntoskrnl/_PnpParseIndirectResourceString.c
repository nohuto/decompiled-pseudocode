/*
 * XREFs of _PnpParseIndirectResourceString @ 0x140973DB8
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x140972A50 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14097368C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 */

bool __fastcall PnpParseIndirectResourceString(_WORD *a1)
{
  __int64 v1; // rdx
  _WORD *v2; // rax
  __int16 v4; // ax
  unsigned int v5; // edx
  __int64 v6; // rdi
  __int16 v7; // ax
  __int64 i; // rdx
  __int16 v9; // r8
  int v10; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+58h] [rbp+20h] BYREF

  DestinationString = 0LL;
  if ( !a1 )
    return 0;
  v1 = 0x7FFFLL;
  v2 = a1;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v1;
  }
  while ( v1 );
  if ( !v1 || ((0x7FFF - v1) & (unsigned __int64)-(__int64)(v1 != 0)) < 5 || *a1 != 64 )
    return 0;
  v4 = a1[1];
  v5 = 1;
  while ( v4 && v4 != 44 )
    v4 = a1[++v5];
  if ( a1[v5] != 44 )
    return 0;
  v6 = v5 + 1;
  v7 = a1[v6];
  if ( v7 != 45 && v7 != 35 )
    return 0;
  for ( i = v5 + 2; ; i = (unsigned int)(i + 1) )
  {
    v9 = a1[i];
    if ( !v9 || v9 == 59 )
      break;
  }
  v10 = 0;
  if ( a1[i] == 59 )
    v10 = i;
  if ( RtlInitUnicodeStringEx(&DestinationString, &a1[v6 + 1]) < 0 )
    return 0;
  if ( v10 )
  {
    DestinationString.Length = 2 * (v10 - v6) - 2;
    DestinationString.MaximumLength = DestinationString.Length;
  }
  return RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) >= 0;
}

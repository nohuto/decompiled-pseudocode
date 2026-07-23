/*
 * XREFs of PnpOpenFirstMatchingSubKey @ 0x1407A7370
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x1409DA988 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B3B5D0 (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PnpOpenFirstMatchingSubKey(PCWSTR SourceString, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  const WCHAR *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v6 = SourceString;
  DestinationString = 0LL;
  if ( !SourceString || !a2 || !a5 )
    return 3221225485LL;
  *a5 = 0LL;
  result = 3221225524LL;
  while ( *v6 )
  {
    RtlInitUnicodeString(&DestinationString, v6);
    result = IopOpenRegistryKeyEx(a5, a2, &DestinationString, 131097LL);
    if ( (int)result >= 0 )
      break;
    *a5 = 0LL;
    v8 = -1LL;
    do
      ++v8;
    while ( v6[v8] );
    v6 += v8 + 1;
  }
  return result;
}

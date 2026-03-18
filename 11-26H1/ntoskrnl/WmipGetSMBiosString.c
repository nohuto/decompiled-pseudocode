/*
 * XREFs of WmipGetSMBiosString @ 0x140822B8C
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1406C34A8 (WmipReadSMBiosSysInfo.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipGetSMBiosString(__int64 a1, unsigned int a2, const char *a3, UNICODE_STRING *a4)
{
  const char *v4; // r10
  unsigned int v6; // ecx
  const char *v8; // rdx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = (const char *)(a1 + *(unsigned __int8 *)(a1 + 1));
  v6 = 1;
  DestinationString = 0LL;
  while ( v6 < a2 )
  {
    while ( *v4++ )
    {
      if ( v4 == a3 )
        return -1073741275;
    }
    if ( !*v4 )
      return -1073741275;
    ++v6;
  }
  v8 = v4;
  while ( *v4++ )
  {
    if ( v4 == a3 )
      return -1073741275;
  }
  RtlInitAnsiString(&DestinationString, v8);
  return RtlAnsiStringToUnicodeString(a4, &DestinationString, 1u);
}

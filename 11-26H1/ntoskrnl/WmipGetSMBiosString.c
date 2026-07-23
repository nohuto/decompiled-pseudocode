/*
 * XREFs of WmipGetSMBiosString @ 0x140828D9C
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1406C7088 (WmipReadSMBiosSysInfo.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipGetSMBiosString(__int64 a1, unsigned int a2, const CHAR *a3, UNICODE_STRING *a4)
{
  const CHAR *v4; // r10
  unsigned int v6; // ecx
  const CHAR *v8; // rdx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = (const CHAR *)(a1 + *(unsigned __int8 *)(a1 + 1));
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

/*
 * XREFs of SddlpUuidFromString @ 0x1407771A8
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcsncat_s @ 0x14053F010 (wcsncat_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 */

_BOOL8 __fastcall SddlpUuidFromString(wchar_t *SourceString, GUID *Guid)
{
  rsize_t v4; // rdi
  __int64 v5; // rax
  wchar_t *v6; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  wchar_t Dst[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v10[76]; // [rsp+34h] [rbp-64h] BYREF

  DestinationString = 0LL;
  if ( *SourceString == 123 )
    goto LABEL_8;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( SourceString[v5] );
  if ( SourceString[v5 - 1] == 125 )
  {
LABEL_8:
    v6 = SourceString;
  }
  else
  {
    wcscpy(Dst, L"{");
    memset_0(v10, 0, 0x4AuLL);
    do
      ++v4;
    while ( SourceString[v4] );
    wcsncat_s(Dst, 0x27uLL, SourceString, v4);
    wcsncat_s(Dst, 0x27uLL, L"}", 2uLL);
    v6 = Dst;
  }
  RtlInitUnicodeString(&DestinationString, v6);
  return RtlGUIDFromString(&DestinationString, Guid) >= 0;
}

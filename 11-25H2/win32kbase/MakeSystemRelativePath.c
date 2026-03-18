/*
 * XREFs of MakeSystemRelativePath @ 0x140102770
 * Callers:
 *     ldevLoadDriver @ 0x140101990 (ldevLoadDriver.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1401028AC (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     _wcsnicmp @ 0x1401A334C (_wcsnicmp.c)
 */

__int64 __fastcall MakeSystemRelativePath(PCWSTR Source, PUNICODE_STRING Destination, int a3)
{
  __int64 v3; // rbx
  int v4; // r14d
  const WCHAR *v6; // rdi
  unsigned int v7; // ebp
  __int64 result; // rax
  const wchar_t *i; // rbx

  v3 = -1LL;
  v4 = a3;
  v6 = Source;
  do
    ++v3;
  while ( Source[v3] );
  v7 = 2 * v3 + 44;
  if ( a3 )
  {
    if ( (unsigned int)v3 < 4 || wcsnicmp(&Source[(unsigned int)v3 - 4], L".DLL", 4uLL) )
      v7 = 2 * v3 + 52;
    else
      v4 = 0;
  }
  Destination->Length = 0;
  Destination->MaximumLength = v7;
  result = PALLOCNOZ(v7, 1818838599LL);
  Destination->Buffer = (PWSTR)result;
  if ( result )
  {
    for ( i = &v6[(unsigned int)v3 - 10]; i >= v6; --i )
    {
      if ( !wcsnicmp(i, L"\\system32\\", 0xAuLL) )
      {
        v6 = i + 10;
        break;
      }
    }
    RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\");
    RtlAppendUnicodeToString(Destination, v6);
    if ( v4 )
      RtlAppendUnicodeToString(Destination, L".dll");
    return 1LL;
  }
  return result;
}

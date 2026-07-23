/*
 * XREFs of SiIsValidDiskDevice @ 0x14089AAC0
 * Callers:
 *     SyspartEnumerateDisks @ 0x14089AB98 (SyspartEnumerateDisks.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 */

char __fastcall SiIsValidDiskDevice(wchar_t *Str1, wchar_t *a2, int *a3)
{
  wchar_t *v6; // r8
  wchar_t v7; // dx
  int v8; // ecx
  __int16 v10; // r9

  if ( wcsicmp(a2, L"Directory") && wcsicmp(a2, L"SymbolicLink") )
    return 0;
  if ( wcsnicmp(Str1, L"Harddisk", 8uLL) )
    return 0;
  v6 = Str1 + 8;
  v7 = Str1[8];
  if ( !v7 )
    return 0;
  v8 = 0;
  if ( v7 != 48 )
  {
    v10 = 0;
    while ( v7 )
    {
      if ( (unsigned __int16)(v7 - 48) > 9u )
        return 0;
      if ( (unsigned __int16)++v10 > 0xAu )
        return 0;
      ++v6;
      v8 = v7 + 2 * (5 * v8 - 24);
      v7 = *v6;
    }
    goto LABEL_7;
  }
  if ( Str1[9] )
    return 0;
LABEL_7:
  if ( a3 )
    *a3 = v8;
  return 1;
}

/*
 * XREFs of SiIsValidDiskDevice @ 0x1408946C0
 * Callers:
 *     SyspartEnumerateDisks @ 0x140894798 (SyspartEnumerateDisks.c)
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1405366B0 (_wcsnicmp.c)
 */

char __fastcall SiIsValidDiskDevice(wchar_t *Str1, wchar_t *a2, _DWORD *a3)
{
  wchar_t *v6; // rdx
  wchar_t v7; // ax
  int v8; // ecx
  __int16 v10; // r8
  int v11; // r9d

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
      v11 = *v6;
      if ( (unsigned __int16)(v11 - 48) > 9u )
        return 0;
      if ( (unsigned __int16)++v10 > 0xAu )
        return 0;
      ++v6;
      v8 = v11 + 2 * (5 * v8 - 24);
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

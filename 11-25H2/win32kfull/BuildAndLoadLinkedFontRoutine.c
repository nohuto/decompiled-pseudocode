/*
 * XREFs of BuildAndLoadLinkedFontRoutine @ 0x1400B6450
 * Callers:
 *     <none>
 * Callees:
 *     bAddFlEntry @ 0x1400B7140 (bAddFlEntry.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall BuildAndLoadLinkedFontRoutine(
        wchar_t *Str1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned __int64 v6; // rbx
  void *v9; // rdi

  v6 = a4;
  if ( a4 > 0x7FFFFFFE )
    return 3221225495LL;
  if ( 2 * a4 == -2 )
    return 3221225495LL;
  v9 = (void *)Win32AllocPool(2 * a4 + 2, 1718382187LL);
  if ( !v9 )
    return 3221225495LL;
  if ( _wcsicmp(Str1, L"SystemDefaultEUDCFont") )
  {
    memmove(v9, a3, (unsigned int)v6);
    *((_WORD *)v9 + (v6 >> 1)) = 0;
    bAddFlEntry((_DWORD)Str1, (_DWORD)v9, a6, -1, 0LL);
  }
  Win32FreePool(v9);
  return 0LL;
}

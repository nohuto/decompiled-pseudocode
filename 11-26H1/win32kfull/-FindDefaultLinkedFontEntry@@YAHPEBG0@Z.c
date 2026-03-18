/*
 * XREFs of ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x140200738
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401020EC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FindDefaultLinkedFontEntry(wchar_t *Str1, char *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rsi

  v4 = 0;
  v5 = *(_QWORD *)(W32GetSessionState((_DWORD)Str1, a2) + 96);
  while ( 1 )
  {
    if ( v4 >= 7 )
      return 1LL;
    v6 = 664LL * v4;
    if ( *(_DWORD *)(v6 + v5 + 14288) )
    {
      v7 = v6 + v5;
      if ( !*(_WORD *)(v6 + v5 + 14412)
        && !_wcsicmp(Str1, (const wchar_t *)(v5 + v6 + 14346))
        && (int)StringCchCopyW((char *)(v7 + 14412), 261LL, a2) < 0 )
      {
        break;
      }
    }
    ++v4;
  }
  return 0LL;
}

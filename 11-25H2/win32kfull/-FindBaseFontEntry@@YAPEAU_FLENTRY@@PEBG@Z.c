/*
 * XREFs of ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1400B7AE0
 * Callers:
 *     bAddFlEntry @ 0x1400B7140 (bAddFlEntry.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401081B0 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     vLinkEudcPFEsWorker @ 0x140201E80 (vLinkEudcPFEsWorker.c)
 *     bDeleteFlEntry @ 0x14030D90C (bDeleteFlEntry.c)
 *     NtGdiGetEudcTimeStampEx @ 0x14030E890 (NtGdiGetEudcTimeStampEx.c)
 * Callees:
 *     <none>
 */

struct _FLENTRY *__fastcall FindBaseFontEntry(wchar_t *Str1, __int64 a2, __int64 a3)
{
  __int64 **v4; // r14
  __int64 *i; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  const wchar_t *v8; // rcx
  const wchar_t *v9; // rdx

  v4 = (__int64 **)(*(_QWORD *)(W32GetSessionState(Str1, a2, a3) + 96) + 14120LL);
  for ( i = *v4; ; i = (__int64 *)*i )
  {
    v7 = 0LL;
    if ( i == (__int64 *)v4 )
      break;
    v6 = 34LL;
    v7 = i;
    if ( *((_WORD *)i + 16) != 64 )
      v6 = 32LL;
    v8 = Str1;
    v9 = (const wchar_t *)((char *)i + v6);
    if ( *Str1 == 64 )
      v8 = Str1 + 1;
    if ( !_wcsicmp(v8, v9) )
      break;
  }
  return (struct _FLENTRY *)v7;
}

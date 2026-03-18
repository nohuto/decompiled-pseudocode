/*
 * XREFs of ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x140102324
 * Callers:
 *     bDeleteFlEntry @ 0x140324924 (bDeleteFlEntry.c)
 * Callees:
 *     ?ParseFontScaleFactor@@YA_NPEBGPEAJ@Z @ 0x140103E88 (-ParseFontScaleFactor@@YA_NPEBGPEAJ@Z.c)
 */

bool __fastcall ParseFontLinkEntry(unsigned __int16 *a1, struct FontLinkData *a2)
{
  size_t v4; // rax
  wchar_t *v5; // rdi
  size_t v6; // rax
  bool result; // al
  size_t v8; // rax
  wchar_t *v9; // rbx

  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *(_QWORD *)a2 = a1;
  v4 = wcscspn(a1, L",");
  if ( !a1[v4] )
    return 1;
  a1[v4] = 0;
  v5 = &a1[v4 + 1 + wcsspn(&a1[v4 + 1], L" ")];
  if ( !iswdigit(*v5) )
  {
    *((_QWORD *)a2 + 1) = v5;
    v6 = wcscspn(v5, L",");
    if ( !v5[v6] )
      return 1;
    v5[v6] = 0;
    v5 += v6 + wcsspn(&v5[v6 + 1], L" ") + 1;
  }
  v8 = wcscspn(v5, L",");
  result = v5[v8]
        && (v5[v8] = 0, v9 = &v5[v8 + 1 + wcsspn(&v5[v8 + 1], L" ")], ParseFontScaleFactor(v5, (int *)a2 + 4))
        && ParseFontScaleFactor(v9, (int *)a2 + 5);
  return result;
}

/*
 * XREFs of ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x1801D7BA0
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1801105E4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180111790 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall KnownGameList::StrStrInsensitive(
        KnownGameList *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  unsigned int v7; // ebx
  struct localeinfo_struct *locale; // r13
  unsigned int v9; // esi
  unsigned int i; // r14d
  wint_t v11; // bx
  bool v12; // zf
  unsigned int v15; // [rsp+68h] [rbp+10h]

  v15 = (unsigned int)a2;
  v4 = -1LL;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  do
    ++v4;
  while ( *(_WORD *)(a3 + 2 * v4) );
  locale = _create_locale(0, "C");
  v9 = 0;
LABEL_4:
  if ( *(_WORD *)(a3 + 2LL * v9) && (unsigned int)v4 - v9 >= v7 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v11 = _towlower_l(*(_WORD *)(a3 + 2LL * (i + v9)), locale);
      v12 = v11 == _towlower_l(*((_WORD *)this + i), locale);
      v7 = v15;
      if ( !v12 )
      {
        ++v9;
        goto LABEL_4;
      }
    }
    v6 = a3 + 2LL * v9;
  }
  _free_locale(locale);
  return (const unsigned __int16 *)v6;
}

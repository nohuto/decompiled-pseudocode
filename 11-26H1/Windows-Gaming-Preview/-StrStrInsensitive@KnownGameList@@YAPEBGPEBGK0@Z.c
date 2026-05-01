/*
 * XREFs of ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180041F18
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E034 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003EC20 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall KnownGameList::StrStrInsensitive(
        KnownGameList *this,
        const unsigned __int16 *a2,
        _WORD *a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rbp
  _WORD *v6; // rdi
  unsigned int v7; // r13d
  __int64 v8; // rsi
  struct localeinfo_struct *locale; // r12
  unsigned int i; // r15d
  wint_t v11; // bx

  v4 = -1LL;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  do
    ++v4;
  while ( a3[v4] );
  LODWORD(v8) = 0;
  locale = _create_locale(0, "C");
  if ( *a3 )
  {
    while ( 2 )
    {
      if ( (int)v4 - (int)v8 >= v7 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= v7 )
          {
            v6 = &a3[(unsigned int)v8];
            goto LABEL_12;
          }
          v11 = _towlower_l(a3[i + (unsigned int)v8], locale);
          if ( v11 != _towlower_l(*((_WORD *)this + i), locale) )
            break;
        }
        v8 = (unsigned int)(v8 + 1);
        if ( a3[v8] )
          continue;
      }
      break;
    }
  }
LABEL_12:
  _free_locale(locale);
  return v6;
}

/*
 * XREFs of ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1401A2438
 * Callers:
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1401A21E4 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 * Callees:
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1401A2410 (-GetHotKeyLangID@@YAGK@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByKeyWithLang(
        struct _tagIMEHOTKEYOBJ *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 a5)
{
  int v5; // r11d
  struct _tagIMEHOTKEYOBJ *i; // r10
  int v8; // ecx
  int v9; // edx
  __int16 HotKeyLangID; // ax

  v5 = a2;
  for ( i = a1; ; i = *(struct _tagIMEHOTKEYOBJ **)i )
  {
    if ( !i )
      return 0LL;
    if ( *((_DWORD *)i + 3) == a4 )
    {
      v8 = *((_DWORD *)i + 4);
      v9 = 0;
      if ( (v8 & 0x400) != 0 )
      {
        v9 = 1;
      }
      else if ( (*((_DWORD *)i + 4) & 0xF) != v5 )
      {
        continue;
      }
      if ( (*((_DWORD *)i + 4) & 0xC000) == a3 || ((unsigned __int16)a3 & (unsigned __int16)v8 & 0xC000) != 0 || v9 )
      {
        HotKeyLangID = GetHotKeyLangID(*((_DWORD *)i + 2));
        if ( a5 == HotKeyLangID || !HotKeyLangID )
          break;
      }
    }
  }
  return i;
}

/*
 * XREFs of ?GetHotKeyLangID@@YAGK@Z @ 0x1401D89E4
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1401D875C (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1401D8960 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x140209E34 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 <= 0x7F )
    return word_140362BF0[(unsigned __int64)a1 >> 4];
  else
    return 0LL;
}

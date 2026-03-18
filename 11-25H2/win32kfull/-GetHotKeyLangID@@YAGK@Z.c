/*
 * XREFs of ?GetHotKeyLangID@@YAGK@Z @ 0x1401A2410
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1401A1CAC (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1401A21E4 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1401A2438 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 <= 0x7F )
    return word_140355B90[(unsigned __int64)a1 >> 4];
  else
    return 0LL;
}

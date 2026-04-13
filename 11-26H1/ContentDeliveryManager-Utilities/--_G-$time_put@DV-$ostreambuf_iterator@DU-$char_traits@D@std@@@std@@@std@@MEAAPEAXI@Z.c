/*
 * XREFs of ??_G?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEAAPEAXI@Z @ 0x18001BFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::time_put<char,std::ostreambuf_iterator<char>>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &std::time_put<char,std::ostreambuf_iterator<char>>::`vftable';
  free(a1[2]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

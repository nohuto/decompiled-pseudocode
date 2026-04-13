/*
 * XREFs of ??_E?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEAAPEAXI@Z @ 0x180010940
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x180021906 (--_V@YAXPEAX@Z_0.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::`vector deleting destructor'(
        void **a1,
        char a2)
{
  *a1 = &std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::`vftable';
  operator delete[](a1[2]);
  operator delete[](a1[3]);
  operator delete[](a1[4]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

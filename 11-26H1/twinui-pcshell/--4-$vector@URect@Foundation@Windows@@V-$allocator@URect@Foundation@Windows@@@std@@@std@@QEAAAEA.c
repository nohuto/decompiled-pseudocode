/*
 * XREFs of ??4?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C392C
 * Callers:
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801D9C30 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     ??4SearchAppSizeAndBorderInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x1801F97A0 (--4SearchAppSizeAndBorderInfo@@QEAAAEAU0@$$QEAU0@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall std::vector<Windows::Foundation::Rect>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx

  if ( a1 != a2 )
  {
    v4 = *a1;
    if ( v4 )
    {
      std::_Deallocate<16>(v4, (a1[2] - v4) & 0xFFFFFFFFFFFFFFF0uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}

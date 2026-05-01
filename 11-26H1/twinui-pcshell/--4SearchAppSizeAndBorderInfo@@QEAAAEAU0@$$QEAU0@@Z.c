/*
 * XREFs of ??4SearchAppSizeAndBorderInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x1801F97A0
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023DC7C (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??4?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C392C (--4-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEA.c)
 */

__int64 __fastcall SearchAppSizeAndBorderInfo::operator=(__int64 a1, __int64 a2)
{
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  std::vector<Windows::Foundation::Rect>::operator=((__int64 *)(a1 + 72), (__int64 *)(a2 + 72));
  return a1;
}

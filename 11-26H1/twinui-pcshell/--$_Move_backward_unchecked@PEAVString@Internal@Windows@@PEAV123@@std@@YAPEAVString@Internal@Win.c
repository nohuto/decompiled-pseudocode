/*
 * XREFs of ??$_Move_backward_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x1802BB690
 * Callers:
 *     ??$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0U?$less@X@0@@Z @ 0x18004DACC (--$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAPEAVString@Inte.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18004D95C (-Release@String@Internal@Windows@@QEAAXXZ.c)
 */

HSTRING *__fastcall std::_Move_backward_unchecked<Windows::Internal::String *,Windows::Internal::String *>(
        HSTRING *a1,
        HSTRING *a2,
        HSTRING *a3)
{
  HSTRING *i; // rsi

  for ( i = a2; i != a1; *i = 0LL )
  {
    --a3;
    --i;
    Windows::Internal::String::Release(a3);
    *a3 = *i;
  }
  return a3;
}

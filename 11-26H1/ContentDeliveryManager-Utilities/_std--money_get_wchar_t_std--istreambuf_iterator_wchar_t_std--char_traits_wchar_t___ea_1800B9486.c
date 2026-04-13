/*
 * XREFs of _std::money_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getmfld_::_1_::dtor$7 @ 0x1800B9486
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18004CDE4 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall std::money_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getmfld_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~4u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      (CreativeFramework::TargetedContentLayoutHelpers::Tile *)(a2 + 304),
      a2);
  }
}

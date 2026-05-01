/*
 * XREFs of ??1GridLayoutFactory@@QEAA@XZ @ 0x1804B3F64
 * Callers:
 *     _CSwitchItemGrid::v_LayoutChildren_::_1_::dtor$3 @ 0x1806C977F (_CSwitchItemGrid--v_LayoutChildren_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall GridLayoutFactory::~GridLayoutFactory(GridLayoutFactory *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 67);
}

/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1802BD820
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory___&_IVirtualDesktopPersistence___&_bool_&__::_1_::dtor$2 @ 0x1806D0B5D (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_.c)
 *     _CVirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x1806D0BA5 (_CVirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::~ComPtr<CVirtualDesktopCollection>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(a1);
}

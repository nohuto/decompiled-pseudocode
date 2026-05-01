/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C6C90
 * Callers:
 *     _CVirtualDesktopCollection_CreateInstance_::_1_::dtor$0 @ 0x1806A957D (_CVirtualDesktopCollection_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory___&_IVirtualDesktopPersistence___&_bool_&__::_1_::dtor$2 @ 0x1806A95D7 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::~ComPtr<CVirtualDesktopCollection>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(a1);
}

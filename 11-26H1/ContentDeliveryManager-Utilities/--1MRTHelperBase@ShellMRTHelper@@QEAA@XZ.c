/*
 * XREFs of ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ @ 0x1800ABC34
 * Callers:
 *     ??1MRTHelperForPackage@ShellMRTHelper@@QEAA@XZ @ 0x1800ABC74 (--1MRTHelperForPackage@ShellMRTHelper@@QEAA@XZ.c)
 *     ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x1800AC0AC (-PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@W.c)
 *     _ShellMRTHelper::MRTHelperForPackage::MRTHelperForPackage_::_1_::dtor$0 @ 0x1800BE921 (_ShellMRTHelper--MRTHelperForPackage--MRTHelperForPackage_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003DAC8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall ShellMRTHelper::MRTHelperBase::~MRTHelperBase(ShellMRTHelper::MRTHelperBase *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 72);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
}

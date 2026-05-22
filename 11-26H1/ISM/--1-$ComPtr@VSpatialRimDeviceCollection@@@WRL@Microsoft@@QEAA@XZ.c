/*
 * XREFs of ??1?$ComPtr@VSpatialRimDeviceCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D220C
 * Callers:
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$3 @ 0x1801D979A (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$3.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$4 @ 0x1801D97B0 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$4.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$5 @ 0x1801D97C6 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$5.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$6 @ 0x1801D97DC (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$6.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$7 @ 0x1801D97F2 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$7.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$8 @ 0x1801D9808 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$8.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$9 @ 0x1801D981E (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$9.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$10 @ 0x1801D9834 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$10.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$11 @ 0x1801D984A (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$11.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$12 @ 0x1801D9860 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$12.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$13 @ 0x1801D9876 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialRimDeviceCollection>::~ComPtr<SpatialRimDeviceCollection>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}

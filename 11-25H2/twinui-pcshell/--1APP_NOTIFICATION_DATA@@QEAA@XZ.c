/*
 * XREFs of ??1APP_NOTIFICATION_DATA@@QEAA@XZ @ 0x180089C28
 * Callers:
 *     ?Release@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x180089BB0 (-Release@-$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall APP_NOTIFICATION_DATA::~APP_NOTIFICATION_DATA(
        APP_NOTIFICATION_DATA *this,
        const struct std::nothrow_t *a2)
{
  operator delete(*(void **)this, a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}

/*
 * XREFs of ??1MarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ @ 0x180559824
 * Callers:
 *     ?Release@?$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@UEAAKXZ @ 0x180559C20 (-Release@-$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall VirtualDesktopAnimationSyncNotificationInstance::MarshalledData::~MarshalledData(
        VirtualDesktopAnimationSyncNotificationInstance::MarshalledData *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}

/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@@Z @ 0x1802B4CB0
 * Callers:
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800813D0 (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall VirtualDesktopsApi::RuntimeClassInitialize(
        VirtualDesktopsApi *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopCollection *a3,
        struct IVirtualDesktopVisibilityPolicy *a4,
        struct IVirtualDesktopWindowMoveManager *a5,
        struct IVirtualDesktopLock *a6)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, (__int64)a4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a6);
  return 0LL;
}

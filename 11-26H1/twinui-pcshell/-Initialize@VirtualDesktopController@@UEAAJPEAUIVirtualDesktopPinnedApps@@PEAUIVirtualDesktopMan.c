/*
 * XREFs of ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@@Z @ 0x1800E4760
 * Callers:
 *     ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180491D30 (-Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirt_ea_180491D30.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::Initialize(
        VirtualDesktopController *this,
        struct IVirtualDesktopPinnedApps *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        struct IVirtualDesktopDataSourceInternal *a5)
{
  RTL_SRWLOCK *v9; // r14
  __int64 v10; // rcx

  v9 = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, (__int64)a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a4);
  if ( *((struct IVirtualDesktopDataSourceInternal **)this + 9) != a5 )
  {
    if ( a5 )
      (*(void (__fastcall **)(struct IVirtualDesktopDataSourceInternal *))(*(_QWORD *)a5 + 8LL))(a5);
    v10 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a5;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return 0LL;
}

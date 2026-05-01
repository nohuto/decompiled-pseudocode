/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1800BBD94
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktop@@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1800BBC90 (--$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1800BBA04 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktop@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktop@@@Z @ 0x1800E1B4C (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::RuntimeClassInitialize(
        VirtualDesktop *this,
        struct IVirtualDesktop *a2,
        struct IThumbnailDeviceSource *a3,
        struct IVirtualDesktopManagerInternal *a4,
        struct IVirtualDesktopNotificationService *a5)
{
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 14, (__int64)a2);
  if ( *((struct IThumbnailDeviceSource **)this + 17) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IThumbnailDeviceSource *))(*(_QWORD *)a3 + 8LL))(a3);
    v14 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 15, (__int64)a4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 16, (__int64)a5);
  v10 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),VirtualDesktop *>(
          (int)this + 152,
          *((_QWORD *)this + 16),
          v8,
          v9,
          (__int64)this);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( (int)VirtualDesktop::CalculateDesktopIndex(this) < 0 )
      *((_QWORD *)this + 18) = 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}

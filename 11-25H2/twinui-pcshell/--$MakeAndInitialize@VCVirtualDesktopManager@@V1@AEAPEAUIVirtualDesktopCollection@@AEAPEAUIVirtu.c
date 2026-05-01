/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x1800A04F4
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18009E880 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A07E8 (-InternalRelease@-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A0810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1800A0810.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x1800A1338 (-RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtual.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopManager@@QEAA@XZ @ 0x18052E408 (--0CVirtualDesktopManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,std::nullptr_t,IVirtualDesktopLock * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopNotification **a4,
        struct IVirtualDesktopForegroundPolicy **a5,
        struct IVirtualDesktopPersistence **a6,
        void *a7,
        struct IVirtualDesktopLock **a8)
{
  CVirtualDesktopManager *v12; // rax
  volatile signed __int64 *v13; // rbx
  volatile int *v14; // rdx
  int v15; // esi
  signed __int64 v16; // rax
  signed __int64 v18; // rtt
  struct IUnknown *v19; // [rsp+30h] [rbp-28h]
  void *v20; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CVirtualDesktopManager *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v12;
  if ( !v12 )
    return 2147942414LL;
  v13 = (volatile signed __int64 *)CVirtualDesktopManager::CVirtualDesktopManager(v12);
  v20 = (void *)v13;
  a7 = 0LL;
  v15 = CVirtualDesktopManager::RuntimeClassInitialize((CVirtualDesktopManager *)v13, *a2, *a3, *a4, *a5, *a6, v19, *a8);
  if ( v15 < 0 )
  {
    Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(&v20);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&a7);
    return (unsigned int)v15;
  }
  else
  {
    if ( v13 )
    {
      v16 = *((_QWORD *)v13 + 12);
      while ( v16 >= 0 )
      {
        if ( (_DWORD)v16 != 0x7FFFFFFF )
        {
          v18 = v16;
          v16 = _InterlockedCompareExchange64(v13 + 12, v16 + 1, v16);
          if ( v18 != v16 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v16 + 16), v14);
    }
LABEL_7:
    *a1 = v13;
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v13);
    return 0LL;
  }
}

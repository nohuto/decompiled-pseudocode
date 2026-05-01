/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18008007C
 * Callers:
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180082428 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopFactory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EFF40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopF.c)
 *     ??0CVirtualDesktopFactory@@QEAA@XZ @ 0x1802A9248 (--0CVirtualDesktopFactory@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopFactory,CVirtualDesktopFactory,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  CVirtualDesktopFactory *v6; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  volatile int *v10; // rdx

  *a1 = 0LL;
  v6 = (CVirtualDesktopFactory *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
    return 2147942414LL;
  v8 = (__int64 *)CVirtualDesktopFactory::CVirtualDesktopFactory(v6);
  v9 = *a3;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v8 + 2, *a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v8 + 3, v9);
  if ( v8 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v8 + 12), v10);
    *a1 = v8;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopFactory>::Release(v8);
  }
  else
  {
    *a1 = 0LL;
  }
  return 0LL;
}

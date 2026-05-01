/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180081AD0
 * Callers:
 *     ??1?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800813C4 (--1-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x180081D78 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800826D8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180081B00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180081B00.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}

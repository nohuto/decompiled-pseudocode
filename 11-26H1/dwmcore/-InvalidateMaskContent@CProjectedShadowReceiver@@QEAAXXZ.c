/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18021DFE8
 * Callers:
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18001E9C8 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x180215134 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18021A20C (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18027E0E0 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x18027E12C (-OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5338 (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180190FBC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectedShadowReceiver::InvalidateMaskContent(volatile signed __int32 **this)
{
  Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(this + 15);
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    (*((void (__fastcall **)(volatile signed __int32 **, _QWORD, volatile signed __int32 **))*this + 10))(
      this,
      0LL,
      this);
    CProjectedShadowReceiver::RequestRedraw((CProjectedShadowReceiver *)this);
  }
}

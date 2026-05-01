/*
 * XREFs of ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180290298
 * Callers:
 *     ?Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z @ 0x18028FEBC (-Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z.c)
 *     ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x1805C5D08 (-Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1805C5F90 (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 *     ?StopActivity@PinManagerIsItemPinned@PinManagerTelemetry@@MEAAXXZ @ 0x1805C64B0 (-StopActivity@PinManagerIsItemPinned@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@MEAAXXZ @ 0x1805C66F0 (-StopActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@MEAAXXZ @ 0x1805C6930 (-StopActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerRequestPinItem@PinManagerTelemetry@@MEAAXXZ @ 0x1805C6B70 (-StopActivity@PinManagerRequestPinItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@MEAAXXZ @ 0x1805C6DB0 (-StopActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@MEAAXXZ @ 0x1805C6FF0 (-StopActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinningActivity@TaskbarPinningTelemetry@@MEAAXXZ @ 0x180670A90 (-StopActivity@PinningActivity@TaskbarPinningTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180670CD0 (-StopActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180670F10 (-StopActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180671150 (-StopActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180671390 (-StopActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180290300 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  SRWLock = 0LL;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 272) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}

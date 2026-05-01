/*
 * XREFs of ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18045E480
 * Callers:
 *     _lambda_8d7ff6ea4a024ac9f0217c619eab51b9_::operator() @ 0x18045E134 (_lambda_8d7ff6ea4a024ac9f0217c619eab51b9_--operator().c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18045E348 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 * Callees:
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     _lambda_938783a7a9d4cf23ff264fef3f831840_::operator() @ 0x18045E1FC (_lambda_938783a7a9d4cf23ff264fef3f831840_--operator().c)
 */

char __fastcall ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2)
{
  _QWORD *v3[5]; // [rsp+20h] [rbp-28h] BYREF
  struct IImmersiveMonitor *v4; // [rsp+58h] [rbp+10h] BYREF
  char v5; // [rsp+60h] [rbp+18h] BYREF

  v4 = a2;
  v5 = 0;
  _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
    v3,
    (__int64)&v4,
    (__int64)this,
    (__int64)&v5);
  lambda_938783a7a9d4cf23ff264fef3f831840_::operator()(v3);
  return v5;
}

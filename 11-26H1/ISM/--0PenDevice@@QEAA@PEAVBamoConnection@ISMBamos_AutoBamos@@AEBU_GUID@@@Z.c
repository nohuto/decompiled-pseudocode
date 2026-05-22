/*
 * XREFs of ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@AEBU_GUID@@@Z @ 0x180194A84
 * Callers:
 *     ?EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x18018ED88 (-EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_po.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??$?0U?$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@$$T@Z @ 0x18005B630 (--$-0U-$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@-$unique_ptr@VCSharedCircularQu.c)
 *     ?SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z @ 0x1801955A0 (-SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
PenDevice *__fastcall PenDevice::PenDevice(
        PenDevice *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2,
        const struct _GUID *a3)
{
  BamoPenDevicePrincipal *v5; // rdi

  *(_QWORD *)this = &BamoPenDevicePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v5 = (PenDevice *)((char *)this + 8);
  *((_QWORD *)this + 1) = &PenDevice::`vftable'{for `IPenDevicePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((PenDevice *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoPenDevicePrincipalImpl::`vftable';
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &PenDevice::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v5 = &PenDevice::`vftable'{for `IPenDevicePrincipal'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>((_QWORD *)this + 13);
  BamoPenDevicePrincipal::SetUniqueId(v5, a3);
  return this;
}

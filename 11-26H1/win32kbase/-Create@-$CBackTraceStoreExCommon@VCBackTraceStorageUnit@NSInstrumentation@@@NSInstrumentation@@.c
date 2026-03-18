/*
 * XREFs of ?Create@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401B4B88
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1401C5D74 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 * Callees:
 *     ?Initialize@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NI@Z @ 0x1401FCBB4 (-Initialize@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@.c)
 */

void *NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::Create()
{
  __int64 Pool2; // rax
  void *v1; // rbx

  Pool2 = ExAllocatePool2(258LL, 56LL, 860451669LL);
  v1 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Initialize(Pool2) )
  {
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return v1;
}

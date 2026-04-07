/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18005C480
 * Callers:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18005C25C (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18005C324 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18005C3C4 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180091EF4 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 * Callees:
 *     memcpy_s @ 0x18005C508 (memcpy_s.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18005C5A4 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::heap_buffer::push_back(
        wil::details_abi::heap_buffer *this,
        const void *Source,
        rsize_t SourceSize)
{
  rsize_t v6; // rcx
  bool result; // al
  unsigned __int64 v8; // rdx

  v6 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( SourceSize + *((_QWORD *)this + 1) - *(_QWORD *)this < v6 )
    goto LABEL_2;
  v8 = SourceSize;
  if ( SourceSize < 2 * v6 )
    v8 = 2 * v6;
  result = wil::details_abi::heap_buffer::reserve(this, v8);
  if ( result )
  {
LABEL_2:
    memcpy_s(
      *((void *const *)this + 1),
      (*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) & -(__int64)(*((_QWORD *)this + 1) < *((_QWORD *)this + 2)),
      Source,
      SourceSize);
    *((_QWORD *)this + 1) += SourceSize;
    return 1;
  }
  return result;
}

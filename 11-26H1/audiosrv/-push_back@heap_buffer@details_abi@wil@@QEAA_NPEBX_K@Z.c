/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800AA20C
 * Callers:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800AA170 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800CB8C8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 * Callees:
 *     memcpy_s_0 @ 0x180069880 (memcpy_s_0.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800AA28C (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::heap_buffer::push_back(wil::details_abi::heap_buffer *this, const void *Source)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  bool result; // al

  v4 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( *((_QWORD *)this + 1) - *(_QWORD *)this + 16LL < v4 )
    goto LABEL_5;
  v5 = 16LL;
  if ( 2 * v4 > 0x10 )
    v5 = 2 * v4;
  result = wil::details_abi::heap_buffer::reserve(this, v5);
  if ( result )
  {
LABEL_5:
    memcpy_s_0(
      *((void *const *)this + 1),
      (*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) & -(__int64)(*((_QWORD *)this + 1) < *((_QWORD *)this + 2)),
      Source,
      0x10uLL);
    *((_QWORD *)this + 1) += 16LL;
    return 1;
  }
  return result;
}

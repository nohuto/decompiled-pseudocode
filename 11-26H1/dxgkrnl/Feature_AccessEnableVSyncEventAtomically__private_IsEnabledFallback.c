/*
 * XREFs of Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback @ 0x14009B7B4
 * Callers:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x14004D29C (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_AccessEnableVSyncEventAtomically__private_descriptor);
}

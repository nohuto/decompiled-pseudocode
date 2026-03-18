/*
 * XREFs of Feature_4132124986__private_IsEnabledDeviceUsageNoInline @ 0x1405CB8AC
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x14051B810 (IopCloseWaitCompletionPacket.c)
 *     NtAssociateWaitCompletionPacket @ 0x14051B900 (NtAssociateWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x14051BB80 (NtCancelWaitCompletionPacket.c)
 *     NtCreateWaitCompletionPacket @ 0x140B6EB90 (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     Feature_4132124986__private_IsEnabledFallback @ 0x1405CB8E8 (Feature_4132124986__private_IsEnabledFallback.c)
 */

__int64 Feature_4132124986__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_4132124986__private_featureState & 0x10) != 0 )
    return Feature_4132124986__private_featureState & 1;
  else
    return Feature_4132124986__private_IsEnabledFallback((unsigned int)Feature_4132124986__private_featureState, 3LL);
}

/*
 * XREFs of AlpcGetMessageAttribute @ 0x1404277C0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     SshpAlpcMessageCallback @ 0x1407EA2C0 (SshpAlpcMessageCallback.c)
 *     PopUmpoProcessMessages @ 0x140AA766C (PopUmpoProcessMessages.c)
 *     CmFcpCreateAlpcSectionView @ 0x140B3B244 (CmFcpCreateAlpcSectionView.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140427870 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (Buffer->AllocatedAttributes & AttributeFlag) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}

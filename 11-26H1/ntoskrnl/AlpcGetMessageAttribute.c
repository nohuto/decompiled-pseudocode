/*
 * XREFs of AlpcGetMessageAttribute @ 0x140438B60
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     SshpAlpcMessageCallback @ 0x1407E4760 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140AAA08C (PopUmpoProcessMessages.c)
 *     CmFcpCreateAlpcSectionView @ 0x140B39034 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140438C10 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}

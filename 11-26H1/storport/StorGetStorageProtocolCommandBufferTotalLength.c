/*
 * XREFs of StorGetStorageProtocolCommandBufferTotalLength @ 0x140097670
 * Callers:
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A94CC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     NvmeAdapterStorageProtocolCommandIoctlCompletion @ 0x1400DFF80 (NvmeAdapterStorageProtocolCommandIoctlCompletion.c)
 *     NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140114940 (NvmeNamespaceStorageProtocolCommandIoctlCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetStorageProtocolCommandBufferTotalLength(_DWORD *a1, unsigned int *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned int v7; // edx
  __int64 result; // rax

  v4 = 84LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = (unsigned int)(a1[9] + a1[13]);
  if ( v5 > 0x54 )
    v4 = (unsigned int)v5;
  v6 = (unsigned int)(a1[8] + a1[12]);
  if ( v6 <= v4 )
    v6 = (unsigned int)v4;
  v7 = a1[7] + a1[11];
  if ( v7 <= v6 )
    v7 = v6;
  result = 0LL;
  *a2 = v7;
  return result;
}

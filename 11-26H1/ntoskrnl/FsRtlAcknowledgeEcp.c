/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x140A9F910
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x1402C2000 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}

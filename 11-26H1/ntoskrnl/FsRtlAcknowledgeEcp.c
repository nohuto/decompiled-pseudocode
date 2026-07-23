/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x140A9FC40
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14030CCC0 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}

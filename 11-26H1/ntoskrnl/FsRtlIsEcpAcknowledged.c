/*
 * XREFs of FsRtlIsEcpAcknowledged @ 0x140A885E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpAcknowledged(PVOID EcpContext)
{
  return (*((_DWORD *)EcpContext - 6) & 8) != 0;
}

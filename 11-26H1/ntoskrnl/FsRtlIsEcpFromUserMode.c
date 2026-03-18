/*
 * XREFs of FsRtlIsEcpFromUserMode @ 0x140A882D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpFromUserMode(PVOID EcpContext)
{
  return (*((_DWORD *)EcpContext - 6) & 0x10) != 0;
}

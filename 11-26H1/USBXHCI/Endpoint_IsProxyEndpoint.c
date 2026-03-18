/*
 * XREFs of Endpoint_IsProxyEndpoint @ 0x140035FD8
 * Callers:
 *     TR_Create @ 0x140081594 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Endpoint_IsProxyEndpoint(__int64 a1)
{
  return *(_BYTE *)(a1 + 1352);
}

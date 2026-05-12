/*
 * XREFs of StorIsSoftNumaOptIn @ 0x14005C038
 * Callers:
 *     StorGetActiveGatewayCountRequired @ 0x140025764 (StorGetActiveGatewayCountRequired.c)
 *     StorCreateIoGateways @ 0x1400AEDA8 (StorCreateIoGateways.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsSoftNumaOptIn(__int64 a1)
{
  return (*(_BYTE *)(a1 + 4435) & 8) != 0 && (unsigned int)(g_ProcessorCountPerGateway - 4) <= 0xC;
}

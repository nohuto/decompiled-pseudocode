/*
 * XREFs of PktMonClientAddEdge @ 0x1400605E0
 * Callers:
 *     ndisPktMonOpenRegister @ 0x140164380 (ndisPktMonOpenRegister.c)
 *     ndisPktMonFilterRegister @ 0x140166B30 (ndisPktMonFilterRegister.c)
 *     ndisPktMonMiniportRegister @ 0x14016E5F0 (ndisPktMonMiniportRegister.c)
 * Callees:
 *     MediaTypeToPacketType @ 0x140060650 (MediaTypeToPacketType.c)
 *     PktMonClientAddEdgeEx @ 0x140060750 (PktMonClientAddEdgeEx.c)
 */

__int64 __fastcall PktMonClientAddEdge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v6; // eax
  int v7; // r9d
  int v8; // r10d

  v6 = MediaTypeToPacketType(a5, a2, a3, a2);
  return PktMonClientAddEdgeEx(v8, v7, a6, v7, v6, a6);
}

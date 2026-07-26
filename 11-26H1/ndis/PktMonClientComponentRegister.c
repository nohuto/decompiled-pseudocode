/*
 * XREFs of PktMonClientComponentRegister @ 0x140060620
 * Callers:
 *     ndisPktMonOpenRegister @ 0x140164380 (ndisPktMonOpenRegister.c)
 *     ndisPktMonFilterRegister @ 0x140166B30 (ndisPktMonFilterRegister.c)
 *     ndisPktMonMiniportRegister @ 0x14016E5F0 (ndisPktMonMiniportRegister.c)
 * Callees:
 *     MediaTypeToPacketType @ 0x140060650 (MediaTypeToPacketType.c)
 *     PktMonClientComponentRegisterEx @ 0x140060690 (PktMonClientComponentRegisterEx.c)
 */

__int64 __fastcall PktMonClientComponentRegister(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d

  v5 = MediaTypeToPacketType(a5, a2, a3, a4);
  return PktMonClientComponentRegisterEx(v9, v8, v6, v7, v5);
}

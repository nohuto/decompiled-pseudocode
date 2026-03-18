/*
 * XREFs of DebugOutPort @ 0x14006EE40
 * Callers:
 *     DebugO @ 0x14006EDE0 (DebugO.c)
 *     DebugOD @ 0x14006EE00 (DebugOD.c)
 *     DebugOW @ 0x14006EE20 (DebugOW.c)
 * Callees:
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     WriteSystemIO @ 0x14002D2A0 (WriteSystemIO.c)
 *     _strtoui64_0 @ 0x140055D79 (_strtoui64_0.c)
 *     IsNumber @ 0x14006F33C (IsNumber.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_14008EF68 == 2 )
    {
LABEL_9:
      dword_14008EF68 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(0xE0u, 0LL, 0LL, 0LL, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_14008EF68 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_14008EF68 == 1 )
    dword_14008EF64 = v5;
  else
    WriteSystemIO(dword_14008EF64, a2, v5);
  return v2;
}

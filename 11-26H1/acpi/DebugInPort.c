/*
 * XREFs of DebugInPort @ 0x14006EB80
 * Callers:
 *     DebugI @ 0x14006EB20 (DebugI.c)
 *     DebugID @ 0x14006EB40 (DebugID.c)
 *     DebugIW @ 0x14006EB60 (DebugIW.c)
 * Callees:
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     ReadSystemIO @ 0x14002FE10 (ReadSystemIO.c)
 *     _strtoui64_0 @ 0x140055D79 (_strtoui64_0.c)
 *     IsNumber @ 0x14006F33C (IsNumber.c)
 */

__int64 __fastcall DebugInPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  unsigned int SystemIO; // esi
  unsigned int v7; // edi
  unsigned int v8; // edi

  v2 = 0;
  if ( !a1 )
  {
    if ( byte_14008EF80 )
    {
      byte_14008EF80 = 0;
      return v2;
    }
LABEL_13:
    PrintDebugMessage(0xDCu, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-2;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( byte_14008EF80 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_13;
  SystemIO = ReadSystemIO(v5, a2, -1);
  ConPrintf("%04x: ", v5);
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 2 )
        ConPrintf("%08x", SystemIO);
    }
    else
    {
      ConPrintf("%04x", (unsigned __int16)SystemIO);
    }
  }
  else
  {
    ConPrintf("%02x", (unsigned __int8)SystemIO);
  }
  ConPrintf("\n");
  byte_14008EF80 = 1;
  return v2;
}

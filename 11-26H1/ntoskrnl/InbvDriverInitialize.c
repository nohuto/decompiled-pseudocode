/*
 * XREFs of InbvDriverInitialize @ 0x140CBA030
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvSetFunction @ 0x140531DE8 (InbvSetFunction.c)
 *     _strupr @ 0x140535360 (_strupr.c)
 *     strstr @ 0x140535B20 (strstr.c)
 *     InbvDetermineFunction @ 0x1405C4B30 (InbvDetermineFunction.c)
 *     BvgaDriverInitialize @ 0x140CBA110 (BvgaDriverInitialize.c)
 *     BgkInitialize @ 0x140D13854 (BgkInitialize.c)
 */

char __fastcall InbvDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  int v7; // ecx
  char *v8; // rcx
  char *v9; // rax

  v6 = 1;
  if ( (unsigned int)InbvDetermineFunction(a2) != 2 )
  {
    if ( (int)BgkInitialize(a2, a1) < 0 )
    {
      v6 = 0;
      BvgaDisplayState = 0;
      v7 = 3;
    }
    else
    {
      BvgaDisplayState = 2;
      v7 = 4;
    }
    InbvSetFunction(v7);
  }
  v8 = *(char **)(a2 + 216);
  if ( !v8 )
    return BvgaDriverInitialize(a1, a2, a3);
  v9 = strupr(v8);
  if ( !strstr(v9, "NOVGA") )
    return BvgaDriverInitialize(a1, a2, a3);
  return v6;
}

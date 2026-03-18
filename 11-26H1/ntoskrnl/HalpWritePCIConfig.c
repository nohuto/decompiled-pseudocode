/*
 * XREFs of HalpWritePCIConfig @ 0x140439BC0
 * Callers:
 *     HalpSetPCIData @ 0x140439C40 (HalpSetPCIData.c)
 *     HalpValidPCISlot @ 0x14043A3D4 (HalpValidPCISlot.c)
 * Callees:
 *     HalpValidPCISlot @ 0x14043A3D4 (HalpValidPCISlot.c)
 *     HalpPCIConfig @ 0x14043A4F0 (HalpPCIConfig.c)
 */

__int64 __fastcall HalpWritePCIConfig(
        unsigned __int16 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rdx

  if ( !(unsigned __int8)HalpValidPCISlot() )
    return 0LL;
  LOBYTE(v10) = a2;
  HalpPCIConfig(a1, v10, a3, a4, a5, a6, 1);
  return a6;
}

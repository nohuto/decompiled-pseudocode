/*
 * XREFs of HalpReadPCIConfig @ 0x14042CBF0
 * Callers:
 *     HalpSetPCIData @ 0x14042C4F0 (HalpSetPCIData.c)
 *     HalpGetPCIData @ 0x14042C720 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x14042CC84 (HalpValidPCISlot.c)
 * Callees:
 *     HalpValidPCISlot @ 0x14042CC84 (HalpValidPCISlot.c)
 *     HalpPCIConfig @ 0x14042CDA0 (HalpPCIConfig.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpReadPCIConfig(
        unsigned __int16 a1,
        char a2,
        unsigned int a3,
        void *a4,
        int a5,
        unsigned int Size)
{
  __int64 v10; // rdx

  if ( (unsigned __int8)HalpValidPCISlot() )
  {
    LOBYTE(v10) = a2;
    HalpPCIConfig(a1, v10, a3, a4, a5, Size, 0);
    return Size;
  }
  else
  {
    memset_0(a4, 255, Size);
    return 0LL;
  }
}

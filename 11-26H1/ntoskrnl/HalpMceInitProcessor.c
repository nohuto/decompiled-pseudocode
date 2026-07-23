/*
 * XREFs of HalpMceInitProcessor @ 0x140C10478
 * Callers:
 *     HalpInitializeMce @ 0x140BEFEA4 (HalpInitializeMce.c)
 *     HalpMceInit @ 0x140C10328 (HalpMceInit.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpMcaSetProcessorConfig @ 0x140BEF1B8 (HalpMcaSetProcessorConfig.c)
 *     HalpMceInitializeErrorPacket @ 0x140C11148 (HalpMceInitializeErrorPacket.c)
 */

__int64 __fastcall HalpMceInitProcessor(unsigned int *Src, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  _BYTE v7[36]; // [rsp+30h] [rbp-768h] BYREF
  int v8; // [rsp+54h] [rbp-744h]
  unsigned __int8 v9; // [rsp+5Bh] [rbp-73Dh]

  memset_0(v7, 0, 0x74CuLL);
  v4 = Src[2];
  v8 = 8;
  if ( (int)PshedGetErrorSourceInfo(v4, v7) < 0 )
    memmove(v7, Src, *Src);
  DbgPrintEx(
    0x88u,
    2u,
    "%s: ErrorSourceV2.Flags:0x%08x MceDescriptor.NumberOfBanks:0x%02x\n",
    "HalpMceInitProcessor",
    v8,
    v9);
  if ( HalpMcaEnabled )
    HalpMceInitializeErrorPacket(Src, a2);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  HalpMcaSetProcessorConfig((__int64)v7, a2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

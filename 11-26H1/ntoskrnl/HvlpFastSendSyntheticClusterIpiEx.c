/*
 * XREFs of HvlpFastSendSyntheticClusterIpiEx @ 0x1402F3854
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140251330 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastSendSyntheticClusterIpiEx(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v5[104]; // [rsp+48h] [rbp-80h] BYREF

  v4 = a2;
  v2 = HvlpAffinityToHvProcessorSet(a1, v5, 88LL);
  return (unsigned __int16)HvcallFastExtended(((v2 + 7) << 14) & 0x3FE0000 | 0x10015u, (unsigned int)&v4, v2 + 24, 0, 0) != 0
       ? 0xC0000001
       : 0;
}

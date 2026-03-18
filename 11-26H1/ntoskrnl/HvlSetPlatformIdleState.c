/*
 * XREFs of HvlSetPlatformIdleState @ 0x1405BF6A0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 * Callees:
 *     HvlGetLpIndexFromProcessorIndex @ 0x1403E62C0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1403E672C (HvlpSetPowerProperty.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HvlSetPlatformIdleState(int a1)
{
  unsigned int Number; // ecx
  __int128 v4; // [rsp+20h] [rbp-228h] BYREF
  int v5; // [rsp+30h] [rbp-218h]

  DWORD1(v4) = 0;
  memset_0(&v4, 0, 0x214uLL);
  Number = KeGetPcr()->Prcb.Number;
  LODWORD(v4) = 3;
  DWORD2(v4) = HvlGetLpIndexFromProcessorIndex(Number);
  v5 = a1;
  return HvlpSetPowerProperty(&v4);
}

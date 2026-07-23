/*
 * XREFs of HvlSetLogicalProcessorCppcRequest @ 0x1405C1EB0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpSetPowerProperty @ 0x1402F360C (HvlpSetPowerProperty.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlSetLogicalProcessorCppcRequest(int a1, __int64 a2)
{
  __int128 v5; // [rsp+20h] [rbp-228h] BYREF
  __int64 v6; // [rsp+30h] [rbp-218h]

  DWORD1(v5) = 0;
  memset_0(&v5, 0, 0x214uLL);
  LODWORD(v5) = 6;
  DWORD2(v5) = a1;
  v6 = a2;
  return HvlpSetPowerProperty(&v5);
}

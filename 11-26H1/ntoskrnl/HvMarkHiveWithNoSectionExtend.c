/*
 * XREFs of HvMarkHiveWithNoSectionExtend @ 0x140781620
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     HvpViewMapAdjustFlag @ 0x140B0BED0 (HvpViewMapAdjustFlag.c)
 */

__int64 __fastcall HvMarkHiveWithNoSectionExtend(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 160);
  if ( (result & 0x8000000) == 0 )
  {
    result = (unsigned int)result | 0x8000000;
    *(_DWORD *)(a1 + 160) = result;
    if ( (result & 0x20000) != 0 )
    {
      LOBYTE(a3) = 1;
      return HvpViewMapAdjustFlag(a1 + 224, 8LL, a3);
    }
  }
  return result;
}

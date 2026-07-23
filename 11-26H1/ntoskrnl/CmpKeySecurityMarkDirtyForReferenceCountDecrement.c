/*
 * XREFs of CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1404D6D18
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     HvMarkCellDirty @ 0x1408E1C90 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpKeySecurityMarkDirtyForReferenceCountDecrement(unsigned int *a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 result; // rax

  result = HvMarkCellDirty(a2, a3);
  if ( (int)result >= 0 )
  {
    if ( a1[3] != 1 )
      return 0LL;
    result = HvMarkCellDirty(a2, a1[1]);
    if ( (int)result >= 0 )
    {
      result = HvMarkCellDirty(a2, a1[2]);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}

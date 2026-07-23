/*
 * XREFs of MiHonorRangeStraddleRequirement @ 0x14048590C
 * Callers:
 *     MiFindEmptyAddressRangeDownTree @ 0x140A4F8B0 (MiFindEmptyAddressRangeDownTree.c)
 *     MiFindEmptyAddressRangeInTree @ 0x140A7CF64 (MiFindEmptyAddressRangeInTree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHonorRangeStraddleRequirement(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 result; // rax

  v4 = ~(a3 - 1);
  v5 = v4 & (a1 + a2 - 1);
  if ( v5 == (a1 & v4) )
    return a1;
  result = v5 - a2;
  if ( !a4 )
    return v4 & (a1 + a2 - 1);
  return result;
}

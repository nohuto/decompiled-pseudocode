/*
 * XREFs of sub_14072E4DB @ 0x14072E4DB
 * Callers:
 *     sub_14072E3C4 @ 0x14072E3C4 (sub_14072E3C4.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_14072E4DB()
{
  __int64 v0; // rbp
  int result; // eax

  _RAX = 56026LL;
  if ( (KeGetPcr()->Prcb.BpbFeatures.AllFlags & 8) != 0 )
  {
    LOBYTE(_RAX) = 32;
    __asm { incsspq rax }
  }
  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState.AllFlags;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x89Eu, KeGetPcr()->Prcb.BpbRetpolineState.AllFlags | 2);
  return result;
}

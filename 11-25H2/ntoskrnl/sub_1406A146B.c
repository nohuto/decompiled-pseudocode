/*
 * XREFs of sub_1406A146B @ 0x1406A146B
 * Callers:
 *     sub_1406A1354 @ 0x1406A1354 (sub_1406A1354.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1406A146B()
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
  __writegsbyte(0x85Eu, KeGetPcr()->Prcb.BpbRetpolineState.AllFlags | 2);
  return result;
}

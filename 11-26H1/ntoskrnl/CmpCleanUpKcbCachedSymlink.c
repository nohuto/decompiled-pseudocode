/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x1408C20B4
 * Callers:
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E0760 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140AB1AF8 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140AB1C48 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1408C3890 (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpCleanUpKcbCachedSymlink(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x400000) == 0 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(a1 + 104));
      result = 65527LL;
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_WORD *)(a1 + 8) &= ~8u;
    }
  }
  return result;
}

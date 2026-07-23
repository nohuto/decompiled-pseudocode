/*
 * XREFs of MiCreatePageChainsForNode @ 0x14071636C
 * Callers:
 *     MiFindClosestNode @ 0x1404FDFBC (MiFindClosestNode.c)
 * Callees:
 *     MiGetOptimalEngineMix @ 0x14050A6C8 (MiGetOptimalEngineMix.c)
 *     MiAllocatePageChainHeader @ 0x140510F80 (MiAllocatePageChainHeader.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePageChainsForNode(__int64 a1, unsigned int a2, __int64 a3)
{
  int OptimalEngineMix; // eax
  _DWORD *PageChainHeader; // rax

  OptimalEngineMix = MiGetOptimalEngineMix(a1, a2, *(_DWORD *)(a3 + 48), a3 + 36);
  if ( !OptimalEngineMix )
    return 3221225473LL;
  *(_DWORD *)(a3 + 32) = OptimalEngineMix;
  *(_DWORD *)(a3 + 28) = OptimalEngineMix;
  *(_DWORD *)(a3 + 12) = a2;
  PageChainHeader = (_DWORD *)MiAllocatePageChainHeader(a1, a3);
  if ( !PageChainHeader )
    return 3221225626LL;
  if ( !PageChainHeader[7] )
  {
    ExFreePoolWithTag(PageChainHeader, 0);
    return 3221225473LL;
  }
  *(_QWORD *)(a3 + 56) = PageChainHeader;
  return 0LL;
}

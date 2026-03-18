/*
 * XREFs of MiProcessPageGroupInfo @ 0x1403C3B34
 * Callers:
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403C673C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     MiSimpleUnlinkPageEx @ 0x14028E170 (MiSimpleUnlinkPageEx.c)
 *     MiUseThreads @ 0x1403C3644 (MiUseThreads.c)
 *     MiDereferencePageChains @ 0x1403C36A4 (MiDereferencePageChains.c)
 *     MiSimpleInsertPage @ 0x1403C5100 (MiSimpleInsertPage.c)
 */

void __fastcall MiProcessPageGroupInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  unsigned int PfnPageSizeIndex; // eax
  __int64 v8; // r14

  *(_DWORD *)(a1 + 16) |= 0x200u;
  *(_QWORD *)(a1 + 504) = MiZeroChainWorker;
  MiUseThreads(a1);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v5 = (__int64 *)(a1 + 656);
    do
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( *v5 == 0x3FFFFFFFFFLL )
          break;
        MiSimpleUnlinkPageEx((__int64)v5, *v5);
        v6 = 48 * v8 - 0x220000000000LL;
        if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 )
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(v6);
        else
          PfnPageSizeIndex = 3;
        MiSimpleInsertPage(a2 + 24LL * PfnPageSizeIndex, v8, 2LL);
      }
      v5 += 17;
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 24) );
  }
  MiDereferencePageChains((volatile signed __int32 *)a1);
}

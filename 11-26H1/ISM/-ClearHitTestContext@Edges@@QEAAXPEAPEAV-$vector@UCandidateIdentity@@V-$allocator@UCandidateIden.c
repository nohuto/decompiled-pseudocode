/*
 * XREFs of ?ClearHitTestContext@Edges@@QEAAXPEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AE18C
 * Callers:
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801B1360 (-Reset@EdgyImpl@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801AD5DC (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@A.c)
 */

void __fastcall Edges::ClearHitTestContext(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  if ( *a2 )
  {
    if ( *(_QWORD *)v2 )
    {
      std::_Destroy_range<std::allocator<CandidateIdentity>>(*(CandidateIdentity **)v2, *(CandidateIdentity **)(v2 + 8));
      std::_Deallocate<16>(
        *(void **)v2,
        (struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(v2 + 16) - *(_QWORD *)v2) >> 3)));
      *(_QWORD *)v2 = 0LL;
      *(_QWORD *)(v2 + 8) = 0LL;
      *(_QWORD *)(v2 + 16) = 0LL;
    }
    operator delete((void *)v2, (const struct std::nothrow_t *)0x18);
    *a2 = 0LL;
  }
}

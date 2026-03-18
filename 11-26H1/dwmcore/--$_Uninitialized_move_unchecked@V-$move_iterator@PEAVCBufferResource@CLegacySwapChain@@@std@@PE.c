/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@PEAVCBufferResource@CLegacySwapChain@@@std@@YAPEAVCBufferResource@CLegacySwapChain@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@V30@PEAV12@@Z @ 0x1802A54F8
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802A594C (--$uninitialized_move@V-$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V-$checked_ar.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CLegacySwapChain::CBufferResource *>,CLegacySwapChain::CBufferResource *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  while ( a1 != a2 )
  {
    v3 = *a1;
    *a1 = 0LL;
    *a3 = v3;
    v4 = a1[1];
    a1[1] = 0LL;
    a3[1] = v4;
    a3 += 2;
    a1 += 2;
  }
  return a3;
}

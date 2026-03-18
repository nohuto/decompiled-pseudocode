/*
 * XREFs of MiConvertBaseLargePage @ 0x14047D5D0
 * Callers:
 *     MiFreeLargePageChain @ 0x1403C971C (MiFreeLargePageChain.c)
 *     MiLargePagePromote @ 0x140479C00 (MiLargePagePromote.c)
 *     MiGetLargePage @ 0x14051E3C4 (MiGetLargePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x14051E74C (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiConvertBaseLargePage(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 24) = v2 & 0xC000000000000000uLL | 1;
    result = *(_DWORD *)(a1 + 32) & 0xFFFF0000 | 2;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v2 & 0xC000000000000000uLL;
    result = *(_DWORD *)(a1 + 32) & 0xFFFF0000;
  }
  *(_DWORD *)(a1 + 32) = result;
  return result;
}

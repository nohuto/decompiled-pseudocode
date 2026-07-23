/*
 * XREFs of MiConvertBaseLargePage @ 0x140476F40
 * Callers:
 *     MiFreeLargePageChain @ 0x1403D35CC (MiFreeLargePageChain.c)
 *     MiLargePagePromote @ 0x140473560 (MiLargePagePromote.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x140520D5C (MiTryUnlinkNodeLargePages.c)
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

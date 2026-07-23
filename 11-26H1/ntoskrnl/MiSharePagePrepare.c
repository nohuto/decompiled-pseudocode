/*
 * XREFs of MiSharePagePrepare @ 0x1402E9990
 * Callers:
 *     MiSharePages @ 0x1402E9008 (MiSharePages.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiProcessSuitableForCombining @ 0x1403FD3DC (MiProcessSuitableForCombining.c)
 *     MiAllocateCombineBlock @ 0x140488D08 (MiAllocateCombineBlock.c)
 */

__int64 __fastcall MiSharePagePrepare(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx

  *(_DWORD *)(a1 + 132) = 0;
  v5 = (_QWORD *)(a1 + 136);
  v6 = 3LL;
  do
  {
    *v5 = 0LL;
    v5 += 5;
    --v6;
  }
  while ( v6 );
  v7 = *(_QWORD **)a1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 312LL);
  if ( v8 > 1 )
    v7[39] = (unsigned int)MiReplenishSlabAllocator(v8, 0x10uLL, 0, a4) == 0;
  if ( !v7[37] )
    v7[37] = MiAllocateCombineBlock(*v7);
  *(_DWORD *)(a1 + 20) &= 0xFFFFFFF3;
  v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 56) = 0LL;
  v10 = *(_QWORD *)(v9 + 32);
  v11 = (unsigned int)((*(_DWORD *)(v10 + 184) & 0xF) != 0) + 1;
  *(_DWORD *)(*(_QWORD *)a1 + 152LL) = v11;
  *(_DWORD *)(a1 + 20) |= 0x20u;
  *(_BYTE *)(a1 + 48) = MiLockWorkingSetShared(v10, v11, a3);
  if ( !v7[37] )
    return 3221225473LL;
  if ( *(_QWORD *)(v9 + 40) )
    return (unsigned int)MiProcessSuitableForCombining() == 0 ? 0xC0000001 : 0;
  return 0LL;
}

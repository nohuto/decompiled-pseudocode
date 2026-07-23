/*
 * XREFs of MiAllocateSlabPageForMdl @ 0x14033C100
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x14033A004 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x14033A374 (MiAllocateMostlyContiguousPagesForMdl.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     MiAsyncSlabReplenish @ 0x1402A4ED4 (MiAsyncSlabReplenish.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 */

__int64 __fastcall MiAllocateSlabPageForMdl(int a1, int a2, char a3, int a4, _DWORD *a5)
{
  int v8; // ebp
  __int64 i; // rdi
  __int64 v11; // r9
  char v13; // r8
  int v14; // eax
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0LL;
  v8 = a4 != 0 ? 0x10 : 0;
  for ( i = MiGetSlabPage(a1, 7, a2, v8 + 1, (__int64)v15, 0);
        i == -1;
        i = MiGetSlabPage(a1, 7, a2, v8 + 1, (__int64)v15, 0) )
  {
    if ( !v15[0] || *a5 )
      break;
    if ( !(unsigned int)MiReplenishSlabAllocator(v15[0], 1uLL, 0x40u, v11) )
    {
      v13 = a4 ? 5 : (a3 & 8) != 0;
      v14 = MiAsyncSlabReplenish(v15[0], (LARGE_INTEGER *)&MiShortTime, v13);
      *a5 = v14;
      if ( v14 )
        break;
    }
  }
  return i;
}

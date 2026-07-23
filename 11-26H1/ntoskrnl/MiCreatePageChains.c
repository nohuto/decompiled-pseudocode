/*
 * XREFs of MiCreatePageChains @ 0x1403CD4B8
 * Callers:
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406F32E0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGroupZeroHugeRange @ 0x140709CF4 (MiGroupZeroHugeRange.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 * Callees:
 *     MiFindClosestNode @ 0x1404FDFBC (MiFindClosestNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiCreatePageChains(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  int ClosestNode; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  int v16; // [rsp+38h] [rbp-60h]
  int v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h]

  memset_0(&v13, 0, 0x40uLL);
  v17 = a5;
  v13 = a1;
  v14 = a2;
  v16 = a3;
  v15 = a4;
  ClosestNode = MiFindClosestNode(a2, v9, &v13);
  v11 = v18;
  if ( ClosestNode < 0 )
    return 0LL;
  return v11;
}

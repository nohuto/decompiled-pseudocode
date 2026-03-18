/*
 * XREFs of MiCreatePageChains @ 0x1403C35B8
 * Callers:
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403C673C (MiAllocateLargeZeroPages.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406EE130 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406EE640 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGroupZeroHugeRange @ 0x140705024 (MiGroupZeroHugeRange.c)
 *     MiCreateDynamicPfns @ 0x140865E98 (MiCreateDynamicPfns.c)
 *     MiFindLargePageMemory @ 0x140B617F8 (MiFindLargePageMemory.c)
 * Callees:
 *     MiFindClosestNode @ 0x14050424C (MiFindClosestNode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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

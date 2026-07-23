/*
 * XREFs of MiInitializeDynamicRegion @ 0x140CFFB44
 * Callers:
 *     MiInitializeSystemCache @ 0x140870CF8 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140CFFE1C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140D002A8 (MiBuildSystemDataViews.c)
 *     MiInitializeKernelStacks @ 0x140D02980 (MiInitializeKernelStacks.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140D05144 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140D053C0 (MiInitializeSystemPtes.c)
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1402A42B4 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1406F9C10 (MiBuildDynamicRegion.c)
 */

unsigned __int64 __fastcall MiInitializeDynamicRegion(int a1)
{
  struct _KTHREAD *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = (struct _KTHREAD *)MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}

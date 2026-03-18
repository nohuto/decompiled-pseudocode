/*
 * XREFs of MiInitializeDynamicRegion @ 0x140CF97C4
 * Callers:
 *     MiInitializeSystemCache @ 0x14086A918 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140CF9A9C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140CF9BA8 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140CF9F28 (MiBuildSystemDataViews.c)
 *     MiInitializeKernelStacks @ 0x140CFC600 (MiInitializeKernelStacks.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140CFEDA4 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140CFF020 (MiInitializeSystemPtes.c)
 *     MiInitializeSystemImageRegion @ 0x140D00924 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1402A4D64 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1406F4FA0 (MiBuildDynamicRegion.c)
 */

unsigned __int64 __fastcall MiInitializeDynamicRegion(int a1)
{
  struct _KTHREAD *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = (struct _KTHREAD *)MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}

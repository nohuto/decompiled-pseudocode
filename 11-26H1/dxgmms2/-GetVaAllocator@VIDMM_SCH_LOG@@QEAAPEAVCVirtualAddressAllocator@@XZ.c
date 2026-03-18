/*
 * XREFs of ?GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x14003B30C
 * Callers:
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x14003B1CC (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x14004BE30 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 * Callees:
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400E6870 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_SCH_LOG::GetVaAllocator(VIDMM_GLOBAL **this)
{
  unsigned int v1; // eax
  __int64 v2; // r9

  v1 = VIDMM_GLOBAL::AdapterId(*this);
  return VIDMM_PROCESS::GetVirtualAddressAllocator(*(VIDMM_PROCESS **)(v2 + 96), v1, *(_DWORD *)(v2 + 24));
}

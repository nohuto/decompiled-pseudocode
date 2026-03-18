/*
 * XREFs of ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAGE_TYPE@@11@Z @ 0x14011CD64
 * Callers:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x14003683C (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MO.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400369B8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        char a6)
{
  *(_QWORD *)a1 = &VIDMM_FENCE_STORAGE_PAGE::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 76;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_BYTE *)(a1 + 200) = a6;
  *(_BYTE *)(a1 + 201) = a5;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_BYTE *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 225) = a3;
  *(_DWORD *)(a1 + 228) = a4;
  *(_QWORD *)(a1 + 232) = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_QWORD *)(a1 + 72) = a1 + 64;
  *(_QWORD *)(a1 + 64) = a1 + 64;
  return a1;
}

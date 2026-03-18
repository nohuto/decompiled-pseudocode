/*
 * XREFs of ?FreePageStorageList@VIDMM_PROCESS_FENCE_STORAGE@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x14011AFB4
 * Callers:
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@AEAA@XZ @ 0x14011AF5C (--1VIDMM_PROCESS_FENCE_STORAGE@@AEAA@XZ.c)
 * Callees:
 *     ?DestroyFenceStoragePage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140037030 (-DestroyFenceStoragePage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::FreePageStorageList(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v4; // rax

  while ( 1 )
  {
    Flink = a2->Flink;
    if ( a2->Flink == a2 )
      break;
    if ( Flink->Blink != a2 || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    a2->Flink = v4;
    v4->Blink = a2;
    VIDMM_FENCE_STORAGE_PAGE::DestroyFenceStoragePage((VIDMM_FENCE_STORAGE_PAGE *)&Flink[-1].Blink);
  }
}

/*
 * XREFs of ?GetBackingAddress@VIDMM_PROCESS_HEAP@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400BB2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_PROCESS_HEAP::GetBackingAddress(
        VIDMM_PROCESS_HEAP *this,
        const struct VIDMM_HEAP_ALLOC *a2)
{
  return *(_QWORD *)(*((_QWORD *)a2 + 12) + 48LL) << 12;
}

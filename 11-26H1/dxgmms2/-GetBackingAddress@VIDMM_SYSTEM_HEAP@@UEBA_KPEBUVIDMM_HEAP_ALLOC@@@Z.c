/*
 * XREFs of ?GetBackingAddress@VIDMM_SYSTEM_HEAP@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400AE250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_SYSTEM_HEAP::GetBackingAddress(
        VIDMM_SYSTEM_HEAP *this,
        const struct VIDMM_HEAP_ALLOC *a2)
{
  return *(_QWORD *)(*((_QWORD *)a2 + 4) + 48LL) << 12;
}

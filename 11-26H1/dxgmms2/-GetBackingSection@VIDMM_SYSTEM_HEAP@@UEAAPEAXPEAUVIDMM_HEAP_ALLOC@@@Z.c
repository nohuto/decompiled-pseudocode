/*
 * XREFs of ?GetBackingSection@VIDMM_SYSTEM_HEAP@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400AE270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_SYSTEM_HEAP::GetBackingSection(VIDMM_SYSTEM_HEAP *this, struct VIDMM_HEAP_ALLOC *a2)
{
  return *(void **)a2;
}

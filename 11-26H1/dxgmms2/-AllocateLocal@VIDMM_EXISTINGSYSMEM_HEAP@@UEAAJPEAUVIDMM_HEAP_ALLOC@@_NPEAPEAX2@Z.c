/*
 * XREFs of ?AllocateLocal@VIDMM_EXISTINGSYSMEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@_NPEAPEAX2@Z @ 0x140123660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_EXISTINGSYSMEM_HEAP::AllocateLocal(
        VIDMM_EXISTINGSYSMEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        void **a4,
        void **a5)
{
  void *v5; // rcx

  v5 = 0LL;
  if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
    v5 = (void *)*((_QWORD *)a2 + 1);
  *a4 = 0LL;
  if ( a5 )
    *a5 = v5;
  return 0LL;
}

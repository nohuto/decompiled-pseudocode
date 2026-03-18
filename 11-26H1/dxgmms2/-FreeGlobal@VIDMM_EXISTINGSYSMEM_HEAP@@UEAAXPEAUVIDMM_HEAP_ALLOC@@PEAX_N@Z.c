/*
 * XREFs of ?FreeGlobal@VIDMM_EXISTINGSYSMEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x140123690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_EXISTINGSYSMEM_HEAP::FreeGlobal(
        VIDMM_EXISTINGSYSMEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        void *a3)
{
  *((_QWORD *)a2 + 1) = 0LL;
  operator delete(a2);
}

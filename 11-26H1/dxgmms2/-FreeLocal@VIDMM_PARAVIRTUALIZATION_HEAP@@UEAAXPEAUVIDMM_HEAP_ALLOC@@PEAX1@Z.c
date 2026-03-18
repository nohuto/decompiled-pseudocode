/*
 * XREFs of ?FreeLocal@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX1@Z @ 0x1400B5230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_PARAVIRTUALIZATION_HEAP::FreeLocal(
        VIDMM_PARAVIRTUALIZATION_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        void *a3,
        void *a4)
{
  if ( (*((_DWORD *)a2 + 8) & 3) == 2 )
  {
    if ( a4 )
      (*(void (__fastcall **)(VIDMM_PARAVIRTUALIZATION_HEAP *, struct VIDMM_HEAP_ALLOC *, void *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        a4);
  }
}

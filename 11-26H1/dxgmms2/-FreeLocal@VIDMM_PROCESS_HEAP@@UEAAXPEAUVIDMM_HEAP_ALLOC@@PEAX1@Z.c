/*
 * XREFs of ?FreeLocal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX1@Z @ 0x1400BAED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeLocal(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        void *a3,
        void *a4)
{
  if ( a4 )
  {
    if ( *((_QWORD *)a2 + 11) )
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct VIDMM_HEAP_ALLOC *, _QWORD))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        0LL);
  }
}

/*
 * XREFs of ?FreeLocal@VIDMM_SYSTEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX1@Z @ 0x140119630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_SYSTEM_HEAP::FreeLocal(
        VIDMM_SYSTEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        unsigned __int64 a3,
        void *a4)
{
  if ( !*((_QWORD *)a2 + 3) )
  {
    if ( a3 )
      ObCloseHandle((HANDLE)a3, (a3 & 0xFFFFFFFF80000000uLL) == 0);
    if ( a4 )
      (*(void (__fastcall **)(VIDMM_SYSTEM_HEAP *, struct VIDMM_HEAP_ALLOC *, void *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        a4);
  }
}

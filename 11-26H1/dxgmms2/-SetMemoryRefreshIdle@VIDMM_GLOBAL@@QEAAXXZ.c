/*
 * XREFs of ?SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ @ 0x140050A28
 * Callers:
 *     ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400BBA90 (-Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_GLOBAL::SetMemoryRefreshIdle(VIDMM_GLOBAL *this)
{
  if ( *((_DWORD *)this + 10070) != -1 )
    (*((void (__fastcall **)(_QWORD))this + 5003))(*((_QWORD *)this + 5009));
}

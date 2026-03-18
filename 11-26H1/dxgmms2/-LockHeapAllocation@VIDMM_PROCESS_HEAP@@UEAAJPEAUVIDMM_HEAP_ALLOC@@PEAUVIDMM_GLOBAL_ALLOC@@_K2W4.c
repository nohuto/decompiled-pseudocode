/*
 * XREFs of ?LockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400BB3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z @ 0x1400A4C5C (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::LockHeapAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        enum _LOCK_OPERATION a6,
        struct VIDMM_GLOBAL *a7,
        bool a8)
{
  struct _MDL *v9; // rax

  v9 = VidMmiProbeAndLockAllocation(a3, a4, a5, a7);
  if ( !v9 )
    return 3223191809LL;
  if ( a8 )
    *((_QWORD *)a2 + 13) = v9;
  else
    *((_QWORD *)a2 + 12) = v9;
  return 0LL;
}

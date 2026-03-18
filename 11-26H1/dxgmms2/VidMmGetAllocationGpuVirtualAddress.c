/*
 * XREFs of VidMmGetAllocationGpuVirtualAddress @ 0x140111A90
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038928 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 */

__int64 __fastcall VidMmGetAllocationGpuVirtualAddress(const struct VIDMM_ALLOC *a1, char a2, int a3)
{
  if ( a2 )
    return *((_QWORD *)a1 + 85);
  else
    return VidMmGetAllocGpuVirtualAddress(a1, a3);
}

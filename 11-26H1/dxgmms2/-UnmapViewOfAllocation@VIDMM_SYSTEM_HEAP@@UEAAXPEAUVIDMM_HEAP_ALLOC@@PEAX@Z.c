/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_SYSTEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x1400F89A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400F8290 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_SYSTEM_HEAP::UnmapViewOfAllocation(VIDMM_SYSTEM_HEAP *this, void **a2, void *a3)
{
  __int64 v5; // rcx
  void *v6; // rbx
  struct _EPROCESS *CurrentProcess; // rax

  if ( (unsigned __int8)MmIsUserAddress(a3) )
  {
    v6 = *a2;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5);
    VidMmUnmapViewAsync(CurrentProcess, v6, a3);
  }
}

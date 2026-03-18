/*
 * XREFs of MxClearStaleSecurePageMapping @ 0x140CF51D0
 * Callers:
 *     MxCreateDescriptorPfns @ 0x140CF5814 (MxCreateDescriptorPfns.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiDecreaseUsedPtesInPfn @ 0x140309000 (MiDecreaseUsedPtesInPfn.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 */

__int64 __fastcall MxClearStaleSecurePageMapping(_QWORD *BugCheckParameter4)
{
  __int64 v1; // rdx
  _QWORD *v2; // r10
  int v3; // eax
  ULONG_PTR v4; // rbx

  v1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v2 = BugCheckParameter4;
  v3 = 0;
  if ( (unsigned __int64)BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v3 = MiSanitizeShadowPxe();
    v1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  *v2 = v1;
  if ( v3 )
    MiWritePteShadow();
  v4 = 48 * MiGetContainingPageTable((ULONG_PTR)v2) - 0x220000000000LL;
  MiDecreaseUsedPtesInPfn(v4, 1uLL);
  return MiLockAndDecrementShareCount(v4, 0LL);
}

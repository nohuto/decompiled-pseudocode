/*
 * XREFs of MiCopySinglePage @ 0x14033D2C8
 * Callers:
 *     MmCopyMemory @ 0x14033B4D0 (MmCopyMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPageSecured @ 0x140534D58 (MiIsPageSecured.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, ULONG_PTR a2, __int64 a3, size_t a4, char a5)
{
  __int64 v9; // rsi
  unsigned __int8 v10; // di
  int v11; // ebx
  unsigned __int64 v13; // [rsp+68h] [rbp-38h]

  v9 = 48 * a2 - 0x220000000000LL;
  if ( (a5 & 1) != 0 )
  {
    v10 = MiSafeLockPage(a2, a2, a3);
    if ( v10 == 17 )
      return 3221225793LL;
  }
  else
  {
    v10 = 17;
  }
  if ( *(int *)(v9 + 32) < 0 || (unsigned int)MiIsPageSecured(v9) )
  {
    if ( v10 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v10 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
        __writecr8(v10);
      }
    }
    return 3221227273LL;
  }
  else
  {
    v11 = (*(_DWORD *)(v9 + 32) >> 22) & 3;
    if ( v11 == 3 )
      MiChangePageAttribute(v9, 1u);
    MiMakeProtectionPfnCompatible(1LL, v9);
    v13 = a3 + MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
    memmove(a1, (const void *)v13, a4);
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( v11 == 3 )
      MiChangePageAttribute(v9, 3u);
    if ( v10 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v10 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
        __writecr8(v10);
      }
    }
    return 0LL;
  }
}

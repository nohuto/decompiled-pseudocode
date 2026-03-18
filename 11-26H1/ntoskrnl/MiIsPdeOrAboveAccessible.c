/*
 * XREFs of MiIsPdeOrAboveAccessible @ 0x1404892CC
 * Callers:
 *     MiResolvePageTablePage @ 0x1402ECA70 (MiResolvePageTablePage.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     MiCopyPageTablePageContents @ 0x14033CFD0 (MiCopyPageTablePageContents.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiIsLazyStampedPte @ 0x1404893A8 (MiIsLazyStampedPte.c)
 */

__int64 __fastcall MiIsPdeOrAboveAccessible(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  _KPROCESS *v5; // rax
  unsigned __int64 v6; // r10
  unsigned __int64 KernelWaitTime; // rax
  __int64 v8; // rax
  bool v9; // zf
  unsigned int v10; // r9d
  unsigned __int64 DemandZeroPte; // rax

  v3 = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    a3 = *a1;
    if ( (v3 & 1) == 0 )
      goto LABEL_3;
    if ( (v3 & 0x20) == 0 || (v3 & 0x42) == 0 )
    {
      v5 = MiPteHasShadow();
      if ( v5 )
      {
        KernelWaitTime = v5[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v8 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v8 & 0x20) != 0 )
            a3 |= 0x20uLL;
          v3 = a3 | 0x42;
          if ( (v8 & 0x42) == 0 )
            v3 = a3;
        }
      }
    }
  }
  if ( (v3 & 1) != 0 )
    return 1LL;
LABEL_3:
  if ( !v3 || (v3 & 0x400) != 0 )
    return 1LL;
  if ( (v3 & 0x800) != 0 )
  {
    v9 = ((v3 >> 5) & 0x1F) == 24;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(16);
    v9 = v3 == DemandZeroPte;
  }
  if ( v9 )
    return 0LL;
  LOBYTE(v10) = (unsigned int)MiIsLazyStampedPte(v3, v3, a3) == 0;
  return v10;
}

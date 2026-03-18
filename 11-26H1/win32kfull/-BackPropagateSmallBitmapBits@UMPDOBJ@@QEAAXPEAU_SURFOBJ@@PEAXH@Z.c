/*
 * XREFs of ?BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A26C
 * Callers:
 *     ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x14034A9D0 (-UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall UMPDOBJ::BackPropagateSmallBitmapBits(char **this, struct _SURFOBJ *a2, void *a3, int a4)
{
  ULONG cjBits; // ebx
  char *KernelPtr; // rax

  if ( a4 )
  {
    cjBits = a2->cjBits;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)a2->pvBits);
    memmove(a3, KernelPtr, cjBits);
  }
}

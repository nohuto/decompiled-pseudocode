/*
 * XREFs of ?CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A334
 * Callers:
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1400D8A50 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D79B4 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUserFromUser @ 0x1403E211C (RtlCopyToUserFromUser.c)
 */

void __fastcall UMPDOBJ::CopyToClientFromUmpd(char **this, void *a2, char *a3, size_t Size)
{
  char *KernelPtr; // rax
  char *v9; // rax

  if ( (unsigned int)UMPDOBJ::bSandboxedClient((UMPDOBJ *)this) )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(this, a3);
    RtlCopyVolatileMemory(a2, KernelPtr, Size);
  }
  else
  {
    v9 = UMPDOBJ::GetKernelPtr(this, a3);
    RtlCopyToUserFromUser(a2, v9, Size);
  }
}

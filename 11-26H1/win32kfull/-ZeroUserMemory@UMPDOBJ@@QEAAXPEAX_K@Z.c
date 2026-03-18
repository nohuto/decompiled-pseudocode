/*
 * XREFs of ?ZeroUserMemory@UMPDOBJ@@QEAAXPEAX_K@Z @ 0x14034CF40
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D79B4 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     RtlSetVolatileMemory @ 0x14034FD20 (RtlSetVolatileMemory.c)
 *     RtlSetUserMemory @ 0x1403E227C (RtlSetUserMemory.c)
 */

void __fastcall UMPDOBJ::ZeroUserMemory(char **this, char *a2, size_t Size)
{
  char *KernelPtr; // rax
  char *v7; // rax

  if ( (unsigned int)UMPDOBJ::bSandboxedClient((UMPDOBJ *)this) )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(this, a2);
    RtlSetVolatileMemory(KernelPtr, 0, Size);
  }
  else
  {
    v7 = UMPDOBJ::GetKernelPtr(this, a2);
    RtlSetUserMemory(v7);
  }
}

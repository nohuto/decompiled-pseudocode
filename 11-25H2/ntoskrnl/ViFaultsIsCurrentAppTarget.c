/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x140B86D84
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

_BOOL8 ViFaultsIsCurrentAppTarget()
{
  KIRQL v0; // al
  PVOID *v1; // rbx
  BOOL v2; // edi

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = (PVOID *)ViFaultApplicationsList;
  v2 = ViFaultApplicationsList == &ViFaultApplicationsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v0);
  if ( v1 != &ViFaultApplicationsList )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000) != 0 )
    {
      ++dword_140FFDF94;
      return 1;
    }
    else
    {
      v2 = 0;
      ++dword_140FFDF90;
    }
  }
  return v2;
}

/*
 * XREFs of NtImpersonateClientOfPort @ 0x1407BFBD0
 * Callers:
 *     DifNtImpersonateClientOfPortWrapper @ 0x140679B50 (DifNtImpersonateClientOfPortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 */

__int64 __fastcall NtImpersonateClientOfPort(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  if ( *(_DWORD *)&AlpcpMessageLogLock.ApcStateFill[8] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeLeaveCriticalRegion();
    return 3221225659LL;
  }
  else
  {
    result = NtAlpcImpersonateClientOfPort(a1);
    if ( (_DWORD)result == -1073740030 )
      return 3221226015LL;
  }
  return result;
}

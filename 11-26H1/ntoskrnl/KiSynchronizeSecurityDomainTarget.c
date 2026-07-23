/*
 * XREFs of KiSynchronizeSecurityDomainTarget @ 0x1405FBFE0
 * Callers:
 *     KeSynchronizeSecurityDomain @ 0x1404D6B28 (KeSynchronizeSecurityDomain.c)
 * Callees:
 *     <none>
 */

__int64 KiSynchronizeSecurityDomainTarget()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KPROCESS *Process; // rdx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&CurrentPrcb->PrcbPad12a[2]);
  result = (unsigned __int16)CurrentPrcb->PairRegister;
  if ( (result & 4) != 0 )
  {
    result = *(_QWORD *)&Process[4].ProcessLock;
    if ( result != CurrentPrcb->TrappedSecurityDomain )
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
  }
  return result;
}

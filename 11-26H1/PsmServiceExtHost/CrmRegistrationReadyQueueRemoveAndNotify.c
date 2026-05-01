/*
 * XREFs of CrmRegistrationReadyQueueRemoveAndNotify @ 0x18001ECC8
 * Callers:
 *     CrmActivityUpdate @ 0x18001E5C0 (CrmActivityUpdate.c)
 *     CrmGlobalsPeriodicNotifier @ 0x180069650 (CrmGlobalsPeriodicNotifier.c)
 * Callees:
 *     CrmRegistrationNotify @ 0x180020C30 (CrmRegistrationNotify.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002143C (CrmRegistrationReadyQueueRemove.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueRemoveAndNotify(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // esi

  if ( !a3 )
  {
    RtlAcquireSRWLockExclusive(&unk_1800E3958);
    dword_1800E3960 = GetCurrentThreadId();
  }
  v6 = CrmRegistrationReadyQueueRemove(a1, 1LL);
  if ( (unsigned int)CrmRegistrationNotify(*(_QWORD *)(a1 + 48), a1, a2) )
    *(_QWORD *)(a1 + 128) = CempQueryUnbiasedInterruptTimeMs64();
  if ( !a3 )
  {
    dword_1800E3960 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E3958);
  }
  return v6;
}

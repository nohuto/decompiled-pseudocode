/*
 * XREFs of CrmGlobalsRegistrationRemove @ 0x180065250
 * Callers:
 *     CrmSrvUnregister @ 0x180032344 (CrmSrvUnregister.c)
 *     CrmRegistrationCleanup @ 0x180032430 (CrmRegistrationCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmGlobalsRegistrationRemove(__int64 a1)
{
  CempLockAcquireExclusive((__int64)&unk_1800E3938);
  RtlRbRemoveNode(&xmmword_1800E3948, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_1800E3940 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800E3938);
}

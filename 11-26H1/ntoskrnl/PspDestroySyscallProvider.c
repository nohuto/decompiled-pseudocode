/*
 * XREFs of PspDestroySyscallProvider @ 0x1407F3238
 * Callers:
 *     PspDereferenceSyscallProvider @ 0x140617470 (PspDereferenceSyscallProvider.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspAcquireSyscallProviderRegistrationLockExclusive @ 0x1406173EC (PspAcquireSyscallProviderRegistrationLockExclusive.c)
 *     PspReleaseSyscallProviderRegistrationLockExclusive @ 0x1406175FC (PspReleaseSyscallProviderRegistrationLockExclusive.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x14079566C (VslRevokeSyscallProviderServiceTables.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspDestroySyscallProvider(PVOID **P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PVOID *v5; // rcx
  PVOID *v6; // rax

  PspAcquireSyscallProviderRegistrationLockExclusive((__int64)P, a2, a3, a4);
  v5 = *P;
  if ( (*P)[1] != P || (v6 = P[1], *v6 != P) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  PspReleaseSyscallProviderRegistrationLockExclusive();
  VslRevokeSyscallProviderServiceTables((__int64)P[4][3]);
  ObfDereferenceObjectWithTag(P[4], 0x63537350u);
  ExFreePoolWithTag(P, 0x63537350u);
}

/*
 * XREFs of PspInsertSyscallProvider @ 0x1407F342C
 * Callers:
 *     PsRegisterSyscallProvider @ 0x1407F2F80 (PsRegisterSyscallProvider.c)
 * Callees:
 *     PspAcquireSyscallProviderRegistrationLockExclusive @ 0x1406173EC (PspAcquireSyscallProviderRegistrationLockExclusive.c)
 *     PspDereferenceSyscallProvider @ 0x140617470 (PspDereferenceSyscallProvider.c)
 *     PspReleaseSyscallProviderRegistrationLockExclusive @ 0x1406175FC (PspReleaseSyscallProviderRegistrationLockExclusive.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x1407F34B0 (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspInsertSyscallProvider(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v6; // ebx
  volatile signed __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  PspAcquireSyscallProviderRegistrationLockExclusive((__int64)a1, a2, a3, a4);
  if ( (unsigned int)PspLookupSyscallProviderByIdNoLock(&a1[1], &v8) == -1073741275 )
  {
    Blink = ExpPlatformBinaryLock.QueueListEntry.Blink;
    if ( ExpPlatformBinaryLock.QueueListEntry.Blink->Flink != &ExpPlatformBinaryLock.QueueListEntry )
      __fastfail(3u);
    a1->Flink = &ExpPlatformBinaryLock.QueueListEntry;
    a1->Blink = Blink;
    Blink->Flink = a1;
    ExpPlatformBinaryLock.QueueListEntry.Blink = a1;
    v6 = 0;
  }
  else
  {
    v6 = -1073741771;
  }
  PspReleaseSyscallProviderRegistrationLockExclusive();
  if ( v8 )
    PspDereferenceSyscallProvider(v8);
  return v6;
}

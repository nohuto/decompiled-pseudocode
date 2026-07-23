/*
 * XREFs of ProviderHandleRemove @ 0x18008D6C0
 * Callers:
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall ProviderHandleRemove(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi

  RtlAcquireSRWLockExclusive(&SRWLock);
  if ( (a2 & 1) == 0
    || ((a2 >> 1) & 7) >= (unsigned __int8)byte_1801C62E4
    || (v3 = (a2 >> 1) & 7, a2 >> 4 >= dword_180192040[v3])
    || (v4 = qword_1801C62A0[v3], v5 = (unsigned __int64)a2 >> 4, (*(_BYTE *)(v4 + 8 * v5) & 1) != 0) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v5), (unsigned int)dword_1801C62E0);
    dword_1801C62E0 = a2;
  }
  RtlReleaseSRWLockExclusive(&SRWLock);
  return v6;
}

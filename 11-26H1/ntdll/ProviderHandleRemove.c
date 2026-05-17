/*
 * XREFs of ProviderHandleRemove @ 0x18006D270
 * Callers:
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall ProviderHandleRemove(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi

  v2 = a2;
  RtlAcquireSRWLockExclusive(&qword_1801C72E8, a2);
  if ( (v2 & 1) == 0
    || ((v2 >> 1) & 7) >= (unsigned __int8)byte_1801C72E4
    || (v3 = (v2 >> 1) & 7, v2 >> 4 >= dword_180193038[v3])
    || (v4 = qword_1801C72A0[v3], v5 = (unsigned __int64)v2 >> 4, (*(_BYTE *)(v4 + 8 * v5) & 1) != 0) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v5), (unsigned int)dword_1801C72E0);
    dword_1801C72E0 = v2;
  }
  RtlReleaseSRWLockExclusive(&qword_1801C72E8);
  return v6;
}

/*
 * XREFs of RtlpFcChangeRegistrationCallback @ 0x1800FF560
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _TEB *__fastcall RtlpFcChangeRegistrationCallback(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 32), a2);
  (*(void (__fastcall **)(_QWORD))(a2 + 16))(*(_QWORD *)(a2 + 24));
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
}

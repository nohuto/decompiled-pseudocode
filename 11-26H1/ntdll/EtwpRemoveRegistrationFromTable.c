/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x18006D348
 * Callers:
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 */

struct _TEB *__fastcall EtwpRemoveRegistrationFromTable(__int64 a1, __int64 a2)
{
  void *UniqueThread; // rbx
  __m128i si128; // xmm0

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock, a2);
  EtwpProvLockOwner = (int)UniqueThread;
  RtlRbRemoveNode((__int64)&EtwpRegistrationTable, a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(__m128i *)a1 = si128;
  EtwpProvLockOwner = 0;
  *(_QWORD *)(a1 + 16) = si128.m128i_i64[0];
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}

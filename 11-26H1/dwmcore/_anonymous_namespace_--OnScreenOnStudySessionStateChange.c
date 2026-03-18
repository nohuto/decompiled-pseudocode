/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x1801D6F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&SRWLock);
  CurrentThreadId = GetCurrentThreadId();
  byte_1803DE960 = 1;
  dword_1803E2670 = CurrentThreadId;
  v3 = *a1;
  dword_1803E2670 = 0;
  xmmword_1803DE950 = v3;
  ReleaseSRWLockExclusive(&SRWLock);
}

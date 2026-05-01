/*
 * XREFs of CrmGlobalsCleanupTelemetry @ 0x1800777A0
 * Callers:
 *     CrmGlobalsCleanup @ 0x180075274 (CrmGlobalsCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmGlobalsCleanupTelemetry(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *(_QWORD *)(a1 + 736) )
  {
    v2 = a1 + 440;
    CempLockAcquireExclusive(a1 + 440);
    TpSetTimer(*(_QWORD *)(a1 + 736), 0LL, 0LL, 0LL);
    *(_DWORD *)(v2 + 8) = 0;
    RtlReleaseSRWLockExclusive(v2);
    result = TpWaitForTimer(*(_QWORD *)(a1 + 736), 1LL);
  }
  v4 = *(_QWORD *)(a1 + 576);
  if ( v4 )
  {
    TpSetTimer(v4, 0LL, 0LL, 0LL);
    result = TpWaitForTimer(*(_QWORD *)(a1 + 576), 1LL);
  }
  v5 = *(_QWORD *)(a1 + 736);
  if ( v5 )
    result = TpReleaseTimer(v5);
  v6 = *(_QWORD *)(a1 + 576);
  if ( v6 )
    return TpReleaseTimer(v6);
  return result;
}

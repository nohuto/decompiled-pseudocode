/*
 * XREFs of TpReleaseTimer @ 0x180067E70
 * Callers:
 *     RtlDeleteTimer @ 0x180067850 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x180070624 (RtlpInitializeWnf.c)
 *     RtlpHpGCTimerEnable @ 0x1800CEDE8 (RtlpHpGCTimerEnable.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FBCA0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x1800686D0 (TppCancelTimer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpReleaseTimer(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ecx
  void *ThreadPoolData; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v4 = *(_DWORD *)(a1 + 168), a3 = 0x10000LL, (v4 & 0x10000) != 0)
    || (v4 & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL || *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) != a1)
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    v6 = *(_QWORD *)(result + 24);
    if ( *(_BYTE *)(v6 + 72) )
      return result;
    return TppRaiseInvalidParameter(v6, 0LL, a3);
  }
  _m_prefetchw((const void *)(a1 + 168));
  v6 = *(_DWORD *)(a1 + 168) | 0x10000u;
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 168), 0x10000u);
  if ( (result & 0x10000) != 0 )
    return TppRaiseInvalidParameter(v6, 0LL, a3);
  if ( (result & 0x30000) == 0 )
  {
    *(_QWORD *)(a1 + 184) = retaddr;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), 0LL);
    v7 = *(_QWORD *)(a1 + 144);
    ++*(_BYTE *)(a1 + 355);
    v8 = ((unsigned __int8)TppCancelTimer(a1, v7 + 112, 0LL) != 0) + 1;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v8);
    if ( (_DWORD)result == v8 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}

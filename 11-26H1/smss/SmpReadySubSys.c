/*
 * XREFs of SmpReadySubSys @ 0x140007950
 * Callers:
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpDisposeSubSysSynch @ 0x140019080 (SmpDisposeSubSysSynch.c)
 */

__int64 __fastcall SmpReadySubSys(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v5; // rdi
  HANDLE *v7; // rcx

  v5 = SmpKnownSubSysTable + 24LL * (*(_DWORD *)(a1 + 64) & 0x1F);
  RtlAcquireSRWLockExclusive(v5 + 16, a2, a3);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    *(_OWORD *)(a1 + 48) = *a2;
  else
    *(_DWORD *)(a1 + 24) = *(_DWORD *)a2;
  RtlReleaseSRWLockExclusive(v5 + 16);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = (HANDLE *)_InterlockedExchange64((volatile __int64 *)(a1 + 16), 0LL);
    if ( v7 )
    {
      if ( *(_DWORD *)v7 )
        NtSetEvent(v7[1], 0LL);
      else
        SmpDisposeSubSysSynch(v7);
    }
  }
  return RtlWakeAllConditionVariable(&SmpSubSysReadyCondition);
}

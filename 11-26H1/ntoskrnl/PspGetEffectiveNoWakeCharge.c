/*
 * XREFs of PspGetEffectiveNoWakeCharge @ 0x14077C1D4
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     RtlIsZeroMemory @ 0x1404D36B0 (RtlIsZeroMemory.c)
 */

char __fastcall PspGetEffectiveNoWakeCharge(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  *a2 = 0LL;
  *a3 = 0LL;
  LOBYTE(v6) = RtlIsZeroMemory((PVOID)(a1 + 1108), 8uLL);
  if ( (_BYTE)v6 || !*(_DWORD *)(a1 + 1064) )
    goto LABEL_9;
  v7 = *(_QWORD *)(a1 + 1176);
  *a2 = v7;
  if ( (*(_DWORD *)(a1 + 1552) & 0x400000) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 1304);
    if ( !v8 || (*(_DWORD *)(v8 + 1552) & 0x1000) == 0 || !*(_DWORD *)(v8 + 1064) )
    {
      *a3 = v7;
      if ( v8 )
        _InterlockedOr((volatile signed __int32 *)(v8 + 1552), 0x400000u);
    }
LABEL_9:
    if ( (*(_DWORD *)(a1 + 1552) & 0x400000) == 0 )
      return v6;
  }
  v6 = *(_QWORD *)(a1 + 1304);
  if ( v6 )
    _InterlockedOr((volatile signed __int32 *)(v6 + 1552), 0x400000u);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFFBFFFFF);
  return v6;
}

/*
 * XREFs of ExUpdateTimerResolutionPolicy @ 0x140A7374C
 * Callers:
 *     PspSetProcessTimerResolutionPolicy @ 0x140A73730 (PspSetProcessTimerResolutionPolicy.c)
 * Callees:
 *     ExpUpdateTimerResolution @ 0x140530A54 (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x1405319F0 (PoTraceSystemTimerResolutionIgnore.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 */

void __fastcall ExUpdateTimerResolutionPolicy(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v3; // rcx

  if ( KeDisableLowQosTimerResolution )
  {
    v2 = *(_DWORD *)(a1 + 1532) & 0x4000000;
    if ( a2 )
    {
      if ( v2 )
        return;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1532), 0x4000000u);
    }
    else
    {
      if ( !v2 )
        return;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 1532), 0xFBFFFFFF);
    }
    if ( (*(_DWORD *)(a1 + 500) & 0x1000) != 0 )
    {
      PoTraceSystemTimerResolutionIgnore(a1);
      ExAcquireTimeRefreshLockExclusive(v3);
      ExpUpdateTimerResolution(0, 0, 0LL);
      ExReleaseTimeRefreshLockExclusive();
    }
  }
}

/*
 * XREFs of CmpAcceptBoot @ 0x140854B2C
 * Callers:
 *     NtInitializeRegistry @ 0x140855170 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     KeCommitSmtState @ 0x1405F4150 (KeCommitSmtState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpTrimHive @ 0x1408BDDEC (CmpTrimHive.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B385E8 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // bx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx

  if ( PsIsCurrentThreadInServerSilo() )
  {
    return 0;
  }
  else if ( _InterlockedExchange((volatile __int32 *)&ExpPlatformBinaryLock.WaitBlockFill11[108], 0) )
  {
    v3 = a1 - 4096;
    if ( v3 )
    {
      KeCommitSmtState();
      if ( ExpPlatformBinaryLock.CurrentRunTime )
        v2 = CmpSaveBootControlSet(v3);
      else
        v2 = 0;
      guard_dispatch_icall_no_overrides(v5, v4);
      if ( CmpAccessBitForPhase != 2 )
      {
        CmpAccessBitForPhase = 2;
        if ( (unsigned __int8)CmpAcquireShutdownRundown(v7, v6) )
        {
          for ( i = 0LL; ; i = v10 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v10 = NextActiveHive;
            if ( !NextActiveHive )
              break;
            if ( (*(_DWORD *)(NextActiveHive + 160) & 0x10) == 0 )
              CmpTrimHive(NextActiveHive);
          }
          CmpUpdateReorganizeRegistryValues();
          CmpReleaseShutdownRundown(v11);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}

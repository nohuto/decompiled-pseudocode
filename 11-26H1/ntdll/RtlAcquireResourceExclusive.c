/*
 * XREFs of RtlAcquireResourceExclusive @ 0x1800C9BE0
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x1800FD190 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpPossibleDeadlock @ 0x18006A270 (RtlpPossibleDeadlock.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 */

BOOLEAN __cdecl RtlAcquireResourceExclusive(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r8d
  BOOLEAN result; // al
  int v6; // ebp
  LARGE_INTEGER *v7; // rsi
  int v8; // eax
  signed int NumberOfWaitingExclusive; // eax
  signed int v10; // ett

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 && Resource->ExclusiveOwnerThread == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement(&Resource->NumberOfActive);
    return 1;
  }
  else
  {
    while ( 1 )
    {
LABEL_2:
      while ( !NumberOfActive )
      {
        NumberOfActive = _InterlockedCompareExchange(&Resource->NumberOfActive, -1, 0);
        if ( !NumberOfActive )
        {
          result = 1;
          Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
          return result;
        }
      }
      if ( !Wait )
        return 0;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive);
      NumberOfActive = Resource->NumberOfActive;
      if ( !NumberOfActive )
      {
        NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
        while ( NumberOfWaitingExclusive > 0 )
        {
          v10 = NumberOfWaitingExclusive;
          NumberOfWaitingExclusive = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                                       NumberOfWaitingExclusive - 1,
                                       NumberOfWaitingExclusive);
          if ( v10 == NumberOfWaitingExclusive )
            goto LABEL_2;
        }
        if ( NumberOfWaitingExclusive )
          continue;
      }
      v6 = 0;
      while ( 1 )
      {
        v7 = 0LL;
        if ( (Resource->Flags & 1) == 0 )
          v7 = &RtlpTimeout;
        v8 = NtWaitForSingleObject(Resource->ExclusiveSemaphore, 0, v7);
        if ( v8 != 258 )
          break;
        DbgPrintEx(
          0x65u,
          0,
          "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n",
          v6,
          ((unsigned __int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 23));
        DbgPrintEx(0x65u, 0, "RTL: Resource at %p\n", Resource);
        if ( (unsigned int)++v6 > 2 )
          RtlpPossibleDeadlock((unsigned __int64)Resource);
        DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
      }
      if ( v8 < 0 )
        RtlRaiseStatus(v8);
      NumberOfActive = Resource->NumberOfActive;
    }
  }
}

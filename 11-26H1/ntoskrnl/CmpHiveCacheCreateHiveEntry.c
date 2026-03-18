/*
 * XREFs of CmpHiveCacheCreateHiveEntry @ 0x140861CAC
 * Callers:
 *     CmpBuildMachineHiveCache @ 0x140857664 (CmpBuildMachineHiveCache.c)
 * Callees:
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     CmSiCreateEvent @ 0x1404A209C (CmSiCreateEvent.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x140861F1C (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x140861F94 (CmpHiveCacheEntryLockRelease.c)
 */

__int64 __fastcall CmpHiveCacheCreateHiveEntry(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  unsigned int i; // esi
  int Event; // eax

  v2 = 0;
  if ( a1 )
  {
    CmpHiveCacheEntryLockAcquire(a1);
    if ( *(_DWORD *)(a1 + 168) )
    {
      v2 = -1073741431;
      SetFailureLocation(a2, 0, 40, -1073741431, 32);
    }
    else
    {
      for ( i = 0; i < 6; ++i )
      {
        Event = CmSiCreateEvent(v5, (HANDLE *)(a1 + 16 * (i + 13LL)));
        v2 = Event;
        if ( Event < 0 )
        {
          SetFailureLocation(a2, 0, 40, Event, 48);
          goto LABEL_12;
        }
      }
      *(_DWORD *)(a1 + 168) = 1;
    }
LABEL_12:
    CmpHiveCacheEntryLockRelease(a1);
  }
  else
  {
    v2 = -1073741811;
    SetFailureLocation(a2, 0, 40, -1073741811, 16);
  }
  return v2;
}

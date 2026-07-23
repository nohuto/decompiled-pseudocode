/*
 * XREFs of CmpHiveCacheCreateHiveEntry @ 0x14086808C
 * Callers:
 *     CmpBuildMachineHiveCache @ 0x14085D9F4 (CmpBuildMachineHiveCache.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiCreateEvent @ 0x14049BBCC (CmSiCreateEvent.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1408682FC (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x140868374 (CmpHiveCacheEntryLockRelease.c)
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

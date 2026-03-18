/*
 * XREFs of PopInitHiberPersistedRegValues @ 0x1407D02A4
 * Callers:
 *     PopInitializeHibernateGlobals @ 0x1407D0394 (PopInitializeHibernateGlobals.c)
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x1407D0718 (PopQueryHiberPersistedRegValue.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PopInitHiberPersistedRegValues()
{
  unsigned int v0; // ebx
  int PersistedStateLocation; // edi
  int v2; // edi
  struct _LIST_ENTRY *Pool2; // rsi
  int **v4; // rsi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  LODWORD(v6) = 0;
  if ( (unsigned int)RtlGetPersistedStateLocation(L"Power", 0LL, 0, (__int64)&v6) == -2147483643 )
  {
    v2 = v6;
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(L"Power", Pool2, v2, (__int64)&v6);
      if ( PersistedStateLocation < 0 )
      {
        ExFreePoolWithTag(Pool2, 0x72626968u);
      }
      else
      {
        stru_140F11D08.WaitListEntry.Blink = Pool2;
        v4 = &off_140E073E8;
        do
        {
          PopQueryHiberPersistedRegValue(v0++, *v4);
          v4 += 3;
        }
        while ( v0 < 4 );
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)PersistedStateLocation;
}

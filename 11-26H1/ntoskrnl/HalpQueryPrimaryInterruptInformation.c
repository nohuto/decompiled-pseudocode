/*
 * XREFs of HalpQueryPrimaryInterruptInformation @ 0x140B49A2C
 * Callers:
 *     HalpSecondaryInterruptQueryPrimaryInformation @ 0x140B499D0 (HalpSecondaryInterruptQueryPrimaryInformation.c)
 * Callees:
 *     HalpReleaseSecondaryIcEntryShared @ 0x140430218 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpIsInterruptTypeSecondary @ 0x140430260 (HalpIsInterruptTypeSecondary.c)
 *     HalpFindSecondaryIcEntry @ 0x140433DD8 (HalpFindSecondaryIcEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpQueryPrimaryInterruptInformation(int *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 SecondaryIcEntry; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdx

  v1 = 0;
  if ( SecondaryIcServicesEnabled )
  {
    v2 = a1[14];
    if ( HalpIsInterruptTypeSecondary(*a1, v2) )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v2);
      if ( SecondaryIcEntry )
      {
        v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), v2);
        LOBYTE(v5) = 1;
        HalpReleaseSecondaryIcEntryShared(SecondaryIcEntry, v5);
        if ( v4 != -1073741802 )
          return v4;
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v1;
}

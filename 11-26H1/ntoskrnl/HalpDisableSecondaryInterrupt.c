/*
 * XREFs of HalpDisableSecondaryInterrupt @ 0x140423064
 * Callers:
 *     HalDisableInterrupt @ 0x1404240E0 (HalDisableInterrupt.c)
 * Callees:
 *     HalpCheckInterruptType @ 0x140423104 (HalpCheckInterruptType.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140423128 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpFindSecondaryIcEntry @ 0x140426CC8 (HalpFindSecondaryIcEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDisableSecondaryInterrupt(__int64 a1)
{
  unsigned int v2; // esi
  __int64 SecondaryIcEntry; // rdi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx

  if ( SecondaryIcServicesEnabled )
  {
    if ( (unsigned __int8)HalpCheckInterruptType() )
    {
      v2 = *(_DWORD *)(a1 + 64);
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v2);
      if ( SecondaryIcEntry )
      {
        v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), v2);
        if ( v5 >= 0 )
        {
          v6 = 16LL * (v2 - *(_DWORD *)(SecondaryIcEntry + 16));
          *(_DWORD *)(v6 + SecondaryIcEntry + 168) |= 0x80000000;
          *(_BYTE *)(v6 + SecondaryIcEntry + 172) = 0;
        }
        LOBYTE(v4) = 1;
        HalpReleaseSecondaryIcEntryShared(SecondaryIcEntry, v4);
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
  return (unsigned int)v5;
}

/*
 * XREFs of HalpEnableSecondaryInterrupt @ 0x140B62114
 * Callers:
 *     HalEnableInterrupt @ 0x140432390 (HalEnableInterrupt.c)
 * Callees:
 *     HalpCheckInterruptType @ 0x1404301F4 (HalpCheckInterruptType.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140430218 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpFindSecondaryIcEntry @ 0x140433DD8 (HalpFindSecondaryIcEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpEnableSecondaryInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebp
  __int64 SecondaryIcEntry; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx

  if ( SecondaryIcServicesEnabled )
  {
    if ( HalpCheckInterruptType(a1) )
    {
      v3 = a1[16];
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v3);
      v5 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v6 = 2 * (v3 - *(_DWORD *)(SecondaryIcEntry + 16) + 10LL);
        v7 = 16LL * (v3 - *(_DWORD *)(SecondaryIcEntry + 16));
        *(_DWORD *)(v7 + SecondaryIcEntry + 164) = a1[6];
        *(_DWORD *)(SecondaryIcEntry + 8 * v6) = a1[5];
        *(_DWORD *)(v7 + SecondaryIcEntry + 168) = a1[3];
        *(_BYTE *)(v7 + SecondaryIcEntry + 172) = 1;
        v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), v3);
        if ( v2 < 0 )
        {
          *(_DWORD *)(v7 + v5 + 168) |= 0x80000000;
          *(_BYTE *)(v7 + v5 + 172) = 0;
        }
        LOBYTE(v8) = 1;
        HalpReleaseSecondaryIcEntryShared(v5, v8);
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
  return (unsigned int)v2;
}

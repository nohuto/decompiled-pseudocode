/*
 * XREFs of HalpInterruptRequestSecondaryInterrupt @ 0x1405920B0
 * Callers:
 *     HalpInterruptRequestInterrupt @ 0x14057FCC0 (HalpInterruptRequestInterrupt.c)
 * Callees:
 *     HalpReleaseSecondaryIcEntryShared @ 0x140430218 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpFindSecondaryIcEntry @ 0x140433DD8 (HalpFindSecondaryIcEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptRequestSecondaryInterrupt(unsigned int a1)
{
  __int64 SecondaryIcEntry; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned int v6; // edi

  if ( !SecondaryIcServicesEnabled || !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, a1) )
    return 3221225485LL;
  SecondaryIcEntry = HalpFindSecondaryIcEntry(a1);
  v4 = SecondaryIcEntry;
  if ( !SecondaryIcEntry )
    return 3221266721LL;
  if ( *(_BYTE *)(SecondaryIcEntry + 16LL * (a1 - *(_DWORD *)(SecondaryIcEntry + 16)) + 172) )
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), a1);
  else
    v6 = -1073741823;
  LOBYTE(v3) = 1;
  HalpReleaseSecondaryIcEntryShared(v4, v3);
  return v6;
}

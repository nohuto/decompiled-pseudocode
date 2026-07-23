/*
 * XREFs of HalpIommuUpdateRemappingTableEntry @ 0x140435084
 * Callers:
 *     HalpInterruptSetRemappedDestination @ 0x140434D0C (HalpInterruptSetRemappedDestination.c)
 *     HalpSetIrtEntry @ 0x140435148 (HalpSetIrtEntry.c)
 *     HalpInterruptEnableNmi @ 0x140435DF0 (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x14057FA78 (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpIommuUpdateRemappingTableEntry(char a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  int v3; // esi
  char v4; // bp
  unsigned int v5; // r14d
  ULONG_PTR *v7; // rdi

  v2 = (ULONG_PTR *)HalpIommuList;
  v3 = 0;
  v4 = 0;
  v5 = a2;
  while ( v2 != &HalpIommuList )
  {
    v7 = v2;
    v2 = (ULONG_PTR *)*v2;
    if ( (v7[58] & 0x40) != 0 )
    {
      if ( !v3 || LODWORD(HalpDeviceBlockUnblockPushLock.StackLimit) == 2 || *((_DWORD *)v7 + 117) == 6 )
      {
        LOBYTE(a2) = a1;
        v4 = guard_dispatch_icall_no_overrides(v7[2], a2);
      }
      if ( v4 )
        guard_dispatch_icall_no_overrides(v7[2], v5);
      ++v3;
    }
  }
}

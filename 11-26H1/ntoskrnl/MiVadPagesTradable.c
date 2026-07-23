/*
 * XREFs of MiVadPagesTradable @ 0x14035E780
 * Callers:
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiLockUnlockVmPrepare @ 0x140A064C0 (MiLockUnlockVmPrepare.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadPagesTradable(__int64 a1)
{
  int v1; // eax
  int v2; // r8d

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x80000;
  if ( (v1 & 0x1C) != 0 )
  {
    if ( v2 || (*(_DWORD *)(a1 + 72) & 1) == 0 )
      return (*(_DWORD *)(a1 + 48) & 0x1C) == 8;
    return 0LL;
  }
  return !v2 || (v1 & 0x200000) == 0 && (v1 & 0x60000u) < 0x40000;
}

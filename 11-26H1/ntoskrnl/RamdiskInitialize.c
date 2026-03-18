/*
 * XREFs of RamdiskInitialize @ 0x140D03DE4
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 * Callees:
 *     _memicmp @ 0x140559840 (_memicmp.c)
 *     RamdiskCreateSymbolicLink @ 0x140D03C90 (RamdiskCreateSymbolicLink.c)
 *     RamdiskStart @ 0x140D03E44 (RamdiskStart.c)
 */

__int64 __fastcall RamdiskInitialize(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
    return RamdiskCreateSymbolicLink(a2, a3);
  if ( memicmp(*(const void **)(a2 + 184), "ramdisk(", 8uLL) )
    return 3221226021LL;
  return RamdiskStart(a2, a3);
}

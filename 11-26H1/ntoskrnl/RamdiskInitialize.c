/*
 * XREFs of RamdiskInitialize @ 0x140D0A0B4
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 * Callees:
 *     _memicmp @ 0x14055BCD0 (_memicmp.c)
 *     RamdiskCreateSymbolicLink @ 0x140D09F60 (RamdiskCreateSymbolicLink.c)
 *     RamdiskStart @ 0x140D0A114 (RamdiskStart.c)
 */

__int64 __fastcall RamdiskInitialize(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
    return RamdiskCreateSymbolicLink(a2, a3);
  if ( memicmp(*(const void **)(a2 + 184), "ramdisk(", 8uLL) )
    return 3221226021LL;
  return RamdiskStart(a2, a3);
}

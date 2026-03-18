/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1404FFD68
 * Callers:
 *     MiIsImageFullyRetpolined @ 0x140B1F430 (MiIsImageFullyRetpolined.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140B1F474 (MiLogRetpolineImageLoadEvents.c)
 *     MiApplyRetpolineToBootDriver @ 0x140CFA8C8 (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140CFABB8 (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140CFACE0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14077DECC (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlIsImageFullyRetpolined(__int64 a1)
{
  _DWORD *Config; // rax

  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  if ( Config && *Config >= 0x94u )
    return (Config[36] >> 20) & 1;
  else
    return 0LL;
}

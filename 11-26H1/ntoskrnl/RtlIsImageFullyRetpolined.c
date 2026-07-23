/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1404F9558
 * Callers:
 *     MiIsImageFullyRetpolined @ 0x140B214B0 (MiIsImageFullyRetpolined.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140B214F4 (MiLogRetpolineImageLoadEvents.c)
 *     MiApplyRetpolineToBootDriver @ 0x140D00C48 (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140D00F38 (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140D01060 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407809CC (LdrImageDirectoryEntryToLoadConfig.c)
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

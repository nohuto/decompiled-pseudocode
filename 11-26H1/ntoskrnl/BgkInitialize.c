/*
 * XREFs of BgkInitialize @ 0x140D19A1C
 * Callers:
 *     InbvDriverInitialize @ 0x140CC0070 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x1405C8270 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BgkDestroy @ 0x140C55454 (BgkDestroy.c)
 *     BgkpLockBgfxCodeSection @ 0x140C55820 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryInitialize @ 0x140C55AD4 (BgLibraryInitialize.c)
 *     BgConsoleGetInterface @ 0x140C55CF4 (BgConsoleGetInterface.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
    return byte_140E65F51 == 0 ? 0xC0000001 : 0;
  if ( !a2 )
  {
    BgkDestroy();
    stru_140E3EAA8.OtherTransferCount = 0LL;
    BgkpLockBgfxCodeSection(v6, v5, v7, v8);
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      qword_140E65F08 = (__int64)BgConsoleGetInterface();
      if ( qword_140E65F08 )
        guard_dispatch_icall_no_overrides(*(unsigned int *)&PspSiloMonitorLock.SchedulerApcFill5[80], 4291217094LL);
      if ( (int)guard_dispatch_icall_no_overrides(9LL, 4LL) < 0 )
        LODWORD(stru_140E3EAA8.WriteTransferCount) = 2;
    }
    byte_140E65F51 = 1;
    byte_140E65F52 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}

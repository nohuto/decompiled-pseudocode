/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400D7AB4
 * Callers:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x140007D00 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 *     NtGdiMakeObjectXferable @ 0x1400D6FC0 (NtGdiMakeObjectXferable.c)
 *     prfntKillList @ 0x1400D7300 (prfntKillList.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     GreSetPaletteEntries @ 0x14021B190 (GreSetPaletteEntries.c)
 *     CleanupHLSURF @ 0x140220E70 (CleanupHLSURF.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _GRETHREAD *v4; // rax

  EtwTraceGreLockReleaseSemaphore(L"Hmgr", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 28))-- == 1 )
      *(_QWORD *)v4 &= ~0x100000uLL;
    if ( !*(_QWORD *)v4 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}

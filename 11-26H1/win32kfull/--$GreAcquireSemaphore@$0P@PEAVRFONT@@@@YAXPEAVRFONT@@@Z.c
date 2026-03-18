/*
 * XREFs of ??$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B7C
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0P@@@YAXXZ @ 0x1400701DC (--$GrepAcquireLockValidate@$0P@@@YAXXZ.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<15,RFONT *>(__int64 a1)
{
  HSEMAPHORE v1; // rbx

  v1 = *(HSEMAPHORE *)(a1 + 856);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"RFONT_EUDC", v1, 0LL);
  GreAcquireSemaphoreInternal(v1);
  return GrepAcquireLockValidate<15>();
}

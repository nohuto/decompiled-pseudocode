/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B14
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<15,RFONT *>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *(HSEMAPHORE *)(a1 + 856);
  EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v1);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 23))-- == 1 )
      *(_QWORD *)v2 &= ~0x8000uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal(v1);
}

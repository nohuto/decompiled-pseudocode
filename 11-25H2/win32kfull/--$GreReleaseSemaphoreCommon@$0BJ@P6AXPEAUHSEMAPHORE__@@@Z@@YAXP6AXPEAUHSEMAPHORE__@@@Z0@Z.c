/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B614C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14010DAC8 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x14010EBF0 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140228C20 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _GRETHREAD *v4; // rax
  bool v5; // zf

  EtwTraceGreLockReleaseSemaphore(L"FntCache", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    v5 = (*(_QWORD *)v4 & 0xFFFFFFFFFDFFFFFFuLL) == 0;
    *(_QWORD *)v4 &= ~0x2000000uLL;
    if ( v5 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}

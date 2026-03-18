/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1401BCFF0
 * Callers:
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x140203630 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140207440 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x14021CB58 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     UnmapPrintKView @ 0x1401BD088 (UnmapPrintKView.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall PDEVOBJ::DestroyFont(PDEVOBJ *this, struct _FONTOBJ *a2)
{
  __int64 SessionState; // rax
  int v5; // ebx
  HSEMAPHORE v6; // [rsp+30h] [rbp+8h] BYREF

  SessionState = W32GetSessionState((_DWORD)this, a2);
  SEMOBJ<17>::SEMOBJ<17>(&v6, *(_QWORD *)(SessionState + 96) + 4872LL);
  v5 = *(_DWORD *)(*(_QWORD *)&a2[2].iUniq + 68LL);
  SEMOBJ<17>::vUnlock(&v6);
  if ( v5 == 1 )
    UnmapPrintKView(*(_QWORD *)(*(_QWORD *)&a2[2].iUniq + 88LL));
  (*(void (__fastcall **)(struct _FONTOBJ *))(*(_QWORD *)this + 3024LL))(a2);
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
}

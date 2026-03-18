/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1400F45AC (vRemoveAllInactiveRFONTs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1400F4808 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     GrepAcquireRFONTListSemaphoreEx @ 0x1400F5340 (GrepAcquireRFONTListSemaphoreEx.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400F55A4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??0?$SEMOBJSHARED@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400F6088 (--0-$SEMOBJSHARED@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     prfntKillList @ 0x1400F60E8 (prfntKillList.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140225258 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1402889F8 (-prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // r8
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v11; // edx
  int v12; // eax

  a1(a2);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  result = v3 + 8;
  v7 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v7 )
  {
    v8 = *v7;
    if ( (*v7 & 0xFFFFFFDFFFFC0000uLL) != 0 && (v8 & 0x40000) == 0 )
    {
      v11 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v12 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v8) == 0 )
          v12 = v11;
        v11 = v12;
      }
      if ( v12 > 18 && v12 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v12);
    }
    LOBYTE(i) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1A);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1A) = i + 1;
    if ( !(_BYTE)i )
      *v7 |= 0x40000uLL;
  }
  return result;
}

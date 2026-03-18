/*
 * XREFs of ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140055CAC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x140070570 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400716E4 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1400CD87C (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14015073C (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     GreRealizeDefaultPalette @ 0x1401ED05C (GreRealizeDefaultPalette.c)
 *     GreSetPaletteEntries @ 0x14021B190 (GreSetPaletteEntries.c)
 *     GreRealizePalette @ 0x140268A30 (GreRealizePalette.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140310480 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140312354 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x14032575C (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x14033A980 (NtGdiUnrealizeObject.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<13>::SEMOBJ<13>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rbx
  __int64 v8; // r8
  char v9; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v13; // edx
  unsigned __int64 i; // rcx
  int v15; // eax

  v3 = (HSEMAPHORE)(*a2 + 312LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = (__int64 *)((v5 + 8) & -(__int64)(v5 != 0));
  if ( v7 )
  {
    v8 = *v7;
    if ( (*v7 & 0xFFFFFFFFFFFFE000uLL) != 0 && (*v7 & 0x2000) == 0 )
    {
      v13 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v15 = i;
        if ( !_bittest64(&v8, i) )
          v15 = v13;
        v13 = v15;
      }
      if ( v15 > 13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v15, v8);
    }
    v9 = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0x15);
    *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0x15) = v9 + 1;
    if ( !v9 )
      *v7 |= 0x2000uLL;
  }
  return a1;
}

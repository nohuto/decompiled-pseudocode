/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90
 * Callers:
 *     ?GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x140080588 (-GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BDFAC (-GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140178748 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x14018BEC0 (NtGdiGetLinkedUFIs.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x140194714 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401C7C50 (-GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1401DB460 (-GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoi.c)
 *     ?GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401DD840 (-GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401DF398 (-GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiQueryFontAssocInfo @ 0x1401E8510 (NtGdiQueryFontAssocInfo.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x14026FC74 (-GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiGetETM @ 0x140311420 (NtGdiGetETM.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1403270C8 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall RFONTOBJ::vInit(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        int a3,
        unsigned int a4,
        const struct RFONTOBJ::Tag *a5)
{
  HSEMAPHORE v6; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  char v12; // cl
  unsigned __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( (unsigned int)RFONTOBJ::bInit(this, a2, a3, a4, a5) )
  {
    v6 = *(HSEMAPHORE *)(*(_QWORD *)this + 504LL);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"RFONT_Cache", v6, 0LL);
    GreAcquireSemaphoreInternal(v6);
    CurrentThread = KeGetCurrentThread();
    v8 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v8 = *ThreadWin32Thread;
    }
    v10 = (__int64 *)((v8 + 8) & -(__int64)(v8 != 0));
    if ( v10 )
    {
      v11 = *v10;
      if ( (*v10 & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (*v10 & 0x20) == 0 )
      {
        v13 = 0LL;
        v14 = 37;
        do
        {
          v15 = v13;
          if ( !_bittest64(&v11, v13) )
            v15 = v14;
          ++v13;
          v14 = v15;
        }
        while ( v13 < 0x40 );
        if ( v15 > 5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v11, (unsigned int)v15);
      }
      v12 = *(_BYTE *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0xD);
      *(_BYTE *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0xD) = v12 + 1;
      if ( !v12 )
        *v10 |= 0x20uLL;
    }
  }
}

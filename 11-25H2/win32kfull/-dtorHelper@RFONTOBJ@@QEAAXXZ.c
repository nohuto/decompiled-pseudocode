/*
 * XREFs of ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x140017398
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AEFB4 (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082830 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082918 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1400AFE68 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RFONTOBJ::dtorHelper(RFONTOBJ *this)
{
  HSEMAPHORE v2; // rbx
  struct _GRETHREAD *v3; // rax
  struct _GRETHREAD *v4; // rdi
  __int64 v5; // rcx
  char v6; // cl
  int v7; // edi
  __int64 v8; // rdi
  struct _GRETHREAD *v9; // rax
  unsigned __int64 v11; // rdx
  int v12; // r8d
  int v13; // eax

  v2 = *(HSEMAPHORE *)(*(_QWORD *)this + 856LL);
  GreAcquireSemaphoreInternal(v2);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 0xFFFFFFFFFFFF8000uLL) != 0 && (v5 & 0x8000) == 0 )
    {
      v11 = 0LL;
      v12 = 37;
      do
      {
        v13 = v11;
        if ( !_bittest64(&v5, v11) )
          v13 = v12;
        ++v11;
        v12 = v13;
      }
      while ( v11 < 0x40 );
      if ( v13 > 15 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v11, (unsigned int)v13);
    }
    v6 = *((_BYTE *)v4 + 23);
    *((_BYTE *)v4 + 23) = v6 + 1;
    if ( !v6 )
      *(_QWORD *)v4 |= 0x8000uLL;
  }
  v7 = *(_DWORD *)(*(_QWORD *)this + 720LL);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v7 & 1) != 0 )
  {
    v8 = *(_QWORD *)(W32GetSessionState() + 96);
    GreAcquirePushLockShared2<16,0>(v8 + 4872);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 13508));
    GreReleasePushLockShared2<16,0>(v8 + 4872);
  }
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= 0xFFFFFEFE;
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v2);
    v9 = GreGetCurrentThreadCrossSessionCheck();
    if ( v9 )
    {
      if ( (*((_BYTE *)v9 + 23))-- == 1 )
        *(_QWORD *)v9 &= ~0x8000uLL;
      if ( !*(_QWORD *)v9 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v2);
  }
}

/*
 * XREFs of ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1401BB14C
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0P@@@YAXXZ @ 0x1400701DC (--$GrepAcquireLockValidate@$0P@@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1401BB23C (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtorHelper(RFONTOBJ *this)
{
  HSEMAPHORE v2; // rbx
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  struct _GRETHREAD *v8; // rax

  v2 = *(HSEMAPHORE *)(*(_QWORD *)this + 856LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<15>();
  v3 = *(_DWORD *)(*(_QWORD *)this + 720LL);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v3 & 1) != 0 )
  {
    v7 = *(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96);
    GreAcquirePushLockShared2<16,0>(v7 + 4864);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 13500));
    GreReleasePushLockShared2<16,0>(v7 + 4864);
  }
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= 0xFFFFFEFE;
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v2);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      if ( (*((_BYTE *)v8 + 23))-- == 1 )
        *(_QWORD *)v8 &= ~0x8000uLL;
      if ( !*(_QWORD *)v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v2);
  }
}

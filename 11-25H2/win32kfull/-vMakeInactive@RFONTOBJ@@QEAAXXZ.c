/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1400174EC
 * Callers:
 *     RFONT_vMakeInactive @ 0x140017210 (RFONT_vMakeInactive.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AEFB4 (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262AA0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082830 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082918 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BA064 (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1402611D4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  __int64 SessionState; // rax
  unsigned int v3; // ecx
  struct RFONT **v4; // rbx
  int v5; // esi
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rbx
  struct RFONT *v11; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v13[112]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v13, 0, sizeof(v13));
  if ( *(_QWORD *)this )
  {
    SessionState = W32GetSessionState();
    SEMOBJ<18>::SEMOBJ<18>(v12, *(_QWORD *)(SessionState + 96) + 4872LL);
    if ( *(int *)(*(_QWORD *)this + 668LL) <= 0 )
    {
      SEMOBJ<18>::vUnlock(v12);
      return;
    }
    SEMOBJ<18>::vUnlock(v12);
    v3 = *(_DWORD *)(*(_QWORD *)this + 848LL);
    if ( v3 <= 0xA )
    {
      memset_0(v13, 0, sizeof(v13));
      v5 = 0;
      v4 = (struct RFONT **)v13;
    }
    else
    {
      v4 = (struct RFONT **)PALLOCMEM(8 * v3 + 32, 1718382187LL);
      if ( !v4 )
        return;
      v5 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v4);
    v7 = *v4;
    v8 = InactiveHelper;
    if ( *v4 )
    {
      v9 = 0LL;
      do
      {
        v11 = v7;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v11, 0LL);
        v11 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
        v7 = v4[++v9];
      }
      while ( v7 );
    }
    if ( v5 )
      Win32FreePool(v4);
    if ( v8 )
    {
      v10 = *(_QWORD *)(W32GetSessionState() + 96);
      GreAcquirePushLockShared2<16,0>(v10 + 4872);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 13508));
      GreReleasePushLockShared2<16,0>(v10 + 4872);
    }
  }
}

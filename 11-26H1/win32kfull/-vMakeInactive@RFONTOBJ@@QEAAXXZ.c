/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4
 * Callers:
 *     RFONT_vMakeInactive @ 0x14006EFA0 (RFONT_vMakeInactive.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ecx
  struct RFONT **v6; // rbx
  int v7; // esi
  int InactiveHelper; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct RFONT *v11; // rcx
  int v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD v15[2]; // [rsp+20h] [rbp-98h] BYREF
  struct RFONT *v16[14]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v16, 0, sizeof(v16));
  if ( *(_QWORD *)this )
  {
    v15[0] = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 20328LL);
    GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
    if ( *(int *)(*(_QWORD *)this + 668LL) <= 0 )
    {
      SEMOBJ<18>::vUnlock(v15);
      return;
    }
    SEMOBJ<18>::vUnlock(v15);
    v5 = *(_DWORD *)(*(_QWORD *)this + 848LL);
    if ( v5 > 0xA )
    {
      v6 = (struct RFONT **)PALLOCMEM(8 * v5 + 32, 1718382187LL);
      if ( !v6 )
        return;
      v7 = 1;
    }
    else
    {
      v6 = v16;
      v7 = 0;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v6);
    v11 = *v6;
    v12 = InactiveHelper;
    if ( *v6 )
    {
      v14 = 0LL;
      do
      {
        v15[0] = v11;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v15, 0LL);
        v15[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v15);
        v11 = v6[++v14];
      }
      while ( v11 );
    }
    if ( v7 )
      Win32FreePool(v6);
    if ( v12 )
    {
      v13 = *(_QWORD *)(W32GetSessionState(v11, v9, v10) + 96);
      GreAcquirePushLockShared2<16,0>(v13 + 4864);
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 13500));
      GreReleasePushLockShared2<16,0>(v13 + 4864);
    }
  }
}

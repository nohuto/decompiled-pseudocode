/*
 * XREFs of ?GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z @ 0x1402366CC
 * Callers:
 *     NtGdiFontIsLinked @ 0x14027F9A0 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x14010EEB0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GrepFontIsLinked(struct DCOBJ *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v6; // rbx
  __int64 v7; // rsi
  char v8; // cl
  _QWORD v9[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+88h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v10, a1, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v10);
  if ( v10 )
  {
    v6 = *(_QWORD *)(v10 + 120);
    v7 = *(_QWORD *)(W32GetSessionState(v4, v3) + 96) + 4864LL;
    GreAcquirePushLockShared2<16,0>(v7);
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8636), 1u);
    GreReleasePushLockShared2<16,0>(v7);
    if ( v6 && (*(_DWORD *)(v6 + 12) & 8) == 0 )
    {
      if ( *(_DWORD *)(v10 + 716) )
      {
        LOBYTE(v1) = *(_DWORD *)(v7 + 14688) != 0;
      }
      else if ( *(_QWORD *)(v7 + 8656)
             || *(_QWORD *)(v7 + 8664)
             || *(_DWORD *)(v7 + 14696)
             && ((IFIOBJR::IFIOBJR((IFIOBJR *)v9, *(const struct _IFIMETRICS **)(v6 + 32), (struct RFONTOBJ *)&v10, a1),
                  (v8 = *(_BYTE *)(v9[0] + 44LL)) == 0)
              || v8 == -1
              || v8 == 2)
             && (*(_BYTE *)(v7 + 14072) & (unsigned __int8)(v8 + 2) & 0xF) != 0 )
      {
        v1 = 1;
      }
      else if ( *(_QWORD *)(v6 + 120) )
      {
        v1 = 1;
      }
    }
    GreAcquirePushLockShared2<16,0>(v7);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 8636));
    GreReleasePushLockShared2<16,0>(v7);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  return v1;
}

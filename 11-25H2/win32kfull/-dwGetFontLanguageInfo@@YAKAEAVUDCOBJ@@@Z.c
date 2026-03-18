/*
 * XREFs of ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BDE04
 * Callers:
 *     NtGdiGetDCDword @ 0x1400849D0 (NtGdiGetDCDword.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1400193DC (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x14001A6D0 (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x14001AAE0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BCD48 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1402154A8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall dwGetFontLanguageInfo(struct UDCOBJ *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 SessionState; // rax
  struct PFE *v9; // rax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-45h] BYREF
  HDEV v14; // [rsp+40h] [rbp-41h] BYREF
  struct _POINTL v15; // [rsp+48h] [rbp-39h] BYREF
  HSEMAPHORE v16; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v18[96]; // [rsp+68h] [rbp-19h] BYREF

  v2 = 0x8000;
  v14 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
  if ( v14 )
  {
    if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v14) )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v14);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)v17, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v14, v3);
    v4 = v17[1];
    if ( v17[0] && UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
    {
      SessionState = W32GetSessionState(v6, v5, v7);
      SEMOBJ<17>::SEMOBJ<17>(&v16, *(_QWORD *)(SessionState + 96) + 4872LL);
      v13 = 0;
      v12 = 0;
      v15 = 0LL;
      memset_0(v18, 0, sizeof(v18));
      BuildMapperParameters((struct MAPPER::PARAMETERS *)v18, a1, (*(_DWORD *)(v4 + 28) & 2) != 0, 0);
      v9 = LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)v17, (struct MAPPER::PARAMETERS *)v18, &v13, &v15, &v12);
      if ( v9 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v12 >> 8;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
        v10 = *((_QWORD *)v9 + 4);
        v2 = *(_DWORD *)(v10 + 164) != 0 ? 8 : 0;
        if ( (*(_DWORD *)(v10 + 48) & 0x80000001) != 0 )
          v2 |= 0x40000u;
      }
      SEMOBJ<17>::vUnlock(&v16);
    }
    if ( v4 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v4);
  }
  return v2;
}

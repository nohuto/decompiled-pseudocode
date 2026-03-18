/*
 * XREFs of ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BD04C
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1400BB700 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1400193DC (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x14001A6D0 (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x14001AAE0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1400BB8C0 (cjIFIMetricsToOTMW.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BCD48 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1400BD390 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1402154A8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GrepGetOutlineTextMetrics(struct UDCOBJ *a1, unsigned int a2, char *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  size_t v5; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v12; // rbx
  struct _IFIMETRICS *v13; // rcx
  unsigned int v14; // eax
  int v15; // esi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 SessionState; // rax
  struct LFONT *v21; // rbx
  unsigned int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  HDEV v25; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  struct LFONT *v28; // [rsp+60h] [rbp-A0h]
  struct _POINTL v29; // [rsp+68h] [rbp-98h] BYREF
  HSEMAPHORE v30[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v31[96]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int Src[60]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  v5 = a2;
  v9 = 0;
  if ( !a2 && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v10 = *(_QWORD *)a1;
  v26[0] = 5;
  v26[1] = *(unsigned __int16 *)(v10 + 12);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 152LL) & 0x10) != 0 )
  {
    v24 = 0;
    v29 = 0LL;
    v22 = 0;
    v25 = *(HDEV *)(v10 + 48);
    if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v25) )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v25);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v27, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v25, v16);
    if ( !v27 || UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    {
      if ( v28 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v28);
      return 0LL;
    }
    SessionState = W32GetSessionState(v18, v17, v19);
    SEMOBJ<17>::SEMOBJ<17>(v30, *(_QWORD *)(SessionState + 96) + 4872LL);
    memset_0(v31, 0, sizeof(v31));
    v21 = v28;
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v31, a1, (*((_DWORD *)v28 + 7) & 2) != 0, 0);
    if ( LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v27, (struct MAPPER::PARAMETERS *)v31, &v24, &v29, &v22) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v22 >> 8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
    }
    SEMOBJ<17>::vUnlock(v30);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v21);
  }
  v23 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v23, a1, 0, 2u, (const struct RFONTOBJ::Tag *)v26) )
    GreAcquireSemaphore<5,RFONT *>(v23);
  if ( !v23 || (v12 = *(_QWORD *)(v23 + 120)) == 0 )
  {
    EngSetLastError(6u);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v23 + 96) + 3072LL) )
  {
    v13 = *(struct _IFIMETRICS **)(v12 + 32);
    v22 = 0;
    *(_DWORD *)a4 = cjOTMAWSize(v13, &v22);
    if ( a3 )
    {
      if ( (unsigned int)v5 <= 0xE8 )
      {
        memset_0(Src, 0, 0xE8uLL);
        if ( (unsigned int)cjIFIMetricsToOTMW(
                             a4,
                             Src,
                             (struct RFONTOBJ *)&v23,
                             a1,
                             *(struct _IFIMETRICS **)(v12 + 32),
                             0) )
        {
          memmove(a3, Src, v5);
          v4 = v5;
        }
        goto LABEL_18;
      }
      if ( (unsigned int)v5 >= v22 )
      {
        v14 = cjIFIMetricsToOTMW(
                a4,
                (unsigned int *)a3,
                (struct RFONTOBJ *)&v23,
                a1,
                *(struct _IFIMETRICS **)(v12 + 32),
                1);
        v15 = v5 - v14;
        v9 = v14;
        if ( v15 > 0 )
          memset_0(&a3[v14], 0, v15);
      }
    }
    else
    {
      v9 = v22;
    }
  }
  v4 = v9;
LABEL_18:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
  return v4;
}

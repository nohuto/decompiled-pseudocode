/*
 * XREFs of ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x140280790 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z @ 0x1400C6B4C (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400C6FC0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x14010E0AC (cjIFIMetricsToOTMW.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x14010F584 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14010FA80 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x14010FB74 (--1LFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepGetOutlineTextMetrics(
        struct DCOBJ *a1,
        size_t Size,
        struct _OUTLINETEXTMETRICW *a3,
        struct _TMDIFF *a4)
{
  unsigned int v4; // edi
  size_t v5; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned int v13; // eax
  int v14; // esi
  struct _IFIMETRICS *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct LFONT *v22; // rbx
  Gre::Base *v23; // rcx
  struct Gre::Base::SESSION_GLOBALS *v24; // rax
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  HDEV v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h]
  struct _POINTL v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v33[96]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int Src[60]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  v9 = 0;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v10 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) & 0x10) != 0 )
  {
    v27 = 0;
    v31 = 0LL;
    v25 = 0;
    v28 = *(HDEV *)(v10 + 48);
    if ( ((_DWORD)v28[10] & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v28);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v29, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v28);
    if ( !v29 || UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v17, v16, v18) < 0 )
    {
      LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v29);
      return 0LL;
    }
    v32 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v20, v19, v21) + 96) + 20320LL);
    GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v32);
    memset_0(v33, 0, sizeof(v33));
    v22 = (struct LFONT *)v30;
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v33, a1, (*(_DWORD *)(v30 + 28) & 2) != 0, 0);
    if ( LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v29, (struct MAPPER::PARAMETERS *)v33, &v27, &v31, &v25) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v25 >> 8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
    }
    SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v32);
    v24 = Gre::Base::Globals(v23);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v24, v22);
  }
  v26 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v26, a1, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v26);
  if ( !v26 || (v11 = *(_QWORD *)(v26 + 120)) == 0 )
  {
    EngSetLastError(6u);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v26 + 96) + 3072LL) )
  {
    v15 = *(struct _IFIMETRICS **)(v11 + 32);
    v25 = 0;
    *(_DWORD *)a4 = cjOTMAWSize(v15, &v25);
    if ( a3 )
    {
      if ( (unsigned int)v5 <= 0xE8 )
      {
        memset_0(Src, 0, 0xE8uLL);
        if ( (unsigned int)cjIFIMetricsToOTMW(
                             a4,
                             Src,
                             (struct RFONTOBJ *)&v26,
                             a1,
                             *(struct _IFIMETRICS **)(v11 + 32),
                             0) )
        {
          memmove(a3, Src, v5);
          v4 = v5;
        }
        goto LABEL_13;
      }
      if ( (unsigned int)v5 >= v25 )
      {
        v13 = cjIFIMetricsToOTMW(a4, &a3->otmSize, (struct RFONTOBJ *)&v26, a1, *(struct _IFIMETRICS **)(v11 + 32), 1);
        v14 = v5 - v13;
        v9 = v13;
        if ( v14 > 0 )
          memset_0((char *)a3 + v13, 0, v14);
      }
    }
    else
    {
      v9 = v25;
    }
  }
  v4 = v9;
LABEL_13:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
  return v4;
}

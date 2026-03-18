/*
 * XREFs of ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1400F5394
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x14010DA74 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x14007009C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1400C6710 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1400C6734 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400F55A4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x14010FB74 (--1LFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct DCOBJ *a2, struct _FD_XFORM *a3, unsigned int a4)
{
  HDEV v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v21; // rcx
  HSEMAPHORE v22[2]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-9h] BYREF
  struct _POINTL v24; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp+7h] BYREF
  int v26; // [rsp+90h] [rbp+17h]
  unsigned int v27; // [rsp+E0h] [rbp+67h]
  struct PFE *v28; // [rsp+E8h] [rbp+6Fh]

  v7 = *(HDEV *)(*(_QWORD *)a2 + 48LL);
  DC::QuickInitXform(*(_QWORD *)a2, v23, 516LL);
  v11 = *(_QWORD *)this;
  v27 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  v12 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x3001E000;
  v24 = *(struct _POINTL *)(*(_QWORD *)this + 656LL);
  v28 = *(struct PFE **)(v11 + 120);
  if ( v11 )
    RFONTOBJ::vReleaseCache(this);
  v22[0] = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96) + 20320LL);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v25[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v13 = v25[0];
  W32GetSessionState(v15, v14, v16);
  v17 = 1;
  v26 = 0;
  ++*(_DWORD *)(v13 + 68);
  SEMOBJ<17>::vUnlock(v22);
  *(_QWORD *)this = 0LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       this,
                       a3,
                       v12,
                       v27,
                       v7,
                       (struct EXFORMOBJ *)v23,
                       v28,
                       0,
                       *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL),
                       0,
                       a4) )
  {
    GreAcquireSemaphore<5,RFONT *>(*(_QWORD *)this);
    if ( v13 )
      PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v25, v18, v19);
  }
  else
  {
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)v22, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 296LL), v7);
    if ( v22[0]
      && (unsigned int)RFONTOBJ::bRealizeFont(
                         this,
                         a2,
                         v7,
                         (struct tagENUMLOGFONTEXDVW *)(v22[0] + 63),
                         v28,
                         a3,
                         &v24,
                         v12,
                         v27,
                         0,
                         0,
                         a4) )
    {
      v21 = *(_QWORD *)this;
      v26 = 1;
      GreAcquireSemaphore<5,RFONT *>(v21);
    }
    else
    {
      *(_QWORD *)this = 0LL;
      v17 = 0;
    }
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)v22);
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v25);
  }
  return v17;
}

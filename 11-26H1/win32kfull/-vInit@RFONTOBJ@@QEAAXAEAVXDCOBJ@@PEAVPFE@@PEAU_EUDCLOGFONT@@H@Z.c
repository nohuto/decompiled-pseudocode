/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8
 * Callers:
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14010C92C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@QEAU_POINTL@@@Z @ 0x1400C19DC (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400C2ED0 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400C55A0 (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1400C6710 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1400C6734 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1400CA590 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x14010FB74 (--1LFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall RFONTOBJ::vInit(RFONTOBJ *this, struct XDCOBJ *a2, struct PFE *a3, struct _EUDCLOGFONT *a4)
{
  int v4; // esi
  __int64 v6; // rdx
  int v8; // r14d
  HDEV v10; // rbx
  _DWORD *v11; // r13
  __int64 v12; // r8
  int v13; // r9d
  unsigned int v14; // r12d
  int v15; // eax
  unsigned int v16; // eax
  size_t v17; // r8
  Gre::Base *v18; // rcx
  struct XDCOBJ *v19; // r13
  __int64 v21; // rcx
  __int64 eYX_low; // rdx
  __int64 eYY_low; // r8
  float v24; // xmm2_4
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  HDEV v32; // rdi
  _QWORD *i; // rdi
  HDEV v34; // rax
  HDEV v35; // rdi
  _QWORD *j; // rdi
  HDEV v37; // rax
  struct LFONT *v38; // rbx
  struct Gre::Base::SESSION_GLOBALS *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  _QWORD *v43; // rcx
  HDEV v44; // rax
  HDEV v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  HDEV v50; // rcx
  int v51; // ecx
  _QWORD *v52; // rcx
  HDEV v53; // rax
  HDEV v54; // rax
  __int64 v55; // rdx
  int v56; // ecx
  int v57; // eax
  unsigned int v58; // r10d
  int v59; // [rsp+60h] [rbp-A0h]
  struct XDCOBJ *v60; // [rsp+68h] [rbp-98h] BYREF
  int v61[2]; // [rsp+70h] [rbp-90h]
  struct _POINTL v62; // [rsp+78h] [rbp-88h] BYREF
  struct PFE *v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  struct LFONT *v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h] BYREF
  HSEMAPHORE v67; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v68[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v69; // [rsp+B8h] [rbp-48h]
  _FD_XFORM v70; // [rsp+C0h] [rbp-40h] BYREF
  struct tagENUMLOGFONTEXDVW v71; // [rsp+D0h] [rbp-30h] BYREF

  v60 = a2;
  v4 = 0;
  v61[0] = 0;
  v6 = *(_QWORD *)a2;
  v63 = a3;
  v8 = 1;
  v10 = *(HDEV *)(v6 + 48);
  v59 = *(_DWORD *)(v6 + 248) & 1;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v64, *(struct HLFONT__ **)(v6 + 1744), v10);
  v11 = (_DWORD *)v64;
  if ( !v64 )
    goto LABEL_47;
  v12 = *((_QWORD *)a3 + 4);
  v13 = *((_DWORD *)a4 + 1);
  v14 = 0;
  *(_QWORD *)v61 = v12;
  v68[0] = v12;
  if ( ((v13 & 0x4000) != 0 || (*(_DWORD *)a4 & 1) != 0) && (*(_BYTE *)(v12 + 52) & 1) == 0 )
  {
    if ( *(_BYTE *)(v64 + 272) )
    {
      v57 = IFIOBJ::bSimItalic((IFIOBJ *)v68);
      v12 = *(_QWORD *)v61;
      if ( v57 )
        v14 = v58;
    }
  }
  if ( (((_DWORD)v10[10] & 1) != 0 || *((_DWORD *)a4 + 6)) && ((*(_DWORD *)a4 & 0x20) != 0 || (v13 & 0x2000) != 0) )
  {
    v56 = 400;
    if ( v11[67] )
      v56 = v11[67];
    v14 |= ((*(unsigned __int16 *)(v12 + 46) - v56) >> 31) & 0x2000;
  }
  v15 = *(_DWORD *)(v12 + 48);
  if ( (v15 & 1) != 0 && (int)v11[63] <= 0 )
    v14 |= 0x8000u;
  if ( (v13 & 0x10000) != 0 && (v15 & 0x40) != 0 )
    v14 |= v13 & 0x10010000;
  memset_0(&v71, 0, sizeof(v71));
  v16 = v11[62];
  v17 = 420LL;
  if ( v16 < 0x1A4 )
    v17 = v16;
  memmove(&v71, v11 + 63, v17);
  v71.elfEnumLogfontEx.elfLogFont.lfHeight = *((_DWORD *)a4 + 3);
  v71.elfEnumLogfontEx.elfLogFont.lfWidth = *((_DWORD *)a4 + 2);
  v71.elfEnumLogfontEx.elfLogFont.lfOrientation = *((_DWORD *)a4 + 5);
  v71.elfEnumLogfontEx.elfLogFont.lfEscapement = *((_DWORD *)a4 + 4);
  v70 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v61 + 48LL) & 0x3000010) == 0 )
  {
    *(_QWORD *)this = 0LL;
    goto LABEL_52;
  }
  v19 = v60;
  v62.x = 1;
  v62.y = 1;
  DC::QuickInitXform(*(_QWORD *)v60, &v67, 516LL);
  if ( !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60 + 976LL) + 208LL) == 1
       ? bGetNtoD_Win31(&v70, &v71.elfEnumLogfontEx.elfLogFont, (struct IFIOBJ *)v68, v60, 0, &v62, 1)
       : (unsigned int)bGetNtoD(&v70, &v71.elfEnumLogfontEx.elfLogFont, (struct IFIOBJ *)v68, v60, &v62)) )
  {
LABEL_47:
    *(_QWORD *)this = 0LL;
LABEL_48:
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v64);
    return;
  }
  eYX_low = LODWORD(v70.eYX);
  if ( LODWORD(v70.eYX) )
  {
    eYX_low = LODWORD(v70.eYX) ^ 0x80000000;
    LODWORD(v70.eYX) ^= 0x80000000;
  }
  eYY_low = LODWORD(v70.eYY);
  if ( LODWORD(v70.eYY) )
  {
    eYY_low = LODWORD(v70.eYY) ^ 0x80000000;
    LODWORD(v70.eYY) ^= 0x80000000;
  }
  if ( (*(_DWORD *)(v68[0] + 48LL) & 0x1000000) != 0 )
  {
    LODWORD(v70.eXX) = eYY_low;
    LODWORD(v70.eXY) = eYX_low;
    if ( (_DWORD)eYX_low )
    {
      eYX_low = (unsigned int)eYX_low ^ 0x80000000;
      LODWORD(v70.eXY) = eYX_low;
    }
  }
  v24 = *((float *)a4 + 7);
  v70.eXX = v70.eXX * v24;
  v70.eXY = v70.eXY * v24;
  v60 = *(struct XDCOBJ **)(*(_QWORD *)(W32GetSessionState(v21, eYX_low, eYY_low) + 96) + 20320LL);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v68[0] = *(_QWORD *)v63;
  v25 = v68[0];
  W32GetSessionState(v27, v26, v28);
  ++*(_DWORD *)(v25 + 68);
  v69 = 0;
  SEMOBJ<17>::vUnlock(&v60);
  v29 = *(_QWORD *)v19;
  v66 = *(_QWORD *)v19 + 320LL;
  v61[0] = *(_DWORD *)(*(_QWORD *)(v29 + 976) + 208LL);
  v67 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(v29, v30, v31) + 96) + 20328LL);
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  if ( ((_DWORD)v10[10] & 0x800000) != 0 )
  {
    v32 = (HDEV)*((_QWORD *)v10 + 439);
    v4 = 1;
  }
  else
  {
    v32 = v10;
  }
  if ( (v4 & 1) != 0 )
    v4 &= ~1u;
  for ( i = (_QWORD *)*((_QWORD *)v32 + 190); ; i = (_QWORD *)*i )
  {
    if ( ((_DWORD)v10[10] & 0x800000) != 0 )
    {
      v34 = (HDEV)*((_QWORD *)v10 + 439);
      v4 |= 2u;
    }
    else
    {
      v34 = v10;
    }
    if ( (v4 & 2) != 0 )
      v4 &= ~2u;
    if ( i == (_QWORD *)(v34 + 380) )
      break;
    v60 = 0LL;
    *(_QWORD *)this = i - 84;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
    if ( (unsigned int)RFONTOBJ::bMatchRealization(
                         this,
                         &v70,
                         v14,
                         0,
                         (struct EXFORMOBJ *)&v66,
                         v63,
                         v59,
                         v61[0],
                         0,
                         2u) )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 668LL);
      v40 = *(_QWORD *)this + 672LL;
      v41 = *(_QWORD *)v40;
      if ( *(_QWORD *)(*(_QWORD *)v40 + 8LL) != v40 )
        goto LABEL_60;
      v42 = *(_QWORD **)(*(_QWORD *)this + 680LL);
      if ( *v42 != v40 )
        goto LABEL_60;
      *v42 = v41;
      *(_QWORD *)(v41 + 8) = v42;
      v43 = (_QWORD *)(*(_QWORD *)this + 672LL);
      v44 = _bittest((const signed __int32 *)v10 + 10, 0x17u) ? (HDEV)*((_QWORD *)v10 + 439) : v10;
      v45 = v44 + 380;
      v46 = *(_QWORD *)v45;
      if ( *(HDEV *)(*(_QWORD *)v45 + 8LL) != v45 )
        goto LABEL_60;
      *v43 = v46;
      v43[1] = v45;
      *(_QWORD *)(v46 + 8) = v43;
      *(_QWORD *)v45 = v43;
      goto LABEL_50;
    }
  }
  if ( ((_DWORD)v10[10] & 0x800000) != 0 )
  {
    v35 = (HDEV)*((_QWORD *)v10 + 439);
    v4 |= 8u;
  }
  else
  {
    v35 = v10;
  }
  if ( (v4 & 8) != 0 )
    v4 &= ~8u;
  for ( j = (_QWORD *)*((_QWORD *)v35 + 192); ; j = (_QWORD *)*j )
  {
    if ( ((_DWORD)v10[10] & 0x800000) != 0 )
    {
      v37 = (HDEV)*((_QWORD *)v10 + 439);
      v4 |= 0x10u;
    }
    else
    {
      v37 = v10;
    }
    if ( (v4 & 0x10) != 0 )
      v4 &= ~0x10u;
    if ( j == (_QWORD *)(v37 + 384) )
    {
      *(_QWORD *)this = 0LL;
      v8 = 0;
      goto LABEL_50;
    }
    v60 = 0LL;
    *(_QWORD *)this = j - 84;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
    if ( (unsigned int)RFONTOBJ::bMatchRealization(
                         this,
                         &v70,
                         v14,
                         0,
                         (struct EXFORMOBJ *)&v66,
                         v63,
                         v59,
                         v61[0],
                         0,
                         2u) )
      break;
  }
  v47 = *(_QWORD *)this + 672LL;
  v48 = *(_QWORD *)v47;
  if ( *(_QWORD *)(*(_QWORD *)v47 + 8LL) != v47 )
    goto LABEL_60;
  v49 = *(_QWORD **)(*(_QWORD *)this + 680LL);
  if ( *v49 != v47 )
    goto LABEL_60;
  *v49 = v48;
  *(_QWORD *)(v48 + 8) = v49;
  v50 = ((_DWORD)v10[10] & 0x800000) != 0 ? (HDEV)*((_QWORD *)v10 + 439) : v10;
  v51 = *((_DWORD *)v50 + 388) - 1;
  if ( ((_DWORD)v10[10] & 0x800000) != 0 )
    *(_DWORD *)(*((_QWORD *)v10 + 439) + 1552LL) = v51;
  else
    *((_DWORD *)v10 + 388) = v51;
  v52 = (_QWORD *)(*(_QWORD *)this + 672LL);
  v53 = ((_DWORD)v10[10] & 0x800000) != 0 ? (HDEV)*((_QWORD *)v10 + 439) : v10;
  v54 = v53 + 380;
  v55 = *(_QWORD *)v54;
  if ( *(HDEV *)(*(_QWORD *)v54 + 8LL) != v54 )
LABEL_60:
    __fastfail(3u);
  *v52 = v55;
  v52[1] = v54;
  *(_QWORD *)(v55 + 8) = v52;
  *(_QWORD *)v54 = v52;
  *(_DWORD *)(*(_QWORD *)this + 668LL) = 1;
LABEL_50:
  SEMOBJ<18>::vUnlock(&v67);
  if ( v8 )
  {
    GreAcquireSemaphore<5,RFONT *>(*(_QWORD *)this);
    *(_DWORD *)(*(_QWORD *)v19 + 252LL) &= ~1u;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v68);
    goto LABEL_52;
  }
  if ( !(unsigned int)RFONTOBJ::bRealizeFont(this, v19, v10, &v71, v63, &v70, &v62, v14, 0, v59, 0, 2u) )
  {
    *(_QWORD *)this = 0LL;
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v68);
    goto LABEL_48;
  }
  GreAcquireSemaphore<5,RFONT *>(*(_QWORD *)this);
  *(_DWORD *)(*(_QWORD *)v19 + 252LL) &= ~1u;
LABEL_52:
  v38 = v65;
  if ( v65 )
  {
    v39 = Gre::Base::Globals(v18);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v39, v38);
  }
}

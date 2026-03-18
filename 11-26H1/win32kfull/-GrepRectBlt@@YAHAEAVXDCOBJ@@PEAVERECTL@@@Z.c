/*
 * XREFs of ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400ABA6C
 * Callers:
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14011683C (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14006BEDC (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1400AB9A0 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400ABEE8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1401A8D4C (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepRectBlt(struct _ERESOURCE ***a1, struct ERECTL *a2)
{
  struct _ERESOURCE **v2; // r8
  __int64 v5; // r14
  char v6; // r15
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct _ERESOURCE **v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edx
  struct _ERESOURCE **v16; // r8
  struct _ERESOURCE *v17; // rdx
  struct _ERESOURCE *v18; // rdx
  int OwnerThread; // ecx
  int v20; // r9d
  int v21; // r9d
  _OWORD *v22; // rcx
  __int128 v23; // xmm0
  struct _ERESOURCE **v24; // rax
  struct _ERESOURCE **v25; // rcx
  unsigned int v26; // edi
  struct SURFACE *v27; // rbx
  struct _ERESOURCE **v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h]
  struct _ERESOURCE **v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v37[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _ERESOURCE *v38; // [rsp+A0h] [rbp-60h]
  __int16 v39; // [rsp+A8h] [rbp-58h]
  struct _ERESOURCE **v40; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+B8h] [rbp-48h]
  struct _ERESOURCE **v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int128 v44; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-10h] BYREF
  char v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  struct SURFACE *v48; // [rsp+120h] [rbp+20h] BYREF
  int v49; // [rsp+128h] [rbp+28h]
  struct _ERESOURCE **v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  __int128 v52; // [rsp+140h] [rbp+40h] BYREF
  __int128 v53; // [rsp+160h] [rbp+60h] BYREF
  char v54; // [rsp+180h] [rbp+80h]
  struct SURFACE *v55; // [rsp+188h] [rbp+88h]
  _BYTE v56[352]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v57[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v58; // [rsp+300h] [rbp+200h]
  struct _ERESOURCE *v59; // [rsp+308h] [rbp+208h]
  struct _ERESOURCE *v60; // [rsp+320h] [rbp+220h]
  __int64 v61; // [rsp+330h] [rbp+230h]
  struct _ERESOURCE **v62; // [rsp+340h] [rbp+240h]
  __int128 v63; // [rsp+370h] [rbp+270h]
  struct _ERESOURCE *v64; // [rsp+3A8h] [rbp+2A8h]
  int v65; // [rsp+3B0h] [rbp+2B0h]
  int v66; // [rsp+3B4h] [rbp+2B4h]

  v2 = *a1;
  v61 = 0LL;
  v66 = 0;
  v5 = gaMix[BYTE4(v2[122][2].SystemResourcesList.Flink) & 0xF];
  v6 = gajRop3[v5];
  v7 = *((_DWORD *)v2 + 9);
  if ( (v7 & 0xE0) != 0 )
  {
    if ( (v7 & 0x20) != 0 )
    {
      if ( *(_DWORD *)a2 < *((_DWORD *)v2 + 266) )
        *((_DWORD *)v2 + 266) = *(_DWORD *)a2;
      v8 = *((_DWORD *)a2 + 1);
      if ( v8 < *((_DWORD *)v2 + 267) )
        *((_DWORD *)v2 + 267) = v8;
      v9 = *((_DWORD *)a2 + 2);
      if ( v9 > *((_DWORD *)v2 + 268) )
        *((_DWORD *)v2 + 268) = v9;
      v10 = *((_DWORD *)a2 + 3);
      if ( v10 > *((_DWORD *)v2 + 269) )
        *((_DWORD *)v2 + 269) = v10;
    }
    v11 = *a1;
    if ( (*((_DWORD *)*a1 + 9) & 0x80u) != 0 )
    {
      if ( *(_DWORD *)a2 < *((_DWORD *)v11 + 274) )
        *((_DWORD *)v11 + 274) = *(_DWORD *)a2;
      v12 = *((_DWORD *)a2 + 1);
      if ( v12 < *((_DWORD *)v11 + 275) )
        *((_DWORD *)v11 + 275) = v12;
      v13 = *((_DWORD *)a2 + 2);
      if ( v13 > *((_DWORD *)v11 + 276) )
        *((_DWORD *)v11 + 276) = v13;
      v14 = *((_DWORD *)a2 + 3);
      if ( v14 > *((_DWORD *)v11 + 277) )
        *((_DWORD *)v11 + 277) = v14;
    }
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v56);
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v56, a1);
  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)a1) )
  {
    v26 = 1;
    goto LABEL_38;
  }
  if ( !v15 )
    goto LABEL_41;
  v16 = *a1;
  v60 = (*a1)[62];
  v58 = *(_QWORD *)&v60[1].ActiveCount;
  v59 = v16[11];
  if ( (v6 & 0xE8) == 0 )
  {
    v62 = 0LL;
    goto LABEL_29;
  }
  v62 = v16 + 150;
  v17 = v16[122];
  if ( (v17[1].OwnerEntry.OwnerThread & 0x1000) != 0 )
    GreDCSelectBrush(v16, *(_QWORD *)&v17[1].OwnerEntry.0);
  v18 = (*a1)[122];
  OwnerThread = v18[1].OwnerEntry.OwnerThread;
  if ( (OwnerThread & 1) != 0 || (*((_DWORD *)*a1 + 79) & 1) != 0 )
  {
    LODWORD(v18[1].OwnerEntry.OwnerThread) = OwnerThread & 0xFFFFFFFE;
    *((_DWORD *)*a1 + 79) &= ~1u;
    EBRUSHOBJ::vInitBrush(v62, *a1, (*a1)[17], v59, v58, v60, 1);
  }
  if ( ((_DWORD)v62[15] & 0x100) != 0 )
  {
LABEL_41:
    v26 = 0;
    goto LABEL_38;
  }
  v16 = *a1;
  v64 = (*a1)[149];
  if ( ((_DWORD)v62[15] & 0x8000) != 0 && BYTE5(v16[122][2].SystemResourcesList.Flink) == 1 )
  {
    v20 = 43520;
    goto LABEL_30;
  }
LABEL_29:
  v20 = (_DWORD)v5 << 8;
LABEL_30:
  v21 = v5 | v20;
  if ( (*((_DWORD *)v16 + 9) & 0xE0) != 0 && (*((_DWORD *)v16 + 9) & 0x40) != 0 )
  {
    if ( ERECTL::bEmpty((ERECTL *)(v16 + 135)) )
      *v22 = *(_OWORD *)a2;
    else
      ERECTL::operator|=(v22, a2);
  }
  v23 = *(_OWORD *)a2;
  v24 = a1[2];
  v65 = v21;
  v63 = v23;
  v34 = v24;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v36);
  UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v37);
  v25 = *a1;
  if ( *a1 )
    v38 = *v25;
  else
    v38 = 0LL;
  v32 = (unsigned __int64)v25;
  v39 = 256;
  v27 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
  v50 = v34;
  v51 = 0LL;
  v48 = 0LL;
  v49 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v52);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v53);
  v28 = a1[2];
  v48 = (struct SURFACE *)v32;
  v54 = 0;
  v55 = v27;
  v42 = v28;
  v43 = 0LL;
  v40 = 0LL;
  v41 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v44);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v45);
  v40 = *a1;
  v46 = 0;
  v47 = 0LL;
  v26 = BLTRECORD::bBitBlt((BLTRECORD *)v57, (DC **)&v40, &v48, v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v40);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v48);
  v32 &= -(__int64)((_BYTE)v39 != 0);
  PopThreadGuardedObject(v37);
  DCOBJ::~DCOBJ((DCOBJ *)&v32);
LABEL_38:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v56);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v57, v29, v30);
  return v26;
}

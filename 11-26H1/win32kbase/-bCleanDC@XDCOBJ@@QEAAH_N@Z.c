/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20
 * Callers:
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     ?GrepDeleteDCOBJ@@YA_NAEAVXDCOBJ@@KPEA_N@Z @ 0x14013B80C (-GrepDeleteDCOBJ@@YA_NAEAVXDCOBJ@@KPEA_N@Z.c)
 *     GreCleanDC @ 0x140148000 (GreCleanDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x140168CE0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140019490 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x140034B64 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x140034C24 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x14003925C (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     GreDCSelectBrush @ 0x14003A7C0 (GreDCSelectBrush.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400570A0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     bDeleteFont @ 0x1400C5ABC (bDeleteFont.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, char a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  BOOL v8; // r15d
  DC *v9; // rdx
  DC *v10; // rbx
  struct HPATH__ *v11; // rdx
  __int64 v12; // rbx
  unsigned int *v13; // rdx
  struct HOBJ__ *v14; // rsi
  DC *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned int *v18; // r14
  char v19; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v20; // r8
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  char *v25; // rcx
  __int64 v26; // rdx
  __int128 *v27; // rax
  __int128 *v28; // rcx
  __int128 v29; // xmm0
  __int128 *v30; // rcx
  _OWORD *v31; // rdx
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  DC *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  unsigned int *v38; // r14
  char v39; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v40; // r8
  unsigned int v41; // edx
  __int64 *v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rax
  DC *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rbx
  unsigned int *v48; // r14
  char v49; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v50; // r8
  unsigned int v51; // edx
  __int64 *v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rbx
  int (*v57)(void); // rax
  __int64 v58; // rcx
  unsigned int v59; // ebx
  void (__fastcall *v60)(DC **, _QWORD); // rax
  __int64 v61; // rbx
  DC *v62; // rdx
  unsigned int v63; // ecx
  DC *v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rbx
  unsigned int *v67; // r14
  char v68; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v69; // r8
  unsigned int v70; // edx
  __int64 *v71; // rsi
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rbx
  void (__fastcall *v76)(__int64); // rax
  DC *v77; // rdx
  __int64 v78; // rax
  int v79; // ecx
  DC *v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // edx
  char v85; // r9
  char v86; // bl
  __int64 v87; // rcx
  __int64 SessionState; // rax
  unsigned int *v89; // [rsp+28h] [rbp-69h] BYREF
  int v90; // [rsp+30h] [rbp-61h]
  __int16 v91; // [rsp+34h] [rbp-5Dh]
  __int64 v92; // [rsp+38h] [rbp-59h]
  _BYTE v93[8]; // [rsp+48h] [rbp-49h] BYREF
  unsigned int *v94; // [rsp+50h] [rbp-41h]
  __int64 v95; // [rsp+F8h] [rbp+67h] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 122);
  v6 = *(_DWORD *)(v5 + 152);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush(v4, *(_QWORD *)(v5 + 160));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this);
  v7 = *this;
  v8 = *(_DWORD *)(*((_QWORD *)*this + 122) + 104LL) != 1 || (*((_DWORD *)v7 + 63) & 1) != 0;
  if ( *((int *)v7 + 26) > 1 )
    GrepRestoreDCOBJ((struct XDCOBJ *)this, 1);
  v9 = this[2];
  if ( *((_QWORD *)*this + 11) != *((_QWORD *)v9 + 484) )
    GrepSelectPalette((struct XDCOBJ *)this, *((HPALETTE *)v9 + 84), 1);
  if ( *((_DWORD *)*this + 8) == 1 )
  {
    v85 = 5;
    if ( a2 )
      v85 = 7;
    GrepSelectBitmap((__int64)&v89, (__int64)this, *(_QWORD *)(*((_QWORD *)this[2] + 386) + 168LL), v85);
    *((_DWORD *)*this + 9) &= ~0x1000u;
  }
  *((_WORD *)*this + 1044) = -1;
  if ( *((_QWORD *)*this + 20) )
  {
    v95 = *((_QWORD *)*this + 20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v95);
    *((_QWORD *)*this + 20) = 0LL;
  }
  if ( *((_QWORD *)*this + 21) )
  {
    v95 = *((_QWORD *)*this + 21);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v95);
    *((_QWORD *)*this + 21) = 0LL;
  }
  v10 = *this;
  v11 = (struct HPATH__ *)*((_QWORD *)*this + 25);
  if ( v11 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v93, v11);
    if ( v94 && (v94[22] & 1) == 0 )
    {
      SessionState = W32GetSessionState(v87);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v94);
    }
    *((_QWORD *)v10 + 25) = 0LL;
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v93);
  }
  DEC_SHARE_REF_CNT_LAZY0(this[2], *((struct BRUSH **)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(this[2], *((struct BRUSH **)*this + 18));
  v12 = (__int64)this[2];
  v13 = (unsigned int *)*((_QWORD *)*this + 19);
  if ( v13 )
  {
    v14 = *(struct HOBJ__ **)v13;
    if ( (unsigned __int16)HmgDecrementShareReferenceCount((__int64)this[2], v13) == 1 )
    {
      v89 = 0LL;
      v90 = 0;
      v91 = 0;
      v92 = v12;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v89, v14, 0xAu);
      if ( v90 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v92 + 8) + 96LL))(*(_QWORD *)(v92 + 8), *v89);
        v86 = *(_BYTE *)(HmgPentryFromPobj(v12) + 15);
        HANDLELOCK::vUnlock((HANDLELOCK *)&v89);
        if ( (v86 & 2) != 0 )
          bDeleteFont(v14, 0LL);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v89);
    }
  }
  v15 = *this;
  v16 = (__int64)this[2];
  v89 = 0LL;
  v17 = *((_QWORD *)v15 + 12);
  v90 = 0;
  v91 = 0;
  v92 = v16;
  HANDLELOCK::vLockHandle((__int64 *)&v89, (unsigned __int16)*(_DWORD *)v17 | (*(_DWORD *)v17 >> 8) & 0xFF0000, 1);
  if ( !v90 )
  {
    HmgPentryFromPobj(v16);
    goto LABEL_24;
  }
  v18 = v89;
  v19 = *((_BYTE *)v89 + 14);
  switch ( v19 )
  {
    case 5:
      v20 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v17 + 680);
      v21 = 3;
      break;
    case 4:
      v20 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v17 + 112);
      v21 = 2;
      break;
    case 16:
      v20 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v17 + 136);
      v21 = 0;
      break;
    default:
      goto LABEL_23;
  }
  TrackObjectReferenceDecrement(v16, v21, v20);
LABEL_23:
  --*(_DWORD *)(v17 + 8);
  v22 = *(__int64 **)(v92 + 8);
  v23 = *v22;
  v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v22 + 96))(v22, *v18);
  (*(void (__fastcall **)(__int64 *, __int64))(v23 + 48))(v22, v24);
  KeLeaveCriticalRegion();
LABEL_24:
  v25 = (char *)*((_QWORD *)*this + 37);
  if ( v25 && v25 != (char *)*this + 264 )
  {
    GreDeleteFastMutex(v25);
    *((_QWORD *)*this + 37) = 0LL;
  }
  v26 = 3LL;
  v27 = (__int128 *)((char *)*this + 80);
  v28 = (__int128 *)((char *)this[2] + 672);
  do
  {
    v27 += 8;
    v29 = *v28;
    v28 += 8;
    *(v27 - 8) = v29;
    *(v27 - 7) = *(v28 - 7);
    *(v27 - 6) = *(v28 - 6);
    *(v27 - 5) = *(v28 - 5);
    *(v27 - 4) = *(v28 - 4);
    *(v27 - 3) = *(v28 - 3);
    *(v27 - 2) = *(v28 - 2);
    *(v27 - 1) = *(v28 - 1);
    --v26;
  }
  while ( v26 );
  *v27 = *v28;
  v27[1] = v28[1];
  v30 = (__int128 *)((char *)this[2] + 232);
  v31 = (_OWORD *)*((_QWORD *)*this + 122);
  v32 = 3LL;
  do
  {
    v31 += 8;
    v33 = *v30;
    v30 += 8;
    *(v31 - 8) = v33;
    *(v31 - 7) = *(v30 - 7);
    *(v31 - 6) = *(v30 - 6);
    *(v31 - 5) = *(v30 - 5);
    *(v31 - 4) = *(v30 - 4);
    *(v31 - 3) = *(v30 - 3);
    *(v31 - 2) = *(v30 - 2);
    *(v31 - 1) = *(v30 - 1);
    --v32;
  }
  while ( v32 );
  v34 = *v30;
  v89 = 0LL;
  v90 = 0;
  *v31 = v34;
  v91 = 0;
  v31[1] = v30[1];
  v31[2] = v30[2];
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  v35 = *this;
  v36 = (__int64)this[2];
  v92 = v36;
  v37 = *((_QWORD *)v35 + 17);
  HANDLELOCK::vLockHandle((__int64 *)&v89, (unsigned __int16)*(_DWORD *)v37 | (*(_DWORD *)v37 >> 8) & 0xFF0000, 1);
  if ( v90 )
  {
    v38 = v89;
    v39 = *((_BYTE *)v89 + 14);
    switch ( v39 )
    {
      case 5:
        v40 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v37 + 680);
        v41 = 3;
        break;
      case 4:
        v40 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v37 + 112);
        v41 = 2;
        break;
      case 16:
        v40 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v37 + 136);
        v41 = 0;
        break;
      default:
        goto LABEL_33;
    }
    TrackObjectReferenceIncrement(v36, v41, v40);
LABEL_33:
    ++*(_DWORD *)(v37 + 8);
    v42 = *(__int64 **)(v92 + 8);
    v43 = *v42;
    v44 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v42 + 96))(v42, *v38);
    (*(void (__fastcall **)(__int64 *, __int64))(v43 + 48))(v42, v44);
    KeLeaveCriticalRegion();
    goto LABEL_34;
  }
  HmgPentryFromPobj(v36);
LABEL_34:
  v45 = *this;
  v46 = (__int64)this[2];
  v89 = 0LL;
  v90 = 0;
  v47 = *((_QWORD *)v45 + 18);
  v91 = 0;
  v92 = v46;
  HANDLELOCK::vLockHandle((__int64 *)&v89, (unsigned __int16)*(_DWORD *)v47 | (*(_DWORD *)v47 >> 8) & 0xFF0000, 1);
  if ( !v90 )
  {
    HmgPentryFromPobj(v46);
    goto LABEL_39;
  }
  v48 = v89;
  v49 = *((_BYTE *)v89 + 14);
  switch ( v49 )
  {
    case 5:
      v50 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v47 + 680);
      v51 = 3;
      break;
    case 4:
      v50 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v47 + 112);
      v51 = 2;
      break;
    case 16:
      v50 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v47 + 136);
      v51 = 0;
      break;
    default:
      goto LABEL_38;
  }
  TrackObjectReferenceIncrement(v46, v51, v50);
LABEL_38:
  ++*(_DWORD *)(v47 + 8);
  v52 = *(__int64 **)(v92 + 8);
  v53 = *v52;
  v54 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v52 + 96))(v52, *v48);
  (*(void (__fastcall **)(__int64 *, __int64))(v53 + 48))(v52, v54);
  KeLeaveCriticalRegion();
LABEL_39:
  v56 = *((_QWORD *)*this + 6);
  v57 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v55) + 24) + 1456LL);
  if ( v57 )
  {
    if ( v57() >= 0 )
    {
      v59 = *(_DWORD *)(v56 + 40) & 1;
      v60 = *(void (__fastcall **)(DC **, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v58) + 24) + 1464LL);
      if ( v60 )
        v60(this, v59);
    }
  }
  v61 = *((_QWORD *)*this + 6);
  if ( v61 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 56968) + 40LL) )
    **((_DWORD **)*this + 122) |= 2u;
  v62 = *this;
  v89 = 0LL;
  v90 = 0;
  v91 = 0;
  v63 = *((_DWORD *)v62 + 63) | 1;
  if ( !v8 )
    v63 = *((_DWORD *)v62 + 63) & 0xFFFFFFFE;
  *((_DWORD *)v62 + 63) = v63;
  v64 = *this;
  v65 = (__int64)this[2];
  v92 = v65;
  v66 = *((_QWORD *)v64 + 12);
  HANDLELOCK::vLockHandle((__int64 *)&v89, (unsigned __int16)*(_DWORD *)v66 | (*(_DWORD *)v66 >> 8) & 0xFF0000, 1);
  if ( v90 )
  {
    v67 = v89;
    v68 = *((_BYTE *)v89 + 14);
    switch ( v68 )
    {
      case 5:
        v69 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v66 + 680);
        v70 = 3;
        break;
      case 4:
        v69 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v66 + 112);
        v70 = 2;
        break;
      case 16:
        v69 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v66 + 136);
        v70 = 0;
        break;
      default:
        goto LABEL_51;
    }
    TrackObjectReferenceIncrement(v65, v70, v69);
LABEL_51:
    ++*(_DWORD *)(v66 + 8);
    v71 = *(__int64 **)(v92 + 8);
    v72 = *v71;
    v73 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v71 + 96))(v71, *v67);
    (*(void (__fastcall **)(__int64 *, __int64))(v72 + 48))(v71, v73);
    KeLeaveCriticalRegion();
    goto LABEL_52;
  }
  HmgPentryFromPobj(v65);
LABEL_52:
  v75 = *((_QWORD *)*this + 220);
  v76 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v74) + 24) + 1976LL);
  if ( v76 )
    v76(v75);
  *((_QWORD *)*this + 220) = 0LL;
  v77 = *this;
  v78 = *((_DWORD *)*this + 10) & 1;
  v79 = *((_DWORD *)*this + 2 * v78 + 255);
  *((_DWORD *)v77 + 298) = *((_DWORD *)*this + 2 * v78 + 254);
  *((_DWORD *)v77 + 299) = v79;
  v80 = *this;
  v81 = (__int64)this[2];
  *((_DWORD *)v80 + 9) |= 0x10u;
  if ( *(_QWORD *)v80 )
  {
    v82 = HmgPentryFromPobj(v81);
  }
  else
  {
    v92 = 0LL;
    v82 = (__int64)v80 + 2152;
    *(_OWORD *)((char *)v80 + 2152) = 0LL;
    *((_QWORD *)v80 + 271) = v92;
    *((_DWORD *)v80 + 540) = -2147483630;
    *((_QWORD *)v80 + 271) = 0LL;
  }
  *(_BYTE *)(v82 + 15) |= 4u;
  v83 = *((_DWORD *)*this + 130);
  if ( (v83 & 1) != 0 && (v83 & 2) == 0 )
    DC::vClearDpiScaling(*this);
  return 1LL;
}

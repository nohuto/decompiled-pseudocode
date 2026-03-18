/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C
 * Callers:
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018873C (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x140188800 (BRUSHOBJ_pvGetRbrush.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018888C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x140073314 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAF8 (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14017EDC0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x14018087C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401829CC (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x140182A8C (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x140182B90 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x1401895D4 (-bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1401895FC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x140189934 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1401B5208 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x14028F4C4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     EngDitherColor @ 0x140291900 (EngDitherColor.c)
 *     HT_CreateHalftoneBrush @ 0x140303EB8 (HT_CreateHalftoneBrush.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4, struct _XLATEOBJ *a5, unsigned int a6))
{
  struct Gre::Base::SESSION_GLOBALS *v6; // r12
  __int64 v7; // rax
  unsigned int v8; // r15d
  struct Gre::Base::SESSION_GLOBALS *v9; // rdi
  char v10; // r14
  Gre::Base *v11; // rcx
  unsigned int v12; // eax
  unsigned __int8 v13; // bl
  BOOL v14; // r12d
  int v15; // eax
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  int v23; // r8d
  void *v24; // r10
  int inited; // eax
  Gre::Base *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  Gre::Base *v33; // rcx
  __int64 v34; // rbx
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r8
  HDEV v41; // rax
  __int64 (__fastcall *v42)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // r13
  __int64 v43; // rcx
  HDEV v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  ULONG v47; // eax
  ULONG v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  Gre::Base *v51; // rcx
  __int64 v52; // rbx
  unsigned int NearestIndexFromColorref; // r13d
  unsigned int *v54; // r8
  unsigned int v55; // r12d
  _QWORD *v56; // rcx
  __int64 *v57; // rax
  bool v58; // zf
  struct Gre::Base::SESSION_GLOBALS *v59; // r13
  char v60; // dl
  HPALETTE *v61; // rax
  HPALETTE *v62; // r12
  char v63; // cl
  HDEV v64; // rax
  int v65; // edx
  int v66; // ecx
  int v67; // edx
  int v68; // edx
  int v69; // edx
  int v70; // edx
  int v71; // edx
  char v72; // cl
  __int128 *v73; // rax
  __int128 v74; // xmm0
  __int64 v75; // xmm1_8
  signed int HalftoneBrush; // ecx
  __int64 v77; // rax
  void *v78; // rbx
  void *v79; // rdx
  int v80; // eax
  __int64 *IcmDIB; // rax
  int v82; // edx
  char v83[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v84; // [rsp+68h] [rbp-98h] BYREF
  __int64 v85; // [rsp+70h] [rbp-90h] BYREF
  HDEV hdev; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v87; // [rsp+80h] [rbp-80h] BYREF
  char v88; // [rsp+88h] [rbp-78h]
  Gre::Base *v89; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v90; // [rsp+98h] [rbp-68h] BYREF
  __int64 v91; // [rsp+A0h] [rbp-60h] BYREF
  char v92; // [rsp+A8h] [rbp-58h]
  int v93; // [rsp+ACh] [rbp-54h]
  __int64 (__fastcall *v94)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [rsp+B0h] [rbp-50h]
  unsigned int v95; // [rsp+B8h] [rbp-48h]
  unsigned int v96; // [rsp+C0h] [rbp-40h] BYREF
  int v97; // [rsp+C4h] [rbp-3Ch]
  int v98; // [rsp+C8h] [rbp-38h]
  int v99; // [rsp+CCh] [rbp-34h]
  __int64 v100; // [rsp+D0h] [rbp-30h]
  int v101; // [rsp+D8h] [rbp-28h]
  int v102; // [rsp+DCh] [rbp-24h]
  _DWORD v103[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v104; // [rsp+E8h] [rbp-18h]
  __int64 **v105; // [rsp+F0h] [rbp-10h]
  struct _SURFOBJ *v106; // [rsp+F8h] [rbp-8h]
  _OWORD v107[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v108; // [rsp+120h] [rbp+20h]
  __int128 v109; // [rsp+128h] [rbp+28h] BYREF
  __int64 v110; // [rsp+138h] [rbp+38h]

  v94 = a3;
  v6 = Gre::Base::Globals(a1);
  v90 = (__int64 *)v6;
  v95 = *((_DWORD *)a1 + 20);
  if ( v95 == 12 )
    return 0LL;
  v106 = 0LL;
  memset(v107, 0, sizeof(v107));
  PushThreadGuardedObject(
    v107,
    v107,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v7 = *((_QWORD *)a2 + 10);
  v8 = 1;
  v108 = 0LL;
  v91 = 0LL;
  v92 = 0;
  v93 = 0;
  hdev = *(HDEV *)(v7 + 48);
  v89 = 0LL;
  if ( ((_DWORD)hdev[10] & 1) != 0 && a3 == EngRealizeBrush )
  {
    v9 = Gre::Base::Globals((Gre::Base *)EngRealizeBrush);
    GreAcquireSemaphoreShared<1,>(v9);
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v9 = Gre::Base::Globals((Gre::Base *)EngRealizeBrush);
  }
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v83, (struct PDEVOBJ *)&hdev);
  v12 = *((_DWORD *)a1 + 20);
  v13 = 6;
  if ( v12 < 6 )
  {
    v33 = (Gre::Base *)*((unsigned int *)a1 + 20);
    v34 = *((_QWORD *)hdev + (_QWORD)v33 + 182);
    v35 = Gre::Base::Globals(v33);
    LOBYTE(v36) = 5;
    v37 = HmgShareLock(v35, v34, v36, 0LL);
    v108 = v37;
    if ( !v37 )
      goto LABEL_26;
    v106 = (struct _SURFOBJ *)(v37 + 24);
    v52 = AllocThreadBufferWithTag(96LL, 1953265735LL, 0LL);
    v85 = v52 + 40;
    v87 = (__int64 *)(v52 + 48);
    v84 = (_QWORD *)(v52 + 56);
    if ( v52 )
    {
      *(_DWORD *)v52 = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v51) + 944);
      *(_QWORD *)(v52 + 4) = 2LL;
      *(_QWORD *)(v52 + 16) = v52 + 84;
      *(_DWORD *)(v52 + 76) = 0;
      *(_DWORD *)(v52 + 12) = 2;
      *(_DWORD *)(v52 + 36) = -1;
      *(_QWORD *)(v52 + 40) = 0LL;
      *(_QWORD *)(v52 + 48) = 0LL;
      *(_QWORD *)(v52 + 56) = 0LL;
    }
    else
    {
      v85 = 40LL;
      v87 = (__int64 *)(v52 + 48);
      v84 = (_QWORD *)(v52 + 56);
    }
    v89 = (Gre::Base *)v52;
    if ( !v52 )
      goto LABEL_26;
    NearestIndexFromColorref = *((_DWORD *)a2 + 13);
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    {
      v55 = *((_DWORD *)a2 + 6);
      *v54 = NearestIndexFromColorref;
      *(_DWORD *)(v52 + 88) = v55;
      XLATE::vCheckForICM((XLATE *)v52, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      *(_QWORD *)v85 = v90[488];
      v56 = v84;
      v57 = v87;
    }
    else
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                   *((_QWORD *)a2 + 11),
                                   *((_QWORD *)a2 + 12),
                                   NearestIndexFromColorref,
                                   1LL);
      v55 = ulGetNearestIndexFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), *((unsigned int *)a2 + 6), 1LL);
      if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
        && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
        && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
        && NearestIndexFromColorref == v55 )
      {
        v55 = 1 - NearestIndexFromColorref;
      }
      *(_DWORD *)(v52 + 84) = NearestIndexFromColorref;
      *(_DWORD *)(v52 + 88) = v55;
      XLATE::vCheckForICM((XLATE *)v52, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      XLATE::vCheckForTrivial((XLATE *)v52);
      v56 = (_QWORD *)(v52 + 56);
      *(_QWORD *)(v52 + 40) = v90[488];
      v57 = (__int64 *)(v52 + 48);
    }
    v26 = (Gre::Base *)v52;
    *v57 = *((_QWORD *)a2 + 11);
    *v56 = *((_QWORD *)a2 + 12);
    *(_DWORD *)(v52 + 76) |= 0x100u;
    *(_DWORD *)(v52 + 28) = NearestIndexFromColorref;
    *(_DWORD *)(v52 + 32) = v55;
    goto LABEL_20;
  }
  if ( v12 < 0xC )
  {
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      goto LABEL_48;
    v40 = *((unsigned int *)a2 + 6);
    if ( (v40 & 0x1000000) != 0 )
    {
      LODWORD(v40) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), v40);
      *((_DWORD *)a2 + 6) = v40;
    }
    v41 = hdev;
    v42 = v94;
    if ( ((_DWORD)hdev[452] & 0x200000) != 0 && v94 != EngRealizeBrush )
    {
      if ( (unsigned int)v94(
                           (struct _BRUSHOBJ *)a2,
                           (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                           0LL,
                           0LL,
                           0LL,
                           (unsigned int)v40 | 0x80000000) )
      {
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v83);
LABEL_49:
        if ( v10 )
          GreReleaseSemaphoreShared<1,>((__int64 *)v9);
LABEL_51:
        SURFMEM::~SURFMEM((SURFMEM *)&v91);
        EXLATEOBJ::vAltUnlock(&v89, v49, v50);
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v107);
        return v8;
      }
      v41 = hdev;
    }
    v43 = *((_QWORD *)a2 + 10);
    v99 = 0;
    v102 = 0;
    v96 = *(_DWORD *)(v43 + 96) == 1 ? 1 : *((_DWORD *)v41 + 523);
    if ( !*((_WORD *)v41 + 1048) )
      goto LABEL_48;
    if ( !*((_WORD *)v41 + 1049) )
      goto LABEL_48;
    v97 = *((unsigned __int16 *)v41 + 1048);
    v98 = *((unsigned __int16 *)v41 + 1049);
    v100 = 0LL;
    v101 = 1;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v91, (struct _DEVBITMAPINFO *)&v96, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
      goto LABEL_48;
    v44 = hdev;
    v45 = *((unsigned int *)a2 + 6);
    v46 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
    if ( *((_QWORD *)hdev + 348) )
    {
      if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
        v44 = (HDEV)*((_QWORD *)hdev + 223);
      v47 = (*((__int64 (__fastcall **)(HDEV, __int64, __int64, _QWORD))hdev + 348))(
              v44,
              v46,
              v45,
              *(_QWORD *)(v91 + 72));
    }
    else
    {
      v47 = EngDitherColor(hdev, v46, v45, *(ULONG **)(v91 + 72));
    }
    v48 = v47 - 1;
    if ( !v48 )
    {
      v26 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 4664);
      goto LABEL_20;
    }
    if ( v48 != 1 )
    {
LABEL_48:
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v83);
      v8 = 0;
      goto LABEL_49;
    }
    v58 = v42 == EngRealizeBrush;
    v59 = v6;
    v60 = v58 && !GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v6);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v87, v60);
    LODWORD(v85) = v94 == EngRealizeBrush;
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v85);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    {
      v61 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
      LODWORD(v90) = *((_DWORD *)a2 + 6);
      v62 = v61;
      v63 = 0;
      v105 = &v90;
      v64 = hdev;
      LODWORD(v84) = 0;
      v104 = 1LL;
      v103[0] = 262400;
      v58 = ((_DWORD)hdev[591] & 0x100) == 0;
      v65 = (_DWORD)hdev[591] & 0x100;
      v103[1] = 255;
      if ( v58 )
        v63 = 2;
      LOBYTE(v84) = v63;
      v66 = *((_DWORD *)a2 + 18);
      if ( (v66 & 4) != 0 || (v66 & 0x20) == 0 && (v66 & 3) != 0 )
        LOBYTE(v84) = v65 != 0 ? 16 : 18;
      if ( *((unsigned __int16 *)v62 + 4) != v97 || *((unsigned __int16 *)v62 + 5) != v98 )
      {
        SURFACE::bDeleteSurface(v91, v59, 0LL, 0LL);
        v97 = *((unsigned __int16 *)v62 + 4);
        v98 = *((unsigned __int16 *)v62 + 5);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v91, (struct _DEVBITMAPINFO *)&v96, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
          goto LABEL_120;
        v64 = hdev;
      }
      v67 = *((_DWORD *)v64 + 590);
      if ( v67 )
      {
        v68 = v67 - 2;
        if ( v68 )
        {
          v69 = v68 - 1;
          if ( v69 )
          {
            v70 = v69 - 1;
            if ( v70 )
            {
              v71 = v70 - 1;
              if ( v71 )
              {
                if ( v71 != 2 )
                  goto LABEL_120;
              }
              else
              {
                v13 = -3;
              }
            }
            else
            {
              v13 = -2;
            }
          }
          else
          {
            v13 = -1;
          }
        }
        else
        {
          v13 = 2;
        }
      }
      else
      {
        v13 = 1;
      }
      v72 = *((_BYTE *)v64 + 2352);
      v73 = (__int128 *)*((_QWORD *)a2 + 7);
      BYTE3(v84) = v72;
      BYTE1(v84) = v13;
      v74 = *v73;
      BYTE2(v84) = 4;
      v109 = v74;
      v75 = *((_QWORD *)v73 + 2);
      WORD5(v109) = 10000;
      v110 = v75;
      *(_DWORD *)((char *)&v109 + 6) = 655370000;
      if ( v13 != v96 && (v13 != 0xFF || v96 != 2) && (v13 != 0xFE || v96 != 3) && (v13 != 0xFD || v96 != 4) )
        TraceLoggingWriteUnsupportedGdiUsage(24LL, v96, v13);
      HalftoneBrush = HT_CreateHalftoneBrush((_DWORD)v62, (unsigned int)&v109, (unsigned int)v103, (_DWORD)v84, 0LL);
      v77 = v91;
      if ( HalftoneBrush > *(_DWORD *)(v91 + 64) )
      {
        v78 = (void *)PALLOCMEM(HalftoneBrush, 1835167815LL);
        if ( !v78 )
          goto LABEL_120;
        SURFACE::bDeleteSurface(v91, v59, 0LL, 0LL);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v91, (struct _DEVBITMAPINFO *)&v96, v78, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
        {
          Win32FreePool(v78);
          goto LABEL_120;
        }
        *(_BYTE *)(v91 + 688) = 1;
        v77 = v91;
      }
      if ( (int)HT_CreateHalftoneBrush(
                  (_DWORD)v62,
                  (unsigned int)&v109,
                  (unsigned int)v103,
                  (_DWORD)v84,
                  *(_QWORD *)(v77 + 72)) <= 0 )
      {
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v85);
        if ( v88 )
          GreReleaseSemaphoreShared<1,>(v87);
        goto LABEL_48;
      }
      if ( ((_DWORD)hdev[10] & 0x200) != 0 )
      {
        v26 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v59 + 4664);
        goto LABEL_126;
      }
      EPALOBJ::EPALOBJ((EPALOBJ *)&v84, *v62);
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (Gre::Base *)&v89,
                           *((void **)a2 + 8),
                           *((_DWORD *)a2 + 18),
                           (__int64)v84,
                           *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                           *((_QWORD *)a2 + 12),
                           *((Gre::Base **)a2 + 12),
                           *((_DWORD *)a2 + 12),
                           *((_DWORD *)a2 + 13),
                           0xFFFFFF,
                           0) )
      {
        v26 = v89;
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v84);
LABEL_126:
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v85);
        if ( v88 )
          GreReleaseSemaphoreShared<1,>(v87);
        goto LABEL_20;
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v84);
    }
LABEL_120:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v85);
    if ( v88 )
      GreReleaseSemaphoreShared<1,>(v87);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v83);
    if ( v10 )
      GreReleaseSemaphoreShared<1,>((__int64 *)v9);
    v8 = 0;
    goto LABEL_51;
  }
  v87 = (__int64 *)*((_QWORD *)a1 + 3);
  v14 = 0;
  v15 = *((_DWORD *)a2 + 18);
  if ( (v15 & 1) == 0 )
  {
    v14 = (v15 & 6) != 0;
    goto LABEL_9;
  }
  v79 = (void *)*((_QWORD *)a2 + 8);
  if ( !v79 )
  {
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      goto LABEL_9;
    goto LABEL_139;
  }
  v80 = *((_DWORD *)a1 + 10);
  if ( (v80 & 0x80u) == 0 )
  {
    if ( (v80 & 0x20000) == 0 )
      goto LABEL_9;
    goto LABEL_139;
  }
  if ( !*((_DWORD *)a1 + 21) )
  {
    IcmDIB = (__int64 *)BRUSH::hFindIcmDIB(a1, v79);
    if ( IcmDIB )
    {
      v87 = IcmDIB;
LABEL_139:
      v14 = 1;
    }
  }
LABEL_9:
  v16 = Gre::Base::Globals(v11);
  LOBYTE(v17) = 5;
  v18 = HmgShareLock(v16, v87, v17, 1LL);
  v108 = v18;
  v19 = v18;
  if ( !v18 )
    goto LABEL_26;
  v20 = *((_QWORD *)a2 + 10);
  v21 = *(_QWORD *)(v18 + 128);
  v22 = *((_DWORD *)a1 + 10);
  if ( (v22 & 0x1000) == 0 )
  {
    if ( (v22 & 0x2000) != 0 )
    {
      if ( *(_DWORD *)(v19 + 96) != *(_DWORD *)(v20 + 96) )
        goto LABEL_26;
      v26 = (Gre::Base *)(v90 + 583);
      goto LABEL_20;
    }
    if ( (*(_WORD *)(v19 + 100) || *(_QWORD *)(v19 + 24)) && *(HDEV *)(v19 + 48) != hdev )
      goto LABEL_26;
    if ( v21 )
      goto LABEL_15;
    v82 = *(_DWORD *)(v19 + 96);
    if ( v82 == *((_DWORD *)hdev + 523) )
    {
      if ( ((_DWORD)hdev[539] & 0x100) == 0 )
      {
        v21 = *((_QWORD *)hdev + 224);
LABEL_15:
        if ( v14 )
        {
          v23 = *((_DWORD *)a2 + 18);
          v24 = (void *)*((_QWORD *)a2 + 8);
        }
        else
        {
          v23 = 0;
          v24 = 0LL;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v89,
                   v24,
                   v23,
                   v21,
                   *(_QWORD *)(v20 + 128),
                   *((_QWORD *)a2 + 12),
                   *((Gre::Base **)a2 + 12),
                   *((_DWORD *)a2 + 12),
                   *((_DWORD *)a2 + 13),
                   0xFFFFFF,
                   0);
        goto LABEL_18;
      }
    }
    else
    {
      if ( v82 == *((_DWORD *)a2 + 19) )
      {
        v21 = *((_QWORD *)a2 + 13);
        goto LABEL_15;
      }
      if ( v82 == 3 )
      {
        if ( ((_DWORD)hdev[539] & 0x100) == 0 )
        {
          v21 = v90[486];
          goto LABEL_15;
        }
      }
      else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
      {
        goto LABEL_26;
      }
    }
    v21 = 0LL;
    goto LABEL_15;
  }
  inited = EXLATEOBJ::bMakeXlate(
             &v89,
             *(_QWORD *)(v21 + 112),
             *((_QWORD *)a2 + 12),
             v20,
             *(_DWORD *)(v21 + 60),
             *(_DWORD *)(v21 + 28));
LABEL_18:
  if ( !inited )
    goto LABEL_26;
  v26 = v89;
LABEL_20:
  v27 = v108;
  if ( !v108 )
  {
    v27 = v91;
    if ( !v91 )
    {
      if ( v94 != EngRealizeBrush )
      {
        v28 = 0LL;
        goto LABEL_22;
      }
LABEL_26:
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v83);
      if ( v10 )
        GreReleaseSemaphoreShared<1,>((__int64 *)v9);
      SURFMEM::~SURFMEM((SURFMEM *)&v91);
      EXLATEOBJ::vAltUnlock(&v89, v38, v39);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v107);
      return 0LL;
    }
  }
  v28 = (v27 + 24) & -(__int64)(v27 != 0);
LABEL_22:
  v29 = v94(
          (struct _BRUSHOBJ *)a2,
          (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
          (struct _SURFOBJ *)v28,
          v106,
          (struct _XLATEOBJ *)v26,
          v95);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v83);
  if ( v10 )
    GreReleaseSemaphoreShared<1,>((__int64 *)v9);
  SURFMEM::~SURFMEM((SURFMEM *)&v91);
  EXLATEOBJ::vAltUnlock(&v89, v30, v31);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v107);
  return v29;
}

/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1400F6C80
 * Callers:
 *     BRUSHOBJ_pvGetRbrush @ 0x1400F6270 (BRUSHOBJ_pvGetRbrush.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1400F7764 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14032186C (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 * Callees:
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140008F6C (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1400FEE48 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1400FEEE8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1400FEFA4 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14015073C (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x140150A64 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x140160D4C (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x14017B0B0 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1401853D0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1401873F8 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1401ACA38 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401C612C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x14021FAB8 (-bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x14026A5A0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     HT_CreateHalftoneBrush @ 0x1402F44F8 (HT_CreateHalftoneBrush.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FBBE4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     EngDitherColor @ 0x140303920 (EngDitherColor.c)
 *     Feature_Servicing_BrushHTVfree__private_IsEnabledDeviceUsageNoInline @ 0x140321924 (Feature_Servicing_BrushHTVfree__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))
{
  struct Gre::Base::SESSION_GLOBALS *v6; // r13
  struct _SURFOBJ *v7; // r15
  __int64 v8; // rax
  unsigned int v9; // esi
  bool v10; // dl
  void *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int8 v14; // bl
  __int64 v15; // rax
  Gre::Base *v16; // rbx
  unsigned int NearestIndexFromColorref; // r15d
  unsigned int v18; // r14d
  Gre::Base *v19; // rsi
  __int64 v20; // r8
  HDEV v21; // rax
  __int64 v22; // rcx
  HDEV v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  ULONG *v26; // r9
  ULONG v27; // eax
  ULONG v28; // eax
  bool v29; // al
  bool v30; // dl
  HPALETTE *v31; // rax
  HPALETTE *v32; // r14
  HDEV v33; // rax
  int v34; // r8d
  int v35; // ecx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  char v41; // cl
  __int128 *v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // xmm1_8
  __int64 HalftoneBrush; // rcx
  __int64 v46; // rax
  void *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  int v51; // eax
  __int64 v52; // r8
  HBITMAP v53; // r15
  int v54; // ebx
  int v55; // eax
  HBITMAP IcmDIB; // rax
  bool v57; // zf
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r10
  __int64 v61; // r9
  int v62; // eax
  int inited; // eax
  int v64; // r8d
  unsigned int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // rax
  bool v68; // cf
  __int64 v69; // r8
  unsigned int v70; // ebx
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // r8
  char v75[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v76; // [rsp+68h] [rbp-98h] BYREF
  char v77; // [rsp+70h] [rbp-90h]
  BOOL v78; // [rsp+78h] [rbp-88h] BYREF
  __int64 v79; // [rsp+80h] [rbp-80h] BYREF
  HDEV hdev; // [rsp+88h] [rbp-78h] BYREF
  Gre::Base *Xlate; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v82; // [rsp+98h] [rbp-68h] BYREF
  char v83; // [rsp+A0h] [rbp-60h]
  __int64 v84; // [rsp+A8h] [rbp-58h] BYREF
  char v85; // [rsp+B0h] [rbp-50h]
  int v86; // [rsp+B4h] [rbp-4Ch]
  __int64 v87; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v88; // [rsp+C0h] [rbp-40h]
  unsigned int v89; // [rsp+C8h] [rbp-38h] BYREF
  int v90; // [rsp+CCh] [rbp-34h]
  int v91; // [rsp+D0h] [rbp-30h]
  int v92; // [rsp+D4h] [rbp-2Ch]
  __int64 v93; // [rsp+D8h] [rbp-28h]
  int v94; // [rsp+E0h] [rbp-20h]
  int v95; // [rsp+E4h] [rbp-1Ch]
  _DWORD v96[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v97; // [rsp+F0h] [rbp-10h]
  __int64 *v98; // [rsp+F8h] [rbp-8h]
  _BYTE v99[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v100; // [rsp+120h] [rbp+20h]
  __int128 v101; // [rsp+128h] [rbp+28h] BYREF
  __int64 v102; // [rsp+138h] [rbp+38h]

  v6 = Gre::Base::Globals(a1);
  v88 = *((_DWORD *)a1 + 20);
  if ( v88 == 12 )
    return 0LL;
  v7 = 0LL;
  v87 = 0LL;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v99);
  v8 = *((_QWORD *)a2 + 10);
  v9 = 1;
  v100 = 0LL;
  v84 = 0LL;
  v85 = 0;
  v86 = 0;
  hdev = *(HDEV *)(v8 + 48);
  Xlate = 0LL;
  if ( ((_DWORD)hdev[10] & 1) == 0 || (v10 = 1, a3 != EngRealizeBrush) )
    v10 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v76, v10);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v75, (struct PDEVOBJ *)&hdev);
  v13 = *((unsigned int *)a1 + 20);
  v14 = 6;
  if ( (unsigned int)v13 < 6 )
  {
    LOBYTE(v11) = 5;
    v15 = HmgShareLockCheck(*((_QWORD *)hdev + v13 + 182), v11);
    v100 = v15;
    if ( v15 )
    {
      v87 = v15 + 24;
      Xlate = pCreateXlate(2u);
      v16 = Xlate;
      if ( Xlate )
      {
        NearestIndexFromColorref = *((_DWORD *)a2 + 13);
        if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        {
          v18 = *((_DWORD *)a2 + 6);
          *((_DWORD *)v16 + 21) = NearestIndexFromColorref;
          *((_DWORD *)v16 + 22) = v18;
          XLATE::vCheckForICM(v16, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                       *((_QWORD *)a2 + 11),
                                       *((_QWORD *)a2 + 12),
                                       NearestIndexFromColorref,
                                       1LL);
          v18 = ulGetNearestIndexFromColorref(
                  *((_QWORD *)a2 + 11),
                  *((_QWORD *)a2 + 12),
                  *((unsigned int *)a2 + 6),
                  1LL);
          if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
            && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
            && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
            && NearestIndexFromColorref == v18 )
          {
            v18 = 1 - NearestIndexFromColorref;
          }
          *((_DWORD *)v16 + 21) = NearestIndexFromColorref;
          *((_DWORD *)v16 + 22) = v18;
          XLATE::vCheckForICM(v16, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
          XLATE::vCheckForTrivial(v16);
        }
        *((_QWORD *)v16 + 5) = *((_QWORD *)v6 + 475);
        v19 = v16;
        *((_QWORD *)v16 + 6) = *((_QWORD *)a2 + 11);
        *((_QWORD *)v16 + 7) = *((_QWORD *)a2 + 12);
        *((_DWORD *)v16 + 19) |= 0x100u;
        *((_DWORD *)v16 + 7) = NearestIndexFromColorref;
        v7 = (struct _SURFOBJ *)v87;
        *((_DWORD *)v16 + 8) = v18;
        goto LABEL_135;
      }
    }
LABEL_146:
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v75);
    if ( v77 )
      GreReleaseSemaphoreShared<1,>(v76);
    SURFMEM::~SURFMEM((SURFMEM *)&v84);
    EXLATEOBJ::vAltUnlock(&Xlate, v73, v74);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v99);
    return 0LL;
  }
  if ( (unsigned int)v13 >= 0xC )
  {
    v51 = *((_DWORD *)a2 + 18);
    v52 = 0LL;
    v53 = (HBITMAP)*((_QWORD *)a1 + 3);
    v54 = 0;
    if ( (v51 & 1) != 0 )
    {
      v11 = (void *)*((_QWORD *)a2 + 8);
      if ( !v11 )
      {
        if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
          goto LABEL_108;
        goto LABEL_107;
      }
      v55 = *((_DWORD *)a1 + 10);
      if ( (v55 & 0x80u) != 0 )
      {
        if ( *((_DWORD *)a1 + 21) || (IcmDIB = BRUSH::hFindIcmDIB(a1, v11)) == 0LL )
        {
LABEL_108:
          LOBYTE(v11) = 5;
          v58 = HmgShareLock(v53, v11, v52, v12);
          v100 = v58;
          v59 = v58;
          if ( !v58 )
            goto LABEL_146;
          v60 = *((_QWORD *)a2 + 10);
          v61 = *(_QWORD *)(v58 + 128);
          v62 = *((_DWORD *)a1 + 10);
          if ( (v62 & 0x1000) != 0 )
          {
            inited = EXLATEOBJ::bMakeXlate(
                       &Xlate,
                       *(_QWORD *)(v61 + 112),
                       *((_QWORD *)a2 + 12),
                       *((_QWORD *)a2 + 10),
                       *(_DWORD *)(v61 + 60),
                       *(_DWORD *)(v61 + 28));
LABEL_133:
            if ( !inited )
              goto LABEL_146;
            v19 = Xlate;
            v7 = 0LL;
            goto LABEL_135;
          }
          if ( (v62 & 0x2000) != 0 )
          {
            if ( *(_DWORD *)(v59 + 96) == *(_DWORD *)(v60 + 96) )
            {
              v7 = (struct _SURFOBJ *)v87;
              v19 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 4552);
              goto LABEL_136;
            }
            goto LABEL_146;
          }
          if ( (*(_WORD *)(v59 + 100) || *(_QWORD *)(v59 + 24)) && *(HDEV *)(v59 + 48) != hdev )
            goto LABEL_146;
          if ( !v61 )
          {
            v64 = *(_DWORD *)(v59 + 96);
            if ( v64 == *((_DWORD *)hdev + 523) )
            {
              if ( ((_DWORD)hdev[539] & 0x100) == 0 )
              {
                v61 = *((_QWORD *)hdev + 224);
                goto LABEL_129;
              }
            }
            else
            {
              if ( v64 == *((_DWORD *)a2 + 19) )
              {
                v61 = *((_QWORD *)a2 + 13);
                goto LABEL_129;
              }
              if ( v64 == 3 )
              {
                if ( ((_DWORD)hdev[539] & 0x100) == 0 )
                {
                  v61 = *((_QWORD *)v6 + 473);
                  goto LABEL_129;
                }
              }
              else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
              {
                goto LABEL_146;
              }
            }
            v61 = 0LL;
          }
LABEL_129:
          if ( v54 )
          {
            v65 = *((_DWORD *)a2 + 18);
            v66 = *((_QWORD *)a2 + 8);
          }
          else
          {
            v65 = 0;
            v66 = 0LL;
          }
          inited = EXLATEOBJ::bInitXlateObj(
                     (Gre::Base *)&Xlate,
                     v66,
                     v65,
                     v61,
                     *(_QWORD *)(v60 + 128),
                     *((_QWORD *)a2 + 12),
                     *((_QWORD *)a2 + 12),
                     *((_DWORD *)a2 + 12),
                     *((_DWORD *)a2 + 13),
                     0xFFFFFF,
                     0);
          goto LABEL_133;
        }
        v53 = IcmDIB;
LABEL_107:
        v54 = 1;
        goto LABEL_108;
      }
      v57 = (v55 & 0x20000) == 0;
    }
    else
    {
      if ( (v51 & 4) != 0 )
        goto LABEL_107;
      v57 = (v51 & 2) == 0;
    }
    if ( v57 )
      goto LABEL_108;
    goto LABEL_107;
  }
  if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    goto LABEL_87;
  v20 = *((unsigned int *)a2 + 6);
  if ( (v20 & 0x1000000) != 0 )
  {
    LODWORD(v20) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), v20);
    *((_DWORD *)a2 + 6) = v20;
  }
  v21 = hdev;
  if ( ((_DWORD)hdev[452] & 0x200000) != 0 && a3 != EngRealizeBrush )
  {
    if ( (unsigned int)a3(
                         (struct _BRUSHOBJ *)a2,
                         (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                         0LL,
                         0LL,
                         0LL,
                         (unsigned int)v20 | 0x80000000) )
    {
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v75);
      if ( v77 )
        GreReleaseSemaphoreShared<1,>(v76);
LABEL_90:
      SURFMEM::~SURFMEM((SURFMEM *)&v84);
      EXLATEOBJ::vAltUnlock(&Xlate, v48, v49);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v99);
      return v9;
    }
    v21 = hdev;
  }
  v22 = *((_QWORD *)a2 + 10);
  v92 = 0;
  v95 = 0;
  v89 = *(_DWORD *)(v22 + 96) == 1 ? 1 : *((_DWORD *)v21 + 523);
  if ( !*((_WORD *)v21 + 1048) )
    goto LABEL_87;
  if ( !*((_WORD *)v21 + 1049) )
    goto LABEL_87;
  v90 = *((unsigned __int16 *)v21 + 1048);
  v91 = *((unsigned __int16 *)v21 + 1049);
  v93 = 0LL;
  v94 = 1;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)&v89, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    goto LABEL_87;
  v23 = hdev;
  v24 = *((unsigned int *)a2 + 6);
  v25 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
  v26 = *(ULONG **)(v84 + 72);
  if ( *((_QWORD *)hdev + 348) )
  {
    if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
      v23 = (HDEV)*((_QWORD *)hdev + 223);
    v27 = (*((__int64 (__fastcall **)(HDEV, __int64, __int64, ULONG *))hdev + 348))(v23, v25, v24, v26);
  }
  else
  {
    v27 = EngDitherColor(hdev, v25, v24, v26);
  }
  v28 = v27 - 1;
  if ( v28 )
  {
    if ( v28 == 1 )
    {
      if ( a3 != EngRealizeBrush
        || (v29 = GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v6), v30 = 1, v29) )
      {
        v30 = 0;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v82, v30);
      v78 = a3 == EngRealizeBrush;
      HTSEMOBJ::vAcquire((HTSEMOBJ *)&v78);
      if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
        goto LABEL_85;
      v31 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
      LODWORD(v87) = *((_DWORD *)a2 + 6);
      v32 = v31;
      LODWORD(v79) = 0;
      v98 = &v87;
      v33 = hdev;
      v97 = 1LL;
      v96[0] = 262400;
      v96[1] = 255;
      v34 = (_DWORD)hdev[591] & 0x100;
      v35 = *((_DWORD *)a2 + 18);
      LODWORD(v79) = v34 == 0 ? 2 : 0;
      if ( (v35 & 4) != 0 || (v35 & 0x20) == 0 && (v35 & 3) != 0 )
        LOBYTE(v79) = v34 != 0 ? 16 : 18;
      if ( *((unsigned __int16 *)v32 + 4) != v90 || *((unsigned __int16 *)v32 + 5) != v91 )
      {
        SURFACE::bDeleteSurface(v84, 0LL, 0LL);
        v90 = *((unsigned __int16 *)v32 + 4);
        v91 = *((unsigned __int16 *)v32 + 5);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)&v89, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_85;
        v33 = hdev;
      }
      v36 = *((_DWORD *)v33 + 590);
      if ( v36 )
      {
        v37 = v36 - 2;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                if ( v40 != 2 )
                  goto LABEL_85;
              }
              else
              {
                v14 = -3;
              }
            }
            else
            {
              v14 = -2;
            }
          }
          else
          {
            v14 = -1;
          }
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
      v41 = *((_BYTE *)v33 + 2352);
      v42 = (__int128 *)*((_QWORD *)a2 + 7);
      BYTE3(v79) = v41;
      BYTE1(v79) = v14;
      v43 = *v42;
      BYTE2(v79) = 4;
      v101 = v43;
      v44 = *((_QWORD *)v42 + 2);
      WORD5(v101) = 10000;
      v102 = v44;
      *(_DWORD *)((char *)&v101 + 6) = 655370000;
      if ( v14 != v89 && (v14 != 0xFF || v89 != 2) && (v14 != 0xFE || v89 != 3) && (v14 != 0xFD || v89 != 4) )
        TraceLoggingWriteUnsupportedGdiUsage(24LL, v89, v14, 0LL, 0LL);
      HalftoneBrush = (unsigned int)HT_CreateHalftoneBrush(
                                      (_DWORD)v32,
                                      (unsigned int)&v101,
                                      (unsigned int)v96,
                                      v79,
                                      0LL);
      v46 = v84;
      if ( (int)HalftoneBrush > *(_DWORD *)(v84 + 64) )
      {
        v47 = (void *)PALLOCMEM(HalftoneBrush, 1835167815LL);
        if ( !v47 )
          goto LABEL_85;
        SURFACE::bDeleteSurface(v84, 0LL, 0LL);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)&v89, v47, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          if ( (unsigned int)Feature_Servicing_BrushHTVfree__private_IsEnabledDeviceUsageNoInline() )
            Win32FreePool(v47);
          goto LABEL_85;
        }
        *(_BYTE *)(v84 + 688) = 1;
        v46 = v84;
      }
      if ( (int)HT_CreateHalftoneBrush((_DWORD)v32, (unsigned int)&v101, (unsigned int)v96, v79, *(_QWORD *)(v46 + 72)) > 0 )
      {
        if ( ((_DWORD)hdev[10] & 0x200) != 0 )
        {
          v19 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 4552);
        }
        else
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v79, *v32);
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (Gre::Base *)&Xlate,
                                *((_QWORD *)a2 + 8),
                                *((_DWORD *)a2 + 18),
                                v79,
                                *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                                *((_QWORD *)a2 + 12),
                                *((_QWORD *)a2 + 12),
                                *((_DWORD *)a2 + 12),
                                *((_DWORD *)a2 + 13),
                                0xFFFFFF,
                                0) )
          {
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v79);
            goto LABEL_85;
          }
          v19 = Xlate;
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v79);
        }
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v78);
        if ( v83 )
          GreReleaseSemaphoreShared<1,>(v82);
        goto LABEL_135;
      }
LABEL_85:
      HTSEMOBJ::vRelease((HTSEMOBJ *)&v78);
      if ( v83 )
        GreReleaseSemaphoreShared<1,>(v82);
    }
LABEL_87:
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v75);
    if ( v77 )
      GreReleaseSemaphoreShared<1,>(v76);
    v9 = 0;
    goto LABEL_90;
  }
  v19 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 4552);
LABEL_135:
  v59 = v100;
LABEL_136:
  if ( !v59 )
  {
    if ( v84 )
    {
      v67 = v84 + 24;
      v68 = v84 != 0;
      goto LABEL_140;
    }
    if ( a3 != EngRealizeBrush )
    {
      v69 = 0LL;
      goto LABEL_143;
    }
    goto LABEL_146;
  }
  v67 = v59 + 24;
  v68 = v59 != 0;
LABEL_140:
  v69 = v67 & -(__int64)v68;
LABEL_143:
  v70 = a3(
          (struct _BRUSHOBJ *)a2,
          (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
          (struct _SURFOBJ *)v69,
          v7,
          (struct _XLATEOBJ *)v19,
          v88);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v75);
  if ( v77 )
    GreReleaseSemaphoreShared<1,>(v76);
  SURFMEM::~SURFMEM((SURFMEM *)&v84);
  EXLATEOBJ::vAltUnlock(&Xlate, v71, v72);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v99);
  return v70;
}

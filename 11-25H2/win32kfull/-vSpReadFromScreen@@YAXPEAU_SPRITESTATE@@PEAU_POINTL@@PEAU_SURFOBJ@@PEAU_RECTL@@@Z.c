/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032E604
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032D53C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x14032EE30 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x140330570 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x14000AB70 (--0ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140094608 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x140175488 (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x14020F51C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x14032ACB0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x14032CE3C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  struct REGION *v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  char *p_hdev; // r15
  __int64 v17; // rsi
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  bool v19; // zf
  __int64 v20; // r14
  struct HOBJ__ *v21; // rdx
  int (*v22)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  HDEV hdev; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct _XLATEOBJ *v58; // [rsp+60h] [rbp-A0h] BYREF
  struct _XLATEOBJ *v59; // [rsp+68h] [rbp-98h]
  struct _CLIPOBJ *v60; // [rsp+70h] [rbp-90h]
  struct _POINTL *v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v63; // [rsp+88h] [rbp-78h]
  struct _RECTL *v64; // [rsp+90h] [rbp-70h]
  struct _POINTL *v65; // [rsp+98h] [rbp-68h]
  _BYTE v66[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SURFOBJ *v67; // [rsp+C0h] [rbp-40h]
  _BYTE v68[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v69[156]; // [rsp+D4h] [rbp-2Ch] BYREF

  v64 = a4;
  v65 = a2;
  ECLIPOBJTMPIFNEEDED::ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v68);
  v9 = (struct REGION *)*((_QWORD *)a1 + 130);
  v60 = 0LL;
  if ( v9 )
  {
    v10 = bConcurrent(a1, v7);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v68, v10, v9, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v69) )
      goto LABEL_61;
    v60 = (struct _CLIPOBJ *)v68;
  }
  v11 = *((_QWORD *)a1 + 4);
  v12 = 0LL;
  if ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 88);
    if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
    {
      v12 = v11 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v11 - 24 + 48));
    }
  }
  p_pvScan0 = 0LL;
  if ( a3 )
  {
    hsurf = (int)a3[1].hsurf;
    if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
    {
      p_pvScan0 = &a3[-1].pvScan0;
      GreLockDisplayDevice(a3->hdev);
    }
  }
  p_hdev = (char *)*((_QWORD *)a1 + 4);
  v59 = 0LL;
  v58 = 0LL;
  v62 = 0LL;
  v61 = (struct _POINTL *)&v62;
  if ( ((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) == 0 )
    goto LABEL_57;
  v17 = *(_QWORD *)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x30);
  v18 = Gre::Base::Globals((Gre::Base *)(p_hdev - 24));
  v19 = (*(_DWORD *)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x70) & 0x80000) == 0;
  v63 = v18;
  if ( v19 || (v20 = *(_QWORD *)(v17 + 24), v17 == v20) )
  {
    if ( !_bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) && *((_QWORD *)p_hdev + 3) )
    {
      if ( *((_WORD *)p_hdev + 38) != 1 )
      {
LABEL_36:
        if ( _bittest((const signed __int32 *)p_hdev + 22, 0xAu) )
        {
          hdev = (HDEV)*((_QWORD *)p_hdev + 3);
LABEL_54:
          v22 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)hdev + 165);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      if ( !bAllowShareAccess((struct _SURFOBJ *)p_hdev)
        || !GreGetCurrentThread(v24, v23)
        || !*((_QWORD *)GreGetCurrentThread(v26, v25) + 34)
        || !*((_DWORD *)GreGetCurrentThread(v28, v27) + 87) && !*((_DWORD *)GreGetCurrentThread(v30, v29) + 88)
        || (v32 = *((_QWORD *)GreGetCurrentThread(v30, v29) + 34), !_bittest((const signed __int32 *)(v32 + 20), 0xAu)) )
      {
        if ( *((_WORD *)p_hdev + 38) == 1
          && bAllowShareAccess((struct _SURFOBJ *)p_hdev)
          && GreGetCurrentThread(v34, v33)
          && *((_QWORD *)GreGetCurrentThread(v36, v35) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v38, v37) + 87) || *((_DWORD *)GreGetCurrentThread(v40, v39) + 88)) )
        {
          goto LABEL_55;
        }
        goto LABEL_36;
      }
LABEL_45:
      v22 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*((_QWORD *)GreGetCurrentThread(v32, v31) + 34) + 80LL);
LABEL_56:
      OffCopyBitsInternal(v22, v65, a3, v61, (struct _SURFOBJ *)p_hdev, v60, v59, v64, (struct _POINTL *)v64);
      goto LABEL_57;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && GreGetCurrentThread(v43, v42)
        && *((_QWORD *)GreGetCurrentThread(v45, v44) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v47, v46) + 87) || *((_DWORD *)GreGetCurrentThread(v49, v48) + 88)) )
      {
        v32 = *((_QWORD *)GreGetCurrentThread(v49, v48) + 34);
        if ( _bittest((const signed __int32 *)(v32 + 20), 0xAu) )
          goto LABEL_45;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && GreGetCurrentThread(v51, v50)
        && *((_QWORD *)GreGetCurrentThread(v53, v52) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v55, v54) + 87) || *((_DWORD *)GreGetCurrentThread(v57, v56) + 88)) )
      {
        goto LABEL_55;
      }
    }
    if ( _bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) )
    {
      hdev = a3->hdev;
      goto LABEL_54;
    }
LABEL_55:
    v22 = EngCopyBits;
    goto LABEL_56;
  }
  v21 = *(struct HOBJ__ **)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x90);
  v61 = (struct _POINTL *)(v17 + 2576);
  SURFREF::SURFREF((SURFREF *)v66, v21, v18);
  if ( v67
    && (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v58,
                       0LL,
                       0,
                       *(_QWORD *)(v20 + 1792),
                       *(_QWORD *)(v17 + 1792),
                       *((_QWORD *)v63 + 471),
                       *((_QWORD *)v63 + 471),
                       0,
                       0,
                       0,
                       0x2000) )
  {
    p_hdev = (char *)v67;
    v59 = v58;
    if ( v67 )
      p_hdev = (char *)&v67->hdev;
    v22 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v20 + 2832);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v66);
    goto LABEL_56;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v66);
LABEL_57:
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v58, v7, v8);
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
  if ( v12 )
    GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
LABEL_61:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v68);
}

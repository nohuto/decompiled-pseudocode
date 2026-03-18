/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x14032DFBC
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     OffBitBlt @ 0x1401853F4 (OffBitBlt.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  __int64 v8; // rbx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // ecx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _POINTL *v37; // r12
  Gre::Base *v38; // r13
  __int64 v39; // r15
  _DWORD *v40; // r14
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct _RECTL *v62; // [rsp+48h] [rbp-31h]
  Gre::Base *v63; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v64[9]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v65; // [rsp+D8h] [rbp+5Fh] BYREF
  LONG *v66; // [rsp+E0h] [rbp+67h]
  struct _RECTL *v67; // [rsp+F0h] [rbp+77h]

  v67 = a4;
  v66 = (LONG *)a2;
  v65 = 0LL;
  if ( *((_QWORD *)a1 + 15) )
  {
    v8 = *((_QWORD *)a1 + 2);
    v63 = 0LL;
    v9 = Gre::Base::Globals(a1);
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (Gre::Base *)&v63,
                          0LL,
                          0,
                          *((_QWORD *)v9 + 475),
                          *(_QWORD *)(*(_QWORD *)(v8 + 32) + 104LL),
                          *((_QWORD *)v9 + 471),
                          *((_QWORD *)v9 + 471),
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_58:
      EXLATEOBJ::vAltUnlock(&v63, v10, v11);
      return;
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
    v14 = *((_QWORD *)a1 + 15);
    v15 = 0LL;
    v64[0] = 0LL;
    if ( v14 )
    {
      v16 = *(_DWORD *)(v14 + 88);
      if ( (v16 & 0x80004000) != 0 && (v16 & 0x200) == 0 )
      {
        v15 = v14 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v14 - 24 + 48));
      }
    }
    v17 = *((_QWORD *)a1 + 15);
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && GreGetCurrentThread(v19, v18)
        && *((_QWORD *)GreGetCurrentThread(v21, v20) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v23, v22) + 87) || *((_DWORD *)GreGetCurrentThread(v25, v24) + 88)) )
      {
        v27 = *((_QWORD *)GreGetCurrentThread(v25, v24) + 34);
        if ( (*(_DWORD *)(v27 + 20) & 1) != 0 )
        {
          v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v27, v26) + 34) + 72LL);
          goto LABEL_28;
        }
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && GreGetCurrentThread(v30, v29)
        && *((_QWORD *)GreGetCurrentThread(v32, v31) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v34, v33) + 87) || *((_DWORD *)GreGetCurrentThread(v36, v35) + 88)) )
      {
        goto LABEL_27;
      }
    }
    if ( ((__int64)a3[1].hsurf & 1) == 0 )
LABEL_27:
      v28 = EngBitBlt;
    else
      v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
LABEL_28:
    v37 = a5;
    v62 = a4;
    v38 = v63;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v28,
      v66,
      (__int64)a3,
      v64,
      v17,
      0LL,
      0LL,
      (__int64)v63,
      &v62->left,
      (__int64 *)a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v15 )
      GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
    v39 = *((_QWORD *)a1 + 16);
    LODWORD(v65) = v37->x;
    if ( v39 )
    {
      v40 = (_DWORD *)((char *)a1 + 136);
      HIDWORD(v65) = v37->y;
      v38 = 0LL;
      v41 = 0LL;
    }
    else
    {
      v39 = *((_QWORD *)a1 + 15);
      v40 = v64;
      HIDWORD(v65) = v37->y + (*(int *)(v39 + 36) >> 1);
      v41 = 0LL;
      if ( !v39 )
      {
LABEL_37:
        if ( a3->iType != 1 )
          goto LABEL_51;
        if ( bAllowShareAccess(a3)
          && GreGetCurrentThread(v44, v43)
          && *((_QWORD *)GreGetCurrentThread(v46, v45) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v48, v47) + 87) || *((_DWORD *)GreGetCurrentThread(v50, v49) + 88)) )
        {
          v52 = *((_QWORD *)GreGetCurrentThread(v50, v49) + 34);
          if ( (*(_DWORD *)(v52 + 20) & 1) != 0 )
          {
            v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v52, v51) + 34) + 72LL);
LABEL_54:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v53,
              v66,
              (__int64)a3,
              v40,
              v39,
              0LL,
              0LL,
              (__int64)v38,
              &v67->left,
              &v65,
              0LL,
              0LL,
              0LL,
              26214);
            if ( v41 )
              GreUnlockDisplayDevice(*(_QWORD *)(v41 + 48));
            if ( p_pvScan0 )
              GreUnlockDisplayDevice(p_pvScan0[6]);
            goto LABEL_58;
          }
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !GreGetCurrentThread(v55, v54)
          || !*((_QWORD *)GreGetCurrentThread(v57, v56) + 34)
          || !*((_DWORD *)GreGetCurrentThread(v59, v58) + 87) && !*((_DWORD *)GreGetCurrentThread(v61, v60) + 88) )
        {
LABEL_51:
          if ( ((__int64)a3[1].hsurf & 1) != 0 )
          {
            v53 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
            goto LABEL_54;
          }
        }
        v53 = EngBitBlt;
        goto LABEL_54;
      }
    }
    v42 = *(_DWORD *)(v39 + 88);
    if ( (v42 & 0x80004000) != 0 && (v42 & 0x200) == 0 )
    {
      v41 = v39 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v39 - 24 + 48));
    }
    goto LABEL_37;
  }
}

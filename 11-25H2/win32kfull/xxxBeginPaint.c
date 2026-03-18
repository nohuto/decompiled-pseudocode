/*
 * XREFs of xxxBeginPaint @ 0x140052240
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x140050458 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserBeginPaint @ 0x140052120 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BEEBC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x140052AF4 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     zzzInternalHideCaret @ 0x140052D7C (zzzInternalHideCaret.c)
 *     xxxSendEraseBkgnd @ 0x1400531F0 (xxxSendEraseBkgnd.c)
 *     DecPaintCount @ 0x14005332C (DecPaintCount.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400538A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x140053964 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     CalcWindowRgn @ 0x140053D54 (CalcWindowRgn.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxBeginPaint(unsigned int **a1, __int64 a2)
{
  unsigned int *v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // r12d
  unsigned int *v7; // rax
  int v8; // r14d
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // ebp
  int v12; // eax
  int v13; // r15d
  unsigned int *v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // r12d
  unsigned int *v18; // rax
  int v19; // r14d
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // ebp
  int v23; // eax
  int v24; // r15d
  unsigned int *v25; // rax
  char v26; // cl
  unsigned int v27; // ebx
  unsigned int v28; // esi
  unsigned int v29; // r12d
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int *v32; // rax
  int v33; // r14d
  int v34; // ebp
  int v35; // eax
  int v36; // r15d
  _QWORD *CurrentThreadNonPaged; // rax
  unsigned int *v38; // rax
  int v39; // r13d
  unsigned int v40; // ebx
  unsigned int v41; // esi
  unsigned int v42; // r12d
  unsigned int *v43; // rax
  int v44; // r14d
  int v45; // ecx
  __int64 v46; // rdx
  int v47; // ebp
  int v48; // eax
  int v49; // r15d
  int v50; // r12d
  unsigned int *v51; // rax
  unsigned int v52; // r15d
  unsigned int v53; // ebp
  unsigned int v54; // ebx
  unsigned int *v55; // rax
  int v56; // ebp
  __int64 v57; // rdx
  int v58; // ebx
  int v59; // r14d
  int v60; // r15d
  unsigned int *v61; // rcx
  unsigned int v62; // r14d
  unsigned int v63; // esi
  unsigned int v64; // ebx
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int *v67; // rax
  int v68; // esi
  int v69; // ebx
  int v70; // ebp
  int v71; // r14d
  unsigned int *v72; // rax
  __int64 v73; // rsi
  __int64 DCEx; // rax
  __int64 v75; // rbx
  __int64 result; // rax
  HRGN NCUpdateRgn; // rbx
  int v78; // esi
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  void *v82; // rax
  int v83; // esi
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  void *v87; // rax
  int v88; // esi
  int v89; // esi
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rcx
  void *v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  void *v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  void *v101; // rax
  int v102; // esi
  __int64 v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rcx
  void *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 UserSessionState; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 EmptyRgnPublic; // rbx
  __int64 v120; // rdx
  __int64 v121; // rcx
  int v122; // ebx
  __int64 v123; // rax
  _OWORD v124[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66800) & 0x10000000) == 0 )
    goto LABEL_6;
  v3 = a1[5];
  v4 = v3[7];
  v5 = v3[6];
  v6 = v3[58];
  *((_BYTE *)v3 + 20) |= 4u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_6;
  v7 = a1[5];
  v8 = v7[7];
  v9 = v7[6];
  v10 = v7[58];
  v11 = v5 ^ v9;
  v12 = v6 ^ v7[58];
  v13 = v4 ^ v8;
  if ( v4 == v8 )
  {
    if ( v11 )
      goto LABEL_87;
    if ( !v12 )
      goto LABEL_6;
  }
  if ( (v13 & 0xB9CF0000) != 0 )
  {
    v102 = -16;
    goto LABEL_91;
  }
LABEL_87:
  if ( (v11 & 0x4E27A9) != 0 )
  {
    v102 = -20;
    v8 = v9;
    goto LABEL_91;
  }
  if ( (v12 & 0x3F2C0) != 0 )
  {
    v102 = -268435456;
    v8 = v10;
LABEL_91:
    DirtyVisRgnTrackers((struct tagWND *)a1, v10);
    v103 = (__int64)*a1;
    v106 = (void *)ReferenceDwmApiPort(v105, v104);
    DwmAsyncChildStyleChange(v106, v103, v102, v8);
  }
  if ( (v13 & 0x1C40000) != 0 || (v11 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_6:
  v14 = a1[5];
  v15 = v14[7];
  v16 = v14[6];
  v17 = v14[58];
  *((_BYTE *)v14 + 18) &= ~0x40u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_10;
  v18 = a1[5];
  v19 = v18[7];
  v20 = v18[6];
  v21 = v18[58];
  v22 = v16 ^ v20;
  v23 = v17 ^ v18[58];
  v24 = v15 ^ v19;
  if ( v15 == v19 )
  {
    if ( v22 )
      goto LABEL_47;
    if ( !v23 )
      goto LABEL_10;
  }
  if ( (v24 & 0xB9CF0000) != 0 )
  {
    v78 = -16;
    goto LABEL_62;
  }
LABEL_47:
  if ( (v22 & 0x4E27A9) != 0 )
  {
    v78 = -20;
    v19 = v20;
    goto LABEL_62;
  }
  if ( (v23 & 0x3F2C0) != 0 )
  {
    v78 = -268435456;
    v19 = v21;
LABEL_62:
    DirtyVisRgnTrackers((struct tagWND *)a1, v21);
    v84 = (__int64)*a1;
    v87 = (void *)ReferenceDwmApiPort(v86, v85);
    DwmAsyncChildStyleChange(v87, v84, v78, v19);
  }
  if ( (v24 & 0x1C40000) != 0 || (v22 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_10:
  v25 = a1[5];
  v26 = *((_BYTE *)v25 + 17);
  if ( (v26 & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0, (struct tagWND *)a1, 0x120u, 1);
      NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)a1, 0);
      xxxSendNCPaint((struct tagWND *)a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*((_BYTE *)a1[5] + 17) & 0x20) != 0 );
    goto LABEL_15;
  }
  v27 = v25[7];
  v28 = v25[6];
  v29 = v25[58];
  *((_BYTE *)v25 + 17) = v26 & 0xDF;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_15;
  v32 = a1[5];
  v33 = v32[7];
  v31 = v32[6];
  v30 = v32[58];
  v34 = v28 ^ v32[6];
  v35 = v29 ^ v32[58];
  v36 = v27 ^ v33;
  if ( v27 == v33 )
  {
    if ( v34 )
      goto LABEL_58;
    if ( !v35 )
      goto LABEL_15;
  }
  if ( (v36 & 0xB9CF0000) != 0 )
  {
    v83 = -16;
    goto LABEL_75;
  }
LABEL_58:
  if ( (v34 & 0x4E27A9) != 0 )
  {
    v83 = -20;
    v33 = v31;
    goto LABEL_75;
  }
  if ( (v35 & 0x3F2C0) != 0 )
  {
    v83 = -268435456;
    v33 = v30;
LABEL_75:
    DirtyVisRgnTrackers((struct tagWND *)a1, v30);
    v90 = (__int64)*a1;
    v93 = (void *)ReferenceDwmApiPort(v92, v91);
    DwmAsyncChildStyleChange(v93, v90, v83, v33);
  }
  if ( (v36 & 0x1C40000) != 0 || (v34 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_15:
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v31, v30);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  if ( a1 == *(unsigned int ***)(CurrentThreadNonPaged[59] + 320LL) )
    zzzInternalHideCaret();
  v38 = a1[5];
  v39 = *((_BYTE *)v38 + 17) & 2;
  if ( (*((_BYTE *)v38 + 17) & 2) == 0 )
  {
    v50 = -16;
    goto LABEL_29;
  }
  v40 = v38[7];
  v41 = v38[6];
  v42 = v38[58];
  *((_BYTE *)v38 + 17) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_24;
  v43 = a1[5];
  v44 = v43[7];
  v45 = v43[6];
  v46 = v43[58];
  v47 = v41 ^ v45;
  v48 = v42 ^ v43[58];
  v49 = v40 ^ v44;
  if ( v40 == v44 )
  {
    if ( v47 )
      goto LABEL_66;
    if ( !v48 )
    {
LABEL_24:
      v50 = -16;
      goto LABEL_25;
    }
  }
  if ( (v49 & 0xB9CF0000) != 0 )
  {
    v50 = -16;
    v88 = -16;
    goto LABEL_83;
  }
LABEL_66:
  if ( (v47 & 0x4E27A9) != 0 )
  {
    v88 = -20;
    v44 = v45;
  }
  else
  {
    if ( (v48 & 0x3F2C0) == 0 )
    {
      v50 = -16;
      goto LABEL_84;
    }
    v88 = -268435456;
    v44 = v46;
  }
  v50 = -16;
LABEL_83:
  DirtyVisRgnTrackers((struct tagWND *)a1, v46);
  v98 = (__int64)*a1;
  v101 = (void *)ReferenceDwmApiPort(v100, v99);
  DwmAsyncChildStyleChange(v101, v98, v88, v44);
LABEL_84:
  if ( (v49 & 0x1C40000) != 0 || (v47 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_25:
  v51 = a1[5];
  v52 = v51[7];
  v53 = v51[6];
  v54 = v51[58];
  *((_BYTE *)v51 + 17) &= ~2u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_29;
  v55 = a1[5];
  v56 = v55[6] ^ v53;
  v57 = v55[58];
  v58 = v57 ^ v54;
  v59 = v55[7];
  v60 = v59 ^ v52;
  if ( !v60 )
  {
    if ( v56 )
      goto LABEL_71;
    if ( !v58 )
      goto LABEL_29;
  }
  if ( (v60 & 0xB9CF0000) != 0 )
  {
    v89 = -16;
    goto LABEL_79;
  }
LABEL_71:
  if ( (v56 & 0x4E27A9) != 0 )
  {
    v89 = -20;
    v59 = v55[6];
    goto LABEL_79;
  }
  if ( (v58 & 0x3F2C0) != 0 )
  {
    v89 = -268435456;
    v59 = v55[58];
LABEL_79:
    DirtyVisRgnTrackers((struct tagWND *)a1, v57);
    v94 = (__int64)*a1;
    v97 = (void *)ReferenceDwmApiPort(v96, v95);
    DwmAsyncChildStyleChange(v97, v94, v89, v59);
  }
  if ( (v60 & 0x1C40000) != 0 || (v56 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_29:
  v61 = a1[5];
  if ( *((_QWORD *)v61 + 17) || (*((_BYTE *)v61 + 17) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    v61 = a1[5];
  }
  v62 = v61[7];
  v63 = v61[6];
  v64 = v61[58];
  *((_BYTE *)v61 + 17) &= ~0x10u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v67 = a1[5];
    v66 = v67[6];
    v68 = v66 ^ v63;
    v65 = v67[58];
    v69 = v65 ^ v64;
    v70 = v67[7];
    v71 = v70 ^ v62;
    if ( !v71 )
    {
      if ( v68 )
      {
LABEL_51:
        if ( (v68 & 0x4E27A9) != 0 )
        {
          v50 = -20;
          v70 = v67[6];
        }
        else
        {
          if ( (v69 & 0x3F2C0) == 0 )
          {
LABEL_55:
            if ( (v71 & 0x1C40000) != 0 || (v68 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
            goto LABEL_35;
          }
          v50 = -268435456;
          v70 = v67[58];
        }
LABEL_54:
        DirtyVisRgnTrackers((struct tagWND *)a1, v65);
        v79 = (__int64)*a1;
        v82 = (void *)ReferenceDwmApiPort(v81, v80);
        DwmAsyncChildStyleChange(v82, v79, v50, v70);
        goto LABEL_55;
      }
      if ( !v69 )
        goto LABEL_35;
    }
    if ( (v71 & 0xB9CF0000) != 0 )
      goto LABEL_54;
    goto LABEL_51;
  }
LABEL_35:
  v72 = a1[5];
  v73 = *((_QWORD *)v72 + 17);
  *((_QWORD *)v72 + 17) = 0LL;
  if ( (a1[5][5] & 2) != 0 && v73 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v66, v65) + 43072) )
    {
      EmptyRgnPublic = CreateEmptyRgnPublic();
      *(_QWORD *)(W32GetUserSessionState(v121, v120) + 43072) = EmptyRgnPublic;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v108, v107) + 43072) )
    {
      UserSessionState = W32GetUserSessionState(v110, v109);
      if ( v73 == 1 )
      {
        v122 = *(_DWORD *)(UserSessionState + 63420);
        v123 = W32GetUserSessionState(v113, v112);
        CalcWindowRgn(a1, *(_QWORD *)(v123 + 43072), (v122 & 0x400) == 0);
      }
      else
      {
        v114 = *(_QWORD *)(UserSessionState + 43072);
        v115 = W32GetUserSessionState(v113, v112);
        GreCombineRgn(*(_QWORD *)(v115 + 43072), v114, v73, 2LL);
      }
      v118 = W32GetUserSessionState(v117, v116);
      ++*(_DWORD *)(v118 + 43268);
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v73, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v124[0] = 0LL;
  v75 = DCEx;
  if ( (unsigned int)GreGetClipBox(DCEx, a2 + 12, 1LL) != 1 )
  {
    if ( *(char *)(*((_QWORD *)a1[17] + 1) + 8LL) >= 0
      || (GetRect(a1, v124, 17LL), (unsigned int)IntersectRect(a2 + 12, a2 + 12, v124)) )
    {
      if ( v39 )
        xxxSendEraseBkgnd(a1, v75, v73);
    }
  }
  xxxSendChildNCPaint((struct tagWND *)a1);
  result = v75;
  *(_DWORD *)(a2 + 8) = (*((unsigned __int8 *)a1[5] + 17) >> 2) & 1;
  return result;
}

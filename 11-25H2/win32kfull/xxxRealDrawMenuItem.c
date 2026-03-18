/*
 * XREFs of xxxRealDrawMenuItem @ 0x1401910EC
 * Callers:
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 * Callees:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14002A200 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x14002B2D0 (xxxPSMGetTextExtent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140040014 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14004047C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNIsFlatMenu @ 0x14004083C (MNIsFlatMenu.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     GreCreateDIBitmapReal @ 0x14007C73C (GreCreateDIBitmapReal.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x1400C1194 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1400E1A10 (GreDecBitmapExclusiveRefCnt.c)
 *     BltColor @ 0x140191F60 (BltColor.c)
 *     FindCharPosition @ 0x1401922F0 (FindCharPosition.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402CA2C4 (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402EA1A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxPSMTextOut @ 0x1402EE394 (xxxPSMTextOut.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  struct tagTHREADINFO *v14; // r15
  int v15; // r14d
  struct tagITEM *v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int16 *OemBitmapInfo; // rax
  __int64 v30; // rcx
  __int64 v31; // r11
  const WCHAR *v32; // r14
  int v33; // r13d
  struct tagWND *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagCURSOR *WindowSmIcon; // r15
  unsigned int v38; // r14d
  unsigned int v39; // ebx
  __int64 UserSessionState; // rax
  int v41; // r13d
  int DpiDependentMetric; // r15d
  int v43; // ecx
  __int64 v44; // rdx
  int v45; // r14d
  unsigned int DpiForSystem; // eax
  unsigned int v47; // eax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r9
  int ObjectW; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r12
  __int64 v55; // r14
  HDC CompatibleDC; // rbx
  __int64 DIBitmapReal; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned __int8 *v61; // r9
  __int64 v62; // r10
  unsigned int v63; // r8d
  __int64 v64; // rcx
  unsigned int v65; // ebx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 DPIMetrics; // rax
  __int64 v69; // rbx
  __int64 v70; // rdx
  int v71; // r8d
  int v72; // eax
  __int64 CharPosition; // r12
  unsigned int v74; // eax
  int v75; // ebx
  __int64 v76; // r15
  __int64 v77; // rax
  struct tagITEM *v78; // r11
  int v79; // ebx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rcx
  HDC v85; // r15
  __int64 v86; // rcx
  __int64 v87; // rdx
  int v88; // r10d
  __int64 v89; // r11
  __int64 v90; // rax
  __int16 *v91; // rbx
  int v92; // r11d
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // r11
  __int64 v96; // rcx
  __int64 v97; // rcx
  int v99; // [rsp+70h] [rbp-90h]
  int v101; // [rsp+80h] [rbp-80h]
  int v102; // [rsp+80h] [rbp-80h]
  struct tagITEM *v103; // [rsp+88h] [rbp-78h] BYREF
  BOOL v104; // [rsp+90h] [rbp-70h]
  __int64 *v105[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v106; // [rsp+A8h] [rbp-58h]
  __int64 v107; // [rsp+B0h] [rbp-50h]
  __int64 v108; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v109; // [rsp+C0h] [rbp-40h]
  _OWORD v110[3]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD v111[24]; // [rsp+100h] [rbp+0h] BYREF
  int v112; // [rsp+130h] [rbp+30h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v105, (__int64)a2);
  v9 = 0;
  v104 = 0;
  v12 = PtiCurrent(v11, v10);
  v13 = *a2;
  v14 = v12;
  v106 = 0LL;
  v15 = 0;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v105, v13);
  v16 = (struct tagITEM *)a2[1];
  v17 = 8LL;
  v103 = v16;
  v18 = *(_QWORD *)(*v105[0] + 40);
  v19 = *(_DWORD *)(v18 + 40) & 1;
  v99 = v19;
  if ( v19 )
  {
    v9 = 2;
    if ( *(int *)(*(_QWORD *)(*v105[0] + 40) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v20 = *(_QWORD *)v16;
        if ( (*(_DWORD *)(*(_QWORD *)v16 + 4LL) & 8) != 0 )
          v21 = *(_QWORD *)(v20 + 24) == 0LL;
        else
          v21 = *(_QWORD *)(v20 + 32) == 0LL;
        LOBYTE(v15) = !v21;
      }
      else
      {
        v15 = DrawMenuItemCheckMark(a1, v16, 2);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) & 0x4000000) == 0
        || !*(_QWORD *)(*(_QWORD *)v16 + 96LL)
        || v15 )
      {
        if ( (**(_DWORD **)v16 & 0x2000) != 0 )
          v9 = 2;
        else
          v9 = *(__int16 *)(GetOemBitmapInfo(63LL) + 4) + 4;
      }
    }
    else
    {
      v9 = 4;
    }
  }
  else if ( !MNIsFlatMenu(v18, 1LL) )
  {
    v104 = *(char *)(*(_QWORD *)v16 + 4LL) < 0;
  }
  if ( *(_QWORD *)(*(_QWORD *)v16 + 96LL) && (!v15 || (*(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) & 0x4000000) == 0) )
  {
    if ( !a5 )
    {
      v22 = *(unsigned int *)(*(_QWORD *)v16 + 4LL);
      v23 = *(_QWORD *)(*(_QWORD *)v16 + 96LL);
      if ( (v22 & 0x20000000) != 0 )
      {
        if ( v23 == 1 )
          goto LABEL_56;
        v24 = v9;
        v25 = v23 - 2;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 2;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                if ( v28 != 1 )
                {
                  if ( PrepareHDCBITSBitmap(0LL) )
                  {
                    OemBitmapInfo = (__int16 *)GetOemBitmapInfo((unsigned int)*(_QWORD *)(*(_QWORD *)v16 + 96LL) + 79);
                    BltColor(
                      a1,
                      (unsigned int)(*(_DWORD *)(*(_QWORD *)v16 + 76LL) - OemBitmapInfo[3]) >> 1,
                      OemBitmapInfo[2],
                      OemBitmapInfo[3],
                      *OemBitmapInfo,
                      OemBitmapInfo[1],
                      1);
                    goto LABEL_39;
                  }
                  goto LABEL_108;
                }
                v24 = v9 + 2;
              }
            }
          }
          else
          {
            v24 = v9 + 2;
          }
        }
        BitBltSysBmp(a1, v24, 2, 1);
        goto LABEL_39;
      }
      if ( v23 == -1 )
      {
        xxxSendMenuDrawItemMessage((__int64)a1, 1, (struct tagMENU ***)v105, (struct tagMENU ***)v16, 1, v9, 0LL);
        goto LABEL_39;
      }
      if ( *((_WORD *)v14 + 336) <= 0x400u
        && (*(_QWORD *)(*(_QWORD *)v16 + 56LL) && !*((_QWORD *)v16 + 3)
         || !v19
         && v16 == *(struct tagITEM **)(*v105[0] + 88)
         && *(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 44LL) > 1u
         && !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v105[0] + 88) + 96LL) + 96LL)
         && *((_QWORD *)v16 + 2)) )
      {
        while ( 1 )
        {
LABEL_56:
          if ( !*(_QWORD *)(*(_QWORD *)v16 + 56LL) && *(_QWORD *)(*v105[0] + 80) )
            SetupFakeMDIAppStuff(v105, v16, v22, v17);
          v34 = (struct tagWND *)HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v16 + 56LL), 1LL);
          if ( v34 )
            break;
          if ( !*(_QWORD *)(*(_QWORD *)v16 + 56LL) )
            goto LABEL_63;
          *(_QWORD *)(*(_QWORD *)v16 + 56LL) = 0LL;
        }
        WindowSmIcon = GetWindowSmIcon(v34);
        if ( WindowSmIcon )
          goto LABEL_64;
LABEL_63:
        WindowSmIcon = *(struct tagCURSOR **)(W32GetUserSessionState(v36, v35) + 35128);
LABEL_64:
        v38 = a4 - 2;
        v39 = a3 - 4;
        if ( v99 && v38 < v39 )
          v39 = a4 - 2;
        UserSessionState = W32GetUserSessionState(v36, v35);
        DrawIconEx(
          a1,
          v9 + 4,
          1,
          (__int64)WindowSmIcon,
          v39,
          v38,
          0,
          *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4728LL),
          19);
        goto LABEL_68;
      }
    }
    v41 = *(_DWORD *)(*(_QWORD *)v16 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v16 + 108LL);
    if ( v19 )
    {
      v43 = *(_DWORD *)(*(_QWORD *)v16 + 76LL) - DpiDependentMetric;
      v44 = (unsigned int)(v43 >> 31);
      LODWORD(v44) = v43 % 2;
      v45 = v43 / 2;
      if ( v43 <= 0 )
        v45 = 0;
      LODWORD(v107) = v45;
    }
    else
    {
      DpiForSystem = GetDpiForSystem();
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26, DpiForSystem) )
      {
        v47 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(26, v47);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v16 + 108LL);
      }
      v45 = 0;
      LODWORD(v107) = 0;
      if ( *((_QWORD *)v16 + 3) )
        v9 += *(_DWORD *)(GetDPIMetrics() + 8);
    }
    v48 = *(_QWORD *)(*(_QWORD *)v16 + 96LL);
    v49 = W32GetUserSessionState(*(_QWORD *)v16, v44);
    v109 = GreSelectBitmap(*(_QWORD *)(v49 + 43256), v48);
    if ( !v109 )
    {
LABEL_108:
      v19 = v99;
      goto LABEL_39;
    }
    memset_0(v111, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(Gre::Base **)(*(_QWORD *)v16 + 96LL), 104LL, v111, v50);
    v54 = 0LL;
    if ( !a5 || (v53 = *(_QWORD *)v16, **(_DWORD **)v16 == 4) )
    {
      if ( ObjectW != 104 || v111[23] != 32 || v112 || **(_DWORD **)v16 == 4 )
      {
        v64 = v111[8] * (unsigned int)v111[9];
        if ( (_DWORD)v64 == 1 )
          v65 = 12060490;
        else
          v65 = (unsigned int)MNDrawHilite((__int64)v105, v16) != 0 ? 3342344 : 13369376;
        v66 = W32GetUserSessionState(v64, v52);
        GreBitBltInternal(
          a1,
          v104 + v9,
          v104 + v45,
          v41,
          DpiDependentMetric,
          *(HDC *)(v66 + 43256),
          0,
          0,
          v65,
          0xFFFFFFu,
          0);
      }
      goto LABEL_107;
    }
    v101 = 33488896;
    v55 = 0LL;
    if ( a6 )
    {
      v108 = 0LL;
      memset(v110, 0, 44);
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( !CompatibleDC )
        goto LABEL_94;
      memset((char *)&v110[1] + 4, 0, 24);
      LODWORD(v110[0]) = 40;
      *(_QWORD *)((char *)v110 + 4) = __PAIR64__(DpiDependentMetric, v41);
      *(_QWORD *)((char *)v110 + 12) = 2097153LL;
      DIBitmapReal = GreCreateDIBitmapReal(
                       CompatibleDC,
                       0LL,
                       0LL,
                       (__int64)v110,
                       0,
                       44,
                       0,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       (__int64)&v108);
      v55 = DIBitmapReal;
      if ( DIBitmapReal )
      {
        v54 = GreSelectBitmap(CompatibleDC, DIBitmapReal);
        if ( v54 != -1 )
        {
          v60 = W32GetUserSessionState(v59, v58);
          GreAlphaBlend(
            CompatibleDC,
            0,
            0,
            v41,
            DpiDependentMetric,
            *(HDC *)(v60 + 43256),
            0,
            0,
            v41,
            DpiDependentMetric,
            33488896);
          if ( v41 * DpiDependentMetric > 0 )
          {
            v61 = (unsigned __int8 *)v108;
            v62 = (unsigned int)(v41 * DpiDependentMetric);
            do
            {
              v63 = (29 * v61[2] + 150 * v61[1] + 77 * (unsigned int)*v61 + 129) >> 8;
              *(_DWORD *)v61 = v63 | ((v63 | ((v63 | (v61[3] << 8)) << 8)) << 8);
              v61 = (unsigned __int8 *)(v108 + 4);
              v108 += 4LL;
              --v62;
            }
            while ( v62 );
            v16 = v103;
          }
          BYTE2(v101) = 102;
        }
      }
    }
    else
    {
      CompatibleDC = *(HDC *)(W32GetUserSessionState(0LL, v52) + 43256);
      if ( !CompatibleDC )
        goto LABEL_92;
    }
    GreAlphaBlend(
      a1,
      v104 + v9,
      v104 + v107,
      v41,
      DpiDependentMetric,
      CompatibleDC,
      0,
      0,
      v41,
      DpiDependentMetric,
      v101);
LABEL_92:
    if ( !a6 )
    {
LABEL_107:
      v67 = W32GetUserSessionState(v53, v52);
      GreSelectBitmap(*(_QWORD *)(v67 + 43256), v109);
LABEL_68:
      v19 = v99;
      goto LABEL_39;
    }
    if ( v54 == -1 )
    {
LABEL_95:
      if ( v55 )
      {
        GreDecBitmapExclusiveRefCnt(v55, v52);
        GreDeleteObject(v55);
      }
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      goto LABEL_107;
    }
LABEL_94:
    GreSelectBitmap(CompatibleDC, v54);
    goto LABEL_95;
  }
LABEL_39:
  v30 = v106;
  if ( !v106 )
    v30 = *v105[0];
  if ( !MNIspItemValid(v30, (__int64)v16) )
    goto LABEL_143;
  if ( a5 != (_DWORD)v31 )
    goto LABEL_143;
  v32 = (const WCHAR *)*((_QWORD *)v16 + 3);
  if ( !v32 )
    goto LABEL_143;
  v33 = *(_DWORD *)(*(_QWORD *)v16 + 48LL);
  if ( !v33 )
    goto LABEL_143;
  v108 = *((_QWORD *)v16 + 11);
  if ( !v19 || *(_DWORD *)(*v105[0] + 72) == (_DWORD)v31 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v16 + 96LL) != v31 )
      v9 += *(_DWORD *)(*(_QWORD *)v16 + 104LL) + 2;
  }
  else
  {
    v9 = *(_DWORD *)(*v105[0] + 72);
  }
  DPIMetrics = GetDPIMetrics();
  v69 = *(_QWORD *)v16;
  v70 = DPIMetrics;
  v107 = DPIMetrics;
  v71 = *(_DWORD *)(DPIMetrics + 20);
  v102 = v71;
  v72 = *(_DWORD *)(v69 + 76) - *(_DWORD *)(DPIMetrics + 12) - v71 - 1;
  if ( v72 > 0 )
  {
    v70 = v107;
    v102 = v72 / 2 + v71;
  }
  if ( !v99 && !*(_QWORD *)(v69 + 96) )
    v9 += *(_DWORD *)(v70 + 8);
  if ( *v32 == 8 && !v99 )
  {
    ++v32;
    if ( !--v33 )
    {
      v85 = a1;
      goto LABEL_144;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v32, 9LL);
  v74 = FindCharPosition(v32, 8LL);
  v75 = *(_DWORD *)(v69 + 72);
  v76 = v74;
  v77 = GetOemBitmapInfo(63LL);
  v78 = 0LL;
  v79 = v75 - *(__int16 *)(v77 + 4) - 2;
  if ( !(_DWORD)v76 || (_DWORD)v76 == v33 )
  {
    if ( (_DWORD)CharPosition && (_DWORD)v76 == v33 )
    {
      if ( (**(_DWORD **)v16 & 0x2000) != 0 )
      {
        v85 = a1;
        v103 = 0LL;
        xxxPSMGetTextExtent(a1, v32, CharPosition, &v103);
        v94 = v106;
        if ( !v106 )
          v94 = *v105[0];
        if ( !MNIspItemValid(v94, (__int64)v16) || v108 != *((_QWORD *)v16 + 11) )
          goto LABEL_144;
        v9 = v79 - (_DWORD)v103;
        if ( v99 == (_DWORD)v95 && *(_QWORD *)(*(_QWORD *)v16 + 96LL) == v95 )
          v9 += *(_DWORD *)(v107 + 8);
      }
      xxxDrawMenuItemText(
        v105,
        (__int64)v16,
        a1,
        v104 + v9,
        v104 + v102,
        (__int64)v32,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) & 4);
      v96 = v106;
      if ( !v106 )
        v96 = *v105[0];
      if ( !MNIspItemValid(v96, (__int64)v16) )
        goto LABEL_143;
      v82 = v108;
      if ( v108 != *((_QWORD *)v16 + 11) )
        goto LABEL_143;
    }
    else
    {
      v82 = v108;
    }
  }
  else
  {
    if ( (**(_DWORD **)v16 & 0x2000) != 0 && v99 )
    {
      v103 = 0LL;
      xxxPSMGetTextExtent(a1, v32, v76, &v103);
      v80 = v106;
      if ( !v106 )
        v80 = *v105[0];
      if ( !MNIspItemValid(v80, (__int64)v16) || v108 != *((_QWORD *)v16 + 11) )
        goto LABEL_143;
      v9 = v79 - (_DWORD)v103;
    }
    xxxDrawMenuItemText(
      v105,
      (__int64)v16,
      a1,
      v104 + v9,
      v104 + v102,
      (__int64)v32,
      v76,
      *(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) & 4);
    v81 = v106;
    if ( !v106 )
      v81 = *v105[0];
    if ( !MNIspItemValid(v81, (__int64)v16) )
      goto LABEL_143;
    v82 = v108;
    if ( v108 != *((_QWORD *)v16 + 11) )
      goto LABEL_143;
    if ( (unsigned int)CharPosition > (int)v76 + 1 )
    {
      if ( (**(_DWORD **)v16 & 0x2000) == 0 || v99 == (_DWORD)v78 )
      {
        v103 = v78;
        xxxPSMGetTextExtent(a1, &v32[v76 + 1], CharPosition - v76 - 1, &v103);
        v83 = v106;
        if ( !v106 )
          v83 = *v105[0];
        if ( !MNIspItemValid(v83, (__int64)v16) || v82 != *((_QWORD *)v16 + 11) )
          goto LABEL_143;
      }
      xxxPSMTextOut(a1, CharPosition - v76 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) << 18) & 0x100000);
      v84 = v106;
      if ( !v106 )
        v84 = *v105[0];
      if ( !MNIspItemValid(v84, (__int64)v16) || v82 != *((_QWORD *)v16 + 11) )
      {
LABEL_143:
        v85 = a1;
        goto LABEL_144;
      }
    }
  }
  if ( (unsigned int)CharPosition >= v33 - 1 )
    goto LABEL_143;
  if ( (**(_DWORD **)v16 & 0x2000) != 0 && v99 != (_DWORD)v78 )
  {
    v103 = v78;
    xxxPSMGetTextExtent(a1, &v32[CharPosition + 1], v33 - CharPosition - 1, &v103);
    v97 = v106;
    if ( !v106 )
      v97 = *v105[0];
    if ( !MNIspItemValid(v97, (__int64)v16) || v82 != *((_QWORD *)v16 + 11) )
      goto LABEL_143;
  }
  v85 = a1;
  xxxPSMTextOut(a1, v33 - CharPosition - 1, ~(*(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_144:
  v86 = v106;
  if ( !v106 )
    v86 = *v105[0];
  if ( MNIspItemValid(v86, (__int64)v16) && a5 == (_DWORD)v89 )
  {
    if ( v88 )
    {
      if ( *((_QWORD *)v16 + 2) != v89 )
      {
        v90 = GetOemBitmapInfo((**(_DWORD **)v16 & 0x2000) != 0 ? 92 : 62);
        v87 = *(_QWORD *)v16;
        v91 = (__int16 *)v90;
        if ( *(_DWORD *)(*(_QWORD *)v16 + 76LL) >= *(__int16 *)(v90 + 6) )
        {
          if ( PrepareHDCBITSBitmap(0LL) )
          {
            v92 = v91[3];
            v93 = (*(_DWORD *)(*(_QWORD *)v16 + 76LL) - v92 - 2) / 2;
            if ( v93 <= 0 )
              v93 = 0;
            BltColor(v85, v93, v91[2], v92, *v91, v91[1], 1);
          }
        }
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v105, v87);
  return 1LL;
}

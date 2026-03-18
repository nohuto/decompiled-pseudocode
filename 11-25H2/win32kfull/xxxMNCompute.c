/*
 * XREFs of xxxMNCompute @ 0x140041D3C
 * Callers:
 *     xxxMenuBarCompute @ 0x14004007C (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendUAHInitMenuMessage @ 0x14003FA78 (xxxSendUAHInitMenuMessage.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x140042684 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x140042B54 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x140042E30 (GetDPIMETRICSForDpi.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401920B4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 */

__int64 __fastcall xxxMNCompute(
        struct tagMENU ***a1,
        struct tagWND *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v8; // r12d
  __int64 v12; // rax
  int v13; // ecx
  unsigned int WindowDpiLastNotify; // ebp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  HDC v18; // rdi
  HFONT *DPIMETRICSForDpi; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  unsigned int v23; // r13d
  unsigned int v24; // r15d
  struct tagMENU *v25; // r14
  __int64 v26; // r14
  struct tagMENU *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  BOOL v30; // eax
  int v31; // ebx
  struct tagMENU *v32; // rcx
  __int64 v33; // r8
  struct tagMENU *v34; // rcx
  _WORD *v35; // rax
  int v36; // ebx
  struct tagMENU *v37; // rdi
  __int64 v38; // rax
  int v39; // r8d
  __int64 v40; // rdx
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  struct tagMENU *v44; // rcx
  unsigned int v45; // ebx
  struct tagMENU *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // ebx
  unsigned int v55; // ebx
  __int64 v56; // rax
  int v57; // r8d
  struct tagMENU *v58; // rcx
  int v59; // r10d
  struct tagMENU *v60; // rcx
  struct tagMENU *v61; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagMENU **v63; // rax
  struct tagMENU *v64; // rbx
  int v65; // edx
  unsigned int v66; // r10d
  __int64 *i; // r9
  __int64 v68; // r8
  int v69; // [rsp+40h] [rbp-98h]
  int v70; // [rsp+44h] [rbp-94h]
  int v71; // [rsp+48h] [rbp-90h]
  unsigned int v72; // [rsp+4Ch] [rbp-8Ch]
  int v73; // [rsp+50h] [rbp-88h]
  __int64 v74; // [rsp+58h] [rbp-80h] BYREF
  HDC DCEx; // [rsp+60h] [rbp-78h]
  HFONT v76[3]; // [rsp+70h] [rbp-68h] BYREF
  struct tagTHREADINFO *v77; // [rsp+88h] [rbp-50h]
  unsigned int v78; // [rsp+E0h] [rbp+8h]
  int v79; // [rsp+E8h] [rbp+10h]
  unsigned int v80; // [rsp+F0h] [rbp+18h]

  v79 = (int)a2;
  v8 = 0;
  v74 = 0LL;
  v80 = 0;
  v77 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( !a3 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      WindowDpiLastNotify = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
      goto LABEL_8;
    }
LABEL_7:
    WindowDpiLastNotify = 96;
    goto LABEL_8;
  }
  v12 = *(_QWORD *)(a3 + 40);
  v13 = *(_DWORD *)(v12 + 288) & 0xF;
  if ( v13 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v12 + 288) >> 8) & 0x1FF;
    goto LABEL_8;
  }
  if ( _bittest((const signed __int32 *)(v12 + 232), 0xAu) )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
    goto LABEL_8;
  }
  if ( !v13 )
  {
    v56 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 496LL);
    if ( v56 )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(v56 + 8) + 64LL) & 1) != 0 )
        goto LABEL_7;
    }
  }
  WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 464LL) + 272LL);
LABEL_8:
  if ( a2 != *((struct tagWND **)**a1 + 10) )
  {
    v63 = *a1;
    v76[1] = (HFONT)a2;
    v76[0] = (HFONT)((char *)*v63 + 80);
    HMAssignmentLock(v76, 0LL);
  }
  if ( a7 )
    v80 = *a7;
  if ( !*(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) )
    return 0LL;
  v71 = *(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) & 1;
  if ( v71 )
  {
    v80 = 0;
  }
  else if ( a2 )
  {
    *((_DWORD *)**a1 + 16) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 3
    || a3
    && PtiCurrent(v49, v48)
    && *((_QWORD *)PtiCurrent(v51, v50) + 62)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v53, v52) + 62) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v16 = 65539LL;
    v17 = a3;
  }
  else
  {
    v17 = 0LL;
    v16 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v17, 0LL, v16);
  v18 = DCEx;
  DPIMETRICSForDpi = (HFONT *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v76[0] = (HFONT)GreSelectFont(DCEx, *DPIMETRICSForDpi);
  v72 = 0;
  v70 = 0;
  v78 = 0;
  if ( IsInsideUserApiHook(v21, v20) && a2 )
    xxxSendUAHInitMenuMessage(a2, (__int64)a1);
  v22 = 0;
  v69 = a5;
  v23 = a4;
  v24 = 0;
  v73 = 0;
  *((_DWORD *)**a1 + 18) = 0;
  v25 = (struct tagMENU *)a1[2];
  if ( !v25 )
    v25 = **a1;
  if ( *(_DWORD *)(*((_QWORD *)v25 + 5) + 44LL) )
    v26 = *((_QWORD *)v25 + 11);
  else
    v26 = 0LL;
  if ( !*(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) )
    goto LABEL_57;
  while ( v26 )
  {
    v27 = (struct tagMENU *)a1[2];
    if ( !v27 )
      v27 = **a1;
    v28 = MNIsOwnerDrawItem(v27, (struct tagITEM *)v26);
    v29 = *(_QWORD *)v26;
    if ( (**(_DWORD **)v26 & 0x800) == 0 || v28 && *((_WORD *)v77 + 336) >= 0x400u )
    {
      v30 = *(_QWORD *)(v29 + 96) && *(_QWORD *)(v26 + 24);
      v73 = v30 | v22;
      v31 = v71;
      xxxMNItemSize((int)a1, v79, WindowDpiLastNotify, (int)v18, (struct tagITEM *)v26, v71, (__int64)&v74);
      v32 = (struct tagMENU *)a1[2];
      if ( !v32 )
        v32 = **a1;
      if ( !(unsigned __int8)MNIspItemValid(v32, v26) )
        break;
      *(_QWORD *)(*(_QWORD *)v26 + 72LL) = v74;
      if ( !v71 && (!*(_QWORD *)(*(_QWORD *)v26 + 96LL) || *(_QWORD *)(v26 + 24)) )
      {
        v34 = (struct tagMENU *)a1[2];
        if ( !v34 )
          v34 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v34) )
          *(_DWORD *)(*(_QWORD *)v26 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
    }
    else
    {
      *(_DWORD *)(v29 + 72) = 0;
      v31 = v71;
      *(_DWORD *)(*(_QWORD *)v26 + 76LL) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
    }
    if ( v80 && *(_DWORD *)(*(_QWORD *)v26 + 76LL) < v80 )
      *(_DWORD *)(*(_QWORD *)v26 + 76LL) = v80;
    if ( !v24 )
      v8 = *(_DWORD *)(*(_QWORD *)v26 + 76LL);
    if ( v31 )
    {
      v54 = **(_DWORD **)v26 & 0x60;
      if ( v54 || *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) == v24 + 1 )
      {
        v57 = v70;
        if ( *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) == v24 + 1 && *(_DWORD *)(*(_QWORD *)v26 + 72LL) > v70 )
          v57 = *(_DWORD *)(*(_QWORD *)v26 + 72LL);
        xxxMNRecalcTabStrings((_DWORD)v18, (_DWORD)a1, v78, v24 + (v54 == 0), v57, v69);
        v58 = (struct tagMENU *)a1[2];
        if ( !v58 )
          v58 = **a1;
        if ( !(unsigned __int8)MNIspItemValid(v58, v26) )
          break;
        if ( v54 )
        {
          v33 = (unsigned int)(v59 + 4);
          v23 = a4;
          v45 = v24;
          v69 = v59 + 4;
          v78 = v24;
          v70 = *(_DWORD *)(*(_QWORD *)v26 + 72LL);
          if ( *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) == v24 + 1 )
          {
            xxxMNRecalcTabStrings((_DWORD)v18, (_DWORD)a1, v24, v24 + 1, *(_DWORD *)(*(_QWORD *)v26 + 72LL), v33);
            v60 = (struct tagMENU *)a1[2];
            if ( !v60 )
              v60 = **a1;
            if ( !(unsigned __int8)MNIspItemValid(v60, v26) )
              goto LABEL_56;
          }
        }
        if ( *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) == v24 + 1 )
          *((_DWORD *)**a1 + 16) = v59;
      }
      v55 = v72;
      *(_DWORD *)(*(_QWORD *)v26 + 64LL) = v69;
      *(_DWORD *)(*(_QWORD *)v26 + 68LL) = v23;
      v40 = *(_QWORD *)v26;
      v23 += *(_DWORD *)(*(_QWORD *)v26 + 76LL);
      if ( v72 < v23 )
        v55 = v23;
      v72 = v55;
    }
    else
    {
      v35 = *(_WORD **)(v26 + 24);
      if ( v35 && *v35 == 8 )
      {
        v47 = (struct tagMENU *)a1[2];
        if ( !v47 )
          v47 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v47) )
          *(_DWORD *)(*(_QWORD *)v26 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
      if ( (**(_DWORD **)v26 & 0x60) != 0
        || (v36 = *(_DWORD *)(*(_QWORD *)v26 + 72LL),
            v37 = **a1,
            v38 = GetDPIMETRICSForDpi(WindowDpiLastNotify),
            v39 = v69,
            v69 + v36 + *(_DWORD *)(v38 + 8) > (unsigned int)(*((_DWORD *)v37 + 16) + a5))
        && v24 )
      {
        v23 += v8;
        v39 = a5;
        v8 = *(_DWORD *)(*(_QWORD *)v26 + 76LL);
      }
      v18 = DCEx;
      *(_DWORD *)(*(_QWORD *)v26 + 68LL) = v23;
      *(_DWORD *)(*(_QWORD *)v26 + 64LL) = v39;
      v40 = *(_QWORD *)v26;
      v33 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v26 + 72LL) + v39);
      v69 = v33;
    }
    v41 = *(_DWORD *)(v40 + 72);
    v42 = v8;
    if ( v70 >= v41 )
      v41 = v70;
    v70 = v41;
    v43 = *(_DWORD *)(v40 + 76);
    if ( v8 != v43 )
    {
      v8 = *(_DWORD *)(v40 + 76);
      if ( v42 >= v43 )
        v8 = v42;
      if ( v71 )
        goto LABEL_52;
      v80 = v8;
LABEL_51:
      v72 = v8 + v23;
      goto LABEL_52;
    }
    if ( !v71 )
      goto LABEL_51;
LABEL_52:
    v44 = (struct tagMENU *)a1[2];
    ++v24;
    if ( !v44 )
      v44 = **a1;
    v26 = MNGetpItemFromIndex(v44, v24, v33);
    v22 = v73;
    if ( v24 >= *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) )
      break;
  }
  v45 = v78;
LABEL_56:
  if ( !v73 || v45 )
  {
LABEL_57:
    *((_DWORD *)**a1 + 18) = 0;
    goto LABEL_58;
  }
  v61 = **a1;
  if ( *(int *)(*((_QWORD *)v61 + 5) + 40LL) >= 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v61 + 5) + 40LL) & 0x4000000) == 0 )
    {
      *((_DWORD *)**a1 + 18) += *(__int16 *)(GetOemBitmapInfo(63LL) + 4) + 2;
      goto LABEL_59;
    }
    v64 = **a1;
    if ( *((_DWORD *)v64 + 18) <= (unsigned int)*(__int16 *)(GetOemBitmapInfo(63LL) + 4) )
      v65 = *(__int16 *)(GetOemBitmapInfo(63LL) + 4);
    else
      v65 = *((_DWORD *)**a1 + 18);
    *((_DWORD *)**a1 + 18) = v65;
    *((_DWORD *)**a1 + 18) += 2;
LABEL_58:
    v45 = v78;
    goto LABEL_59;
  }
  *((_DWORD *)v61 + 18) += 2;
LABEL_59:
  if ( *((_DWORD *)**a1 + 18) )
    *((_DWORD *)**a1 + 18) += 2;
  if ( v45 )
  {
    if ( *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) )
    {
      if ( (***((_DWORD ***)**a1 + 11) & 0x4000) != 0 )
      {
        v66 = 0;
        for ( i = (__int64 *)*((_QWORD *)**a1 + 11);
              v66 < *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL);
              *(_DWORD *)(v68 + 64) = *((_DWORD *)**a1 + 16) - *(_DWORD *)(v68 + 72) - *(_DWORD *)(v68 + 64) )
        {
          ++v66;
          v68 = *i;
          i += 12;
        }
      }
    }
  }
  GreSelectFont(v18, v76[0]);
  _ReleaseDC(v18);
  *((_DWORD *)**a1 + 17) = v72 - a4;
  if ( a7 )
    *a7 = v80;
  return *((unsigned int *)**a1 + 17);
}

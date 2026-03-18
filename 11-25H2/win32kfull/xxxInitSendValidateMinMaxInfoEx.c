/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxAdjustSize @ 0x14004B4E8 (xxxAdjustSize.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x14022027C (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1402DF6F0 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetMaxTrackSizeForWindow @ 0x14004B09C (GetMaxTrackSizeForWindow.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     _GetClientRect @ 0x14004BA3C (_GetClientRect.c)
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140091370 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     _HasCaptionIcon @ 0x1400B2A98 (_HasCaptionIcon.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401B681C (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct tagMONITOR *v16; // r15
  int v17; // r12d
  __int64 v18; // rdx
  int WindowBordersWithDpiAwareness; // esi
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v25; // rax
  int v26; // esi
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int *v30; // r14
  __int64 v31; // rdx
  int v32; // ecx
  unsigned int v33; // eax
  int DpiDependentMetric; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagTHREADINFO *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct tagTHREADINFO *v44; // rax
  __int64 v45; // rdx
  int v46; // r15d
  int v47; // eax
  __int64 result; // rax
  struct tagWND *v49; // rax
  const struct tagWND *v50; // rcx
  unsigned int v51; // eax
  int v52; // r15d
  signed int v53; // r12d
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // r13d
  int v60; // ecx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // ecx
  unsigned int v64; // eax
  int v65; // eax
  __int64 v66; // rcx
  char v67; // dl
  int v68; // edx
  unsigned int v69; // eax
  int v70; // eax
  __int64 v71; // rdx
  int v72; // ecx
  unsigned int v73; // eax
  int v74; // r8d
  int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // edx
  unsigned int v81; // eax
  int v82; // edx
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  struct tagMONITOR *v88; // [rsp+20h] [rbp-60h]
  ULONG_PTR v89; // [rsp+28h] [rbp-58h]
  __int128 v90; // [rsp+30h] [rbp-50h] BYREF
  __int128 v91; // [rsp+40h] [rbp-40h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR v93[2]; // [rsp+60h] [rbp-20h] BYREF
  struct tagTHREADINFO *v94; // [rsp+C8h] [rbp+48h]
  int v95; // [rsp+D8h] [rbp+58h]

  v90 = 0LL;
  v94 = PtiCurrent((__int64)a1, a2);
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  *(_DWORD *)a2 = *(_DWORD *)(v8 + 2124);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v9) + 19872) + 2128LL);
  v89 = *(_QWORD *)(GetDispInfo() + 104);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
  GetMonitorRectForDpi(BugCheckParameter3, v11, (WindowCompositedDpiContext >> 8) & 0x1FF);
  v12 = *((_QWORD *)a1 + 3);
  v13 = 0LL;
  v91 = *(_OWORD *)BugCheckParameter3;
  if ( v12 )
  {
    v14 = *(_QWORD *)(v12 + 8);
    if ( v14 )
      v13 = *(_QWORD *)(v14 + 24);
  }
  v15 = *((_QWORD *)a1 + 13);
  if ( v15 == v13 )
  {
    v90 = *(_OWORD *)BugCheckParameter3;
    v16 = _MonitorFromWindowInternal(a1, 1u, 1);
    v17 = 1;
    if ( a3 )
      v16 = a3;
    v88 = v16;
  }
  else
  {
    v16 = 0LL;
    v17 = 0;
    v88 = 0LL;
    GetClientRect(v15, &v90);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v18, 0, 0);
  v20 = v90 - WindowBordersWithDpiAwareness;
  LODWORD(v90) = v20;
  v21 = (unsigned int)(WindowBordersWithDpiAwareness - v20 + DWORD2(v90));
  DWORD1(v90) -= WindowBordersWithDpiAwareness;
  v95 = DWORD1(v90);
  *(_DWORD *)(a2 + 8) = v21;
  v22 = (unsigned int)(WindowBordersWithDpiAwareness - v95);
  *(_DWORD *)(a2 + 12) = v22 + HIDWORD(v90);
  UserSessionState = W32GetUserSessionState(v22, v21);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41334), 1u);
  if ( Prop && (*(_DWORD *)(Prop + 16) & 0x20) != 0 )
    v25 = *(_QWORD *)(Prop + 8);
  else
    v25 = v90;
  *(_QWORD *)(a2 + 16) = v25;
  v26 = 2 * WindowBordersWithDpiAwareness;
  v27 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v27 + 30) & 0xC0) != 0 && *(char *)(v27 + 24) >= 0 )
  {
    v28 = *(_DWORD *)(v27 + 288) & 0xF;
    if ( v28 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v27 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v27 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v28
           && (v77 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v77 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
    }
    v30 = (int *)(a2 + 24);
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v31 = *((_QWORD *)a1 + 5);
    v32 = *(_DWORD *)(v31 + 288) & 0xF;
    if ( v32 == 3 )
    {
      v33 = (*(_DWORD *)(v31 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v31 + 232) & 0x400) != 0 )
    {
      v33 = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v32
           && (v76 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v76 + 8) + 64LL) & 1) != 0 )
    {
      v33 = 96;
    }
    else
    {
      v33 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v33);
  }
  else
  {
    DpiDependentMetric = 2;
    v30 = (int *)(a2 + 24);
    if ( v26 >= 2 )
      DpiDependentMetric = v26;
    *v30 = DpiDependentMetric;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(_QWORD *)(a2 + 32) = GetMaxTrackSizeForWindow(a1);
  Win32HM_LockIntoThread<1>(v94, v16, v93);
  BugCheckParameter3[0] = *((_QWORD *)v94 + 57);
  *((_QWORD *)v94 + 57) = BugCheckParameter3;
  BugCheckParameter3[1] = v89;
  HMLockObject(v89);
  xxxSendMessage(a1, 0x24u);
  v37 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 19872);
  *(_DWORD *)a2 = *(_DWORD *)(v37 + 2124);
  v40 = *(_QWORD *)(W32GetUserSessionState(v37, v38) + 19872);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v40 + 2128);
  if ( v17 )
  {
    v49 = _HungWindowFromGhostWindow(a1);
    v50 = a1;
    if ( v49 )
      v50 = v49;
    v51 = GetWindowCompositedDpiContext(v50);
    GetMonitorRectForDpi(&v90, v16, (v51 >> 8) & 0x1FF);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v91) - (int)v91
      || (v52 = HIDWORD(v91), v53 = DWORD1(v91), *(_DWORD *)(a2 + 12) < HIDWORD(v91) - DWORD1(v91)) )
    {
      SetOrClrWF(0, a1, 0x340u, 1);
      v39 = v90;
    }
    else
    {
      SetOrClrWF(1, a1, 0x340u, 1);
      v56 = W32GetUserSessionState(v55, v54);
      v57 = GetProp((__int64)a1, *(unsigned __int16 *)(v56 + 41334), 1u);
      if ( v57 )
      {
        v74 = *(_DWORD *)(v57 + 16);
        if ( (v74 & 0x20) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v75 = *(_DWORD *)(a2 + 16);
          if ( v75 != v20 && *(_DWORD *)(v57 + 8) == v75 )
          {
            *(_DWORD *)(v57 + 16) = v74 & 0xFFFFFFDF;
            *(_DWORD *)(a2 + 20) = v95;
            *(_DWORD *)(a2 + 16) = v20;
          }
        }
      }
      v58 = *((_QWORD *)a1 + 5);
      v59 = *(_DWORD *)(a2 + 20);
      v60 = *(_DWORD *)(v58 + 288) & 0xF;
      if ( v60 == 3 )
      {
        v61 = (*(_DWORD *)(v58 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v58 + 232) & 0x400) != 0 )
      {
        v61 = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v60
             && (v78 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v78 + 8) + 64LL) & 1) != 0 )
      {
        v61 = 96;
      }
      else
      {
        v61 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
      }
      if ( (int)(v59 + GetDpiDependentMetric(2LL, v61)) <= v53 && *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20) >= v52 )
        v90 = *(_OWORD *)GetMonitorRectForWindow(&v90, v88, a1);
      v39 = v90;
      v62 = HIDWORD(*((_QWORD *)&v90 + 1));
      *(_DWORD *)(a2 + 8) += v91 + DWORD2(v90) - v90 - DWORD2(v91);
      v40 = (unsigned int)(v53 + v62 - HIDWORD(v39) - v52);
      *(_DWORD *)(a2 + 12) += v40;
    }
    *(_DWORD *)(a2 + 16) += v39;
    *(_DWORD *)(a2 + 20) += DWORD1(v90);
  }
  v41 = PtiCurrent(v40, v39);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v41, BugCheckParameter3);
  v44 = PtiCurrent(v43, v42);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v44, v93);
  v45 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v45 + 16) & 8) != 0 )
  {
    v63 = *(_DWORD *)(v45 + 288) & 0xF;
    if ( v63 == 3 )
    {
      v64 = (*(_DWORD *)(v45 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v45 + 232) & 0x400) != 0 )
    {
      v64 = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v63
           && (v79 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v79 + 8) + 64LL) & 1) != 0 )
    {
      v64 = 96;
    }
    else
    {
      v64 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
    }
    v65 = GetDpiDependentMetric(17LL, v64);
    v66 = *((_QWORD *)a1 + 5);
    v46 = v65;
    v67 = *(_BYTE *)(v66 + 30) & 8;
    if ( *(char *)(v66 + 24) < 0 )
    {
      if ( v67 )
      {
        v82 = *(_DWORD *)(v66 + 288) & 0xF;
        if ( v82 == 3 )
        {
          v83 = (*(_DWORD *)(v66 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v66 + 232) & 0x400) != 0 )
        {
          v83 = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v82
               && (v86 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v86 + 8) + 64LL) & 1) != 0 )
        {
          v83 = 96;
        }
        else
        {
          v83 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
        }
        v26 += GetDpiDependentMetric(23LL, v83);
      }
      v26 += 4;
      v30 = (int *)(a2 + 24);
    }
    else
    {
      if ( v67 )
      {
        if ( (*(_BYTE *)(v66 + 30) & 3) != 0 )
        {
          v68 = *(_DWORD *)(v66 + 288) & 0xF;
          if ( v68 == 3 )
          {
            v69 = (*(_DWORD *)(v66 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v66 + 232) & 0x400) != 0 )
          {
            v69 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( !v68
                 && (v85 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v85 + 8) + 64LL) & 1) != 0 )
          {
            v69 = 96;
          }
          else
          {
            v69 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
          }
          v70 = GetDpiDependentMetric(12LL, v69);
          v26 += v70 + 2 * v70;
        }
        else if ( (*(_BYTE *)(v66 + 25) & 4) != 0 )
        {
          v80 = *(_DWORD *)(v66 + 288) & 0xF;
          if ( v80 == 3 )
          {
            v81 = (*(_DWORD *)(v66 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v66 + 232) & 0x400) != 0 )
          {
            v81 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( !v80
                 && (v87 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v87 + 8) + 64LL) & 1) != 0 )
          {
            v81 = 96;
          }
          else
          {
            v81 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
          }
          v26 += 2 * GetDpiDependentMetric(12LL, v81);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v71 = *((_QWORD *)a1 + 5);
          v72 = *(_DWORD *)(v71 + 288) & 0xF;
          if ( v72 == 3 )
          {
            v73 = (*(_DWORD *)(v71 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v71 + 232) & 0x400) != 0 )
          {
            v73 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( !v72
                 && (v84 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v84 + 8) + 64LL) & 1) != 0 )
          {
            v73 = 96;
          }
          else
          {
            v73 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
          }
          v26 += GetDpiDependentMetric(13LL, v73);
        }
      }
      v26 += 4 * *(_DWORD *)(GetDPIServerInfo() + 16) + 4;
    }
  }
  else
  {
    v46 = v26;
  }
  v47 = *v30;
  if ( *v30 <= v26 )
    v47 = v26;
  *v30 = v47;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v46 )
    result = (unsigned int)v46;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}

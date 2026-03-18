/*
 * XREFs of xxxCalcClientRect @ 0x140047B98
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     NtUserUpdateClientRect @ 0x1402A2F50 (NtUserUpdateClientRect.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BE800 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     xxxMenuBarCompute @ 0x14004007C (xxxMenuBarCompute.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetCaptionHeight @ 0x140049968 (GetCaptionHeight.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall xxxCalcClientRect(struct tagWND *a1, _DWORD *a2, int a3)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  int v6; // esi
  char v7; // dl
  int v8; // r15d
  int v9; // ebx
  _DWORD *v10; // rax
  int v11; // r14d
  __int64 v12; // rdx
  int v13; // esi
  int v14; // ebx
  __int64 v15; // rax
  int v16; // r14d
  int v17; // esi
  int v18; // ebx
  __int64 v19; // rdx
  _DWORD *v20; // rax
  int v21; // esi
  int v22; // ebx
  int v23; // r14d
  __int64 v24; // rcx
  __int64 v25; // r15
  int v26; // ebx
  int v27; // r15d
  int v28; // esi
  int v29; // ebx
  _DWORD *v30; // rax
  int v31; // esi
  __int64 v32; // rdx
  int v33; // ebx
  int v34; // r15d
  int WindowBordersWithDpiAwareness; // eax
  signed int v36; // r14d
  int v37; // r13d
  signed int v38; // ebx
  int v39; // r12d
  int v40; // r15d
  __int64 v41; // rcx
  __int64 v43; // rsi
  bool v44; // zf
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  struct tagTHREADINFO *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  struct tagTHREADINFO *v51; // rax
  int v52; // esi
  __int64 v53; // rdx
  int v54; // r13d
  __int64 v55; // rdx
  int v56; // ecx
  unsigned int v57; // eax
  int v58; // ebx
  void *v59; // rax
  void *v60; // rax
  void *v61; // rax
  int v62; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // r12d
  __int64 v65; // rax
  __int64 v66; // rax
  __int128 v67; // [rsp+30h] [rbp-48h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v69; // [rsp+50h] [rbp-28h] BYREF
  __int64 v70; // [rsp+58h] [rbp-20h] BYREF
  __int64 v71; // [rsp+60h] [rbp-18h]
  char v72; // [rsp+C0h] [rbp+48h]
  int v75; // [rsp+D8h] [rbp+60h]
  int v76; // [rsp+D8h] [rbp+60h]

  v4 = PtiCurrent((__int64)a1, (__int64)a2);
  v69 = (__int64 *)gSmartObjNullRef;
  v70 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v70;
  v5 = *((_QWORD *)a1 + 5);
  v71 = 0LL;
  v6 = *(_DWORD *)(v5 + 28);
  v7 = *(_BYTE *)(v5 + 16);
  v8 = *(_DWORD *)(v5 + 24);
  v9 = *(_DWORD *)(v5 + 232);
  *(_BYTE *)(v5 + 16) = v7 & 0xF0;
  v72 = v7 & 0xF;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_5;
  v10 = (_DWORD *)*((_QWORD *)a1 + 5);
  v11 = v6 ^ v10[7];
  v12 = (unsigned int)v10[58];
  v13 = v8 ^ v10[6];
  v14 = v12 ^ v9;
  if ( !v11 )
  {
    if ( v13 )
      goto LABEL_50;
    if ( !v14 )
      goto LABEL_5;
  }
  if ( (v11 & 0xB9CF0000) != 0 )
  {
LABEL_57:
    DirtyVisRgnTrackers(a1, v12);
    v59 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v59);
    goto LABEL_58;
  }
LABEL_50:
  if ( (v13 & 0x4E27A9) != 0 || (v14 & 0x3F2C0) != 0 )
    goto LABEL_57;
LABEL_58:
  if ( (v11 & 0x1C40000) != 0 || (v13 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_5:
  v15 = *((_QWORD *)a1 + 5);
  v16 = *(_DWORD *)(v15 + 28);
  v17 = *(_DWORD *)(v15 + 24);
  v18 = *(_DWORD *)(v15 + 232);
  *(_BYTE *)(v15 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_9;
  v20 = (_DWORD *)*((_QWORD *)a1 + 5);
  v21 = v20[6] ^ v17;
  v19 = (unsigned int)v20[58];
  v22 = v19 ^ v18;
  v23 = v20[7] ^ v16;
  if ( !v23 )
  {
    if ( v21 )
      goto LABEL_54;
    if ( !v22 )
      goto LABEL_9;
  }
  if ( (v23 & 0xB9CF0000) != 0 )
  {
LABEL_60:
    DirtyVisRgnTrackers(a1, v19);
    v60 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v60);
    goto LABEL_61;
  }
LABEL_54:
  if ( (v21 & 0x4E27A9) != 0 || (v22 & 0x3F2C0) != 0 )
    goto LABEL_60;
LABEL_61:
  if ( (v23 & 0x1C40000) != 0 || (v21 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_9:
  v24 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v24 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
    goto LABEL_22;
  }
  v25 = HIDWORD(*(_QWORD *)a2);
  v75 = v25;
  v26 = HIDWORD(*(_QWORD *)a2);
  v67 = *(_OWORD *)a2;
  if ( (*(_BYTE *)(v24 + 30) & 0xC0) == 0xC0 )
  {
    v27 = *(_DWORD *)(v24 + 28);
    v28 = *(_DWORD *)(v24 + 24);
    v29 = *(_DWORD *)(v24 + 232);
    *(_BYTE *)(v24 + 16) |= 8u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_15:
      LODWORD(v25) = v75;
      v26 = DWORD1(v67) + GetCaptionHeight(a1);
      goto LABEL_16;
    }
    v30 = (_DWORD *)*((_QWORD *)a1 + 5);
    v31 = v30[6] ^ v28;
    v32 = (unsigned int)v30[58];
    v33 = v32 ^ v29;
    v34 = v30[7] ^ v27;
    if ( !v34 )
    {
      if ( v31 )
      {
LABEL_64:
        if ( (v31 & 0x4E27A9) == 0 && (v33 & 0x3F2C0) == 0 )
        {
LABEL_67:
          if ( (v34 & 0x1C40000) != 0 || (v31 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(a1, 1LL);
          goto LABEL_15;
        }
LABEL_66:
        DirtyVisRgnTrackers(a1, v32);
        v61 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v61);
        goto LABEL_67;
      }
      if ( !v33 )
        goto LABEL_15;
    }
    if ( (v34 & 0xB9CF0000) != 0 )
      goto LABEL_66;
    goto LABEL_64;
  }
LABEL_16:
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v19, 0, 0);
  v36 = v67 + WindowBordersWithDpiAwareness;
  v37 = DWORD2(v67) - WindowBordersWithDpiAwareness;
  v76 = WindowBordersWithDpiAwareness;
  v38 = v26 + WindowBordersWithDpiAwareness;
  v39 = HIDWORD(v67) - WindowBordersWithDpiAwareness;
  LODWORD(v67) = v67 + WindowBordersWithDpiAwareness;
  DWORD2(v67) -= WindowBordersWithDpiAwareness;
  DWORD1(v67) = v38;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v43 = *((_QWORD *)a1 + 21);
    v71 = 0LL;
    if ( v43 != *v69 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v69);
      if ( v43 )
      {
        v69 = *(__int64 **)(v43 + 152);
        ++*((_DWORD *)v69 + 2);
      }
      else
      {
        v69 = (__int64 *)gSmartObjNullRef;
      }
    }
    v44 = v71 == 0;
    if ( !v71 )
      v44 = *v69 == 0;
    if ( !v44 )
    {
      SetOrClrWF(1, a1, 1u, 1);
      if ( !a3 )
      {
        v47 = v71;
        if ( !v71 )
          v47 = *v69;
        v48 = PtiCurrent(v46, v45);
        Win32HM_LockIntoThread<0>(v48, v47, BugCheckParameter3);
        *(_DWORD *)(*(_QWORD *)(v47 + 40) + 40LL) |= 0x200u;
        v38 += xxxMenuBarCompute((__int64)&v69, (__int64)a1, (unsigned int)(v38 - v25), v76, v37 - v36);
        DWORD1(v67) = v38;
        v49 = *(_QWORD *)(BugCheckParameter3[1] + 40);
        *(_DWORD *)(v49 + 40) &= ~0x200u;
        v51 = PtiCurrent(v49, v50);
        Win32HM_UnlockFromThread<0>((ULONG_PTR)v51, BugCheckParameter3);
      }
    }
  }
  v40 = v39;
  if ( v38 >= v39 )
    v40 = v38;
  HIDWORD(v67) = v40;
  if ( v36 < v37 )
  {
    if ( v38 < v39 )
    {
      v52 = v37;
      DWORD2(v67) = v37;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 2) != 0 )
      {
        DWORD2(v67) = v37;
        if ( v37 - v36 >= 4 )
        {
          DWORD2(v67) = v37;
          if ( v40 - v38 >= 4 )
          {
            SetOrClrWF(1, a1, 0x410u, 1);
            v36 += 2;
            v52 = v37 - 2;
            v38 += 2;
            *(_QWORD *)&v67 = __PAIR64__(v38, v36);
            v40 -= 2;
            DWORD2(v67) = v37 - 2;
            HIDWORD(v67) = v40;
          }
        }
      }
      v53 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v53 + 30) & 0x10) != 0
        && ((v62 = *(_DWORD *)(v53 + 288) & 0xF, v62 == 3)
          ? (WindowDpiLastNotify = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF)
          : (*(_DWORD *)(v53 + 232) & 0x400) == 0
          ? (v62
          || (v66 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) == 0
          || (*(_DWORD *)(**(_QWORD **)(v66 + 8) + 64LL) & 1) == 0
           ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL))
           : (WindowDpiLastNotify = 96))
          : (WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1)),
            DpiDependentMetric = GetDpiDependentMetric(1LL, WindowDpiLastNotify),
            v40 - v38 > DpiDependentMetric) )
      {
        SetOrClrWF(1, a1, 4u, 1);
        v54 = a3;
        if ( !a3 )
          HIDWORD(v67) = v40 - DpiDependentMetric;
      }
      else
      {
        v54 = a3;
      }
      v55 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v55 + 30) & 0x20) != 0 )
      {
        v56 = *(_DWORD *)(v55 + 288) & 0xF;
        if ( v56 == 3 )
        {
          v57 = (*(_DWORD *)(v55 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v55 + 232) & 0x400) != 0 )
        {
          v57 = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v56
               && (v65 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v65 + 8) + 64LL) & 1) != 0 )
        {
          v57 = 96;
        }
        else
        {
          v57 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
        }
        v58 = GetDpiDependentMetric(0LL, v57);
        if ( v52 - v36 >= v58 )
        {
          SetOrClrWF(1, a1, 2u, 1);
          if ( !v54 )
          {
            if ( ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) ^ *(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL)) & 0x40) != 0 )
              LODWORD(v67) = v58 + v36;
            else
              DWORD2(v67) = v52 - v58;
          }
        }
      }
    }
  }
  else
  {
    DWORD2(v67) = v36;
  }
  *(_OWORD *)a2 = v67;
LABEL_22:
  v41 = *((_QWORD *)a1 + 5);
  if ( v72 != (*(_BYTE *)(v41 + 16) & 0xF) && *(char *)(v41 + 23) < 0 )
    xxxWindowEvent(0x8004u, a1, 0, 0, 1);
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v69);
}

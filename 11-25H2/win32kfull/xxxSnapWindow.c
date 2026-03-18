/*
 * XREFs of xxxSnapWindow @ 0x140266650
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxCloseClipboard @ 0x14002B910 (xxxCloseClipboard.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x14002C6E0 (-UnlockWorker@-$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1-UserDereferenceObject@@YAXPEAX@Z$00.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     xxxPlayEventSound @ 0x1400D7F00 (xxxPlayEventSound.c)
 *     _SetClipboardData @ 0x140111EF0 (_SetClipboardData.c)
 *     _OpenClipboard @ 0x140112F48 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x140150580 (ReferenceWindowStation.c)
 *     GetPhysicalScreenRect @ 0x1401E2F60 (GetPhysicalScreenRect.c)
 *     xxxEmptyClipboard @ 0x1401EF1DC (xxxEmptyClipboard.c)
 *     GreEnableAppContainerRestriction @ 0x140208DD0 (GreEnableAppContainerRestriction.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z @ 0x140224E9C (-ManualLock@-$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ClientNoMemoryPopup @ 0x1402BA2B8 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1402DD220 (CreateScreenPalette.c)
 *     DwmAsyncSnapshotWindow @ 0x1403251CC (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(__int64 a1, __int64 a2)
{
  HDC CompatibleDC; // rsi
  _QWORD *v3; // rdi
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  struct tagWINDOWSTATION *v12; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned int v23; // r12d
  unsigned __int64 v24; // kr00_8
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 DCEx; // rax
  __int64 v29; // rcx
  HDC v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  HBITMAP Bitmap; // rax
  __int64 UserSessionState; // rax
  char *v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  ULONG_PTR v43[2]; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v45; // [rsp+88h] [rbp-11h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v47; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v48; // [rsp+B0h] [rbp+17h]
  int v49; // [rsp+108h] [rbp+6Fh]
  ULONG_PTR v50; // [rsp+110h] [rbp+77h] BYREF
  struct tagTHREADINFO *v51; // [rsp+118h] [rbp+7Fh] BYREF

  v49 = a2;
  BugCheckParameter3[0] = -1LL;
  CompatibleDC = 0LL;
  v50 = 0LL;
  v3 = (_QWORD *)a1;
  BugCheckParameter3[1] = 0LL;
  v48 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v45 = -1LL;
  v4 = PtiCurrent(a1, a2);
  v51 = v4;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144);
  if ( v7 == *(_QWORD *)(W32GetUserSessionState(v9, v8) + 62976) )
  {
LABEL_6:
    if ( v45 != -1 )
      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v10);
    return 0LL;
  }
  if ( ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &v50, 1) < 0
    || (v12 = (struct tagWINDOWSTATION *)v50, (*(_DWORD *)(v50 + 64) & 4) != 0)
    || *(_QWORD *)(v3[3] + 40LL) != v50 )
  {
LABEL_5:
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v11);
    goto LABEL_6;
  }
  while ( (*(_BYTE *)(v3[5] + 31LL) & 0x40) != 0 )
    v3 = (_QWORD *)v3[13];
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)v3) )
  {
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)v3);
    Win32RawLockedNtObject<tagWINDOWSTATION>::ManualLock(BugCheckParameter2, (ULONG_PTR)v12);
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 62) + 8LL) + 24LL);
    Win32HM_LockIntoThread<1>((__int64)v4, v19, (__int64 *)v43);
    LODWORD(v19) = OpenClipboard(v19, 0LL);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v43, v20);
    if ( !(_DWORD)v19 )
      goto LABEL_5;
    xxxEmptyClipboard((__int64)v12, v11);
    *(_OWORD *)v43 = *(_OWORD *)(v3[5] + 88LL);
    v47 = *GetPhysicalScreenRect(&v47, v21);
    if ( !(unsigned int)IntersectRect(v43, (int *)v43, (int *)&v47) )
    {
      v18 = 0;
LABEL_44:
      xxxCloseClipboard(v12);
      HMAssignmentUnlock((char *)v12 + 112);
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      Win32RawLockedItemBase<tagWINDOWSTATION,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
        (ULONG_PTR)BugCheckParameter2,
        0);
      goto LABEL_47;
    }
    v22 = LODWORD(v43[1]) - LODWORD(v43[0]);
    v23 = HIDWORD(v43[1]) - HIDWORD(v43[0]);
    v24 = v43[0];
    if ( v3 != (_QWORD *)GetDesktopWindow((__int64)v3) )
      v24 = __PAIR64__(v27 - *(_DWORD *)(v3[5] + 92LL), v25 - *(_DWORD *)(v3[5] + 88LL));
    DCEx = _GetDCEx(v26, 0LL, 65537LL);
    v30 = (HDC)DCEx;
    if ( DCEx
      && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
      && ((v33 = *(_QWORD *)(W32GetUserSessionState(v29, v31) + 19872), !*(_DWORD *)(v33 + 2220))
        ? (UserSessionState = W32GetUserSessionState(v33, v32),
           Bitmap = (HBITMAP)GreCreateBitmap(
                               v22,
                               v23,
                               1LL,
                               *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 56968) + 136LL)))
        : (Bitmap = GreCreateCompatibleBitmapEx(v30, v22, v23, 0, 0LL, 0LL)),
          (v36 = (char *)Bitmap) != 0LL || (v36 = (char *)GreCreateBitmap(v22, v23, 1LL, 1LL)) != 0LL) )
    {
      v43[0] = GreSelectBitmap(CompatibleDC, v36);
      if ( !v49
        && (v37 = *((_QWORD *)v51 + 62), v3 == *(_QWORD **)(*(_QWORD *)(v37 + 8) + 24LL))
        && (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v37) )
      {
        LOBYTE(v50) = 1;
        GreEnableAppContainerRestriction(0LL, v38);
      }
      else
      {
        LOBYTE(v50) = 0;
      }
      if ( (unsigned int)IsWindowDesktopComposed(v3) )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v51, 1);
        v18 = GreBitBltInternal(CompatibleDC, 0, 0, v22, v23, v30, v24, SHIDWORD(v24), 0x40CC0020u, 0, 4u);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v51);
      }
      else
      {
        v18 = GreBitBltInternal(CompatibleDC, 0, 0, v22, v23, v30, v24, SHIDWORD(v24), 0x40CC0020u, 0, 0);
      }
      if ( (_BYTE)v50 )
        GreEnableAppContainerRestriction(1LL, v39);
      GreSelectBitmap(CompatibleDC, v43[0]);
      if ( v18 )
      {
        SetClipboardData(2u, v36, 0, 1);
        if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v41, v40) + 19872) + 7004LL) & 1) != 0 )
        {
          v51 = 0LL;
          v50 = 0LL;
          if ( (int)CreateScreenPalette(v30) >= 0 )
          {
            SetClipboardData(9u, (char *)v50, 0, 1);
            Win32FreePool(v51);
          }
        }
        v18 = 1;
      }
      else if ( v36 )
      {
        GreDeleteObject(v36);
      }
    }
    else
    {
      ClientNoMemoryPopup(v29);
      v18 = 0;
      if ( !v30 )
        goto LABEL_44;
    }
    _ReleaseDC(v30);
    goto LABEL_44;
  }
  v16 = (void *)ReferenceDwmApiPort(v15, v14);
  v18 = (int)DwmAsyncSnapshotWindow(v16) >= 0;
LABEL_47:
  if ( v18 )
    xxxPlayEventSound(13LL, v17);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v17);
  if ( v45 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v42);
  return v18;
}

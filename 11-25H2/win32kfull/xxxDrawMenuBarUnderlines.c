/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x140205BB0
 * Callers:
 *     xxxEndMenuLoop @ 0x140258BF0 (xxxEndMenuLoop.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxPSMGetTextExtent @ 0x14002B2D0 (xxxPSMGetTextExtent.c)
 *     GetPrefixCount @ 0x14002B41C (GetPrefixCount.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x14003D8E0 (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     GreSetViewportOrg @ 0x14003F55C (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x14003F6E8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14004047C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNIsFlatMenu @ 0x14004083C (MNIsFlatMenu.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x140042B54 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GetNonChildAncestor @ 0x14005E7A4 (GetNonChildAncestor.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x1400C13EC (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140128970 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z @ 0x1401E7950 (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402EA7B8 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1402EE394 (xxxPSMTextOut.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 NonChildAncestor; // rax
  const struct tagWND *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOL v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 DCEx; // rax
  struct tagMENU *v22; // r8
  HDC v23; // rsi
  unsigned int v24; // edx
  struct tagMENU *v25; // rcx
  struct tagMENU *v26; // r10
  int v27; // ebx
  HFONT *DPIMETRICS; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  HFONT *v31; // rax
  __int64 v32; // rdx
  _DWORD *v33; // rax
  _DWORD *v34; // r8
  int v35; // r15d
  unsigned int v36; // r12d
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  int v42; // edx
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // eax
  ULONG_PTR v47; // rax
  __int64 v48; // rdx
  char *v49; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // edx
  __int64 v54; // rax
  struct tagMENU **v56[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct tagMENU *v57; // [rsp+58h] [rbp-B0h]
  int v58; // [rsp+60h] [rbp-A8h]
  int v59; // [rsp+64h] [rbp-A4h]
  __int64 v60; // [rsp+68h] [rbp-A0h]
  WCHAR *v61; // [rsp+70h] [rbp-98h]
  __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  struct tagTHREADINFO *v63; // [rsp+80h] [rbp-88h]
  __int64 v64; // [rsp+88h] [rbp-80h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-68h]
  _BYTE v67[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-40h]
  char v69; // [rsp+D8h] [rbp-30h] BYREF

  v58 = a2;
  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v56, a2);
  v6 = PtiCurrent(v5, v4);
  v62 = 0LL;
  v63 = v6;
  if ( (*(_DWORD *)(W32GetUserSessionState(v8, v7) + 66800) & 0x20000) == 0 )
  {
    v9 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 66804);
    if ( (v9 & 0x20) == 0
      && *(int *)(W32GetUserSessionState(v11, v9) + 66804) < 0
      && (GetAppCompatFlags2(1024LL, v9) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v13 = (const struct tagWND *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v14 = *(_QWORD *)(NonChildAncestor + 168);
          v57 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=((__int64)v56, v14);
          if ( v57 || *v56[0] )
          {
            v16 = MNIsFlatMenu(v15, v9) && (*(_DWORD *)(*((_QWORD *)*v56[0] + 5) + 40LL) & 1) == 0;
            v17 = *(unsigned int *)(*((_QWORD *)*v56[0] + 5) + 40LL);
            if ( v3 )
            {
              if ( (v17 & 4) != 0 )
                return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v56, v9);
              v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v9) + 19872) + 4752LL);
              *(_DWORD *)(*((_QWORD *)*v56[0] + 5) + 40LL) |= 4u;
            }
            else
            {
              if ( (v17 & 4) == 0 )
                return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v56, v9);
              if ( *(_QWORD *)(*((_QWORD *)*v56[0] + 5) + 24LL) )
              {
                v18 = *(_QWORD *)(*((_QWORD *)*v56[0] + 5) + 24LL);
              }
              else
              {
                v19 = *(_QWORD *)(W32GetUserSessionState(*v56[0], v9) + 19872);
                if ( v16 )
                  v18 = *(_QWORD *)(v19 + 4936);
                else
                  v18 = *(_QWORD *)(v19 + 4728);
              }
              *(_DWORD *)(*((_QWORD *)*v56[0] + 5) + 40LL) &= ~4u;
            }
            v60 = v18;
            v20 = *((_QWORD *)*v56[0] + 11);
            DCEx = _GetDCEx(v13, 0LL, 65539LL);
            v22 = v57;
            v23 = (HDC)DCEx;
            if ( !v57 )
              v22 = *v56[0];
            Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
              (Win32HMThreadLockAlwaysMenuNoModify *)v67,
              v63,
              v22);
            v24 = 0;
            v59 = 0;
            while ( v24 < *(_DWORD *)(*((_QWORD *)*v56[0] + 5) + 44LL) )
            {
              v25 = v57 ? v57 : *v56[0];
              if ( !MNIspItemValid((__int64)v25, v20) )
                break;
              if ( !v26 )
                v26 = *v56[0];
              v27 = MNIsOwnerDrawItem(v26, (struct tagITEM *)v20);
              v64 = *(_QWORD *)(v20 + 88);
              v61 = *(WCHAR **)(v20 + 24);
              if ( v61 || v27 )
              {
                if ( v27 )
                {
                  DPIMETRICS = (HFONT *)GetDPIMETRICS(v13);
                  GreSelectFont(v23, *DPIMETRICS);
                  GreSetViewportOrg(v23, 0, 0);
                }
                else
                {
                  v31 = (HFONT *)GetDPIMetrics();
                  GreSelectFont(v23, *v31);
                  GreSetViewportOrg(v23, *(_DWORD *)(*(_QWORD *)v20 + 64LL), *(_DWORD *)(*(_QWORD *)v20 + 68LL));
                }
                if ( v3 && (*(_DWORD *)(*(_QWORD *)v20 + 4LL) & 0x100) != 0 )
                  v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v30, v29) + 19872) + 4904LL);
                else
                  v32 = v18;
                GreSelectBrush(v23, v32);
                if ( v27 )
                {
                  xxxSendMenuDrawItemMessage((__int64)v23, 1, v56, (struct tagMENU ***)v20, 0, 0, 0LL);
                }
                else
                {
                  v33 = (_DWORD *)GetDPIMetrics();
                  v34 = *(_DWORD **)v20;
                  v35 = v33[5];
                  if ( *(_DWORD *)(*(_QWORD *)v20 + 76LL) - v33[3] - v35 != 1 )
                    v35 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v20 + 76LL) - v33[3] - v35 - 1) >> 1;
                  v36 = v33[2];
                  if ( (*v34 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(v23, v61, v34[12], &v62);
                    v37 = (__int64)v57;
                    if ( !v57 )
                      v37 = (__int64)*v56[0];
                    if ( !MNIspItemValid(v37, v20) || v64 != *(_QWORD *)(v20 + 88) )
                      break;
                    v38 = *(_DWORD *)(*(_QWORD *)v20 + 72LL);
                    v36 = v38 - *(__int16 *)(GetOemBitmapInfo(0x3Fu) + 4) - v62 + v36 - 2;
                  }
                  if ( (unsigned int)CALL_LPK(v63) )
                  {
                    v41 = *(_DWORD **)(W32GetUserSessionState(v40, v39) + 19872);
                    if ( v58 )
                    {
                      v42 = v41[1149];
                    }
                    else if ( v16 )
                    {
                      v42 = v41[1172];
                    }
                    else
                    {
                      v42 = v41[1146];
                    }
                    v43 = GreSetTextColor(v23, v42);
                    xxxPSMTextOut(v23, *(_DWORD *)(*(_QWORD *)v20 + 48LL), 0x200000);
                    v44 = (__int64)v57;
                    if ( !v57 )
                      v44 = (__int64)*v56[0];
                    if ( !MNIspItemValid(v44, v20) || v64 != *(_QWORD *)(v20 + 88) )
                      break;
                    GreSetTextColor(v23, v43);
                  }
                  else
                  {
                    v68 = 0LL;
                    v45 = *(_QWORD *)v20;
                    *(_OWORD *)BugCheckParameter2 = 0LL;
                    v66 = -1LL;
                    v46 = *(_DWORD *)(v45 + 48);
                    if ( v46 < 0xFF )
                    {
                      v49 = &v69;
                    }
                    else
                    {
                      v47 = Win32AllocPoolZInit(2LL * (v46 + 1), 1953657685LL);
                      v49 = (char *)v47;
                      if ( !v47 )
                      {
                        if ( v66 != -1 )
                          PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v48);
                        break;
                      }
                      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
                        BugCheckParameter2,
                        v47,
                        (__int64)Win32FreePool);
                    }
                    PrefixCount = GetPrefixCount(
                                    (__int16 *)v61,
                                    *(_DWORD *)(*(_QWORD *)v20 + 48LL),
                                    (__int64)v49,
                                    *(_DWORD *)(*(_QWORD *)v20 + 48LL));
                    xxxDrawItemUnderline(v56, v20, v23, v36, v35, v49, PrefixCount);
                    if ( v66 != -1 )
                      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v51);
                  }
                  v3 = v58;
                }
              }
              v52 = (__int64)v57;
              v53 = ++v59;
              if ( !v57 )
                v52 = (__int64)*v56[0];
              v54 = MNGetpItemFromIndex(v52, v53);
              v18 = v60;
              v20 = v54;
            }
            _ReleaseDC(v23);
            Win32HMThreadLockAlwaysMenuNoModify::~Win32HMThreadLockAlwaysMenuNoModify((Win32HMThreadLockAlwaysMenuNoModify *)v67);
          }
        }
      }
    }
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v56, v9);
}

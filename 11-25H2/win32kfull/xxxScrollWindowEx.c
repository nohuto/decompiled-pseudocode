/*
 * XREFs of xxxScrollWindowEx @ 0x140260308
 * Callers:
 *     NtUserScrollWindowEx @ 0x14029D9F0 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1402C0490 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1402E23B4 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     MirrorRegion @ 0x14004E3F4 (MirrorRegion.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     zzzInternalHideCaret @ 0x140052D7C (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x140053124 (zzzInternalShowCaret.c)
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     OffsetChildren @ 0x14005B830 (OffsetChildren.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     UnionRect @ 0x1401524B8 (UnionRect.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140156C38 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     GetDCOrgOnScreen @ 0x140157CA0 (GetDCOrgOnScreen.c)
 *     GreLPtoDP @ 0x14015850C (GreLPtoDP.c)
 *     GreDPtoLP @ 0x140158574 (GreDPtoLP.c)
 *     _IsDescendant @ 0x14017FA7C (_IsDescendant.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        __int64 a2,
        LONG a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned __int64 a6,
        struct tagRECT *a7,
        __int16 a8)
{
  int v10; // r12d
  __int64 v11; // rsi
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 left; // rcx
  struct tagRECT *v16; // r8
  __int16 v17; // r13
  int v18; // edi
  __int64 UserSessionState; // rax
  struct tagWND *v20; // rcx
  __int64 v21; // rdx
  int v22; // edi
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 DCEx; // rax
  HDC v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct tagRECT *v30; // rdx
  int v31; // r15d
  unsigned int v32; // r8d
  int v33; // r12d
  int v34; // edi
  HDC v35; // rdi
  bool v36; // zf
  int v37; // eax
  struct tagRECT *v38; // r8
  __int64 v39; // rdx
  int v40; // edx
  LONG v41; // eax
  LONG v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  struct tagRECT *v46; // rdi
  __int128 v47; // xmm0
  int v48; // r8d
  __int64 v49; // rax
  int v50; // ecx
  int v51; // edx
  int v52; // edx
  int v53; // ecx
  __int64 v54; // rax
  int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 DesktopWindow; // rax
  __int64 v66; // rdx
  int v67; // ecx
  __int64 v68; // rcx
  int v69; // edx
  int v70; // r8d
  __int64 v71; // rdx
  __int64 i; // rdi
  __int64 v73; // rsi
  int v74; // r9d
  int v75; // eax
  __int64 v76; // rdx
  int v78; // [rsp+50h] [rbp-B0h]
  int v79; // [rsp+54h] [rbp-ACh]
  int v80; // [rsp+54h] [rbp-ACh]
  int v82; // [rsp+5Ch] [rbp-A4h]
  int v83; // [rsp+60h] [rbp-A0h]
  HRGN v84; // [rsp+68h] [rbp-98h]
  HDC v86; // [rsp+78h] [rbp-88h]
  HDC v87; // [rsp+78h] [rbp-88h]
  struct tagPOINT v88[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  int v90; // [rsp+98h] [rbp-68h]
  struct tagRECT *v91; // [rsp+A0h] [rbp-60h]
  struct tagRECT *v92; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v93[2]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT *v95[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct tagPOINT v96[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct tagPOINT v97[2]; // [rsp+F0h] [rbp-10h] BYREF

  BugCheckParameter3[0] = -1LL;
  v95[0] = a5;
  v92 = a7;
  v10 = a2;
  v11 = 0LL;
  v82 = a2;
  v91 = a4;
  v84 = (HRGN)a6;
  *(_OWORD *)&v96[0].x = 0LL;
  v78 = 0;
  *(_OWORD *)&v97[0].x = 0LL;
  v89 = 0LL;
  BugCheckParameter3[1] = 0LL;
  v79 = 0;
  v12 = PtiCurrent(0LL, a2);
  v86 = (HDC)v12;
  v14 = 1;
  if ( !a1 )
  {
    v79 = 1;
    v13 = *(_QWORD *)(*((_QWORD *)v12 + 62) + 8LL);
    a1 = *(struct tagWND **)(v13 + 24);
  }
  left = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(left + 26) & 0x40) != 0 )
  {
    v10 = -v10;
    v82 = v10;
    MirrorRegion((__int64)a1, a6, 1);
    if ( a4 )
    {
      left = (unsigned int)a4->left;
      v13 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL) - left);
      a4->left = *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL) - a4->right;
      a4->right = v13;
    }
    v16 = v95[0];
    if ( v95[0] )
    {
      left = (unsigned int)v95[0]->left;
      v13 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL) - left);
      v95[0]->left = *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL) - v95[0]->right;
      v16->right = v13;
    }
  }
  if ( !(v10 | a3) )
    goto LABEL_15;
  if ( (unsigned int)IsVisible((__int64)a1) )
  {
    v17 = a8;
    v18 = 0;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_15:
    v17 = a8;
  }
  else
  {
    v17 = a8;
    if ( (a8 & 1) != 0 && !a4 )
    {
      v18 = 1;
      v78 = 1;
      v17 = a8 & 0xFFFD;
      goto LABEL_17;
    }
  }
  v18 = 0;
LABEL_17:
  if ( a6 )
    SetEmptyRgn(a6);
  if ( v92 )
    *v92 = 0LL;
  if ( v18 )
  {
LABEL_22:
    UserSessionState = W32GetUserSessionState(left, v13);
    v93[1] = 0LL;
    LOBYTE(v93[0]) = 0;
    ++*(_DWORD *)(UserSessionState + 70600);
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v93);
    v83 = 0;
    if ( v79 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)a1);
    if ( !v18 )
    {
      v11 = *((_QWORD *)v86 + 59) + 320LL;
      v20 = *(struct tagWND **)v11;
      if ( *(_QWORD *)v11 )
      {
        if ( (unsigned int)IsDescendant((__int64)v20, (__int64)a1) )
        {
          v83 = 1;
          zzzInternalHideCaret((__int64)v20, v21);
        }
      }
    }
    v90 = v17 & 1;
    if ( v17 < 0 )
    {
      v20 = *(struct tagWND **)(*((_QWORD *)a1 + 17) + 8LL);
      v22 = (*((_BYTE *)v20 + 8) & 0x60) != 0 ? 0x10000 : 65538;
      if ( (v17 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
        v22 = 589826;
    }
    else
    {
      v23 = 65538;
      if ( (v17 & 1) != 0 )
        v23 = 589826;
      v22 = v23;
    }
    v24 = W32GetUserSessionState(v20, v17 & 1);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v24 + 56968) + 48LL));
    v25 = v22 | 0x40000000;
    DCEx = _GetDCEx(a1, 0LL, v25);
    v87 = (HDC)DCEx;
    v27 = (HDC)DCEx;
    if ( (v17 & 2) != 0 )
    {
      GetDCOrgOnScreen(DCEx, &v89);
      if ( !a6 )
        v84 = *(HRGN *)(W32GetUserSessionState(v29, v28) + 43104);
    }
    if ( !a4 )
    {
      v91 = (struct tagRECT *)v97;
      GetRect((__int64)a1, (__int64)v97, 17);
      if ( (v25 & 2) == 0 )
        GreDPtoLP(v27, v97);
    }
    v30 = v91;
    v31 = v10;
    v32 = a3;
    v33 = a3;
    *(struct tagRECT *)&v96[0].x = *v91;
    v34 = v25 & 2;
    if ( !v34 )
    {
      GreLPtoDP(v87, v96);
      v88[0].y = 0;
      v88[0].x = 0;
      v88[1].x = v82;
      v88[1].y = a3;
      GreLPtoDP(v87, v88);
      v31 = v88[1].x - v88[0].x;
      v33 = v88[1].y - v88[0].y;
      v30 = v91;
      v32 = a3;
    }
    if ( v78 )
    {
      v35 = v87;
      v80 = 1;
    }
    else
    {
      v36 = v34 == 0;
      v35 = v87;
      v37 = InternalScrollDC(a1, v87, v82, v32, v30, v95[0], *(HRGN *)(*((_QWORD *)a1 + 5) + 136LL), v84, v92, v36);
      v38 = v92;
      v80 = v37;
      if ( v92 )
      {
        v39 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v39 + 26) & 0x40) != 0 )
        {
          v40 = *(_DWORD *)(v39 + 112) - *(_DWORD *)(v39 + 104);
          v41 = v40 - v92->right;
          v42 = v40 - v92->left;
          v92->left = v41;
          v38->right = v42;
        }
      }
    }
    _ReleaseDC(v35);
    v45 = v78;
    if ( v78 )
    {
      v46 = a4;
    }
    else
    {
      v46 = a4;
      v44 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 56968);
      if ( *(_QWORD *)(v44 + 40) )
      {
        if ( a4 )
        {
          if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
          {
            v47 = *(_OWORD *)&v96[0].x;
            *(_OWORD *)&v97[0].x = *(_OWORD *)&v96[0].x;
            v48 = _mm_cvtsi128_si32(*(__m128i *)&v96[0].x);
          }
          else
          {
            v49 = *((_QWORD *)a1 + 5);
            v50 = *(_DWORD *)(v49 + 104);
            v48 = v50 + v96[0].x;
            v51 = *(_DWORD *)(v49 + 108);
            v97[1].x = v96[1].x + v50;
            v97[0].x = v50 + v96[0].x;
            v97[0].y = v51 + v96[0].y;
            v97[1].y = v51 + v96[1].y;
            v47 = *(_OWORD *)&v97[0].x;
          }
          LODWORD(v95[1]) = v31 + DWORD2(v47);
          HIDWORD(v95[1]) = v33 + HIDWORD(v47);
          HIDWORD(v95[0]) = v33 + DWORD1(v47);
          LODWORD(v95[0]) = v48 + v31;
          UnionRect(v95, (int *)v95, (int *)v97);
        }
        else
        {
          *(_OWORD *)v95 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
        }
        SpbCheckRect(a1, (struct tagRECT *)v95, 0);
      }
      v45 = 0;
    }
    if ( !v90 )
      goto LABEL_71;
    *(_OWORD *)v95 = 0LL;
    if ( !v45 && a1 == *(struct tagWND **)v11 )
    {
      if ( v46 )
      {
        v52 = *(_DWORD *)(v11 + 24);
        LODWORD(v95[0]) = *(_DWORD *)(v11 + 20);
        LODWORD(v95[1]) = *(_DWORD *)(v11 + 32) + LODWORD(v95[0]);
        v53 = *(_DWORD *)(v11 + 28);
        HIDWORD(v95[0]) = v52;
        HIDWORD(v95[1]) = v52 + v53;
        if ( !(unsigned int)IntersectRect(v95, (int *)v95, (int *)v96) )
        {
LABEL_66:
          if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
          {
            *(_OWORD *)v95 = *(_OWORD *)&v96[0].x;
          }
          else
          {
            v54 = *((_QWORD *)a1 + 5);
            v43 = *(unsigned int *)(v54 + 104);
            v55 = *(_DWORD *)(v54 + 108);
            LODWORD(v95[0]) = v43 + v96[0].x;
            LODWORD(v95[1]) = v43 + v96[1].x;
            HIDWORD(v95[0]) = v55 + v96[0].y;
            v44 = (unsigned int)(v55 + v96[1].y);
            HIDWORD(v95[1]) = v55 + v96[1].y;
          }
LABEL_69:
          if ( *((_QWORD *)a1 + 14) )
          {
            OffsetChildren(a1, v31, v33, (int *)((unsigned __int64)v95 & -(__int64)(v46 != 0LL)));
            zzzLockDisplayAreaAndInvalidateDCCache(
              (ULONG_PTR)a1,
              (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 ? 4 : 2,
              0LL);
          }
LABEL_71:
          if ( (v17 & 2) != 0 )
          {
            if ( v84 != *(HRGN *)(W32GetUserSessionState(v44, v43) + 43104) )
            {
              v58 = W32GetUserSessionState(v57, v56);
              GreCombineRgn(*(_QWORD *)(v58 + 43104), v84, 0LL, 5LL);
            }
            v59 = W32GetUserSessionState(v57, v56);
            GreOffsetRgn(*(_QWORD *)(v59 + 43104), (unsigned int)v89, HIDWORD(v89));
            v62 = W32GetUserSessionState(v61, v60);
            xxxInternalInvalidate(a1, *(HRGN *)(v62 + 43104), v17 & 4 | 0x81);
          }
          v63 = W32GetUserSessionState(v44, v43);
          GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v63 + 56968) + 48LL));
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v93);
          zzzEndDeferWinEventNotify();
          if ( (v17 & 1) != 0 )
          {
            *(_OWORD *)&v88[0].x = 0LL;
            *(_OWORD *)v95 = 0LL;
            if ( v46 )
            {
              DesktopWindow = GetDesktopWindow((__int64)a1);
              if ( v66 == DesktopWindow )
              {
                LODWORD(v95[0]) = v31 + v96[0].x;
                LODWORD(v95[1]) = v31 + v96[1].x;
                HIDWORD(v95[0]) = v33 + v96[0].y;
                v67 = v33 + v96[1].y;
              }
              else
              {
                v68 = *(_QWORD *)(v66 + 40);
                v69 = v31 + *(_DWORD *)(v68 + 104);
                v70 = v33 + *(_DWORD *)(v68 + 108);
                LODWORD(v95[0]) = v69 + v96[0].x;
                LODWORD(v95[1]) = v69 + v96[1].x;
                HIDWORD(v95[0]) = v70 + v96[0].y;
                v67 = v70 + v96[1].y;
              }
              HIDWORD(v95[1]) = v67;
            }
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v93, 0LL);
            for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
            {
              v73 = i + 40;
              if ( !a4 || (unsigned int)IntersectRect(v88, (int *)v95, (int *)(*(_QWORD *)v73 + 88LL)) )
              {
                Win32HM_ExchangeThreadLock<1>(i, (__int64)v93);
                if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
                {
                  v74 = *(unsigned __int16 *)(*(_QWORD *)v73 + 108LL);
                  v75 = *(unsigned __int16 *)(*(_QWORD *)v73 + 104LL);
                }
                else
                {
                  v76 = *((_QWORD *)a1 + 5);
                  v74 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)v73 + 108LL) - *(_WORD *)(v76 + 108));
                  v75 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)v73 + 104LL) - *(_WORD *)(v76 + 104));
                }
                xxxSendTransformableMessageTimeout(
                  (struct tagTHREADINFO **)i,
                  3LL,
                  0LL,
                  (struct tagDRAWITEMSTRUCT *)(v75 | (v74 << 16)),
                  0,
                  0,
                  0LL,
                  1,
                  0);
              }
            }
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v93, v71);
          }
          if ( v83 )
            zzzInternalShowCaret(v64, v13);
          v14 = v80;
          goto LABEL_94;
        }
      }
      *(_DWORD *)(v11 + 20) += v31;
      *(_DWORD *)(v11 + 24) += v33;
    }
    if ( !v46 )
      goto LABEL_69;
    goto LABEL_66;
  }
LABEL_94:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v13);
  return v14;
}

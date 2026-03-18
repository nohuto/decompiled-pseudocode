/*
 * XREFs of xxxArrangeIconicWindows @ 0x1402EB4A4
 * Callers:
 *     NtUserArrangeIconicWindows @ 0x140247FC0 (NtUserArrangeIconicWindows.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     InternalGetRealClientRect @ 0x1400431B4 (InternalGetRealClientRect.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x14004E1DC (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     _ScreenToClient @ 0x1401E0CA4 (_ScreenToClient.c)
 */

__int64 __fastcall xxxArrangeIconicWindows(__int64 a1)
{
  struct tagWND *v2; // rcx
  struct tagBWL *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // r12d
  __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 UserSessionState; // rax
  _DWORD *Prop; // rax
  _DWORD *v19; // rbx
  int v20; // edx
  int v21; // edi
  int v22; // r14d
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // r12
  int v39; // esi
  __int64 *v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 *v43; // rbx
  __int64 v44; // rax
  ULONG_PTR v45; // rdi
  int v46; // esi
  int v47; // r14d
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  bool v55; // cc
  bool v56; // cc
  bool v57; // cc
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 *v60; // r12
  __int64 *v61; // rbx
  __int64 v62; // rax
  int v63; // r12d
  int v64; // r13d
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  struct tagSMWP *v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // r14
  __int64 v74; // rax
  int *v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // ebx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v84; // [rsp+50h] [rbp-39h]
  int v85; // [rsp+60h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-21h] BYREF
  int v87; // [rsp+78h] [rbp-11h]
  int v88; // [rsp+7Ch] [rbp-Dh]
  int v89; // [rsp+80h] [rbp-9h]
  int v90; // [rsp+84h] [rbp-5h]
  __int64 *v91; // [rsp+88h] [rbp-1h]
  __int64 v92; // [rsp+90h] [rbp+7h]
  struct tagBWL *v93; // [rsp+98h] [rbp+Fh]
  char v94; // [rsp+F0h] [rbp+67h]
  unsigned __int16 v95; // [rsp+F8h] [rbp+6Fh]
  int v96; // [rsp+100h] [rbp+77h]
  int v97; // [rsp+108h] [rbp+7Fh]

  v2 = *(struct tagWND **)(a1 + 112);
  v95 = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v88 = 0;
  v89 = 0;
  v97 = 0;
  v85 = 0;
  v90 = 0;
  v87 = 0;
  v96 = 0;
  v93 = BuildHwndList(v2, 2LL, 0LL, 1);
  v3 = v93;
  if ( !v93 )
    return 0LL;
  v94 = IsTrayWindow(*(_QWORD **)(a1 + 112), 1LL);
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
  v7 = *(_DWORD *)(v6 + 2084);
  v9 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v8) + 19872) + 2088LL);
  InternalGetRealClientRect(a1, (__int64)BugCheckParameter3, 1, 0LL, 1);
  v91 = (__int64 *)((char *)v3 + 32);
  v11 = (_QWORD *)((char *)v3 + 32);
  v12 = *((_QWORD *)v3 + 4);
  if ( v12 == 1 )
  {
LABEL_119:
    FreeHwndList(v3, v10);
    return 0LL;
  }
  v13 = HIDWORD(BugCheckParameter3[1]);
  do
  {
    LOBYTE(v10) = 1;
    v14 = HMValidateHandleNoSecure(v12, v10);
    v16 = v14;
    if ( !v14 )
      goto LABEL_9;
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_9;
    UserSessionState = W32GetUserSessionState(v15, v10);
    Prop = (_DWORD *)GetProp(v16, *(unsigned __int16 *)(UserSessionState + 41334), 1u);
    v19 = Prop;
    if ( !Prop )
      goto LABEL_9;
    v20 = Prop[4];
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 0x20) == 0 )
    {
      v10 = v20 & 0xFFFFFFEF;
      Prop[4] = v10;
      Prop[1] = -1;
      *Prop = -1;
LABEL_9:
      *v11 = 0LL;
LABEL_10:
      v21 = BugCheckParameter3[1];
      goto LABEL_11;
    }
    ++v95;
    Prop[4] = v20 & 0xFFFFFFFE;
    *Prop = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
    Prop[1] = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 92LL);
    ScreenToClient(a1, Prop);
    v15 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19872);
    if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) < 2 )
    {
      v15 = (unsigned int)(v13 + v9 / 2 - v19[1]);
      v10 = (unsigned int)((v13 + v9 / 2 - v19[1]) % v9 - (v9 / 2 - v19[1]));
      v19[1] = v10;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) == 2 || (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) == 3 )
    {
      v15 = 2LL;
      v10 = (unsigned int)((v19[1] + v9 / 2) >> 31);
      LODWORD(v10) = (v19[1] + v9 / 2) % v9;
      v19[1] = v19[1] + v9 / 2 - v10;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) == 4 )
      goto LABEL_23;
    if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) != 5 )
    {
      v10 = (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) - 6;
      if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) == 6 )
      {
LABEL_23:
        v15 = 2LL;
        v10 = (unsigned int)((*v19 + v7 / 2) >> 31);
        LODWORD(v10) = (*v19 + v7 / 2) % v7;
        *v19 = *v19 + v7 / 2 - v10;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) != 7 )
        goto LABEL_10;
    }
    v21 = BugCheckParameter3[1];
    v15 = (unsigned int)(v7 / 2 - *v19 + LODWORD(BugCheckParameter3[1]));
    v10 = (unsigned int)((v7 / 2 - *v19 + LODWORD(BugCheckParameter3[1])) % v7 - (v7 / 2 - *v19));
    *v19 = v10;
LABEL_11:
    v12 = *++v11;
  }
  while ( *v11 != 1LL );
  if ( !v95 )
  {
    v3 = v93;
    goto LABEL_119;
  }
  if ( v94 )
  {
    v22 = -32000;
    v84 = 0xFFFF8300FFFF8300uLL;
    v23 = -32000;
    goto LABEL_93;
  }
  v27 = *(_QWORD *)(W32GetUserSessionState(v15, v10) + 19872);
  if ( (*(_DWORD *)(v27 + 2120) & 1) != 0 )
  {
    v88 = v21 - v7;
    v97 = -v7;
    v22 = v21 - v7;
    LODWORD(v84) = v21 - v7;
  }
  else
  {
    v28 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 19872);
    v97 = v7;
    v27 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 19872);
    v88 = LODWORD(BugCheckParameter3[0]) + *(_DWORD *)(v28 + 2084) - *(_DWORD *)(v27 + 2124);
    v22 = v88;
    LODWORD(v84) = v88;
  }
  v31 = W32GetUserSessionState(v27, v26);
  v33 = 2LL;
  if ( (*(_DWORD *)(*(_QWORD *)(v31 + 19872) + 2120LL) & 2) != 0 )
  {
    v34 = *(_QWORD *)(W32GetUserSessionState(2LL, v32) + 19872);
    v85 = v9;
    v33 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 19872);
    v89 = HIDWORD(BugCheckParameter3[0]) + *(_DWORD *)(v34 + 2088) - *(_DWORD *)(v33 + 2128);
    v23 = v89;
    HIDWORD(v84) = v89;
  }
  else
  {
    v85 = -v9;
    v23 = v13 - v9;
    v89 = v23;
    HIDWORD(v84) = v23;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 19872) + 2120LL) & 4) != 0 )
  {
    v10 = (unsigned int)(SHIDWORD(BugCheckParameter3[1]) >> 31);
    v96 = 0;
    LODWORD(v10) = SHIDWORD(BugCheckParameter3[1]) % v9;
    v37 = SHIDWORD(BugCheckParameter3[1]) / v9;
  }
  else
  {
    v96 = 1;
    v10 = (unsigned int)(v21 >> 31);
    LODWORD(v10) = v21 % v7;
    v37 = v21 / v7;
  }
  v38 = v91;
  v39 = v37;
  v40 = v91;
  if ( v37 < 1 )
    v39 = 1;
  v41 = *v91;
  v87 = v39;
  v90 = v39;
  if ( v41 != 1 )
  {
    while ( 1 )
    {
      if ( !v41 )
        goto LABEL_91;
      LOBYTE(v10) = 1;
      v92 = HMValidateHandleNoSecure(v41, v10);
      v43 = (__int64 *)v92;
      if ( !v92 )
        goto LABEL_91;
      v44 = W32GetUserSessionState(v42, v10);
      v45 = *(_QWORD *)GetProp((__int64)v43, *(unsigned __int16 *)(v44 + 41334), 1u);
      BugCheckParameter3[0] = v45;
      if ( v38 >= v40 )
        goto LABEL_89;
      v46 = HIDWORD(BugCheckParameter3[0]);
      v47 = 0;
      do
      {
        if ( !*v38 )
          goto LABEL_82;
        LOBYTE(v10) = 1;
        v49 = HMValidateHandleNoSecure(*v38, v10);
        if ( !v49 )
          goto LABEL_82;
        v50 = W32GetUserSessionState(v48, v10);
        v51 = *(_QWORD *)GetProp(v49, *(unsigned __int16 *)(v50 + 41334), 1u);
        v54 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19872);
        v10 = *(_DWORD *)(v54 + 2120) & 0xFFFFFFF7;
        if ( (*(_DWORD *)(v54 + 2120) & 0xFFFFFFF7) == 0 )
        {
          v55 = SHIDWORD(v51) < v46;
          if ( HIDWORD(v51) == v46 )
          {
            if ( (int)v51 > (int)v45 )
              break;
            v55 = SHIDWORD(v51) < v46;
          }
LABEL_80:
          if ( v55 )
            break;
          goto LABEL_81;
        }
        v10 = (unsigned int)(v10 - 1);
        if ( (_DWORD)v10 )
        {
          v10 = (unsigned int)(v10 - 1);
          if ( !(_DWORD)v10 )
          {
            v56 = SHIDWORD(v51) <= v46;
            if ( HIDWORD(v51) != v46 )
              goto LABEL_64;
            if ( (int)v51 > (int)v45 )
              goto LABEL_65;
            goto LABEL_71;
          }
          v10 = (unsigned int)(v10 - 1);
          if ( !(_DWORD)v10 )
          {
            v56 = SHIDWORD(v51) <= v46;
            if ( HIDWORD(v51) != v46 )
              goto LABEL_64;
            if ( (int)v51 < (int)v45 )
              goto LABEL_65;
LABEL_71:
            v56 = SHIDWORD(v51) <= v46;
            goto LABEL_64;
          }
          v10 = (unsigned int)(v10 - 1);
          if ( !(_DWORD)v10 )
          {
            v56 = (int)v51 <= (int)v45;
            if ( (_DWORD)v51 == (_DWORD)v45 )
            {
              if ( SHIDWORD(v51) >= v46 )
                goto LABEL_63;
              goto LABEL_65;
            }
            goto LABEL_64;
          }
          v10 = (unsigned int)(v10 - 1);
          if ( (_DWORD)v10 )
          {
            v10 = (unsigned int)(v10 - 1);
            if ( !(_DWORD)v10 )
            {
              v56 = (int)v51 <= (int)v45;
              if ( (_DWORD)v51 == (_DWORD)v45 )
              {
                if ( SHIDWORD(v51) <= v46 )
                {
LABEL_63:
                  v56 = (int)v51 <= (int)v45;
                  goto LABEL_64;
                }
LABEL_65:
                v47 = 1;
                goto LABEL_81;
              }
LABEL_64:
              if ( v56 )
                goto LABEL_81;
              goto LABEL_65;
            }
            if ( (_DWORD)v10 != 1 )
              goto LABEL_81;
            v55 = (int)v51 < (int)v45;
            if ( (_DWORD)v51 == (_DWORD)v45 )
            {
              if ( SHIDWORD(v51) > v46 )
                break;
              v55 = (int)v51 < (int)v45;
            }
            goto LABEL_80;
          }
          v57 = (int)v51 < (int)v45;
          if ( (_DWORD)v51 == (_DWORD)v45 )
          {
            if ( SHIDWORD(v51) < v46 )
              goto LABEL_65;
            v57 = (int)v51 < (int)v45;
          }
        }
        else
        {
          v57 = SHIDWORD(v51) < v46;
          if ( HIDWORD(v51) == v46 )
          {
            if ( (int)v51 < (int)v45 )
              goto LABEL_65;
            v57 = SHIDWORD(v51) < v46;
          }
        }
        if ( v57 )
          goto LABEL_65;
LABEL_81:
        if ( v47 )
          break;
LABEL_82:
        ++v38;
      }
      while ( v38 < v40 );
      v43 = (__int64 *)v92;
      if ( v38 < v40 )
      {
        do
        {
          v10 = _HMObjectFromHandle(*v38);
          v58 = 0LL;
          if ( v43 )
            v58 = *v43;
          *v38++ = v58;
          v43 = (__int64 *)v10;
        }
        while ( v38 < v40 );
        if ( !v10 )
        {
          v59 = 0LL;
          goto LABEL_90;
        }
      }
LABEL_89:
      v59 = *v43;
LABEL_90:
      v38 = v91;
      *v40 = v59;
LABEL_91:
      v41 = *++v40;
      if ( *v40 == 1 )
      {
        v22 = v84;
        v23 = HIDWORD(v84);
LABEL_93:
        v39 = v87;
        break;
      }
    }
  }
  v60 = v91;
  v61 = v91;
  v62 = *v91;
  if ( *v91 == 1 )
    goto LABEL_110;
  v63 = v88;
  v64 = v89;
  while ( 2 )
  {
    if ( v62 )
    {
      LOBYTE(v10) = 1;
      v66 = HMValidateHandleNoSecure(v62, v10);
      if ( v66 )
      {
        v67 = W32GetUserSessionState(v65, v10);
        v68 = GetProp(v66, *(unsigned __int16 *)(v67 + 41334), 1u);
        if ( v68 )
        {
          *(_DWORD *)(v68 + 16) |= 0x10u;
          *(_QWORD *)v68 = v84;
        }
        if ( !v94 )
        {
          if ( --v39 > 0 )
          {
            if ( v96 )
            {
              v22 += v97;
              LODWORD(v84) = v22;
            }
            else
            {
LABEL_104:
              v23 += v85;
              HIDWORD(v84) = v23;
            }
          }
          else
          {
            v39 = v90;
            if ( v96 )
            {
              v22 = v63;
              LODWORD(v84) = v63;
              goto LABEL_104;
            }
            v22 += v97;
            v23 = v64;
            v84 = __PAIR64__(v64, v22);
          }
        }
      }
    }
    v62 = *++v61;
    if ( *v61 != 1 )
      continue;
    break;
  }
  v60 = v91;
LABEL_110:
  v70 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v95, v10);
  if ( v70 )
  {
    v71 = *v60;
    if ( *v60 == 1 )
    {
LABEL_116:
      xxxEndDeferWindowPosEx(v70, 1LL);
    }
    else
    {
      while ( 1 )
      {
        if ( v71 )
        {
          LOBYTE(v69) = 1;
          v73 = HMValidateHandleNoSecure(v71, v69);
          if ( v73 )
          {
            v74 = W32GetUserSessionState(v72, v69);
            v75 = (int *)GetProp(v73, *(unsigned __int16 *)(v74 + 41334), 1u);
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v73);
            v78 = *(_QWORD *)(W32GetUserSessionState(v77, v76) + 19872);
            v79 = *(_DWORD *)(v78 + 2128);
            v81 = W32GetUserSessionState(v78, v80);
            v70 = (struct tagSMWP *)_DeferWindowPos(
                                      (__int64)v70,
                                      v73,
                                      0LL,
                                      *v75,
                                      v75[1],
                                      *(_DWORD *)(*(_QWORD *)(v81 + 19872) + 2124LL),
                                      v79,
                                      276,
                                      0);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v82);
            if ( !v70 )
              break;
          }
        }
        v71 = *++v60;
        if ( *v60 == 1 )
          goto LABEL_116;
      }
    }
  }
  FreeHwndList(v93, v69);
  return v95;
}

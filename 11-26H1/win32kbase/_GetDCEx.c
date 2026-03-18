/*
 * XREFs of _GetDCEx @ 0x140036140
 * Callers:
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     UserGetMonitorDC @ 0x140035F78 (UserGetMonitorDC.c)
 *     _GetDC @ 0x1400360E0 (_GetDC.c)
 * Callees:
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreIsRendering @ 0x1400196C0 (GreIsRendering.c)
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreOffsetRgn @ 0x1400208C0 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x14003AEDC (IsGreSelectRedirectionBitmapSupported.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CreateEmptyRgnPublic @ 0x140081A30 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x140081BD0 (CreateCacheDC.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081E98 (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x140081F10 (GreSetDCOwnerEx.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081F70 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081FE4 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreGetStockObject @ 0x140084170 (GreGetStockObject.c)
 *     GreGetBounds @ 0x1400FCD60 (GreGetBounds.c)
 *     UpdateDCEInUseCount @ 0x1401028C8 (UpdateDCEInUseCount.c)
 *     GreHintDCWnd @ 0x14011769C (GreHintDCWnd.c)
 *     CalcVisRgn @ 0x140119088 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x140120CC4 (GetLayeredOrRedirectedParent.c)
 *     IsGetLayeredOrRedirectedParentSupported @ 0x1401224B0 (IsGetLayeredOrRedirectedParentSupported.c)
 *     IsGreHintDCWndSupported @ 0x1401270C0 (IsGreHintDCWndSupported.c)
 *     GreSelectRedirectionBitmap @ 0x14012A6F0 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x14012B1A0 (GetRedirectionBitmap.c)
 *     IsCalcVisRgnSupported @ 0x14012B1DC (IsCalcVisRgnSupported.c)
 *     IsGetRedirectionBitmapSupported @ 0x14012D418 (IsGetRedirectionBitmapSupported.c)
 *     GreSelectFont @ 0x14013C72C (GreSelectFont.c)
 *     GreSetLayout @ 0x140140EE0 (GreSetLayout.c)
 *     DeleteHrgnClip @ 0x1401492A0 (DeleteHrgnClip.c)
 *     IsDeleteHrgnClipSupported @ 0x140149B7C (IsDeleteHrgnClipSupported.c)
 *     GreReferenceObjectCheckOwner @ 0x140154080 (GreReferenceObjectCheckOwner.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14015C7BC (FlushWEFCOMPOSITEDDCEBounds.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x14015E2B0 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 *     DelayedDestroyCacheDC @ 0x1401867E4 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetDCEx(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  struct tagWND *v5; // r14
  __int64 SessionState; // rax
  struct tagWND *v7; // rbx
  __int64 v8; // rbp
  struct tagWND *i; // rcx
  __int64 v10; // rdx
  char v11; // al
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  _QWORD *v16; // r9
  char v17; // cl
  unsigned int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rcx
  char v21; // dl
  struct tagWND *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 LayeredOrRedirectedParent; // rax
  struct tagWND *v27; // rdi
  __int64 RedirectionBitmap; // rax
  HRGN EmptyRgnPublic; // rax
  HRGN v30; // rdx
  unsigned int v31; // r15d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *j; // rdi
  struct tagWND *v36; // rbp
  __int64 v37; // rcx
  int v38; // r13d
  __int64 v39; // rdx
  __int64 **v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *k; // rbx
  int v51; // eax
  __int64 v52; // rcx
  bool v53; // zf
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 UserSessionState; // rax
  struct HOBJ__ *RectRgnIndirect; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  HRGN v66; // rbx
  __int64 v67; // rax
  int v68; // r9d
  HRGN v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  struct HOBJ__ *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  int (*v82)(void); // rax
  __int64 StockObject; // rax
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v93; // rax
  int v94; // [rsp+30h] [rbp-78h]
  int v95; // [rsp+34h] [rbp-74h]
  struct tagWND *v96; // [rsp+38h] [rbp-70h]
  HRGN v97; // [rsp+40h] [rbp-68h] BYREF
  __int64 v98; // [rsp+48h] [rbp-60h]
  __int128 v99; // [rsp+50h] [rbp-58h] BYREF

  v97 = 0LL;
  v96 = 0LL;
  v5 = a1;
  v98 = 0LL;
  v94 = 0;
  v95 = 0;
  SessionState = W32GetSessionState(a1);
  GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
  if ( !v5 )
    v5 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent() + 61) + 8LL) + 24LL);
  v7 = v5;
  v8 = 0LL;
  *(_QWORD *)&v99 = v5;
  for ( i = v5; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
  {
    v10 = *((_QWORD *)i + 5);
    v11 = *(_BYTE *)(v10 + 31);
    if ( (v11 & 0x10) == 0 || (v11 & 0x20) != 0 && i != v5 )
    {
      v12 = 0;
      goto LABEL_12;
    }
    if ( (*(_WORD *)(v10 + 42) & 0x2FFF) == 0x29D )
      break;
  }
  v12 = 1;
LABEL_12:
  v13 = ((__int64 (*)(void))PsGetCurrentProcessWin32Process)();
  if ( v13 )
  {
    v14 = -*(_QWORD *)v13;
    v13 &= -(__int64)(*(_QWORD *)v13 != 0LL);
  }
  if ( (*(_DWORD *)(v13 + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0LL);
  if ( (a3 & 0x10000) != 0 )
  {
    v15 = a3 & 0xFFFFFFC7;
    if ( (a3 & 1) != 0 )
    {
      a3 = v15 | 0x10;
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 4) == 0 )
        a3 = v15;
    }
    else
    {
      v16 = (_QWORD *)*((_QWORD *)v5 + 17);
      v17 = *(_BYTE *)(v16[1] + 8LL);
      v18 = v15 | 0x20;
      if ( v17 >= 0 )
        v18 = a3 & 0xFFFFFFC7;
      v19 = v18;
      if ( (v18 & 2) == 0 && (v17 & 0x20) == 0 )
      {
        if ( (v17 & 0x40) != 0 )
        {
          v20 = v16[5];
          if ( v20 )
            v8 = *(_QWORD *)(v20 + 16);
        }
        else
        {
          v19 = v18 | 2;
        }
      }
      v14 = v19 | 8;
      v21 = *(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL);
      if ( (v21 & 2) == 0 )
        v14 = v19;
      a3 = v14 | 0x10;
      if ( (v21 & 4) == 0 )
        a3 = v14;
      if ( (v21 & 0x20) == 0 )
        goto LABEL_36;
      a3 &= ~8u;
      if ( !v16[10] )
        goto LABEL_36;
    }
    a3 |= 2u;
  }
LABEL_36:
  if ( (a3 & 0x80000) != 0 )
    a3 = a3 & 0xFFFFFFD5 | 2;
  if ( (int)IsGetLayeredOrRedirectedParentSupported(v14) >= 0 )
  {
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(v5);
    v27 = (struct tagWND *)LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent )
    {
      v23 = *(_QWORD *)(LayeredOrRedirectedParent + 40);
      if ( (*(_DWORD *)(v23 + 24) & 0x20000000) != 0 )
      {
        if ( (int)IsGetRedirectionBitmapSupported() < 0 )
        {
          v98 = 0LL;
        }
        else
        {
          RedirectionBitmap = GetRedirectionBitmap(v27);
          v98 = RedirectionBitmap;
          if ( RedirectionBitmap )
          {
            v98 = RedirectionBitmap;
LABEL_46:
            a3 |= 0x4000u;
            v96 = v27;
            if ( v5 == v27 && (a3 & 0x20) != 0 )
              a3 = a3 & 0xFFFFFFDD | 2;
            if ( (unsigned __int64)a2 > 2 )
            {
              if ( (a3 & 0x40000) != 0 )
              {
                EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
                v30 = a2;
                a2 = EmptyRgnPublic;
                GreCombineRgn(EmptyRgnPublic, v30, 0LL, 5);
                a3 &= ~0x40000u;
                v7 = v5;
              }
              GreOffsetRgn(a2, -*(_DWORD *)(*((_QWORD *)v27 + 5) + 88LL), -*(_DWORD *)(*((_QWORD *)v27 + 5) + 92LL));
            }
            goto LABEL_53;
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)v27 + 5) + 26LL) & 0x20) == 0 )
          goto LABEL_53;
        goto LABEL_46;
      }
    }
  }
LABEL_53:
  if ( (a3 & 0x20) != 0 )
  {
    v22 = (struct tagWND *)*((_QWORD *)v5 + 13);
    if ( !v22 )
    {
      v23 = *((_QWORD *)PtiCurrent() + 61);
      v22 = *(struct tagWND **)(*(_QWORD *)(v23 + 8) + 24LL);
    }
    a3 |= 2u;
    if ( (a3 & 0x18) == 0 )
    {
      LOBYTE(v24) = *(_BYTE *)(*((_QWORD *)v22 + 5) + 31LL);
      LOBYTE(v23) = *(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) ^ v24;
      if ( (v23 & 0x10) == 0 )
      {
        a3 &= 0xFFFFFFE7;
        *(_QWORD *)&v99 = v22;
        v7 = v22;
        if ( (v24 & 4) != 0 )
          a3 |= 0x10u;
      }
    }
  }
  if ( (a3 & 2) == 0 && (!v5 || *((struct tagTHREADINFO **)v5 + 2) != PtiCurrent()) )
    a3 |= 2u;
  v31 = a3 & 0x8080441F;
  if ( (a3 & 2) != 0 )
  {
    while ( 1 )
    {
      v37 = *(_QWORD *)(W32GetUserSessionState(v23, v22, v24, v25) + 56968);
      for ( j = *(__int64 **)(v37 + 24); ; j = (__int64 *)*j )
      {
        v37 = *(_QWORD *)(W32GetUserSessionState(v37, v32, v33, v34) + 56968) + 24LL;
        if ( j == (__int64 *)v37 )
          break;
        if ( (struct tagWND *)j[11] == v7 )
        {
          v36 = v96;
          if ( (struct tagWND *)j[12] == v96 && !j[9] && !(unsigned int)GreIsRendering(j[2]) )
          {
            v32 = *((unsigned int *)j + 12);
            if ( v31 == (j[6] & 0x80C05C1F)
              && ((*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x20) == 0 || j[10] == j[11])
              && (!v12 || (v32 & 0x10000000) == 0) )
            {
              LODWORD(v32) = v32 | 0x1000;
              *((_DWORD *)j + 12) = v32;
              if ( v5 != (struct tagWND *)j[10] )
              {
                tagDCE::SetPwndOrg((tagDCE *)j, v5);
                ResetOrg(0LL, (struct tagDCE *)j, 0);
              }
              goto LABEL_88;
            }
          }
        }
      }
      j = 0LL;
      v47 = *(_QWORD *)(W32GetUserSessionState(v37, v32, v33, v34) + 56968);
      for ( k = *(__int64 **)(v47 + 24); ; k = (__int64 *)*k )
      {
        v47 = *(_QWORD *)(W32GetUserSessionState(v47, v46, v48, v49) + 56968) + 24LL;
        if ( k == (__int64 *)v47 )
          break;
        if ( (k[6] & 0x400002) == 2 && !(unsigned int)GreIsRendering(k[2]) && !k[9] )
        {
          v51 = *((_DWORD *)k + 12);
          if ( (v51 & 0x800) != 0 )
            break;
          if ( (v51 & 0x1000) == 0 )
            j = k;
        }
      }
      v52 = *(_QWORD *)(W32GetUserSessionState(v47, v46, v48, v49) + 56968) + 24LL;
      v53 = k == (__int64 *)v52;
      if ( k != (__int64 *)v52 )
        goto LABEL_125;
      if ( j )
        break;
      if ( !CreateCacheDC(v5) )
        goto LABEL_185;
      v7 = (struct tagWND *)v99;
    }
    v53 = k == (__int64 *)v52;
LABEL_125:
    v36 = v96;
    if ( !v53 )
      j = k;
    v7 = (struct tagWND *)v99;
    goto LABEL_128;
  }
  v23 = *(_QWORD *)(W32GetUserSessionState(v23, v22, v24, v25) + 56968);
  for ( j = *(__int64 **)(v23 + 24); ; j = (__int64 *)*j )
  {
    v23 = *(_QWORD *)(W32GetUserSessionState(v23, v32, v33, v34) + 56968) + 24LL;
    if ( j == (__int64 *)v23 )
      goto LABEL_185;
    if ( (j[6] & 0x400002) == 0 && !(unsigned int)GreIsRendering(j[2]) && ((struct tagWND *)j[10] == v5 || j[2] == v8) )
      break;
  }
  if ( j[5] && (a3 & 0xC0) != 0 && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(j);
  if ( (j[6] & 0x4000) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(j[12] + 40) + 27LL) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
      FlushWEFCOMPOSITEDDCEBounds(j);
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
      GreSelectRedirectionBitmap(j[2], 0LL);
  }
  v36 = v96;
  if ( (struct tagWND *)j[10] != v5 )
    goto LABEL_128;
  if ( (struct tagWND *)j[12] != v96 )
    goto LABEL_128;
  if ( (struct tagWND *)j[11] != v7 )
    goto LABEL_128;
  if ( !v12 )
    goto LABEL_128;
  v37 = *((unsigned int *)j + 12);
  if ( ((a3 ^ *((_DWORD *)j + 12)) & 0x4000) != 0 || (v37 & 0x10000000) != 0 )
    goto LABEL_128;
LABEL_88:
  v38 = 0;
  while ( ((*((_DWORD *)j + 12) ^ a3) & 0x8080441F) != 0 )
  {
LABEL_128:
    v54 = j[2];
    v95 = 1;
    *((_DWORD *)j + 12) = v31 | 0x1000;
    GreValidateVisrgn(v54, 0);
    v97 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0 || !(unsigned int)CalcVisRgn(&v97, v5, v7, v31) )
      *((_DWORD *)j + 12) |= 0x10000000u;
    tagDCE::SetPwndOrg((tagDCE *)j, v5);
    tagDCE::SetPwndClip((tagDCE *)j, v7);
    tagDCE::SetPwndRedirect((tagDCE *)j, v36);
    j[3] = 0LL;
    j[4] = 0LL;
    ResetOrg(v97, (struct tagDCE *)j, 1);
    v38 = v94;
    if ( !v97 )
      v38 = 1;
    v94 = v38;
  }
  v40 = *(__int64 ***)(W32GetUserSessionState(v37, v32, v33, v34) + 56968);
  if ( v40[3] != j )
  {
    v43 = (__int64 *)*j;
    if ( (__int64 *)*j != j )
    {
      if ( (__int64 *)v43[1] != j || (v40 = (__int64 **)j[1], *v40 != j) )
LABEL_96:
        __fastfail(3u);
      *v40 = v43;
      v43[1] = (__int64)v40;
    }
    v44 = *(_QWORD *)(W32GetUserSessionState(v40, v39, v41, v42) + 56968) + 24LL;
    v45 = *(_QWORD *)v44;
    if ( *(_QWORD *)(*(_QWORD *)v44 + 8LL) != v44 )
      goto LABEL_96;
    *j = v45;
    j[1] = v44;
    *(_QWORD *)(v45 + 8) = j;
    *(_QWORD *)v44 = j;
  }
  GreValidateVisrgn(j[2], 0);
  if ( (a3 & 0x80u) != 0 )
  {
    if ( a2 == (HRGN)1 )
      goto LABEL_153;
    UserSessionState = W32GetUserSessionState(v56, v55, v57, v58);
    GreSetRectRgn(*(HRGN *)(UserSessionState + 43088), 0, 0, 0, 0);
    v99 = 0LL;
    RectRgnIndirect = GreCreateRectRgnIndirect((int *)&v99);
    v61 = j[2];
    j[5] = (__int64)RectRgnIndirect;
    GreSelectVisRgn(v61, (HRGN)RectRgnIndirect, 4);
    v65 = 0x40000LL;
    j[3] = (__int64)a2;
    if ( (a3 & 0x40000) != 0 )
      *((_DWORD *)j + 12) |= 0x40000u;
    *((_DWORD *)j + 12) |= 0x80u;
    if ( !a2 )
    {
      j[4] = 0LL;
LABEL_145:
      *((_DWORD *)j + 12) &= ~0x2000u;
      v70 = W32GetUserSessionState(v65, v62, v63, v64);
      GreSelectVisRgn(j[2], *(HRGN *)(v70 + 43088), 4);
      goto LABEL_153;
    }
    v66 = (HRGN)j[5];
    v67 = W32GetUserSessionState(0x40000LL, v62, v63, v64);
    v68 = 1;
    goto LABEL_142;
  }
  if ( (a3 & 0x40) != 0 && a2 )
  {
    v71 = W32GetUserSessionState(v56, v55, v57, v58);
    GreSetRectRgn(*(HRGN *)(v71 + 43088), 0, 0, 0, 0);
    v99 = 0LL;
    v72 = GreCreateRectRgnIndirect((int *)&v99);
    v73 = j[2];
    j[5] = (__int64)v72;
    GreSelectVisRgn(v73, (HRGN)v72, 4);
    v65 = 0x40000LL;
    j[3] = (__int64)a2;
    if ( (a3 & 0x40000) != 0 )
      *((_DWORD *)j + 12) |= 0x40000u;
    *((_DWORD *)j + 12) |= 0x40u;
    if ( a2 == (HRGN)1 )
    {
      j[4] = 1LL;
      goto LABEL_145;
    }
    v66 = (HRGN)j[5];
    v67 = W32GetUserSessionState(0x40000LL, v62, v63, v64);
    v68 = 4;
LABEL_142:
    GreCombineRgn(*(HRGN *)(v67 + 43088), v66, a2, v68);
    v69 = (HRGN)CreateEmptyRgnPublic();
    j[4] = (__int64)v69;
    GreCombineRgn(v69, a2, 0LL, 5);
    if ( (unsigned __int64)a2 > 2 && (j[6] & 0x40000) == 0 )
    {
      LOBYTE(v62) = 4;
      GreReferenceObjectCheckOwner(a2, v62);
    }
    goto LABEL_145;
  }
LABEL_153:
  if ( (j[6] & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && !(unsigned int)GreSelectRedirectionBitmap(j[2], v98) )
      v38 = 1;
    GreGetBounds(j[2], 0LL, 5LL);
    if ( v38 )
      GreSelectVisRgn(j[2], 0LL, 1);
  }
  if ( (j[6] & 2) == 0 )
    goto LABEL_168;
  if ( (unsigned int)GreSetDCOwnerEx((struct HOBJ__ *)j[2], 0x80000002, 0, 0) )
  {
    j[7] = (__int64)PtiCurrent();
    j[8] = 0LL;
    v78 = W32GetUserSessionState(v75, v74, v76, v77);
    --*(_DWORD *)(v78 + 19692);
    v79 = j[7];
    if ( v79 )
      v80 = *(_QWORD *)(v79 + 456);
    else
      v80 = j[8];
    UpdateDCEInUseCount(1LL, v80);
    if ( v95 )
    {
      v82 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v81) + 24) + 2624LL);
      if ( v82 )
      {
        if ( v82() >= 0 )
        {
          StockObject = GreGetStockObject(13LL);
          GreSelectFont(j[2], StockObject);
        }
      }
    }
LABEL_168:
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x40) != 0 && (a3 & 0x40000000) == 0 )
      GreSetLayout((HDC)j[2], -1, 1u);
    GreValidateVisrgn(j[2], 1);
    if ( (int)IsGreHintDCWndSupported() >= 0 )
      GreHintDCWnd(j[2], *(_QWORD *)v5, 0, 0, 0, 0);
    if ( v36 && (*(_BYTE *)(*((_QWORD *)v36 + 5) + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
    {
      v85 = *((_QWORD *)v36 + 5);
      v86 = *(_WORD *)(v85 + 42) & 0x2FFF;
      v53 = v86 == 669;
      LOBYTE(v86) = ~*(_BYTE *)(v85 + 27);
      GreHintDCWnd(j[2], *(_QWORD *)v5, *(_QWORD *)v36, *(_QWORD *)(*((_QWORD *)v36 + 2) + 456LL), (v86 >> 1) & 1, v53);
    }
    if ( *((int *)j + 12) < 0 )
    {
      v87 = ((__int64 (*)(void))PsGetCurrentProcessWin32Process)();
      if ( v87 )
      {
        v88 = -*(_QWORD *)v87;
        v87 &= -(__int64)(*(_QWORD *)v87 != 0LL);
      }
      *(_DWORD *)(v87 + 12) |= 0x200u;
      j[7] = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v88);
      v90 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v90 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      j[8] = v90;
      UpdateDCEInUseCount(1LL, v90);
    }
    v91 = W32GetSessionState(v84);
    GrepUnlockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(v91 + 88));
    return j[2];
  }
  *((_DWORD *)j + 12) &= ~0x1000u;
  DestroyCacheDC(j);
LABEL_185:
  v93 = W32GetSessionState(v23);
  GrepUnlockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(v93 + 88));
  return 0LL;
}

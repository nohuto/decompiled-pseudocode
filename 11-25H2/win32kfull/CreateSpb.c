/*
 * XREFs of CreateSpb @ 0x140155CBC
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     SpbCheck @ 0x14005856C (SpbCheck.c)
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1401562B8 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SubtractRect @ 0x140157E1C (SubtractRect.c)
 *     GreSaveScreenBits @ 0x140332A34 (GreSaveScreenBits.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *i; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // r12
  __int128 *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // eax
  struct tagWND *v35; // r9
  struct tagWND *v36; // rdx
  __int64 DesktopWindow; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // r15d
  int v50; // r13d
  HBITMAP CompatibleBitmap; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  HBITMAP v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // ebx
  int v59; // edi
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // [rsp+60h] [rbp-68h]
  __int128 v72; // [rsp+70h] [rbp-58h] BYREF
  __int128 v73; // [rsp+80h] [rbp-48h] BYREF

  v4 = a1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) && a2 != 2 )
    return;
  if ( (a2 & 2) == 0 )
  {
    v5 = *((_QWORD *)v4 + 13);
    if ( v5 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v4);
      if ( v5 != DesktopWindow )
        return;
    }
  }
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968);
  if ( *(_QWORD *)(v8 + 40) )
  {
    SpbCheck(v8, v7);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
    v10 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 56968);
    for ( i = *(_QWORD **)(v10 + 24); ; i = (_QWORD *)*i )
    {
      v13 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 56968) + 24LL;
      if ( i == (_QWORD *)v13 )
        break;
      GreGetBounds(i[2], 0LL, 1LL);
    }
    v14 = W32GetUserSessionState(v13, v12);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v14 + 56968) + 48LL));
  }
  v15 = (_QWORD *)Win32AllocPoolWithQuotaZInit(72LL, 1651733333LL);
  if ( !v15 )
    return;
  v16 = Win32AllocPoolNonPagedZInit(88LL, 1651733333LL);
  v15[8] = v16;
  if ( !v16 )
  {
LABEL_10:
    Win32FreePool(v15);
    return;
  }
  v22 = v15 + 1;
  v15[1] = 0LL;
  v23 = (__int128 *)(v15 + 3);
  *(_OWORD *)(v15 + 3) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 88LL);
  v72 = *(_OWORD *)(**(_QWORD **)(W32GetUserSessionState(v18, v17) + 56968) + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)v15 + 6, (int *)v15 + 6, (int *)&v72) )
  {
LABEL_19:
    Win32FreePool((void *)v15[8]);
    goto LABEL_10;
  }
  v15[5] = 0LL;
  v15[2] = 0LL;
  *((_DWORD *)v15 + 12) = a2;
  *(_QWORD *)&v72 = v15 + 1;
  *((_QWORD *)&v72 + 1) = v4;
  HMAssignmentLock(&v72, 0LL);
  if ( (a2 & 2) == 0 )
  {
    v73 = *v23;
    v39 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19872);
    if ( *(_DWORD *)(v39 + 2220)
      || ((v40 = MonitorFromRect((INT *)v15 + 6, 1u, 0),
           v72 = 0LL,
           v41 = v40,
           !(unsigned int)SubtractRect(&v72, v15 + 3, *(_QWORD *)(v40 + 40) + 28LL))
       || (v44 = W32GetUserSessionState(v43, v42),
           !(unsigned int)GreRectInRegion(*(_QWORD *)(*(_QWORD *)(v44 + 56968) + 128LL), &v72)))
      && (unsigned int)IntersectRect((_DWORD *)v15 + 6, (int *)v15 + 6, (int *)(*(_QWORD *)(v41 + 40) + 28LL))
      && (v39 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 56968), v41 == *(_QWORD *)(v39 + 104)) )
    {
      if ( *(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL) )
      {
        v47 = W32GetUserSessionState(v39, v38);
        v48 = GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)(v47 + 56968) + 48LL), 0LL, 0LL, &v73);
        v15[7] = v48;
        if ( v48 )
        {
          *((_DWORD *)v15 + 12) |= 1u;
LABEL_41:
          SetOrClrWF(1, v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
          goto LABEL_21;
        }
      }
      v49 = *(_DWORD *)v23 & 7;
      v50 = *((_DWORD *)v15 + 8) - *(_DWORD *)v23;
      v70 = *((_DWORD *)v15 + 9) - *((_DWORD *)v15 + 7);
      CompatibleBitmap = GreCreateCompatibleBitmapEx(a3, v49 + v50, v70, 0, 0LL, 0LL);
      v15[2] = CompatibleBitmap;
      v54 = CompatibleBitmap;
      if ( CompatibleBitmap )
      {
        v55 = W32GetUserSessionState(v53, v52);
        *(_QWORD *)&v72 = GreSelectBitmap(*(_QWORD *)(v55 + 43248), v54);
        if ( (_QWORD)v72 )
        {
          v58 = *((_DWORD *)v15 + 7);
          v59 = *(_DWORD *)v23;
          v60 = W32GetUserSessionState(v57, v56);
          v61 = GreBitBltInternal(*(HDC *)(v60 + 43248), v49, 0, v50, v70, a3, v59, v58, 0xCC0000u, 0, 0);
          v64 = W32GetUserSessionState(v63, v62);
          GreSelectBitmap(*(_QWORD *)(v64 + 43248), v72);
          if ( v61 )
          {
            GreSetBitmapOwner(v15[2], 0LL);
            goto LABEL_41;
          }
        }
      }
    }
    v65 = v15[2];
    if ( v65 )
      GreDeleteObject(v65);
    HMAssignmentUnlock(v15 + 1);
    goto LABEL_19;
  }
LABEL_21:
  v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 56968);
  *v15 = *(_QWORD *)(v26 + 40);
  v28 = *(_QWORD *)(W32GetUserSessionState(v26, v27) + 56968);
  *(_QWORD *)(v28 + 40) = v15;
  v30 = W32GetUserSessionState(v28, v29);
  SetRectRgnIndirect(*(_QWORD *)(v30 + 43096), v15 + 3);
  v32 = *(_QWORD *)(*v22 + 40);
  v33 = *(_QWORD *)(v32 + 168);
  if ( !v33
    || (v66 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 43096),
        v69 = W32GetUserSessionState(v68, v67),
        (unsigned int)GreCombineRgn(*(_QWORD *)(v69 + 43096), v66, v33, 1LL)) )
  {
    LOBYTE(v34) = IsDesktopWindow(*v22);
    if ( v34 || (*(_BYTE *)(*((_QWORD *)v35 + 5) + 26LL) & 8) == 0 )
    {
      v36 = (struct tagWND *)*((_QWORD *)v35 + 13);
      if ( !v36 || (unsigned int)SpbTransfer((struct tagSPB *)v15, v36, 0) )
      {
        while ( v4 && (unsigned int)SpbTransfer((struct tagSPB *)v15, v4, 1) )
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
      }
    }
    else
    {
      SpbTransfer((struct tagSPB *)v15, v35, 1);
    }
  }
}

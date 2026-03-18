/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8
 * Callers:
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402377E4 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     zzzStartSonar @ 0x1402A46E0 (zzzStartSonar.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     DeleteFadeSprite @ 0x14009B6F0 (DeleteFadeSprite.c)
 *     GreCreateSprite @ 0x1400A33C0 (GreCreateSprite.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400A67DC (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1400A6978 (InitializeMonitorInfo.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     ScaleDPIRect @ 0x140176948 (ScaleDPIRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, int a3, int a4, unsigned int a5)
{
  struct tagRECT *v6; // rsi
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // r12d
  __int64 v17; // rax
  HBITMAP v18; // rax
  __int64 v20; // rax
  __int64 CompatibleDC; // rax
  struct tagRECT v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdx
  Gre::Base *v29; // rcx
  HDEV v30; // rbx
  HSEMAPHORE v31; // r12
  void *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  LONG top; // r10d
  LONG left; // r8d
  LONG v40; // r9d
  int v41; // edx
  __int32 v42; // eax
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  LONG v47; // eax
  unsigned __int16 ScaledLogPixels; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  int v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+80h] [rbp-80h]
  _BYTE v53[80]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v54[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v55; // [rsp+110h] [rbp+10h]
  struct tagRECT v56; // [rsp+170h] [rbp+70h] BYREF

  v50 = a3;
  v6 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v10 = UserSessionState;
  if ( *(_QWORD *)(UserSessionState + 43024) )
    return 0LL;
  if ( *(_QWORD *)(UserSessionState + 43016) )
  {
    GreCleanDC();
    GreSetLayout(*(_QWORD *)(v10 + 43016), 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    v20 = W32GetUserSessionState(0LL, v9);
    CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(v20 + 56968) + 56LL));
    *(_QWORD *)(v10 + 43016) = CompatibleDC;
    if ( !CompatibleDC )
      return 0LL;
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 0LL);
  }
  if ( a1 )
    v6 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  ScaledLogPixels = 96;
  if ( a1 )
  {
    *(_DWORD *)(v10 + 43056) |= 8u;
    *(_QWORD *)(v10 + 43008) = *(_QWORD *)a1;
    if ( PtiCurrent(v11) )
    {
      if ( *((_QWORD *)PtiCurrent(v12) + 61) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v44) + 61) + 8LL) + 64LL) & 1) != 0 )
        {
          v45 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v45 + 288) & 0x4000000F) == 0x40000000 )
          {
            v46 = *(unsigned __int16 *)(v45 + 284);
            if ( (_WORD)v46 != 96 )
              ScaledLogPixels = GreGetScaledLogPixels(v46);
          }
        }
      }
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v56);
    xxxSetLayeredWindow(a1);
    if ( LOBYTE(v56.left) )
      --*(_DWORD *)(*(_QWORD *)&v56.right + 28LL);
  }
  else
  {
    v22 = *v6;
    v49 = 0LL;
    v56 = v22;
    if ( (a5 & 0xF) == 2 )
    {
      v49 = MonitorFromRect(&v6->left, 2LL, a5);
    }
    else
    {
      v51 = 0LL;
      LogicalToPhysicalDPIPoint(&v51, v6, a5, &v49);
      v35 = *(_QWORD *)(v49 + 40);
      if ( *(_WORD *)(v35 + 60) != 96
        && PtiCurrent(v35)
        && *((_QWORD *)PtiCurrent(v36) + 61)
        && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v37) + 61) + 8LL) + 64LL) & 1) != 0
        && (a5 & 0xF) == 0
        && (a5 & 0x40000000) != 0 )
      {
        v52 = 0LL;
        ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v49 + 40) + 60LL));
        ScaleDPIRect((unsigned int)&v56, (unsigned int)&v56, ScaledLogPixels, 96, v52, v52);
        top = v56.top;
        left = v56.left;
        v40 = v6->top;
        v41 = v56.top - v40;
        v42 = v6->left;
        v43 = v56.left - v6->left;
        v6->right += v43;
        v6->bottom += v41;
        v56.right += left;
        v56.bottom += top;
        v6->left = v43 + v42;
        v6->top = v40 + v41;
        v56.left = 2 * left;
        v56.top = 2 * top;
      }
    }
    memset_0(v53, 0, 0x48uLL);
    InitializeMonitorInfo(v53, a5, v49, 0LL);
    *(_DWORD *)(v10 + 43056) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset_0(v54, 0, 0x88uLL);
      a4 &= ~0x100u;
      v54[0] = v56;
      v54[1] = v56;
      v27 = **(__int64 ***)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 19176) + 8LL);
      v55 = *v27;
      v29 = *(Gre::Base **)(W32GetUserSessionState(v27, v28) + 56968);
      v30 = (HDEV)*((_QWORD *)v29 + 5);
      v31 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v29) + 1144LL);
      GreAcquireSemaphoreInternal(v31);
      GrepAcquireLockValidate<2>();
      v32 = GreCreateSpriteInternal(
              v30,
              0LL,
              v6,
              (struct tagMINIWINDOWINFO *)v54,
              0x9900u,
              1,
              1,
              0,
              0,
              0,
              0,
              &ScaledLogPixels);
      if ( v31 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v31);
    }
    else
    {
      v34 = W32GetUserSessionState(v24, v23);
      v32 = (void *)GreCreateSprite(
                      *(HDEV *)(*(_QWORD *)(v34 + 56968) + 40LL),
                      0LL,
                      v6,
                      0LL,
                      0x9900u,
                      1,
                      1,
                      0,
                      0,
                      0,
                      0,
                      &ScaledLogPixels);
    }
    *(_QWORD *)(v10 + 43008) = v32;
    if ( v32 )
    {
      v33 = W32GetUserSessionState(v14, v13);
      GreDwmNotifySpriteMonitorChange(*(_QWORD *)(*(_QWORD *)(v33 + 56968) + 40LL), 0LL, v32, v53);
    }
  }
  if ( !*(_QWORD *)(v10 + 43008) )
    return 0LL;
  v15 = v6->right - v6->left;
  v16 = v6->bottom - v6->top;
  v17 = W32GetUserSessionState(v14, v13);
  v18 = GreCreateCompatibleBitmapEx(
          *(Gre::Base **)(*(_QWORD *)(v17 + 56968) + 56LL),
          v15,
          v16,
          0,
          0LL,
          &ScaledLogPixels);
  *(_QWORD *)(v10 + 43024) = v18;
  if ( !v18 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(*(_QWORD *)(v10 + 43016), v18);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(*(_QWORD *)(v10 + 43016), 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(*(_QWORD *)(v10 + 43016), 2147483650LL, 0LL, 1LL);
  *(_DWORD *)(v10 + 43032) = v6->left;
  v47 = v6->top;
  *(_DWORD *)(v10 + 43056) |= a4;
  *(_DWORD *)(v10 + 43036) = v47;
  *(_DWORD *)(v10 + 43048) = v50;
  LOBYTE(v47) = *(_DWORD *)(v10 + 43056) & 0x40;
  *(_DWORD *)(v10 + 43040) = v15;
  *(_DWORD *)(v10 + 43044) = v16;
  *(_DWORD *)(v10 + 43060) = (_BYTE)v47 != 0 ? 0xFF00FF : 0;
  return *(HDC *)(v10 + 43016);
}

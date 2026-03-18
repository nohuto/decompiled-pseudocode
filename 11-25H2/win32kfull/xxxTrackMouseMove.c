/*
 * XREFs of xxxTrackMouseMove @ 0x14025D2EC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x140021AE8 (xxxCancelMouseMoveTracking.c)
 *     ?IsTooltipHittest@@YA_NPEAUtagWND@@I@Z @ 0x140028598 (-IsTooltipHittest@@YA_NPEAUtagWND@@I@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxHotTrack @ 0x14003DB64 (xxxHotTrack.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _SetSystemTimer @ 0x140158A0C (_SetSystemTimer.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14019E618 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z @ 0x1401B1AA8 (-ManualLock@-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z.c)
 *     SetRITTimer @ 0x1401C8EB0 (SetRITTimer.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x14021E418 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140259548 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x14025D178 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x14026C0C4 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 *     GetActiveTrackPwnd @ 0x140281D18 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // esi
  const struct tagWND *v6; // rdi
  int v7; // r14d
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *v12; // r15
  const struct tagWND *v13; // r13
  struct tagTHREADINFO *v14; // r15
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  struct tagQ *v17; // rdx
  DWORD v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 UserSessionState; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 ActiveTrackPwnd; // rdi
  unsigned int *v32; // rax
  struct tagTHREADINFO *v33; // rax
  __int64 result; // rax
  __int64 v35; // rdx
  ULONG_PTR v36; // [rsp+48h] [rbp-19h] BYREF
  struct tagWND *v37; // [rsp+50h] [rbp-11h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+58h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v40; // [rsp+88h] [rbp+27h]

  BugCheckParameter3[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  v40 = -1LL;
  v8 = *((_QWORD *)PtiCurrent((__int64)a1, a2) + 62);
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v36, (__int64)v6);
  if ( a3 == 512 )
  {
    v10 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 66804);
    if ( (v10 & 1) != 0 )
    {
      if ( (unsigned int)IsIndependentInputWindow(v6) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v10);
        if ( CompositionInputWindowUIOwner )
        {
          v12 = v37;
          v37 = CompositionInputWindowUIOwner;
          v6 = CompositionInputWindowUIOwner;
          HMLockObject(CompositionInputWindowUIOwner);
          if ( v12 )
            HMUnlockObject(v12);
        }
      }
    }
  }
  v13 = *(const struct tagWND **)(v8 + 192);
  if ( (*(_DWORD *)(v8 + 48) & 0x3C0) != 0 && v13 )
  {
    v14 = (struct tagTHREADINFO *)*((_QWORD *)v13 + 2);
    v15 = PtiCurrent(v10, v9);
    v17 = (struct tagQ *)*((_QWORD *)v14 + 59);
    if ( *((struct tagQ **)v15 + 59) == v17 )
    {
      v7 = 512;
      if ( v14 != PtiCurrent(v16, (__int64)v17) && (*(_DWORD *)(v8 + 48) & 0x100) != 0 )
      {
        PostEventMessageWindow(*(struct tagTHREADINFO ***)(v8 + 192), 0x1Au, (LARGE_INTEGER)*(int *)(v8 + 200), 1LL);
        *(_DWORD *)(v8 + 48) &= ~0x100u;
      }
    }
    else
    {
      v18 = *(_DWORD *)(v8 + 48);
      if ( (v18 & 0x200) != 0 )
      {
        PostEventMessageEx(
          v14,
          v17,
          0xBu,
          *(LARGE_INTEGER **)(v8 + 192),
          v18,
          (LARGE_INTEGER)*(int *)(v8 + 200),
          512LL,
          0LL);
        *(_DWORD *)(v8 + 48) &= ~0x200u;
      }
    }
    if ( v5 == 1 || a3 != 512 )
      v7 |= 0x100u;
    if ( v13 != v6 || (v5 == 1) != (*(_DWORD *)(v8 + 200) == 1) )
      v7 |= 0xC0u;
    Win32RawLockedNtObject<tagDESKTOP>::ManualLock(BugCheckParameter2, v8);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(v8 + 192));
    xxxCancelMouseMoveTracking(*(_DWORD *)(v8 + 48), *(_QWORD *)(v8 + 192), *(_DWORD *)(v8 + 200), v7);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v19);
    *(_DWORD *)(v8 + 48) &= ~v7;
  }
  else
  {
    Win32RawLockedNtObject<tagDESKTOP>::ManualLock(BugCheckParameter2, v8);
  }
  if ( v5 != 1 && a3 == 512 && (*(_DWORD *)(W32GetUserSessionState(v21, v20) + 66804) & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(v6, v5, 1) )
      *(_DWORD *)(v8 + 48) |= 0x200u;
    if ( IsTooltipHittest(v6, (unsigned __int16)v5) )
    {
      if ( (*(_DWORD *)(v8 + 48) & 0x100) != 0 )
      {
        xxxTooltipCallback(0LL, 0LL, 0LL);
        xxxCreateTooltip((struct tagDESKTOP *)v8, v6, v5);
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v23, v22);
        *(_QWORD *)(v8 + 120) = SetRITTimer(
                                  *(_QWORD *)(v8 + 120),
                                  3 * *(_DWORD *)(UserSessionState + 14720),
                                  (__int64)TooltipRitShowTimerCallback,
                                  1);
      }
    }
    else
    {
      v25 = *(_QWORD *)(v8 + 120);
      if ( v25 )
      {
        FindTimer(0LL, v25, 4u, 1, 0LL);
        *(_QWORD *)(v8 + 120) = 0LL;
      }
      v26 = *(_DWORD *)(v8 + 48);
      if ( (v26 & 0x100) != 0 )
      {
        *(_DWORD *)(v8 + 48) = v26 & 0xFFFFFEFF;
        xxxTooltipCallback(0LL, 0LL, 0LL);
      }
    }
  }
  NotifyShell::HitTestPartUpdate((NotifyShell *)v8, v6, (struct tagWND *)v5, a4);
  if ( v13 != v6 )
  {
    BugCheckParameter3[1] = (ULONG_PTR)v6;
    BugCheckParameter3[0] = v8 + 192;
    HMAssignmentLock(BugCheckParameter3, 1LL);
    if ( a3 == 512 && (*(_DWORD *)(W32GetUserSessionState(v28, v27) + 66804) & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(v6);
        if ( ActiveTrackPwnd )
        {
          v32 = (unsigned int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527LL, *v32, (__int64)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        v33 = PtiCurrent(v30, v29);
        *(_DWORD *)(*((_QWORD *)v33 + 59) + 412LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v8 + 200) = v5;
  result = Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&v36, v27);
  if ( v40 != -1 )
    return PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v35);
  return result;
}

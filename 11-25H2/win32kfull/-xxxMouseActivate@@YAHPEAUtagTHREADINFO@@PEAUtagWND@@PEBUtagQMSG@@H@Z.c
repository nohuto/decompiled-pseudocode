/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14023F260
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxActiveWindowTracking @ 0x14018CE4C (xxxActiveWindowTracking.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14019E618 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14027CB28 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 */

__int64 __fastcall xxxMouseActivate(struct tagTHREADINFO *a1, struct tagWND *a2, const struct tagQMSG *a3, int a4)
{
  char *v4; // r14
  __int64 v5; // rbx
  __int64 v7; // r13
  struct tagTHREADINFO *v8; // r9
  int v9; // r12d
  int v10; // ebp
  unsigned int active; // edi
  int v12; // ecx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  struct tagWND *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ebx
  struct tagWND *v20; // rcx
  bool v21; // zf
  int v22; // ebp
  bool v23; // cf
  struct tagTHREADINFO *v24; // r8
  __int64 v25; // [rsp+50h] [rbp-68h]
  ULONG_PTR BugCheckParameter3[10]; // [rsp+68h] [rbp-50h] BYREF
  char v28; // [rsp+D0h] [rbp+18h]

  v4 = (char *)a1 + 472;
  v5 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((unsigned int *)a3 + 6);
  v8 = a1;
  v25 = *((_QWORD *)a3 + 4);
  v9 = -__CFSHR__(*((_DWORD *)a3 + 25), 20);
  v10 = -__CFSHR__(*((_DWORD *)a3 + 25), 23);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 59) + 112LL) )
    return 0LL;
  active = 0;
  if ( !__CFSHR__(*((_DWORD *)a3 + 25), 20) && (unsigned int)IsIndependentInputWindow(a2) )
  {
    if ( (unsigned int)(v7 - 513) <= 0xA )
    {
      v12 = 1097;
      if ( _bittest(&v12, v7 - 513) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(struct tagQ **)(*(_QWORD *)(TopLevelWindow + 16) + 472LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v16 = a2;
  Win32HM_LockIntoThread<1>((__int64)v8, (__int64)a2, (__int64 *)BugCheckParameter3);
  v17 = *((_QWORD *)a2 + 5);
  LOBYTE(v18) = *(_BYTE *)(v17 + 24) & 4;
  v28 = v18;
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( (*(_BYTE *)(v17 + 31) & 0xC0) == 0x40 )
    {
      do
      {
        v16 = (struct tagWND *)*((_QWORD *)v16 + 13);
        if ( !(_BYTE)v18 )
        {
          Win32HM_ExchangeThreadLock<1>((__int64)v16, (__int64)BugCheckParameter3);
          xxxSendTransformableMessageTimeout(
            (struct tagTHREADINFO **)v16,
            528LL,
            v25 | v7,
            (struct tagDRAWITEMSTRUCT *)((unsigned __int16)(v5 - *(_WORD *)(*((_QWORD *)v16 + 5) + 104LL)) | ((unsigned __int64)(unsigned __int16)(WORD2(v5) - *(_WORD *)(*((_QWORD *)v16 + 5) + 108LL)) << 16)),
            0,
            0,
            0LL,
            1,
            0);
          LOBYTE(v18) = v28;
        }
      }
      while ( (*(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 0xC0) == 0x40 );
      active = 0;
      v4 = (char *)a1 + 472;
    }
    if ( (_BYTE)v18 )
      Win32HM_ExchangeThreadLock<1>((__int64)v16, (__int64)BugCheckParameter3);
  }
  v19 = 0;
  v20 = *(struct tagWND **)(*(_QWORD *)v4 + 128LL);
  if ( v10 )
    v21 = v20 == v16;
  else
    v21 = v20 == a2;
  LOBYTE(v19) = !v21;
  if ( v9
    || (v20 = (struct tagWND *)*(unsigned int *)(W32GetUserSessionState(v20, v18) + 66804),
        ((unsigned __int8)v20 & 1) == 0)
    || (v18 = 512LL, (_DWORD)v7 != 512) )
  {
    if ( !v19 && (*(_DWORD *)(*((_QWORD *)a1 + 59) + 412LL) & 0x8000) == 0
      || v16 == (struct tagWND *)GetDesktopWindow((__int64)v16) )
    {
      v22 = a4;
      goto LABEL_54;
    }
    if ( (_DWORD)v7 != 513 && (_DWORD)v7 != 516 && (_DWORD)v7 != 519 && (_DWORD)v7 != 523 )
    {
      LOWORD(v22) = a4;
      goto LABEL_62;
    }
    if ( v9 )
    {
      v23 = v10 != 0;
      v22 = a4;
      active = v23 + 3;
    }
    else
    {
      v21 = v10 == 0;
      v22 = a4;
      if ( !v21 )
      {
        active = 2;
LABEL_38:
        v20 = (struct tagWND *)*((_QWORD *)a1 + 59);
        if ( (v16 != *((struct tagWND **)v20 + 16) || (*((_DWORD *)v20 + 103) & 0x8000) != 0)
          && !xxxActivateWindowWithOptions((__int64)v16, 3LL, 49, *((_DWORD *)v20 + 39) != 0, 0)
          || (*(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 8) != 0
          || active == 2 )
        {
          active = 1;
          goto LABEL_62;
        }
        active = 0;
LABEL_54:
        if ( (*(_DWORD *)(W32GetUserSessionState(v20, v18) + 66804) & 1) != 0
          && CheckOnTop(a1, v16, v7)
          && v22 == 1
          && (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v16 + 2) + 528LL), 0, 0) & 8) != 0
          && (*(_BYTE *)(*((_QWORD *)v16 + 5) + 24LL) & 8) == 0 )
        {
          active = 1;
        }
        goto LABEL_62;
      }
      v24 = 0LL;
      if ( v16 )
        v24 = *(struct tagTHREADINFO **)v16;
      active = xxxSendTransformableMessageTimeout(
                 (struct tagTHREADINFO **)a2,
                 33LL,
                 (unsigned __int64)v24,
                 (struct tagDRAWITEMSTRUCT *)((unsigned __int16)a4 | ((unsigned __int16)v7 << 16)),
                 0,
                 0,
                 0LL,
                 1,
                 1);
    }
    if ( active > 2 )
    {
      if ( active == 3 )
      {
        active = 0;
      }
      else if ( active == 4 )
      {
        active = 1;
      }
      goto LABEL_62;
    }
    goto LABEL_38;
  }
  LOWORD(v22) = a4;
  active = xxxActiveWindowTracking((__int64)a2);
LABEL_62:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 59) + 112LL) )
    xxxSendTransformableMessageTimeout(
      (struct tagTHREADINFO **)a2,
      32LL,
      *(_QWORD *)a2,
      (struct tagDRAWITEMSTRUCT *)((unsigned __int16)v22 | ((unsigned __int16)v7 << 16)),
      0,
      0,
      0LL,
      1,
      1);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v18);
  return active;
}

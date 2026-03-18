/*
 * XREFs of xxxHelpLoop @ 0x1402EB044
 * Callers:
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxTranslateMessage @ 0x14002187C (xxxTranslateMessage.c)
 *     xxxRedrawTitle @ 0x140021BF8 (xxxRedrawTitle.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002A84C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     GetWindowBorders @ 0x140044DD8 (GetWindowBorders.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C394 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxInternalEnumWindow @ 0x14006337C (xxxInternalEnumWindow.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     xxxWaitMessageEx @ 0x14016BF60 (xxxWaitMessageEx.c)
 *     _GetParent @ 0x14017BCE8 (_GetParent.c)
 *     xxxSendHelpMessage @ 0x140225E8C (xxxSendHelpMessage.c)
 *     GetContextHelpId @ 0x140226B5C (GetContextHelpId.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1402F39CC (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxHelpLoop(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  int WindowBorders; // eax
  _DWORD *v9; // r8
  int v10; // ecx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct tagCURSOR *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  struct tagWND *v20; // rsi
  __int64 v21; // rdx
  struct tagWND *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  char v30; // cl
  int v31; // edi
  __int64 v32; // rdx
  struct tagTHREADINFO **Parent; // rsi
  __int64 v34; // rdx
  unsigned int ContextHelpId; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // [rsp+28h] [rbp-49h]
  ULONG_PTR v42; // [rsp+38h] [rbp-39h] BYREF
  int v43; // [rsp+40h] [rbp-31h]
  int v44; // [rsp+44h] [rbp-2Dh]
  __int128 v45; // [rsp+48h] [rbp-29h] BYREF
  __int128 v46; // [rsp+58h] [rbp-19h]
  __int128 v47; // [rsp+68h] [rbp-9h]
  __int128 v48; // [rsp+78h] [rbp+7h] BYREF
  __int64 v49; // [rsp+88h] [rbp+17h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp+1Fh] BYREF
  ULONG_PTR v51[2]; // [rsp+A0h] [rbp+2Fh] BYREF

  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v3 = PtiCurrent((__int64)a1, a2);
  v49 = 0LL;
  v48 = 0LL;
  xxxWindowEvent(0xCu, a1, 0, 0, 0);
  UserSessionState = W32GetUserSessionState(v5, v4);
  zzzSetCursor(*(struct tagCURSOR **)(UserSessionState + 28504), v7);
  xxxCapture(v3, a1, 4);
  WindowBorders = GetWindowBorders(*(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL), *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL));
  v9 = (_DWORD *)*((_QWORD *)a1 + 5);
  v10 = v9[24] - WindowBorders;
  LODWORD(v42) = WindowBorders + v9[22];
  v11 = v9[23];
  v43 = v10;
  v12 = (unsigned int)(WindowBorders + v11);
  v13 = (unsigned int)(v9[25] - WindowBorders);
  HIDWORD(v42) = v12;
  v44 = v13;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(struct tagWND **)(*((_QWORD *)v3 + 59) + 112LL) != a1 )
        goto LABEL_35;
      LODWORD(v41) = 2;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v45, 0LL, 0, 0, v41, 0) )
        break;
      xxxWaitMessageEx(15615LL, 0LL, 0LL);
    }
    if ( DWORD2(v45) == 161 )
      goto LABEL_35;
    if ( DWORD2(v45) == 513 )
    {
      if ( !PtInRect(&v42, *(unsigned __int64 *)((char *)&v47 + 4)) )
        goto LABEL_35;
      v19 = xxxWindowHitTest((__int64)a1, *(tagPOINT *)((char *)&v47 + 4), 0LL, 0);
      v20 = (struct tagWND *)ValidateHwnd(v19);
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(&v42, (__int64)v20);
      if ( (unsigned int)IsHelpParent(v20) )
      {
        v49 = *(_QWORD *)((char *)&v47 + 4);
        v48 = (unsigned __int64)v20;
        xxxInternalEnumWindow(v20, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v48, 1u);
        v20 = (struct tagWND *)*((_QWORD *)&v48 + 1);
      }
      v22 = 0LL;
      if ( v20 != a1 )
        v22 = v20;
      if ( !v22 && (!*(_DWORD *)(*((_QWORD *)a1 + 5) + 280LL) || (v22 = a1) == 0LL) )
      {
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)&v42, v21);
        goto LABEL_35;
      }
      Win32HM_LockIntoThread<0>((__int64)v3, (__int64)v22, BugCheckParameter3);
      v25 = W32GetUserSessionState(v24, v23);
      zzzSetCursor(*(struct tagCURSOR **)(v25 + 21880), v26);
      xxxReleaseCapture(v28, v27);
      xxxRedrawTitle(a1, 4096LL);
      SetOrClrWF(0, a1, 0x580u, 1);
      LODWORD(v41) = 1;
      xxxInternalGetMessage((__int64)&v45, 0LL, 0, 0, v41, 1);
      xxxWindowEvent(0x800Au, a1, -2, 4u, 0);
      xxxWindowEvent(0xDu, a1, 0, 0, 0);
      v29 = *((_QWORD *)v22 + 5);
      v30 = *(_BYTE *)(v29 + 31);
      if ( (v30 & 0xC0) != 0x40 || (v31 = *(_DWORD *)(v29 + 320), v31 == 0xFFFF) )
        v31 = -1;
      if ( (v30 & 8) != 0 )
      {
        Parent = (struct tagTHREADINFO **)GetParent(v22);
        if ( !Parent )
        {
LABEL_31:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v32);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)&v42, v34);
          return;
        }
      }
      else
      {
        Parent = (struct tagTHREADINFO **)v22;
      }
      Win32HM_LockIntoThread<0>((__int64)v3, (__int64)Parent, v51);
      ContextHelpId = GetContextHelpId(v22);
      xxxSendHelpMessage(Parent, 1LL, v31, *(_QWORD *)v22, ContextHelpId);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v51, v36);
      goto LABEL_31;
    }
    v13 = (unsigned int)(DWORD2(v45) - 516);
    if ( (unsigned int)v13 <= 7 )
    {
      v12 = 137LL;
      if ( _bittest((const int *)&v12, v13) )
        goto LABEL_35;
    }
    if ( DWORD2(v45) != 512 )
      break;
    if ( PtInRect(&v42, *(unsigned __int64 *)((char *)&v47 + 4)) )
      v17 = *(struct tagCURSOR **)(W32GetUserSessionState(v15, v14) + 28504);
    else
      v17 = *(struct tagCURSOR **)(W32GetUserSessionState(v15, v14) + 21880);
    zzzSetCursor(v17, v16);
LABEL_16:
    LODWORD(v41) = 1;
    xxxInternalGetMessage((__int64)&v45, 0LL, 0, 0, v41, 1);
    xxxTranslateMessage((__int64)&v45, 0);
    xxxDispatchMessage((struct tagMSG *)&v45, v18);
  }
  if ( DWORD2(v45) != 256 || (_QWORD)v46 != 27LL )
    goto LABEL_16;
  LODWORD(v41) = 1;
  xxxInternalGetMessage((__int64)&v45, 0LL, 0, 0, v41, 1);
LABEL_35:
  xxxReleaseCapture(v13, v12);
  v39 = W32GetUserSessionState(v38, v37);
  zzzSetCursor(*(struct tagCURSOR **)(v39 + 21880), v40);
  xxxRedrawTitle(a1, 4096LL);
  SetOrClrWF(0, a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, a1, -2, 4u, 0);
  xxxWindowEvent(0xDu, a1, 0, 0, 0);
}

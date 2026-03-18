/*
 * XREFs of HMValidateHandleNoRip @ 0x14006739C
 * Callers:
 *     DestroyWindowSmIcon @ 0x14006630C (DestroyWindowSmIcon.c)
 *     FindQMsg @ 0x140066A10 (FindQMsg.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140068988 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1400693D8 (xxxCreateWindowSmIcon.c)
 *     xxxClientCopyImage @ 0x140069484 (xxxClientCopyImage.c)
 *     _RegisterClassEx @ 0x1400B2BE4 (_RegisterClassEx.c)
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140111248 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxClientLoadImage @ 0x1401244C4 (xxxClientLoadImage.c)
 *     _GetWindowIcon @ 0x140130B5C (_GetWindowIcon.c)
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017F348 (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     xxxClientLoadMenu @ 0x1401B2838 (xxxClientLoadMenu.c)
 *     DWP_GetIcon @ 0x1401CB10C (DWP_GetIcon.c)
 *     NtUserCsDdeUninitialize @ 0x14021EFA0 (NtUserCsDdeUninitialize.c)
 *     xxxSetClassIcon @ 0x1402262F0 (xxxSetClassIcon.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140283430 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     NtUserUpdateInstance @ 0x1402A3180 (NtUserUpdateInstance.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B3E88 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B4028 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B41CC (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxEventWndProc @ 0x1402DD6A0 (xxxEventWndProc.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, __int64 a2)
{
  char v2; // r15
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v20; // rdx
  __int16 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rax

  v2 = a2;
  v3 = 0LL;
  PtiCurrent(a1, a2);
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v8 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19896) * (unsigned int)(unsigned __int16)a1
        + *(_QWORD *)(UserSessionState + 19888);
    v14 = (__int64 *)HMPkheFromPhe(v12);
    v15 = 0x7FFFLL;
    v16 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v12 + 26)
      || v16 == 0x7FFF
      || !v16 && PsGetCurrentProcessWow64Process(0x7FFFLL, v13) )
    {
      if ( (*(_BYTE *)(v12 + 25) & 1) == 0 && *(_BYTE *)(v12 + 24) == v2 )
        v3 = *v14;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v15, v13) + 132, 0, 0) & 0x20000000) != 0 )
      {
        v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 3LL) != 0);
      }
      else
      {
        v17 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
        v3 &= v17;
      }
      if ( *(char *)(v12 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v17);
        v20 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v21 = gahti[12 * *(unsigned __int8 *)(v12 + 24) + 6];
            if ( (v21 & 2) != 0 )
            {
              v22 = (_QWORD *)v14[1];
            }
            else
            {
              if ( (v21 & 1) == 0 )
                return v3;
              v23 = v14[1];
              if ( !v23 )
                return v3;
              v22 = *(_QWORD **)(v23 + 464);
            }
            if ( v22 && v22 != v20 )
              return 0LL;
          }
        }
      }
    }
  }
  return v3;
}

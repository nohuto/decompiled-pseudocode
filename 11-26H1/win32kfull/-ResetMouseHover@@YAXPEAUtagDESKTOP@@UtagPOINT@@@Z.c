/*
 * XREFs of ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1401D0068
 * Callers:
 *     TrackMouseEvent @ 0x1401CFE54 (TrackMouseEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

void __fastcall ResetMouseHover(struct tagDESKTOP *a1, struct tagPOINT a2)
{
  __int64 v2; // rdi
  LONG x; // ebx
  unsigned int v4; // esi
  __int64 CurrentProcessWin32Process; // rax
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rdx
  int v16; // ebx
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  v2 = *((_QWORD *)a1 + 24);
  x = a2.x;
  v4 = *((_DWORD *)a1 + 55);
  if ( v2 && (*(_BYTE *)(_HMPheFromObject(v2) + 25) & 1) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( CurrentProcessWin32Process == *(_QWORD *)(*(_QWORD *)(v2 + 16) + 456LL) )
      InternalSetTimer(v2, 65530LL, v4, (__int64)xxxSystemTimerProc, 0, 2);
    else
      UserSetLastError(5);
  }
  v7 = y + (*(_DWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, a2) + 16272) >> 1);
  v10 = x + (*(_DWORD *)(W32GetUserSessionState(v9, v8) + 16268) >> 1);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 16272) >> 1;
  v14 = y - v13;
  v16 = x - (*(_DWORD *)(W32GetUserSessionState(v13, v15) + 16268) >> 1);
  *((_DWORD *)a1 + 54) = v7;
  *((_DWORD *)a1 + 51) = v16;
  *((_DWORD *)a1 + 52) = v14;
  *((_DWORD *)a1 + 53) = v10;
}

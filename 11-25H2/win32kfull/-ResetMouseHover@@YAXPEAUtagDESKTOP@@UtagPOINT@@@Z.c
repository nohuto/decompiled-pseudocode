/*
 * XREFs of ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1401A6DDC
 * Callers:
 *     TrackMouseEvent @ 0x1401A5CD4 (TrackMouseEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

void __fastcall ResetMouseHover(struct tagDESKTOP *a1, struct tagPOINT a2)
{
  __int64 v2; // rdi
  LONG x; // ebx
  unsigned int v4; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rdx
  int v17; // ebx
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  v2 = *((_QWORD *)a1 + 24);
  x = a2.x;
  v4 = *((_DWORD *)a1 + 55);
  if ( v2 && (*(_BYTE *)(_HMPheFromObject(v2) + 25) & 1) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v7 == *(_QWORD *)(*(_QWORD *)(v2 + 16) + 464LL) )
      InternalSetTimer(v2, 65530LL, v4, (__int64)xxxSystemTimerProc, 0, 2);
    else
      UserSetLastError(5);
  }
  v8 = y + (*(_DWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, a2) + 16280) >> 1);
  v11 = x + (*(_DWORD *)(W32GetUserSessionState(v10, v9) + 16276) >> 1);
  v14 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 16280) >> 1;
  v15 = y - v14;
  v17 = x - (*(_DWORD *)(W32GetUserSessionState(v14, v16) + 16276) >> 1);
  *((_DWORD *)a1 + 54) = v8;
  *((_DWORD *)a1 + 51) = v17;
  *((_DWORD *)a1 + 52) = v15;
  *((_DWORD *)a1 + 53) = v11;
}

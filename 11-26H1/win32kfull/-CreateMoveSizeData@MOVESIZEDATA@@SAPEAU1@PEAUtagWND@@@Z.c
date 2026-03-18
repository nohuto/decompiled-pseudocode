/*
 * XREFs of ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x140292C38
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402C72E8 (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct MOVESIZEDATA *__fastcall MOVESIZEDATA::CreateMoveSizeData(struct tagWND *a1)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent((__int64)a1) + 130, 0, 0) & 1) != 0 )
    return 0LL;
  v4 = Win32AllocPoolWithQuotaZInit(416LL, 1936552789LL);
  if ( v4 )
  {
    v9[1] = a1;
    v9[0] = v4 + 16;
    *((_QWORD *)PtiCurrent(v3) + 88) = v4;
    HMAssignmentLock(v9, 0LL);
    *(_DWORD *)(v4 + 200) |= 0x8000u;
    v7 = W32GetUserSessionState(v6, v5) + 63376;
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
      __fastfail(3u);
    *(_QWORD *)v4 = v8;
    *(_QWORD *)(v4 + 8) = v7;
    *(_QWORD *)(v8 + 8) = v4;
    *(_QWORD *)v7 = v4;
  }
  return (struct MOVESIZEDATA *)v4;
}

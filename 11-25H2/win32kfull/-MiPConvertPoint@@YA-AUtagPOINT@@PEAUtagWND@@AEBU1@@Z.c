/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x1400908E8
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x14023EA98 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x140090EE0 (VirtualizeMultiMonDigitizerSize.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(struct tagWND *a1, const struct tagPOINT *a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 v8; // bx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h]
  INT b[4]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h]

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  if ( *(_QWORD *)(v7 + 496) && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v6, v5) + 62) + 8LL) + 64LL) & 1) != 0 )
    v8 = (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF;
  else
    v8 = 0;
  v12 = *(_OWORD *)GetScreenRectForDpi(b, v8);
  *(_OWORD *)b = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v14);
  if ( ***(_DWORD ***)(W32GetUserSessionState(v10, v9) + 56968) > 1u )
    VirtualizeMultiMonDigitizerSize(b, v8);
  LODWORD(v15) = EngMulDiv(a2->x - v12, b[2], DWORD2(v12) - v12);
  HIDWORD(v15) = EngMulDiv(a2->y - DWORD1(v12), b[3], HIDWORD(v12) - DWORD1(v12));
  return (struct tagPOINT)v15;
}

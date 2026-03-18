/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x140157984
 * Callers:
 *     NtUserDownlevelTouchpad @ 0x140161B60 (NtUserDownlevelTouchpad.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x14004D2B0 (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x140157A4C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x140157C14 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(__int64 a1, const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned __int16 v3; // si
  struct tagTHREADINFO *v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rax
  const struct CPointerInputFrame *v9; // rax
  int v10; // ecx
  int v11; // r8d
  const struct CPointerInputFrame *v12; // rdi
  int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rax

  v3 = a1;
  v4 = PtiCurrent(a1, (__int64)a2);
  UserSessionState = W32GetUserSessionState(v6, v5, v7);
  v9 = CTouchProcessor::ReferenceFrameFromId(*(CTouchProcessor **)(UserSessionState + 3256), v3);
  v12 = v9;
  if ( v9 )
  {
    v13 = *((_DWORD *)v9 + 57);
    if ( (v13 & 0x80u) == 0 )
    {
      v14 = -1073741811;
      goto LABEL_4;
    }
    *((_WORD *)v4 + 624) = v3;
    *((_QWORD *)v4 + 157) = *((_QWORD *)v9 + 8);
  }
  else if ( v3 != *((_WORD *)v4 + 624) )
  {
    return (unsigned int)-1073741790;
  }
  v14 = CPTPProcessor::xxxDownlevelInput(v9, a2);
  if ( v12 )
  {
LABEL_4:
    v15 = W32GetUserSessionState(v10, v13, v11);
    CTouchProcessor::UnreferenceFrameExternal(*(PERESOURCE **)(v15 + 3256), v12);
  }
  return v14;
}

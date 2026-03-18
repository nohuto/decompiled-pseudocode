/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D22F0
 * Callers:
 *     NtUserDownlevelTouchpad @ 0x1401220D0 (NtUserDownlevelTouchpad.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D23B8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1400D2740 (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1400D2D58 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(unsigned __int16 a1, const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  const struct CPointerInputFrame *v8; // rax
  __int64 v9; // rdx
  const struct CPointerInputFrame *v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax

  v4 = PtiCurrent();
  UserSessionState = W32GetUserSessionState(v6, v5);
  v8 = CTouchProcessor::ReferenceFrameFromId(*(CTouchProcessor **)(UserSessionState + 3256), a1);
  v10 = v8;
  if ( v8 )
  {
    v11 = *((unsigned int *)v8 + 57);
    if ( (v11 & 0x80u) == 0LL )
    {
      v12 = -1073741811;
      goto LABEL_4;
    }
    *((_WORD *)v4 + 624) = a1;
    *((_QWORD *)v4 + 157) = *((_QWORD *)v8 + 8);
  }
  else if ( a1 != *((_WORD *)v4 + 624) )
  {
    return (unsigned int)-1073741790;
  }
  v12 = CPTPProcessor::xxxDownlevelInput(v8, a2);
  if ( v10 )
  {
LABEL_4:
    v13 = W32GetUserSessionState(v11, v9);
    CTouchProcessor::UnreferenceFrameExternal(*(CTouchProcessor **)(v13 + 3256), v10);
  }
  return v12;
}

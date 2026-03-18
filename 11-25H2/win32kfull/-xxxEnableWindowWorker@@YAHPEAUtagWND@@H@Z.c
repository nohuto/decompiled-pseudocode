/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x140025E98
 * Callers:
 *     xxxEnableWindow @ 0x140025DCC (xxxEnableWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x140295530 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140187CB8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  struct tagWND *v4; // rdi
  char v5; // si
  __int64 UserSessionState; // rax

  v2 = 0;
  v3 = a2;
  v4 = a1;
  v5 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  if ( (_DWORD)a2 )
  {
    *((_DWORD *)a1 + 95) &= ~0x100u;
  }
  else
  {
    xxxSendTransformableMessageTimeout(a1, 0x1Fu, 0, 0, 0LL, 1, 1);
    a1 = (struct tagWND *)*((_QWORD *)PtiCurrent() + 59);
    if ( v4 == *((struct tagWND **)a1 + 15) )
      xxxSetFocus(0LL);
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  SetOrClrWF(v3 == 0, v4, 3848LL, (*(_DWORD *)(*(_QWORD *)(UserSessionState + 19144) + 48LL) >> 10) & 1);
  if ( (v5 == 0) != v3 )
  {
    xxxWindowEvent(0x800Au, 0);
    xxxSendTransformableMessageTimeout(v4, 0xAu, 0, 0, 0LL, 1, 1);
  }
  LOBYTE(v2) = v5 != 0;
  return v2;
}

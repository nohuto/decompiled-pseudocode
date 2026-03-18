/*
 * XREFs of ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1402FD9D4
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x140258CA4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402FD6A0 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__fastcall InteractiveControlInput::InteractiveControlInput(
        InteractiveControlInput *this,
        struct InteractiveControlDevice *a2)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  InteractiveControlInput *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  UserSessionState = W32GetUserSessionState(0xFFFFF78000000004uLL, a2);
  v5 = *(unsigned __int16 *)(UserSessionState + 17160);
  *(_WORD *)(UserSessionState + 17160) = v5 + 1;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  result = this;
  *((_DWORD *)this + 8) = v5;
  *((_DWORD *)this + 12) = 0;
  return result;
}

/*
 * XREFs of ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1402EE084
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x14021E508 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402EDD44 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
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
  v5 = *(unsigned __int16 *)(UserSessionState + 17168);
  *(_WORD *)(UserSessionState + 17168) = v5 + 1;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 22) = 0;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  result = this;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 8) = v5;
  return result;
}

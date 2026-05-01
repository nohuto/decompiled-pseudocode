/*
 * XREFs of ?SetKeyState@CWRLExecuteCommandBase@@UEAAJK@Z @ 0x1804491C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWRLExecuteCommandBase::SetKeyState(CWRLExecuteCommandBase *this, int a2)
{
  __int64 result; // rax

  *((_DWORD *)this + 15) = a2;
  result = 0LL;
  *((_DWORD *)this + 14) |= 2u;
  return result;
}

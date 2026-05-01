/*
 * XREFs of ?SetShowWindow@CWRLExecuteCommandBase@@UEAAJH@Z @ 0x180449290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWRLExecuteCommandBase::SetShowWindow(CWRLExecuteCommandBase *this, int a2)
{
  __int64 result; // rax

  *((_DWORD *)this + 18) = a2;
  result = 0LL;
  *((_DWORD *)this + 14) |= 0x10u;
  return result;
}

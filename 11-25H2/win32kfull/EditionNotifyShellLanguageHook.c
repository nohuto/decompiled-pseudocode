/*
 * XREFs of EditionNotifyShellLanguageHook @ 0x1402088C0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

_QWORD *__fastcall EditionNotifyShellLanguageHook(__int64 a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( !a3
    || (result = (_QWORD *)W32GetUserSessionState(a1, a2), result[1783] != a2)
    && (result = (_QWORD *)W32GetUserSessionState(v7, v6), a1 != result[2331]) )
  {
    result = *(_QWORD **)(a1 + 504);
    if ( ((*(_WORD *)(a1 + 720) | *(_WORD *)(*result + 16LL)) & 0x800) != 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(*result, (unsigned int)(*(_DWORD *)(a1 + 720) | *(_DWORD *)(*result + 16LL)))
                + 14264) = a2;
      return (_QWORD *)xxxCallHook(8LL, 0LL, a2, 10);
    }
  }
  return result;
}

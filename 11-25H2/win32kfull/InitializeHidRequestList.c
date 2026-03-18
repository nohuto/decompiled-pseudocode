/*
 * XREFs of InitializeHidRequestList @ 0x140275170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall InitializeHidRequestList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(W32GetUserSessionState(a1, a2) + 192);
  v2[1] = v2;
  *v2 = v2;
  v5 = (_QWORD *)(W32GetUserSessionState(v4, v3) + 208);
  v5[1] = v5;
  *v5 = v5;
  result = (_QWORD *)(W32GetUserSessionState(v7, v6) + 224);
  result[1] = result;
  *result = result;
  return result;
}

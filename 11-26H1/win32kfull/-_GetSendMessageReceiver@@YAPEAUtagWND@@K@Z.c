/*
 * XREFs of ?_GetSendMessageReceiver@@YAPEAUtagWND@@K@Z @ 0x1402AE56C
 * Callers:
 *     NtUserGetSendMessageReceiver @ 0x1402B4BB0 (NtUserGetSendMessageReceiver.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagWND *__fastcall _GetSendMessageReceiver(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagTHREADINFO *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  UIPrivilegeIsolation *v5; // rcx
  __int64 v6; // rsi
  _DWORD *v7; // rbp
  const struct tagUIPI_INFO *v8; // r8
  __int64 v9; // rax
  struct tagWND *result; // rax
  int v11; // ecx

  v1 = a1;
  v2 = PtiCurrent(a1);
  v3 = PtiFromThreadId(v1);
  v4 = v3;
  if ( !v3 || (v5 = (UIPrivilegeIsolation *)*((_QWORD *)v2 + 61), *(UIPrivilegeIsolation **)(v3 + 488) != v5) )
  {
    v11 = 87;
    goto LABEL_13;
  }
  v6 = *(_QWORD *)(v3 + 456);
  v7 = (_DWORD *)*((_QWORD *)v2 + 57);
  if ( !UIPrivilegeIsolation::Enforced(v5) )
  {
    if ( v7[191] != *(_DWORD *)(v6 + 764) || v7[192] != *(_DWORD *)(v6 + 768) )
      goto LABEL_5;
LABEL_8:
    v9 = *(_QWORD *)(v4 + 536);
    if ( !v9 )
      return 0LL;
    result = *(struct tagWND **)(v9 + 112);
    if ( !result )
      return 0LL;
    if ( *(_QWORD *)(*((_QWORD *)result + 2) + 488LL) == *((_QWORD *)v2 + 61) )
      return result;
    goto LABEL_11;
  }
  if ( UIPrivilegeIsolation::CheckAccess(
         (UIPrivilegeIsolation *)(v7 + 216),
         (const struct tagUIPI_INFO *)(v6 + 864),
         v8) )
  {
    goto LABEL_8;
  }
LABEL_5:
  EtwTraceUIPIMsgError(*((_QWORD *)v2 + 57), *(_QWORD *)(v4 + 456), 0LL, 0LL, 0LL);
LABEL_11:
  v11 = 5;
LABEL_13:
  UserSetLastError(v11);
  return 0LL;
}

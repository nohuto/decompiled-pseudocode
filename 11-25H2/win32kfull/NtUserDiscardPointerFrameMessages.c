/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1401366C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x140136F28 (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  int v5; // ebx
  struct tagTHREADINFO *v6; // rcx
  int v7; // ecx
  _DWORD *v9; // rax

  EnterCrit(0LL, 0LL);
  if ( !a1 || HIWORD(a1) )
  {
    v7 = 87;
    goto LABEL_7;
  }
  v4 = PtiCurrent(v3, v2);
  v5 = 1;
  v6 = v4;
  if ( (unsigned __int16)a1 != 1 )
  {
    if ( (*((_QWORD *)v4 + 170) & 0x1000000100LL) == 0 && *(struct tagTHREADINFO **)(*((_QWORD *)v4 + 59) + 72LL) == v4 )
    {
      v5 = xxxDiscardPointerFrameMessagesInternal((unsigned __int16)a1);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  v9 = (_DWORD *)*((_QWORD *)v4 + 189);
  if ( !v9 || (*v9 & 1) == 0 )
  {
LABEL_6:
    v7 = 5;
LABEL_7:
    v5 = 0;
    UserSetLastError(v7);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}

/*
 * XREFs of ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x1400948E4
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140094B10 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1401E94B4 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x140156BF0 (IsPointerInputClientMessage.c)
 */

struct tagQMSG *__fastcall FindMsgInsertionPoint(struct tagQ *const a1, struct tagQMSG *const a2, char a3)
{
  __int64 *i; // r14
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v10; // rdi
  CTouchProcessor *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int FrameIdFromPointerMsgId; // ebx

  for ( i = (__int64 *)*((_QWORD *)a1 + 3); i; i = (__int64 *)*i )
  {
    if ( a3 )
    {
      v6 = *((_DWORD *)i + 25);
      if ( (v6 & 0x10) != 0 || (v6 & 0x100) != 0 )
        continue;
    }
    if ( *((_DWORD *)i + 12) > *((_DWORD *)a2 + 12) )
      break;
    if ( (unsigned int)IsPointerInputClientMessage(*((unsigned int *)i + 6)) )
    {
      if ( (unsigned int)IsPointerInputClientMessage(*((unsigned int *)a2 + 6)) )
      {
        if ( (_DWORD)v7 != 595 && (_DWORD)v8 != 595 )
        {
          UserSessionState = W32GetUserSessionState(v8, v7);
          v10 = i[5];
          v11 = *(CTouchProcessor **)(UserSessionState + 3256);
          v14 = W32GetUserSessionState(v13, v12);
          FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(
                                      *(CTouchProcessor **)(v14 + 3256),
                                      *((_QWORD *)a2 + 5));
          if ( CTouchProcessor::GetFrameIdFromPointerMsgId(v11, v10) > FrameIdFromPointerMsgId )
            break;
        }
      }
    }
  }
  return (struct tagQMSG *)i;
}

/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x140144438
 * Callers:
 *     EditionIsPointerQueuedMessageCoalescable @ 0x140144400 (EditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x140144520 (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerQueuedMessageCoalescable(
        struct tagQ *a1,
        struct tagQMSG *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v13; // eax
  bool v14; // zf
  __int64 UserSessionState; // rax
  unsigned int FrameIdFromPointerMsgId; // eax

  if ( a2 )
    v8 = *((_QWORD *)a2 + 1);
  else
    v8 = *((_QWORD *)a1 + 4);
  while ( v8 )
  {
    v9 = *(unsigned int *)(v8 + 24);
    if ( (_DWORD)v9 == 512 )
    {
      v13 = *(_DWORD *)(v8 + 124);
      switch ( v13 )
      {
        case 4:
          v14 = a6 == 2;
LABEL_11:
          if ( v14 )
            goto LABEL_12;
          break;
        case 8:
          v14 = a6 == 3;
          goto LABEL_11;
        case 16:
          v14 = a6 == 5;
          goto LABEL_11;
      }
      if ( *(_DWORD *)(v8 + 128) == 4 )
        goto LABEL_12;
    }
    if ( !(unsigned int)IsPointerInputMessageWithState(v9) )
      return 0LL;
    if ( *(_QWORD *)(v8 + 40) == a5 )
      return 1LL;
    UserSessionState = W32GetUserSessionState(v11, v10);
    FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(
                                *(CTouchProcessor **)(UserSessionState + 3256),
                                *(_QWORD *)(v8 + 40));
    if ( FrameIdFromPointerMsgId != a3 && FrameIdFromPointerMsgId != a4 )
      return 0LL;
LABEL_12:
    v8 = *(_QWORD *)(v8 + 8);
  }
  return 0LL;
}

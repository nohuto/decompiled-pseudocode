/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x140159168
 * Callers:
 *     EditionIsPointerQueuedMessageCoalescable @ 0x140159130 (EditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x140159250 (IsPointerInputMessageWithState.c)
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
  __int64 UserSessionState; // rax
  unsigned int FrameIdFromPointerMsgId; // eax
  int v15; // eax
  bool v16; // zf

  if ( a2 )
    v8 = *((_QWORD *)a2 + 1);
  else
    v8 = *((_QWORD *)a1 + 4);
  while ( v8 )
  {
    v9 = *(unsigned int *)(v8 + 24);
    if ( (_DWORD)v9 == 512 )
    {
      v15 = *(_DWORD *)(v8 + 124);
      switch ( v15 )
      {
        case 4:
          v16 = a6 == 2;
LABEL_14:
          if ( v16 )
            goto LABEL_16;
          break;
        case 8:
          v16 = a6 == 3;
          goto LABEL_14;
        case 16:
          v16 = a6 == 5;
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v8 + 128) == 4 )
        goto LABEL_16;
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
LABEL_16:
    v8 = *(_QWORD *)(v8 + 8);
  }
  return 0LL;
}

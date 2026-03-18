/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14001E1A0
 * Callers:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1401662D4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     _PostMessageExtended @ 0x140020024 (_PostMessageExtended.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall _PostShellHookMsgWorker(unsigned int a1, __int64 a2, __int64 a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8

  v8 = 0;
  v9 = 0LL;
  v11 = *((_QWORD *)PtiCurrent() + 62);
  while ( 1 )
  {
    v12 = *(unsigned int **)(v11 + 224);
    if ( !v12 )
      break;
    if ( v12[3] )
      break;
    v13 = *v12;
    if ( v8 >= (unsigned int)v13 )
      break;
    if ( *(_QWORD *)&v12[4 * v8 + 6] == v9 )
      ++v8;
    if ( v8 >= (unsigned int)v13 )
      break;
    v9 = *(_QWORD *)&v12[4 * v8 + 6];
    if ( !v9 )
      break;
    v14 = *(_QWORD *)(W32GetUserSessionState(v13, v10) + 19904);
    if ( a1 == *(_DWORD *)(v14 + 928) && v9 == *(_QWORD *)(v11 + 192) )
    {
      if ( a2 == 1 )
      {
        v15 = *(unsigned int *)(W32GetUserSessionState(v14, v10) + 63392);
LABEL_17:
        PostMessage(v9, a1, v15, a3);
      }
      else if ( a2 == 2 )
      {
        v15 = *(unsigned int *)(W32GetUserSessionState(v14, v10) + 63396);
        goto LABEL_17;
      }
    }
    else
    {
      PostMessageExtended(v9, a1, a2, a3, a4);
    }
  }
}

/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400212A8
 * Callers:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x140225D60 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     _PostMessageExtended @ 0x1400208EC (_PostMessageExtended.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x14002139C (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall _PostShellHookMsgWorker(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  struct tagTHREADINFO *v8; // rax
  unsigned __int64 v9; // rdx
  struct tagWND *v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagWND *v15; // rbx
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-30h]
  unsigned int v19[10]; // [rsp+30h] [rbp-28h] BYREF

  v8 = PtiCurrent();
  v19[0] = 0;
  v10 = 0LL;
  v11 = *((_QWORD *)v8 + 63);
  while ( 1 )
  {
    v15 = VWPLNextBase(*(struct tagVWPL **)(v11 + 224), v9, v10, v19, v17, v18);
    if ( !v15 )
      break;
    v12 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872);
    if ( a1 != *(_DWORD *)(v12 + 928) || v15 != *(struct tagWND **)(v11 + 192) )
    {
      PostMessageExtended(v15, a1, a2, a3, a4);
      goto LABEL_5;
    }
    if ( a2 == 1 )
    {
      v16 = *(_DWORD *)(W32GetUserSessionState(v12, v9) + 63408);
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_5;
      v16 = *(_DWORD *)(W32GetUserSessionState(v12, v9) + 63412);
    }
    PostMessage((int)v15, a1, v16, a3);
LABEL_5:
    v10 = v15;
  }
}

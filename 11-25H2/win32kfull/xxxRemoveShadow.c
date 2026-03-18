/*
 * XREFs of xxxRemoveShadow @ 0x14017EAD0
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxRemoveShadow(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD **i; // rdx
  _QWORD *v5; // rdi
  struct tagWND *v7; // rsi

  v2 = 0;
  for ( i = (_QWORD **)(W32GetUserSessionState(a1, a2) + 63384); ; i = (_QWORD **)(v5 + 2) )
  {
    v5 = *i;
    if ( !*i )
      break;
    if ( *v5 == a1 )
    {
      *i = (_QWORD *)v5[2];
      v7 = (struct tagWND *)HMAssignmentUnlock(v5 + 1);
      HMAssignmentUnlock(v5);
      Win32FreePool(v5);
      if ( v7 )
        return (unsigned int)xxxDestroyWindow(v7);
      else
        return 1;
    }
  }
  return v2;
}

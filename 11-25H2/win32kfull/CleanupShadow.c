/*
 * XREFs of CleanupShadow @ 0x14020CF8C
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupShadow(__int64 a1, __int64 a2)
{
  _QWORD **i; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx

  for ( i = (_QWORD **)(W32GetUserSessionState(a1, a2) + 63384); ; i = (_QWORD **)(v4 + 2) )
  {
    v4 = *i;
    if ( !*i )
      break;
    if ( v4[1] == a1 )
    {
      v5 = *i;
      *i = (_QWORD *)v4[2];
      HMAssignmentUnlock(v5);
      HMAssignmentUnlock(v4 + 1);
      Win32FreePool(v4);
      return;
    }
  }
}

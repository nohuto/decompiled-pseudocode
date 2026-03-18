/*
 * XREFs of NtUserShellHandwritingHandleDelegatedInput @ 0x140137100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401371DC (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserShellHandwritingHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  _OWORD v10[4]; // [rsp+28h] [rbp-40h] BYREF

  if ( a2 - 1 > 2 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    EnterCrit(0LL, 0LL);
    v6 = PtiCurrent(v5, v4);
    v7 = *((_QWORD *)v6 + 170) >> 37;
    v8 = 1;
    if ( (*((_QWORD *)v6 + 170) & 0x2000000000LL) != 0 )
    {
      if ( a2 != 3 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v10[0] = *a1;
        v10[1] = a1[1];
        v10[2] = a1[2];
        v8 = _HandleShellHandwritingDelegatedInput(v6, a2, v10);
      }
    }
    else
    {
      v8 = 0;
      UserSetLastError(5);
    }
    UserSessionSwitchLeaveCrit(v7);
    return v8;
  }
}

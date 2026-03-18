/*
 * XREFs of NtUserHandleDelegatedInput @ 0x140137B00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x140137BD0 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // r9
  int v8; // ebx
  _OWORD v10[4]; // [rsp+28h] [rbp-40h] BYREF

  EnterCrit(0LL, 0LL);
  if ( a2 - 1 > 2 )
  {
    UserSetLastError(87);
    v8 = 0;
  }
  else
  {
    v7 = PtiCurrent(v5, v4);
    if ( (*((_DWORD *)v7 + 340) & 0x2000LL) != 0 )
    {
      if ( a2 == 3 )
      {
        v8 = 1;
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v10[0] = *a1;
        v10[1] = a1[1];
        v10[2] = a1[2];
        v8 = _HandleDelegatedInput(v7, a2, v10);
      }
    }
    else
    {
      v8 = 0;
      UserSetLastError(5);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}

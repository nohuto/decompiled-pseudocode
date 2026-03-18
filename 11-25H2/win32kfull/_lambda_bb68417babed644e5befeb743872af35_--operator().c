/*
 * XREFs of _lambda_bb68417babed644e5befeb743872af35_::operator() @ 0x140029208
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140259548 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x140029E0C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 */

char __fastcall lambda_bb68417babed644e5befeb743872af35_::operator()(__int64 a1, __int64 a2, int a3, char a4)
{
  char v4; // di
  __int64 TopLevelWindow; // rax
  unsigned int v8; // edx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  unsigned int v14; // edx
  char v15; // bl

  v4 = 0;
  if ( a4 || *(char *)(*(_QWORD *)(a2 + 40) + 20LL) >= 0 )
  {
    TopLevelWindow = GetTopLevelWindow(a2);
    if ( TopLevelWindow )
    {
      v9 = a3 - 9;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 != 3 )
                return v4;
            }
          }
        }
        if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x40, v8) )
        {
          v15 = 1;
          if ( !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)8, v14) )
            return v15;
        }
      }
      else
      {
        v15 = 1;
        if ( (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 30LL) & 1) != 0
          && ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x80, v8) )
        {
          return v15;
        }
      }
      return a4;
    }
  }
  return 0;
}

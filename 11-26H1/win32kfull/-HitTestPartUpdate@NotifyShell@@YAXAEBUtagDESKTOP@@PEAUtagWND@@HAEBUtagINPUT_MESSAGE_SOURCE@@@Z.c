/*
 * XREFs of ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140046B9C
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     _anonymous_namespace_::NotifyPartExit @ 0x140046D64 (_anonymous_namespace_--NotifyPartExit.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1401D69BC (_anonymous_namespace_--NotifyPartEnter.c)
 *     _lambda_bb68417babed644e5befeb743872af35_::operator() @ 0x1401DAEAC (_lambda_bb68417babed644e5befeb743872af35_--operator().c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall NotifyShell::HitTestPartUpdate(
        NotifyShell *this,
        const struct tagDESKTOP *a2,
        struct tagWND *a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned int v7; // ebp
  char v9; // bl
  __int64 TopLevelWindow; // rax
  const struct tagDESKTOP *v11; // rcx
  int v12; // eax

  v5 = *((_QWORD *)this + 24);
  v6 = a4;
  v7 = (unsigned int)a3;
  v9 = 1;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 380) & 1) != 0 )
    {
      LOBYTE(a4) = 1;
      if ( !(unsigned __int8)lambda_bb68417babed644e5befeb743872af35_::operator()(
                               this,
                               v5,
                               *((unsigned int *)this + 50),
                               a4) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1770LL);
    }
  }
  if ( *(char *)(*((_QWORD *)a2 + 5) + 20LL) >= 0 )
  {
    TopLevelWindow = GetTopLevelWindow(a2);
    if ( TopLevelWindow )
    {
      if ( v7 == 9 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 30LL) & 1) == 0
          || !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x80) )
        {
LABEL_12:
          v9 = 0;
        }
      }
      else if ( v7 != 10 && v7 != 11 && v7 != 12 && v7 != 15
             || !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x40)
             || ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)8) )
      {
        goto LABEL_12;
      }
      v11 = (const struct tagDESKTOP *)*((_QWORD *)this + 24);
      if ( !v9 )
        goto LABEL_14;
      v12 = *((_DWORD *)this + 50);
      if ( v11 != a2 )
        goto LABEL_25;
      if ( v12 == v7 )
        return;
      if ( v11 == a2 )
      {
        if ( v12 == v7 )
          goto LABEL_27;
      }
      else
      {
LABEL_25:
        if ( !v11 )
        {
LABEL_27:
          anonymous_namespace_::NotifyPartEnter(a2, v7, v6);
          return;
        }
      }
      anonymous_namespace_::NotifyPartExit();
      goto LABEL_27;
    }
  }
  v11 = (const struct tagDESKTOP *)*((_QWORD *)this + 24);
LABEL_14:
  if ( v11 )
    anonymous_namespace_::NotifyPartExit();
}

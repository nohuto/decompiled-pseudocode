/*
 * XREFs of ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140259548
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxTrackMouseMove @ 0x14025D2EC (xxxTrackMouseMove.c)
 * Callees:
 *     _lambda_bb68417babed644e5befeb743872af35_::operator() @ 0x140029208 (_lambda_bb68417babed644e5befeb743872af35_--operator().c)
 *     _anonymous_namespace_::NotifyPartExit @ 0x14014BA58 (_anonymous_namespace_--NotifyPartExit.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x140259630 (_anonymous_namespace_--NotifyPartEnter.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall NotifyShell::HitTestPartUpdate(
        NotifyShell *this,
        const struct tagDESKTOP *a2,
        struct tagWND *a3,
        __int64 a4)
{
  __int64 v6; // rdx
  unsigned int v7; // edi
  char v9; // al
  const struct tagDESKTOP *v10; // rcx
  int v11; // eax

  v6 = *((_QWORD *)this + 24);
  v7 = (unsigned int)a3;
  if ( v6
    && (*(_BYTE *)(v6 + 380) & 1) != 0
    && !lambda_bb68417babed644e5befeb743872af35_::operator()((__int64)this, v6, *((_DWORD *)this + 50), 1) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1769LL);
  }
  v9 = lambda_bb68417babed644e5befeb743872af35_::operator()((__int64)this, (__int64)a2, v7, 0);
  v10 = (const struct tagDESKTOP *)*((_QWORD *)this + 24);
  if ( v9 )
  {
    v11 = *((_DWORD *)this + 50);
    if ( v10 != a2 )
      goto LABEL_11;
    if ( v11 == v7 )
      return;
    if ( v10 == a2 )
    {
      if ( v11 != v7 )
      {
        v10 = a2;
LABEL_15:
        anonymous_namespace_::NotifyPartExit((__int64)v10);
      }
    }
    else
    {
LABEL_11:
      if ( v10 )
        goto LABEL_15;
    }
    anonymous_namespace_::NotifyPartEnter(a2, v7, a4);
    return;
  }
  if ( v10 )
    anonymous_namespace_::NotifyPartExit((__int64)v10);
}

/*
 * XREFs of ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180406BC0
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180402780 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180402990 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _LogEventWithApplicationViewData__ @ 0x180400F30 (_LogEventWithApplicationViewData__.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804065C4 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HolographicPositioner::_EnsureShellStateForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        bool *a3)
{
  int v3; // r9d
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // esi
  struct IApplicationView **v11; // rsi
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 152);
  *a3 = v3 == 0;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 152) == 1 )
    {
      LogEventWithApplicationViewData__(
        (__int64)a2,
        (void (__fastcall *)(void **))HolographicPositionerTelemetry::DenyAppViewDuringOOBE<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView((__int64 **)this, a2);
      if ( v6 < 0 )
      {
        v7 = 2239LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
    }
    else if ( *((_QWORD *)this + 74) )
    {
      LogEventWithApplicationViewData__(
        (__int64)a2,
        (void (__fastcall *)(void **))HolographicPositionerTelemetry::QueueAppViewPending<unsigned short const *>);
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 74) + 24LL))(
             *((_QWORD *)this + 74),
             a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8C5,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      v11 = (struct IApplicationView **)((char *)this + 584);
      v12 = *((_QWORD *)this + 73);
      if ( v12 )
      {
        LogEventWithApplicationViewData__(
          v12,
          (void (__fastcall *)(void **))HolographicPositionerTelemetry::PreviousPendingViewClosed<unsigned short const *>);
        v6 = HolographicPositioner::_CloseView((__int64 **)this, *v11);
        if ( v6 < 0 )
        {
          v7 = 2252LL;
          goto LABEL_5;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v11);
      }
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v11, (__int64)a2);
    }
    else
    {
      LogEventWithApplicationViewData__(
        (__int64)a2,
        (void (__fastcall *)(void **))HolographicPositionerTelemetry::DenyAppViewPending<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView((__int64 **)this, a2);
      if ( v6 < 0 )
      {
        v7 = 2263LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}

/*
 * XREFs of ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x1804E428C
 * Callers:
 *     ?ControlGained@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804E1FE0 (-ControlGained@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnk.c)
 *     CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::Invoke @ 0x1804E3920 (CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___--Invoke.c)
 *     ?perform_delayed_initialization@GamingPosturePositioner@@UEAAXXZ @ 0x1804E53C0 (-perform_delayed_initialization@GamingPosturePositioner@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800FCC90 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPosturePositioner::OnGamingPostureChanged(GamingPosturePositioner *this, int a2)
{
  unsigned __int8 v4; // di
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  int v7; // eax
  HWND v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2 != 0;
  if ( *((_QWORD *)this + 88) && *((_BYTE *)this + 616) != v4 )
  {
    v5 = GamingPosturePositionerTraceProvider::Provider();
    if ( *(_DWORD *)v5 > 4u )
    {
      v14 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)v5,
        byte_1807DCA35,
        0LL,
        v6,
        (__int64)&v14);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 21) + 56LL))(
           *((_QWORD *)this + 21),
           4LL,
           a2 != 0 ? 4 : 0);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x442,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        (const char *)(unsigned int)v7,
        v12);
    v8 = *(HWND *)(*((_QWORD *)this + 90) + 24LL);
    if ( a2 )
    {
      ShowWindow(v8, 4);
      v9 = *(_QWORD *)(*((_QWORD *)this + 90) + 24LL);
    }
    else
    {
      ShowWindow(v8, 0);
      v9 = 0LL;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 24) + 56LL))(
            *((_QWORD *)this + 24),
            v9,
            0LL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x447,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        (const char *)(unsigned int)v10);
    *((_BYTE *)this + 616) = v4;
  }
  return 0LL;
}

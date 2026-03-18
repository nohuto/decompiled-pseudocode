/*
 * XREFs of ?Run@CGlobalMit@@MEAAKXZ @ 0x1801BFEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180078FE8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1801C0204 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1801C0264 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalMit::Run(CGlobalMit *this)
{
  _QWORD *v2; // rax
  unsigned int v3; // edi
  int v4; // r9d
  int SystemInputHost; // eax
  wil::details *updated; // rax
  __int64 v7; // rbx
  void (*i)(void); // rax
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  int v10; // eax
  void *v11; // rcx
  __int64 result; // rax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  GetCurrentThreadId();
  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = &CInputProxy::`vftable';
  else
    v2 = 0LL;
  *((_QWORD *)this + 5) = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
    v13 = 131;
LABEL_6:
    v4 = v3;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180363710, 2u, v4, v13, 0LL);
    goto LABEL_30;
  }
  SystemInputHost = CoreUICreateEx(1LL, &CMit::s_pMessageSession);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 137;
    goto LABEL_28;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CGlobalMit *))(*(_QWORD *)CMit::s_pMessageSession + 272LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 3),
                      CGlobalMit::OnResetEvent,
                      this);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 139;
    goto LABEL_28;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CGlobalMit *))(*(_QWORD *)CMit::s_pMessageSession + 272LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 17),
                      CGlobalMit::OnResetEvent,
                      this);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 140;
    goto LABEL_28;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 5), 0LL, &CMit::s_pSystemInputHost);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 145;
LABEL_28:
    v4 = SystemInputHost;
    goto LABEL_29;
  }
  updated = (wil::details *)MITGetCursorUpdateHandle();
  if ( updated != (wil::details *)-1LL )
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 18,
      updated);
  if ( !(unsigned int)NtMITActivateInputProcessing(CGlobalMit::s_HitTestRequest, &v15) )
  {
    v3 = -2147467259;
    v13 = 158;
    goto LABEL_6;
  }
  v7 = v15;
  v3 = 0;
  v14 = 0LL;
  (*(void (__fastcall **)(struct IMessageSession *, __int64 *))(*(_QWORD *)CMit::s_pMessageSession + 40LL))(
    CMit::s_pMessageSession,
    &v14);
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(void *, void *, void *), _QWORD))(*(_QWORD *)v14 + 64LL))(
    v14,
    v7,
    CGlobalMit::CompletionHandler,
    0LL);
  for ( i = *(void (**)(void))(*(_QWORD *)v14 + 16LL); ; i = *(void (**)(void))(*(_QWORD *)CMit::s_pMessageSession
                                                                              + 232LL) )
  {
    i();
    if ( *((_BYTE *)this + 32) )
      break;
    ResetEvent(*((HANDLE *)this + 3));
    if ( *((_BYTE *)this + 32) )
      break;
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 808LL) )
    {
      v10 = CMmcssTask::Apply(v9, 1);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xF4u, 0LL);
    }
    else
    {
      CMmcssTask::Revert((CMmcssTask *)v9);
    }
  }
  NtMITDeactivateInputProcessing();
LABEL_30:
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    operator delete(v11, 8uLL);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( CMit::s_pMessageCallSendHost )
  {
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)CMit::s_pMessageCallSendHost + 16LL))(CMit::s_pMessageCallSendHost);
    CMit::s_pMessageCallSendHost = 0LL;
  }
  if ( CMit::s_pMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 17));
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 3));
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 16LL))(CMit::s_pMessageSession);
    CMit::s_pMessageSession = 0LL;
  }
  result = (unsigned __int16)v3;
  if ( (v3 & 0x1FFF0000) != 0x70000 )
    return v3;
  return result;
}

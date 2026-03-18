/*
 * XREFs of ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ @ 0x180219BEC
 * Callers:
 *     ?Initialize@CInputManager@@UEAAJXZ @ 0x180150050 (-Initialize@CInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180226BB8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(CInputManager *this)
{
  _QWORD *v1; // r14
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, int (*)(void *, const void *, int), CInputManager *, _QWORD *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v1 = (_QWORD *)((char *)this + 64);
  if ( *((_QWORD *)this + 9) )
    return 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 64,
    *((_QWORD *)this + 4));
  v4 = *((_QWORD *)this + 4);
  v5 = *(__int64 (__fastcall **)(__int64, int (*)(void *, const void *, int), CInputManager *, _QWORD *))(*(_QWORD *)v4 + 112LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v1,
    *v1);
  v6 = v5(v4, CInputManager::s_OnReceiveInputThreadMessage, this, v1 + 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x8Bu, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           L"EdgyNotificationEndpoint",
           *((_QWORD *)this + 9),
           0LL);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x90u, 0LL);
  }
  return v7;
}

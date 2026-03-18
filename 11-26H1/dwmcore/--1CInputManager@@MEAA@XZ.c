/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x18022695C
 * Callers:
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x180226A20 (--_GCInputManager@@MEAAPEAXI@Z.c)
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x180294644 (--1CGlobalInputManager@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CHitTestContext@@QEAA@XZ @ 0x1802268E4 (--1CHitTestContext@@QEAA@XZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180226BB8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x1802283C4 (-Stop@CMit@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInputManager::~CInputManager(CInputManager *this)
{
  CMit *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CInputManager::`vftable';
  v2 = (CMit *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CMit::Stop(v2);
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v3 )
      (**v3)(v3, 1LL);
  }
  if ( *((_QWORD *)this + 9) )
    (*(void (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 5) + 48LL))(
      *((_QWORD *)this + 5),
      L"EdgyNotificationEndpoint",
      0LL);
  CInputManager::s_pInputManager = 0LL;
  CHitTestContext::~CHitTestContext((void **)this + 10);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 64,
    0LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 48,
    0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
}

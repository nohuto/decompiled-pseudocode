/*
 * XREFs of ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800AF8FC
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18001C670 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDisplayBroker::Shutdown(CDisplayBroker *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  Microsoft::WRL::ComPtr<DispBrokerDesktop::ISessionBrokerInstance>::InternalRelease((__int64 *)this);
}

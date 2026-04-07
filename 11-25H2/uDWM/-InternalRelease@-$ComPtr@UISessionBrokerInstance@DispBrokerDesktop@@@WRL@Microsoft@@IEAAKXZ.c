/*
 * XREFs of ?InternalRelease@?$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x180071164
 * Callers:
 *     ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x180070FC0 (-Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z.c)
 *     ??1CDisplayBroker@@QEAA@XZ @ 0x18009A600 (--1CDisplayBroker@@QEAA@XZ.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800B006C (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DispBrokerDesktop::ISessionBrokerInstance>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}

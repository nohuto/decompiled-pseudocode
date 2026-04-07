/*
 * XREFs of ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x180070FC0
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18005774C (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUISessionBrokerInstance@DispBrokerDesktop@@@Z @ 0x1800710B8 (--$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRI.c)
 *     ?InternalRelease@?$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x180071164 (-InternalRelease@-$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayBroker::Initialize(
        CDisplayBroker *this,
        struct Windows::Devices::Display::Core::IDisplayManager *a2)
{
  unsigned int v2; // edi
  HRESULT v5; // eax
  HSTRING v6; // rdi
  int v7; // eax
  int v8; // eax
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v11; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0LL;
  v5 = WindowsCreateStringReference(L"DispBrokerDesktop.SessionBrokerInstance", 0x27u, &v10, &v11);
  if ( v5 < 0 )
  {
    RaiseException(v5, 1u, 0, 0LL);
    __debugbreak();
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1Eu, 0LL);
    return v2;
  }
  v6 = v11;
  Microsoft::WRL::ComPtr<DispBrokerDesktop::ISessionBrokerInstance>::InternalRelease(this);
  v7 = Windows::Foundation::ActivateInstance<DispBrokerDesktop::ISessionBrokerInstance>(v6, this);
  v2 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1Du, 0LL);
    return v2;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Devices::Display::Core::IDisplayManager *))(**(_QWORD **)this + 48LL))(
         *(_QWORD *)this,
         a2);
  v2 = v8;
  if ( v8 < 0 )
    goto LABEL_8;
  return v2;
}

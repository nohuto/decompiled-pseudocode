/*
 * XREFs of ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x180062170
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800ABB28 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUISessionBrokerInstance@DispBrokerDesktop@@@Z @ 0x180062270 (--$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRI.c)
 *     ?InternalRelease@?$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x180062318 (-InternalRelease@-$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayBroker::Initialize(
        CDisplayBroker *this,
        struct Windows::Devices::Display::Core::IDisplayManager *a2)
{
  HRESULT v4; // eax
  HSTRING v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v11; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0LL;
  v4 = WindowsCreateStringReference(L"DispBrokerDesktop.SessionBrokerInstance", 0x27u, &v10, &v11);
  if ( v4 < 0 )
  {
    RaiseException(v4, 1u, 0, 0LL);
    __debugbreak();
  }
  v5 = v11;
  Microsoft::WRL::ComPtr<DispBrokerDesktop::ISessionBrokerInstance>::InternalRelease(this);
  v6 = Windows::Foundation::ActivateInstance<DispBrokerDesktop::ISessionBrokerInstance>(v5, this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1Du, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Devices::Display::Core::IDisplayManager *))(**(_QWORD **)this + 48LL))(
           *(_QWORD *)this,
           a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1Eu, 0LL);
  }
  return v7;
}

/*
 * XREFs of ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x180062808
 * Callers:
 *     ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x180074B28 (-Create@CDDisplayManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDDisplayManager::Initialize(CDDisplayManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int ActivationFactory; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, char *); // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+38h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-20h] BYREF

  v11 = 0LL;
  string = 0LL;
  memset(&hstringHeader, 0, sizeof(hstringHeader));
  v2 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x24u, 0LL);
  }
  else
  {
    v11 = 0LL;
    v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v11);
    ActivationFactory = RoGetActivationFactory(string, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, v4);
    v3 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ActivationFactory, 0x25u, 0LL);
    }
    else
    {
      v6 = v11;
      v7 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v11 + 48LL);
      v8 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = v7(v6, 2LL, (char *)this + 16);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x28u, 0LL);
    }
  }
  if ( string )
    WindowsDeleteString(string);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v3;
}

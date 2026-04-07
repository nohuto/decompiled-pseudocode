/*
 * XREFs of ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180053870
 * Callers:
 *     ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x180054480 (-HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180089634 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800B5D84 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180053F94 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@UID3D11Device4@@@?$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUID3D11Device4@@@Z @ 0x18008D268 (--$query_to@UID3D11Device4@@@-$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CGraphicsDeviceManager::ReleaseGraphicsDevice(CGraphicsDeviceManager *this)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64, GUID *, __int64); // r9
  __int64 v4; // r10
  int v5; // eax
  unsigned int v6; // edi
  void *v8; // rdx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 28) )
  {
    v12 = 0LL;
    v2 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v12);
    v5 = v3(v4, &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, v2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v5,
        v10);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
      return v6;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 248LL))(v12, *((unsigned int *)this + 28));
    *((_DWORD *)this + 28) = 0;
    wil::details::ResetEvent(*((wil::details **)this + 10), v8);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v12 = 0LL;
    v9 = wil::com_ptr_t<ID3D11Device,wil::err_returncode_policy>::query_to<ID3D11Device4>((char *)this + 64, &v12);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v9,
        v10);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
      return v6;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 528LL))(v12, *((unsigned int *)this + 29));
    *((_DWORD *)this + 29) = 0;
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
  }
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((char *)this + 40);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 24);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 72);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 32);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 64);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 48);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 56);
  return 0LL;
}

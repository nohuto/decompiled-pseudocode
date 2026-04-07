/*
 * XREFs of ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180058B9C
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18005774C (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationEngine::Initialize(CAnimationEngine *this)
{
  _QWORD *v1; // r14
  LPVOID *ppv; // rax
  _QWORD *v4; // rdi
  HRESULT Instance; // ebx
  LPVOID *v6; // rax
  LPVOID *v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rcx

  v1 = (_QWORD *)((char *)this + 8);
  ppv = (LPVOID *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 8);
  v4 = (_QWORD *)((char *)this + 16);
  Instance = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 1u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, ppv);
  if ( Instance < 0 )
  {
    v8 = 87;
  }
  else
  {
    v6 = (LPVOID *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 16);
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary2,
                 0LL,
                 1u,
                 &GUID_03cfae53_9580_4ee3_b363_2ece51b4af6a,
                 v6);
    if ( Instance < 0 )
    {
      v8 = 88;
    }
    else
    {
      v7 = (LPVOID *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 24);
      Instance = CoCreateInstance(
                   &CLSID_UIAnimationTransitionFactory2,
                   0LL,
                   1u,
                   &GUID_937d4916_c1a6_42d5_88d8_30344d6efe31,
                   v7);
      if ( Instance >= 0 )
      {
        *((_BYTE *)this + 120) = 1;
        return (unsigned int)Instance;
      }
      v8 = 89;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, v8, 0LL);
  if ( *v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
    *v1 = 0LL;
  }
  if ( *v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
    *v4 = 0LL;
  }
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 3) = 0LL;
  }
  return (unsigned int)Instance;
}

/*
 * XREFs of ?UpdateScene@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A7D0
 * Callers:
 *     ?ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002A780 (-ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D8944 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::UpdateScene(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = 0;
  v4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result, &v3);
  return result;
}

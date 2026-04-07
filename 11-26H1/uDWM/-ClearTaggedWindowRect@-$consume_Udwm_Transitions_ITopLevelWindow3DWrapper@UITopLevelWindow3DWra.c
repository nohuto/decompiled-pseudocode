/*
 * XREFs of ?ClearTaggedWindowRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A440
 * Callers:
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004194C (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::ClearTaggedWindowRect(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  const char *v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *a1;
  v4 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v3 = 419;
  v5 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 152LL))(v1);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result, &v3);
  return result;
}

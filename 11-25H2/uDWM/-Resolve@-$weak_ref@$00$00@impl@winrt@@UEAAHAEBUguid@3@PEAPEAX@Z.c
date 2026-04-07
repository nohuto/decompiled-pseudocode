/*
 * XREFs of ?Resolve@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180033DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$detach_abi@I$0A@@winrt@@YA?A_P$$QEAI@Z @ 0x180094EA0 (--$detach_abi@I$0A@@winrt@@YA-A_P$$QEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Resolve(__int64 a1)
{
  signed __int32 v1; // eax
  _QWORD *v2; // r8
  signed __int32 v3; // ecx
  __int64 v4; // r9
  volatile signed __int32 *v5; // rbx
  signed __int32 v6; // eax
  __int64 v7; // r9
  __int64 v8; // r11
  signed __int32 v9; // edx
  __int64 result; // rax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v12; // [rsp+48h] [rbp+20h] BYREF

  v1 = *(_DWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1 + 24);
  v3 = v1;
  while ( 1 )
  {
    v11 = v1;
    if ( !v1 )
      break;
    v12 = v3 + 1;
    winrt::detach_abi<unsigned int,0>(&v11);
    v5 = (volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v4 + 24);
    v6 = winrt::detach_abi<unsigned int,0>(&v12);
    v1 = _InterlockedCompareExchange(v5, v6, v9);
    v3 = v1;
    if ( v9 == v1 )
    {
      result = (***(__int64 (__fastcall ****)(_QWORD, __int64))(v7 + 16))(*(_QWORD *)(v7 + 16), v8);
      _InterlockedDecrement(v5);
      return result;
    }
  }
  *v2 = 0LL;
  return 0LL;
}

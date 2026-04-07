/*
 * XREFs of ?Resolve@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002EB70
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$detach_abi@I$0A@@winrt@@YA?A_P$$QEAI@Z @ 0x18002EBF4 (--$detach_abi@I$0A@@winrt@@YA-A_P$$QEAI@Z.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800D160C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Resolve(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v4; // r8
  int v5; // ecx
  __int64 v6; // r9
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  __int64 v9; // r9
  __int64 v10; // r11
  signed __int32 v11; // edx
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  result = std::_Atomic_storage<unsigned int,4>::load(a1 + 24, 0LL, a3, a1);
  v5 = result;
  do
  {
    v12 = result;
    if ( !(_DWORD)result )
    {
      *v4 = 0LL;
      return result;
    }
    v13 = v5 + 1;
    winrt::detach_abi<unsigned int,0>(&v12);
    v7 = (volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v6 + 24);
    v8 = winrt::detach_abi<unsigned int,0>(&v13);
    result = (unsigned int)_InterlockedCompareExchange(v7, v8, v11);
    v5 = result;
  }
  while ( v11 != (_DWORD)result );
  result = (***(__int64 (__fastcall ****)(_QWORD, __int64))(v9 + 16))(*(_QWORD *)(v9 + 16), v10);
  _InterlockedDecrement(v7);
  return result;
}

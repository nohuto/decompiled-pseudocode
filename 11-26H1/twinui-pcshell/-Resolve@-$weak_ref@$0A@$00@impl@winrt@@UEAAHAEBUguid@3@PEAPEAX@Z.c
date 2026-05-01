/*
 * XREFs of ?Resolve@?$weak_ref@$0A@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180223DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::Resolve(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  signed __int32 v2; // eax
  __int64 v3; // rdx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  signed __int32 v7; // ett
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(a1 + 24);
  v2 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)(a1 + 24));
  while ( v2 )
  {
    v7 = v2;
    v2 = _InterlockedCompareExchange(v1, v2 + 1, v2);
    if ( v7 == v2 )
    {
      result = (***(__int64 (__fastcall ****)(_QWORD, __int64))(v5 + 16))(*(_QWORD *)(v5 + 16), v6);
      _InterlockedDecrement(v1);
      return result;
    }
  }
  *v4 = v3;
  return 0LL;
}

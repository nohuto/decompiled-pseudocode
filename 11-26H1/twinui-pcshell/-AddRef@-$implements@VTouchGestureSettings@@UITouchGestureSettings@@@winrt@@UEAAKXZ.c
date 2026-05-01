/*
 * XREFs of ?AddRef@?$implements@VTouchGestureSettings@@UITouchGestureSettings@@@winrt@@UEAAKXZ @ 0x1800E6B10
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::implements<TouchGestureSettings,ITouchGestureSettings>::AddRef(__int64 a1)
{
  signed __int64 v1; // rcx
  volatile signed __int64 *v2; // r8
  unsigned int v3; // edx
  bool v4; // zf
  signed __int64 v5; // rax

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 16, 0LL);
  while ( v1 >= 0 )
  {
    v3 = v1 + 1;
    v5 = _InterlockedCompareExchange64(v2, v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v3;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}

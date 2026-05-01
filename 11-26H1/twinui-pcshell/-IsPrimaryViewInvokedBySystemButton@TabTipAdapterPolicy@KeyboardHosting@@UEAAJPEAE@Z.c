/*
 * XREFs of ?IsPrimaryViewInvokedBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180484080
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewInvokedBySystemButton(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned __int8 *a2)
{
  char v2; // al
  char *v3; // rdx

  v2 = std::_Atomic_storage<bool,1>::load((__int64)this + 908);
  *v3 = v2;
  return 0LL;
}

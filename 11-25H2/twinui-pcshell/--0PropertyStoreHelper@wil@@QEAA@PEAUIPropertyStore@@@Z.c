/*
 * XREFs of ??0PropertyStoreHelper@wil@@QEAA@PEAUIPropertyStore@@@Z @ 0x1802C7AF4
 * Callers:
 *     ?SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18055E244 (-SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhs.c)
 *     ?DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z @ 0x180567614 (-DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _lambda_507ae1b140dd0534ced08e530f119204_::operator() @ 0x180569400 (_lambda_507ae1b140dd0534ced08e530f119204_--operator().c)
 *     _lambda_a4f7c7eeeddd540844b15b912167922b_::operator() @ 0x180569618 (_lambda_a4f7c7eeeddd540844b15b912167922b_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
wil::PropertyStoreHelper *__fastcall wil::PropertyStoreHelper::PropertyStoreHelper(
        wil::PropertyStoreHelper *this,
        struct IPropertyStore *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IPropertyStore *))a2->lpVtbl->AddRef)(a2);
  return this;
}

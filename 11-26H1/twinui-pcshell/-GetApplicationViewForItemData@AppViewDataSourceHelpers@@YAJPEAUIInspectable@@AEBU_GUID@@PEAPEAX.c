/*
 * XREFs of ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x18009B604
 * Callers:
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18009C148 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x1800CCB60 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 *     _lambda_c455d037a1b864dd5cc5867b63d5951d_::operator() @ 0x1806BC870 (_lambda_c455d037a1b864dd5cc5867b63d5951d_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppViewDataSourceHelpers::GetApplicationViewForItemData(
        AppViewDataSourceHelpers *this,
        struct IInspectable *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // ebx
  struct IInspectable *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  *(_QWORD *)&a3->Data1 = 0LL;
  if ( !this )
    return 2147942487LL;
  v7 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(AppViewDataSourceHelpers *, GUID *, struct IInspectable **, void **))this)(
         this,
         &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
         &v7,
         a4);
  if ( v5 >= 0
    && (v5 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, GUID *, const struct _GUID *))v7->lpVtbl->GetIids)(
               v7,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               a3),
        ((void (__fastcall *)(struct IInspectable *))v7->lpVtbl->Release)(v7),
        v5 >= 0) )
  {
    return 0LL;
  }
  else
  {
    return (unsigned int)v5;
  }
}

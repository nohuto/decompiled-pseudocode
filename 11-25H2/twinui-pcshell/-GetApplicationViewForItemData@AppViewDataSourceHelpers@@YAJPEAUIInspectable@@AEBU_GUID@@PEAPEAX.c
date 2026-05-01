/*
 * XREFs of ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F5BC8
 * Callers:
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x1800F4E00 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800F5B08 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::operator() @ 0x180695158 (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppViewDataSourceHelpers::GetApplicationViewForItemData(
        AppViewDataSourceHelpers *this,
        struct IInspectable *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v5; // ebx
  int v6; // edi
  struct IInspectable *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v5 = 0;
  *(_QWORD *)&a3->Data1 = 0LL;
  if ( !this )
    return 2147942487LL;
  v8 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(AppViewDataSourceHelpers *, GUID *, struct IInspectable **, void **))this)(
         this,
         &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
         &v8,
         a4);
  if ( v6 >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, GUID *, const struct _GUID *))v8->lpVtbl->GetIids)(
           v8,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           a3);
    ((void (__fastcall *)(struct IInspectable *))v8->lpVtbl->Release)(v8);
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  return v5;
}

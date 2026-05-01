/*
 * XREFs of ?_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18020B4DC
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180138A30 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationCreation(
        IUnknown *punkSite,
        IUnknown *punk,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a3,
        struct ITaskWindow *a4)
{
  int v8; // ebx
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  IUnknown *v10; // rcx
  IUnknown *v12; // [rsp+38h] [rbp+10h] BYREF

  IUnknown_SetSite(punk, punkSite);
  v8 = ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct ITaskWindow *))punk->lpVtbl[1].AddRef)(
         punk,
         a3,
         a4);
  if ( v8 >= 0 )
  {
    AddRef = punkSite[26].lpVtbl->AddRef;
    v12 = punk;
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
    v8 = ((__int64 (__fastcall *)(IUnknown *, IUnknown **))AddRef)(&punkSite[26], &v12);
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
    }
    if ( v8 < 0 )
      IUnknown_SetSite(punk, 0LL);
  }
  return (unsigned int)v8;
}

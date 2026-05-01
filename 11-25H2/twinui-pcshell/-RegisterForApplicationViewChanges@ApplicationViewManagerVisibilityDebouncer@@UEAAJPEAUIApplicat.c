/*
 * XREFs of ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1801E7970
 * Callers:
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18030E2E0 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJPEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180027758 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180027B54 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::RegisterForApplicationViewChanges(
        RTL_SRWLOCK *this,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct IUnknown *v7; // rcx
  struct IUnknown *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewChangeListener *v11; // [rsp+38h] [rbp+10h] BYREF
  struct IUnknown *v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = a2;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
         &v12,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = AgileRegistrationList::Register(this + 15, v12, a3);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v5);
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
    }
  }
  return v6;
}

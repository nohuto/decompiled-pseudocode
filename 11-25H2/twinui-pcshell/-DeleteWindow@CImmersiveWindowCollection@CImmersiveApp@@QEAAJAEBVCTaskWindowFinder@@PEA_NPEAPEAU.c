/*
 * XREFs of ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18013835C
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180302540 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003E32C (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003F660 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F730 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800402F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180041708 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x180041D70 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800420E0 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180138148 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1801387D8 (-StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x18013898C (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180182C4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180225994 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18030522C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        const struct CTaskWindowFinder *a2,
        bool *a3,
        struct ITaskWindow **a4)
{
  __int64 v8; // rbx
  int TaskWindow; // ebx
  unsigned __int64 v10; // r14
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rcx
  __int64 v12; // rax
  bool v13; // dl
  struct ITaskWindow *v14; // rcx
  struct IUnknown *v15; // rcx
  struct IUnknown *v17; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v19[42]; // [rsp+30h] [rbp-D0h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  v8 = *((_QWORD *)this + 19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v19,
    (__int64)"DeleteWindow");
  v19[0] = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  CImmersiveAppTelemetry::DeleteWindow::StartActivity(
    (CImmersiveAppTelemetry::DeleteWindow *)v19,
    *(const unsigned __int16 **)(v8 + 576));
  v17 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  v17 = 0LL;
  TaskWindow = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(this, a2, &v18);
  v10 = v18;
  if ( TaskWindow >= 0 )
  {
    v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(*((_QWORD *)this + 20) + 8 * v18);
    TaskWindow = (**v11)(v11, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v17);
  }
  if ( TaskWindow >= 0 )
  {
    if ( *((_QWORD *)this + 16)
      && (SHIsSameObject(v17, *((struct IUnknown **)this + 15))
       || !v10
       && *((_QWORD *)this + 21) > 1uLL
       && SHIsSameObject(*(struct IUnknown **)(*((_QWORD *)this + 20) + 8LL), *((struct IUnknown **)this + 15))) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(this);
    }
    CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(this, v10);
    ((void (__fastcall *)(struct IUnknown *, _QWORD))v17->lpVtbl[7].Release)(v17, 0LL);
    v12 = *((_QWORD *)this + 21);
    if ( !v10 )
    {
      *a3 = 1;
      *((_BYTE *)this + 192) = 0;
      if ( v12 )
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, **((struct ITaskWindow ***)this + 20));
      }
      else
      {
        CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, 0LL);
        if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
        {
          CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(this, 0LL);
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this, v13);
        }
        *((_DWORD *)this + 49) = 0;
      }
      CImmersiveApp::CImmersiveWindowCollection::HideFrame(this);
    }
    v14 = (struct ITaskWindow *)v17;
    if ( v17 )
    {
      ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->AddRef)(v17);
      v14 = (struct ITaskWindow *)v17;
    }
    *a4 = v14;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19, TaskWindow);
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  }
  v19[0] = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return (unsigned int)TaskWindow;
}

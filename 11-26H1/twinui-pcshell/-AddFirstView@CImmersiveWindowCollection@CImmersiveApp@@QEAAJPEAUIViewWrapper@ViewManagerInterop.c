/*
 * XREFs of ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180065990
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18005F1A4 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AF04 (-IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005E1E4 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1801CD4E4 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1801EE9D0 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerI.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x1803002B4 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddFirstView(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int inserted; // edi
  __int64 v10; // rcx
  struct ITaskWindow *v11; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm2
  __int64 v15; // xmm0_8
  struct ITaskWindow *v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+48h] [rbp-61h] BYREF
  int v18; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-51h] BYREF
  __int64 v20; // [rsp+60h] [rbp-49h] BYREF
  __int64 v21; // [rsp+68h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v22; // [rsp+70h] [rbp-39h] BYREF
  __int64 v23; // [rsp+78h] [rbp-31h] BYREF
  __int128 v24; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+D0h] [rbp+27h]

  v16 = 0LL;
  if ( a3 )
  {
    v13 = *((_QWORD *)this + 19);
    LODWORD(v24) = 2;
    *((_QWORD *)&v24 + 1) = 0LL;
    *(_QWORD *)&v25 = (v13 + 112) & -(__int64)(v13 != 0);
    DWORD2(v25) = 0;
    v26 = 0LL;
    inserted = (*(__int64 (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)a3 + 200LL))(a3, &v24);
    if ( inserted < 0 )
      goto LABEL_13;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v16, (__int64)a3);
    goto LABEL_9;
  }
  v6 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::IsDeferredPositionValid(this) )
  {
    v6 = v7 + 16;
    v14 = *(_OWORD *)(v7 + 88);
    v15 = *(_QWORD *)(v7 + 104);
    v24 = *(_OWORD *)(v7 + 72);
    v25 = v14;
    v26 = v15;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  v8 = *((_QWORD *)this + 19);
  v19 = (unsigned __int64)&v24 & -(__int64)(v6 != 0);
  v20 = v6;
  v21 = (v8 + 112) & -(__int64)(v8 != 0);
  v18 = 1;
  v22 = a2;
  v23 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,HWND__ * &,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,enum TASK_WINDOW_TYPE &,IImmersiveApplicationInternal * &,tagRECT const * &,APPLICATION_VIEW_DATA const * &>(
               (unsigned int)&v17,
               (unsigned int)&v23,
               (unsigned int)&v22,
               (unsigned int)&v18,
               (__int64)&v21,
               (__int64)&v20,
               (__int64)&v19);
  if ( inserted >= 0 )
    inserted = (**v17)(v17, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v16);
  v10 = (__int64)v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( inserted >= 0 )
  {
LABEL_9:
    if ( !v16 || !(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v16 + 32LL))(v16) )
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
        this,
        2LL,
        *(_BYTE *)(*((_QWORD *)this + 19) + 746LL) != 0 ? 0x20 : 0);
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(this, v16, 0LL);
    if ( inserted >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, v16);
  }
LABEL_13:
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)inserted;
}

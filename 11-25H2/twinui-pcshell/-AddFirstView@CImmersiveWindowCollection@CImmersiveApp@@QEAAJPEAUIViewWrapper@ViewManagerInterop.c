/*
 * XREFs of ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x1800D6C54
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x1800411E0 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800420E0 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800D7504 (-IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800D7524 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerI.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1801D66C0 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x180304984 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddFirstView(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  char *v8; // r14
  __int64 v9; // rdx
  int inserted; // edi
  __int64 v11; // rcx
  struct ITaskWindow *v12; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm2
  __int64 v16; // xmm0_8
  struct ITaskWindow *v17; // [rsp+40h] [rbp-69h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+48h] [rbp-61h] BYREF
  int v19; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-51h] BYREF
  __int64 v21; // [rsp+60h] [rbp-49h] BYREF
  __int64 v22; // [rsp+68h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v23; // [rsp+70h] [rbp-39h] BYREF
  __int64 v24; // [rsp+78h] [rbp-31h] BYREF
  __int128 v25; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v26; // [rsp+C0h] [rbp+17h]
  __int64 v27; // [rsp+D0h] [rbp+27h]

  v17 = 0LL;
  if ( a3 )
  {
    v8 = (char *)this + 152;
    v14 = *((_QWORD *)this + 19);
    LODWORD(v25) = 2;
    *((_QWORD *)&v25 + 1) = 0LL;
    *(_QWORD *)&v26 = (v14 + 112) & -(__int64)(v14 != 0);
    DWORD2(v26) = 0;
    v27 = 0LL;
    inserted = (*(__int64 (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)a3 + 200LL))(a3, &v25);
    if ( inserted < 0 )
      goto LABEL_13;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v17, (__int64)a3);
    goto LABEL_9;
  }
  v6 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::IsDeferredPositionValid(this) )
  {
    v6 = v7 + 16;
    v15 = *(_OWORD *)(v7 + 88);
    v16 = *(_QWORD *)(v7 + 104);
    v25 = *(_OWORD *)(v7 + 72);
    v26 = v15;
    v27 = v16;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  v8 = (char *)this + 152;
  v9 = *((_QWORD *)this + 19);
  v20 = (unsigned __int64)&v25 & -(__int64)(v6 != 0);
  v21 = v6;
  v22 = (v9 + 112) & -(__int64)(v9 != 0);
  v19 = 1;
  v23 = a2;
  v24 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,HWND__ * &,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,enum TASK_WINDOW_TYPE &,IImmersiveApplicationInternal * &,tagRECT const * &,APPLICATION_VIEW_DATA const * &>(
               (unsigned int)&v18,
               (unsigned int)&v24,
               (unsigned int)&v23,
               (unsigned int)&v19,
               (__int64)&v22,
               (__int64)&v21,
               (__int64)&v20);
  if ( inserted >= 0 )
    inserted = (**v18)(v18, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v17);
  v11 = (__int64)v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( inserted >= 0 )
  {
LABEL_9:
    if ( !v17 || !(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v17 + 32LL))(v17) )
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
        this,
        2LL,
        *(_BYTE *)(*(_QWORD *)v8 + 746LL) != 0 ? 0x20 : 0);
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(this, v17, 0LL);
    if ( inserted >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, v17);
  }
LABEL_13:
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)inserted;
}

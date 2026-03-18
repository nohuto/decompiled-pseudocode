/*
 * XREFs of ?EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ @ 0x1801323EC
 * Callers:
 *     ?GetDisplaySurface@CDxHandleBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180132380 (-GetDisplaySurface@CDxHandleBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Wind.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ @ 0x1801326F8 (-GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z @ 0x180132FEC (-GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureDisplaySurface(CDxHandleBitmapRealization *this)
{
  __int64 *v1; // r14
  int v3; // eax
  unsigned int v4; // ebx
  struct IDXGIResource *DXGIResource; // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v9; // eax
  HANDLE v10; // rcx
  bool v11; // cc
  void (*v12)(void); // rax
  struct _LUID *v14; // rax
  CDDisplayManager *v15; // rcx
  int ExistingInteropDevice; // eax
  struct IDisplayDeviceInterop *v17; // rbx
  __int64 (__fastcall *v18)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *); // rdi
  int v19; // eax
  GUID v20; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HANDLE hObject; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+38h] BYREF
  struct IDisplayDeviceInterop *v24; // [rsp+80h] [rbp+40h] BYREF
  char v25; // [rsp+88h] [rbp+48h] BYREF

  v1 = (__int64 *)((char *)this + 384);
  if ( *((_QWORD *)this + 48) )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)this + 72LL))(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  DXGIResource = CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 47));
  if ( DXGIResource )
  {
    v23 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))DXGIResource->lpVtbl->QueryInterface)(
           DXGIResource,
           &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
           &v23);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EC,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
        (const char *)(unsigned int)v6);
      if ( !v23 )
        return v4;
      v12 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
LABEL_11:
      v12();
      return v4;
    }
    v7 = v23;
    hObject = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v23 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v9 = v8(v7, 0LL, 0x10000000LL, 0LL, &hObject);
    v4 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F3,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
        (const char *)(unsigned int)v9);
      v10 = hObject;
      v11 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_7:
      if ( v11 )
        CloseHandle(v10);
      if ( !v23 )
        return v4;
      v12 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
      goto LABEL_11;
    }
    v24 = 0LL;
    v14 = (struct _LUID *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 41) + 64LL))(
                            (char *)this + 328,
                            &v25);
    ExistingInteropDevice = CDDisplayManager::GetExistingInteropDevice(v15, *v14, &v24);
    v4 = ExistingInteropDevice;
    if ( ExistingInteropDevice < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
        (const char *)(unsigned int)ExistingInteropDevice);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
      return v4;
    }
    v17 = v24;
    v18 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *))(*(_QWORD *)v24 + 32LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
    v20 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
    v19 = v18(v17, hObject, &v20, v1);
    v4 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
        (const char *)(unsigned int)v19);
      if ( v24 )
        (*(void (__fastcall **)(struct IDisplayDeviceInterop *))(*(_QWORD *)v24 + 16LL))(v24);
      v10 = hObject;
      v11 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
      goto LABEL_7;
    }
    if ( v24 )
      (*(void (__fastcall **)(struct IDisplayDeviceInterop *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    return 0LL;
  }
  return 2291674884LL;
}

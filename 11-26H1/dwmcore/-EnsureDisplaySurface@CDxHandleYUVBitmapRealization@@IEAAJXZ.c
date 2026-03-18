/*
 * XREFs of ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801333D0
 * Callers:
 *     ?GetDisplaySurface@CDxHandleYUVBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180133380 (-GetDisplaySurface@CDxHandleYUVBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@W.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800FA824 (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x1800FA98C (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z @ 0x180132FEC (-GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureDisplaySurface(CDxHandleYUVBitmapRealization *this)
{
  __int64 *v1; // r14
  int v4; // eax
  unsigned int v5; // ebx
  CD3DTexture *v6; // rcx
  int DXGIResource; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v11; // eax
  CDDisplayManager *v12; // rcx
  __int64 v13; // rax
  struct _LUID v14; // rdx
  int ExistingInteropDevice; // eax
  struct IDisplayDeviceInterop *v16; // rbx
  __int64 (__fastcall *v17)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *); // rdi
  __int64 v18; // rdx
  GUID v19; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HANDLE hObject; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF
  struct IDisplayDeviceInterop *v23; // [rsp+80h] [rbp+40h] BYREF
  struct IDXGIResource *v24; // [rsp+88h] [rbp+48h] BYREF

  v1 = (__int64 *)((char *)this + 384);
  if ( *((_QWORD *)this + 48) )
    return 0LL;
  v4 = CDxHandleYUVBitmapRealization::EnsureTexture(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandleyuvbitmaprealization.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v6 = (CD3DTexture *)*((_QWORD *)this + 47);
    v24 = 0LL;
    DXGIResource = CD3DTexture::GetDXGIResource(v6, &v24);
    v5 = DXGIResource;
    if ( DXGIResource < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A2,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandleyuvbitmaprealization.cpp",
        (const char *)(unsigned int)DXGIResource);
    }
    else
    {
      v22 = 0LL;
      v8 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v24->lpVtbl->QueryInterface)(
             v24,
             &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
             &v22);
      v5 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A5,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandleyuvbitmaprealization.cpp",
          (const char *)(unsigned int)v8);
      }
      else
      {
        v9 = v22;
        hObject = 0LL;
        v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v22 + 104LL);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &hObject,
          0LL);
        v11 = v10(v9, 0LL, 0x10000000LL, 0LL, &hObject);
        v5 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2AC,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandleyuvbitmaprealization.cpp",
            (const char *)(unsigned int)v11);
        }
        else
        {
          v13 = *((_QWORD *)this + 47);
          v23 = 0LL;
          if ( v13 )
          {
            v12 = *(CDDisplayManager **)(*(_QWORD *)(v13 + 40) + 80LL);
            v14 = (struct _LUID)*((_QWORD *)v12 + 118);
          }
          else
          {
            v14 = (struct _LUID)*((_QWORD *)this + 33);
          }
          ExistingInteropDevice = CDDisplayManager::GetExistingInteropDevice(v12, v14, &v23);
          v5 = ExistingInteropDevice;
          if ( ExistingInteropDevice < 0 )
          {
            v18 = 689LL;
          }
          else
          {
            v16 = v23;
            v17 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *))(*(_QWORD *)v23 + 32LL);
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
            v19 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
            ExistingInteropDevice = v17(v16, hObject, &v19, v1);
            v5 = ExistingInteropDevice;
            if ( ExistingInteropDevice >= 0 )
            {
              if ( v23 )
                (*(void (__fastcall **)(struct IDisplayDeviceInterop *))(*(_QWORD *)v23 + 16LL))(v23);
              if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                CloseHandle(hObject);
              if ( v22 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
              if ( v24 )
                ((void (__fastcall *)(struct IDXGIResource *))v24->lpVtbl->Release)(v24);
              return 0LL;
            }
            v18 = 693LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandleyuvbitmaprealization.cpp",
            (const char *)(unsigned int)ExistingInteropDevice);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  }
  return v5;
}

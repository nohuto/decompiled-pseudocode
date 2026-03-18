/*
 * XREFs of ?EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ @ 0x1802ACDC4
 * Callers:
 *     ?GetDisplaySurface@CSwapChainRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1802AD810 (-GetDisplaySurface@CSwapChainRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z @ 0x180132FEC (-GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z.c)
 *     ?EnsureTexture@CSwapChainRealization@@IEAAJXZ @ 0x1802ACF30 (-EnsureTexture@CSwapChainRealization@@IEAAJXZ.c)
 *     ?GetAdapterLuid@CSwapChainRealization@@UEBA?AU_LUID@@XZ @ 0x1802AD0D0 (-GetAdapterLuid@CSwapChainRealization@@UEBA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::EnsureDisplaySurface(CSwapChainRealization *this)
{
  __int64 *v1; // r14
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD, void **); // rbx
  int v9; // eax
  struct _LUID *AdapterLuid; // rax
  CDDisplayManager *v11; // rcx
  int ExistingInteropDevice; // eax
  __int64 v13; // rdx
  struct IDisplayDeviceInterop *v14; // rbx
  __int64 (__fastcall *v15)(struct IDisplayDeviceInterop *, void *, GUID *, __int64 *); // rdi
  GUID v16; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IDisplayDeviceInterop *v18; // [rsp+70h] [rbp+30h] BYREF
  void *v19; // [rsp+78h] [rbp+38h] BYREF

  v1 = (__int64 *)((char *)this + 272);
  if ( *((_QWORD *)this + 34) )
    return 0LL;
  v4 = CSwapChainRealization::EnsureTexture(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *((_QWORD *)this + 33);
    v19 = 0LL;
    v7 = *(_QWORD *)(v6 + 208);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v7 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v19,
      0LL);
    v9 = v8(v7, 0LL, 0x10000000LL, 0LL, &v19);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v18 = 0LL;
      AdapterLuid = (struct _LUID *)CSwapChainRealization::GetAdapterLuid(this);
      ExistingInteropDevice = CDDisplayManager::GetExistingInteropDevice(v11, *AdapterLuid, &v18);
      v5 = ExistingInteropDevice;
      if ( ExistingInteropDevice >= 0 )
      {
        v14 = v18;
        v15 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, void *, GUID *, __int64 *))(*(_QWORD *)v18 + 32LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
        v16 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
        ExistingInteropDevice = v15(v14, v19, &v16, v1);
        v5 = ExistingInteropDevice;
        if ( ExistingInteropDevice >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
          v5 = 0;
          goto LABEL_13;
        }
        v13 = 596LL;
      }
      else
      {
        v13 = 592LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
        (const char *)(unsigned int)ExistingInteropDevice);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24B,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_13:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x244,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}

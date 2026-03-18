/*
 * XREFs of ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x180134294
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801D0E54 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     ?Create@CDDisplaySwapChainBuffer@@SAJAEAV?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@3@AEAV?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@3@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z @ 0x1801E2010 (-Create@CDDisplaySwapChainBuffer@@SAJAEAV-$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::CreateSwapChainBuffer(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r15
  __int64 v13; // r14
  __int64 *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, __int64, _QWORD, __int64, _QWORD, HANDLE *); // rbx
  int v23; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, HANDLE, GUID *, __int64 *); // rdi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char v30; // [rsp+30h] [rbp-20h]
  HANDLE hObject; // [rsp+40h] [rbp-10h] BYREF
  __int64 v32; // [rsp+48h] [rbp-8h] BYREF
  __int64 v33; // [rsp+80h] [rbp+30h] BYREF

  v33 = a1;
  v11 = a11;
  v13 = a9;
  hObject = 0LL;
  v32 = 0LL;
  *(_QWORD *)a11 = 0LL;
  v16 = *(__int64 **)v13;
  v17 = 0LL;
  v33 = 0LL;
  v18 = *v16;
  a11 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v18 + 56))(
          v16,
          *(_QWORD *)(v13 + 48),
          a10,
          &a11);
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x274u, 0LL);
  }
  else
  {
    v21 = *(_QWORD *)(v13 + 32);
    v22 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v21 + 24LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v23 = v22(v21, a11, 0LL, 0x10000000LL, 0LL, &hObject);
    v20 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x27Cu, 0LL);
      goto LABEL_17;
    }
    v24 = *(_QWORD *)(a2 + 544);
    v25 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, __int64 *))(*(_QWORD *)v24 + 384LL);
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v26 = v25(v24, hObject, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v32);
    v20 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x281u, 0LL);
      goto LABEL_17;
    }
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v33);
    v30 = 1;
    v27 = CD3DDevice::CreateDeviceTextureTarget(a2, v32, a5, a6, a7, a8, v30, &v33);
    v20 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x28Bu, 0LL);
    }
    else
    {
      v28 = CDDisplaySwapChainBuffer::Create(
              (unsigned int)&a11,
              (unsigned int)&hObject,
              (unsigned int)&v33,
              a3,
              a4,
              v11);
      v20 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x293u, 0LL);
    }
    v17 = v33;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_17:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( a11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a11 + 16LL))(a11);
  return v20;
}

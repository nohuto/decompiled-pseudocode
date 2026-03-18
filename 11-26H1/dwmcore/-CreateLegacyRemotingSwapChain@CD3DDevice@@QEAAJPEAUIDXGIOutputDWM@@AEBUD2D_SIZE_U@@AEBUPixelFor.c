/*
 * XREFs of ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180296E40
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x180254DC0 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800F5AE8 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012452C (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802A7F50 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacyRemotingSwapChain(
        CD3DDevice *this,
        struct IDXGIOutputDWM *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct ILegacyRemotingSwapChain **a6)
{
  void *v10; // r14
  signed int v11; // ebx
  int v12; // eax
  __int64 *v13; // rcx
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  struct ID3D11Texture2D *v19; // r8
  int v20; // eax
  HANDLE v21; // rax
  signed int LastError; // eax
  int v23; // r9d
  struct IRenderTargetBitmap *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  struct IRenderTargetBitmap *v30; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11Texture2D *v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h]
  void *v33; // [rsp+58h] [rbp-A8h] BYREF
  _UNSIGNED_RATIO v34; // [rsp+60h] [rbp-A0h] BYREF
  struct ILegacyRemotingSwapChain **v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+74h] [rbp-8Ch]
  _DWORD v37[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+94h] [rbp-6Ch]
  int v39; // [rsp+9Ch] [rbp-64h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  const char *v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  _BYTE v45[40]; // [rsp+C0h] [rbp-40h] BYREF
  _UNSIGNED_RATIO v46; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v47[48]; // [rsp+130h] [rbp+30h] BYREF
  WCHAR Name[64]; // [rsp+190h] [rbp+90h] BYREF

  v35 = a6;
  v30 = 0LL;
  *a6 = 0LL;
  v10 = 0LL;
  v33 = 0LL;
  if ( !*((_DWORD *)this + 281) )
  {
    memset_0(v45, 0, 0xC8uLL);
    v12 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v45);
    v11 = v12;
    if ( v12 < 0 )
    {
      v15 = v12;
      v28 = 788;
      goto LABEL_28;
    }
    v13 = (__int64 *)*((_QWORD *)this + 72);
    v34 = v46;
    if ( !v13 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v30);
      v32 = 28;
      v31 = (struct ID3D11Texture2D *)"DWM LegacyRemoting SwapChain";
      v14 = CD3DDevice::CreateRenderTargetBitmap((__int64)this, (const struct CResourceTag *)&v31, a3, a4, a5, 0, &v30);
      v11 = v14;
      if ( v14 < 0 )
      {
        v28 = 842;
LABEL_7:
        v15 = v14;
LABEL_28:
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25D0, 2u, v15, v28, 0LL);
        goto LABEL_29;
      }
LABEL_20:
      v24 = v30;
      v25 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v30 + 144LL))(v30);
      LOBYTE(v26) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 224LL))(v25, v26);
      v33 = 0LL;
      v14 = CLegacyRemotingSwapChain::Create(this, v47, &v34, v24, v10, v35);
      v11 = v14;
      if ( v14 >= 0 )
        goto LABEL_29;
      v28 = 855;
      goto LABEL_7;
    }
    v16 = *v13;
    v31 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v16 + 24))(v13, 0LL);
    v11 = v17;
    if ( v17 < 0 )
    {
      v29 = 801;
    }
    else
    {
      v43 = 28;
      v37[2] = 1;
      v42 = "DWM LegacyRemoting SwapChain";
      v44 = v36;
      v37[0] = a3->width;
      v37[1] = a3->height;
      v18 = *(_DWORD *)a4;
      v37[3] = 1;
      v38 = 1LL;
      v37[4] = v18;
      v39 = 0;
      v40 = 40LL;
      v41 = 2;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v31);
      v20 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)v37, v19, &v31);
      v11 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25D0, 2u, v20, 0x331u, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 72) + 32LL))(
          *((_QWORD *)this + 72),
          0LL,
          0LL);
        goto LABEL_29;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, WCHAR *, __int64))(**((_QWORD **)this + 72) + 32LL))(
              *((_QWORD *)this + 72),
              Name,
              64LL);
      v11 = v17;
      if ( v17 < 0 )
      {
        v29 = 820;
      }
      else
      {
        SetLastError(0);
        v21 = OpenFileMappingW(0xF001Fu, 0, Name);
        if ( !v21 )
        {
          LastError = GetLastError();
          v11 = LastError;
          if ( LastError > 0 )
            v11 = (unsigned __int16)LastError | 0x80070000;
          v29 = 825;
          if ( v11 >= 0 )
            v11 = -2003304445;
          v23 = v11;
          goto LABEL_17;
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &v33,
          v21);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v30);
        v17 = CD3DDevice::CreateRenderTargetBitmap(
                (__int64)this,
                (__int64 *)v31,
                *((_DWORD *)a4 + 1),
                *((_DWORD *)a4 + 2),
                *((_DWORD *)a5 + 2),
                *((_DWORD *)a5 + 4),
                &v30);
        v11 = v17;
        if ( v17 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
          v10 = v33;
          goto LABEL_20;
        }
        v29 = 833;
      }
    }
    v23 = v17;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25D0, 2u, v23, v29, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
    goto LABEL_29;
  }
  v11 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25D0, 2u, -2003304307, 0x311u, 0LL);
LABEL_29:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v33);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
  return (unsigned int)v11;
}

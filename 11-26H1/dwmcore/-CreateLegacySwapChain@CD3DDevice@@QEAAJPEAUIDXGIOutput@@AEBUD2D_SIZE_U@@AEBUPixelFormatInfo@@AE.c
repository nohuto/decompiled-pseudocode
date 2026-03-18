/*
 * XREFs of ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x1801FED6C
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801357B0 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z @ 0x180198B0C (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x1801ABF10 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x18021ADA8 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18021C2A0 (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z @ 0x18021CFFC (-GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacySwapChain(
        union _SLIST_HEADER *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        enum DXGI_FORMAT *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        bool a7,
        struct CLegacySwapChain **a8)
{
  bool v8; // bl
  int v13; // r14d
  int v14; // eax
  CDeviceManager *v15; // rcx
  unsigned int v16; // ecx
  int SwapChainCreationError; // eax
  enum DXGI_FORMAT v18; // r9d
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, GUID *, __int64 *); // r15
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, ULONGLONG, _DWORD *, struct IDXGIOutput *, __int64 *); // r15
  unsigned int v26; // ebx
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  int *v37; // [rsp+78h] [rbp-88h]
  const struct RenderTargetInfo *v38; // [rsp+80h] [rbp-80h]
  _DWORD v39[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h]
  enum DXGI_FORMAT v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A4h] [rbp-5Ch]
  int v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+ACh] [rbp-54h]
  unsigned int SwapchainBufferUsage; // [rsp+B4h] [rbp-4Ch]
  unsigned int v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+BCh] [rbp-44h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  int v50; // [rsp+CCh] [rbp-34h]
  int v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D4h] [rbp-2Ch]
  _BYTE v53[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  __int64 v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+14Ch] [rbp+4Ch]

  v8 = 0;
  v38 = a5;
  v35 = 0LL;
  *a8 = 0LL;
  v13 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  if ( !*((_DWORD *)&this[70].HeaderX64 + 1) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v35);
    v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
            &v35);
    v30 = v14;
    if ( v14 < 0 )
    {
      v29 = 350;
    }
    else
    {
      memset_0(v53, 0, 0xC8uLL);
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v35 + 32LL))(v35, v53);
      v30 = v14;
      if ( v14 >= 0 )
      {
        if ( !v54 || !v55 )
        {
          v30 = -2003304442;
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25F8, 3u, -2003304442, 0x166u, 0LL);
          goto LABEL_39;
        }
        if ( (v58 & 0x100) != 0 )
        {
          v8 = 1;
          CDeviceManager::TrimAllDevices(v15);
        }
        else if ( *((_BYTE *)&this[93].HeaderX64 + 4) )
        {
          CD3DDevice::Trim(this);
        }
        v16 = *((_DWORD *)&this[56].HeaderX64 + 2);
        v37 = (int *)&v30;
        v36 = g_hrNoHardwareDeviceOverride;
        SwapChainCreationError = CD3DDevice::GetSwapChainCreationError(v16, v8);
        v18 = *a4;
        g_hrNoHardwareDeviceOverride = SwapChainCreationError;
        v39[0] = a3->width;
        v39[1] = a3->height;
        v40 = v56;
        v47 = 0;
        v52 = 0;
        v41 = v18;
        v42 = v57;
        v43 = 0;
        v44 = 1LL;
        SwapchainBufferUsage = CD3DDevice::GetSwapchainBufferUsage((CD3DDevice *)this, a7, v58 & 0x100, v18, 0x40u);
        v46 = a6;
        lpVtbl = a2->lpVtbl;
        v50 = 1;
        v51 = 1;
        v48 = 0LL;
        GetParent = lpVtbl->GetParent;
        v49 = 0;
        if ( v34 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        v21 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))GetParent)(
                a2,
                &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
                &v34);
        v30 = v21;
        if ( v21 < 0 )
        {
          v28 = 406;
          goto LABEL_33;
        }
        v22 = v34;
        v23 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v34 + 48LL);
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        v21 = v23(v22, &GUID_713f394e_92ca_47e7_ab81_1159c2791e54, &v33);
        v30 = v21;
        if ( v21 < 0 )
        {
          v28 = 407;
          goto LABEL_33;
        }
        v24 = v33;
        v25 = *(__int64 (__fastcall **)(__int64, ULONGLONG, _DWORD *, struct IDXGIOutput *, __int64 *))(*(_QWORD *)v33 + 24LL);
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v21 = v25(v24, this[34].Alignment, v39, a2, &v32);
        v30 = v21;
        if ( v21 < 0 )
        {
          v28 = 413;
          goto LABEL_33;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v31);
        v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v32)(
                v32,
                &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19,
                &v31);
        v30 = v21;
        if ( v21 < 0 )
        {
          v28 = 415;
          goto LABEL_33;
        }
        if ( (SwapchainBufferUsage & 0x400) != 0 )
        {
          if ( *((int *)&this[39].HeaderX64 + 1) < 2600 )
          {
            v13 = 2;
          }
          else
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v31 + 264LL))(v31) != 2 )
            {
              v30 = -2003304306;
              MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25F8, 3u, -2003304306, 0x1AFu, 0LL);
              goto LABEL_34;
            }
            v13 = 1;
          }
        }
        v21 = CLegacySwapChain::Create(
                (__int64)this,
                (const struct DXGI_OUTPUT_DWM_DESC *)v53,
                v31,
                (__int64)a4,
                (__int64)v38,
                v13,
                (__int64 *)a8);
        v30 = v21;
        if ( v21 < 0 )
        {
          v28 = 448;
LABEL_33:
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25F8, 3u, v21, v28, 0LL);
        }
LABEL_34:
        CFailFastError::~CFailFastError((CFailFastError *)&v36);
        goto LABEL_39;
      }
      v29 = 353;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25F8, 3u, v14, v29, 0LL);
    goto LABEL_39;
  }
  v30 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25F8, 3u, -2003304307, 0x15Cu, 0LL);
LABEL_39:
  v30 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v30, 2u);
  v26 = v30;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
  return v26;
}

/*
 * XREFs of ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z @ 0x18029659C
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801357B0 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCLegacySwapChain@@@Z @ 0x1802A73EC (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateConversionSwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        struct CLegacySwapChain **a7)
{
  int v11; // ebx
  int v12; // r9d
  int v13; // eax
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  struct IDXGISwapChainDWM1 *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+74h] [rbp-8Ch]
  int v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+7Ch] [rbp-84h]
  int v30; // [rsp+84h] [rbp-7Ch]
  unsigned int v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  _BYTE v37[40]; // [rsp+B0h] [rbp-50h] BYREF
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+F8h] [rbp-8h]

  v23[0] = 0LL;
  v22 = 0LL;
  *a7 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( *((_DWORD *)this + 281) )
  {
    v11 = -2003304307;
    v18 = 623;
LABEL_3:
    v12 = v11;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25C0, 3u, v12, v18, 0LL);
    goto LABEL_27;
  }
  if ( *((_BYTE *)this + 1492) )
    CD3DDevice::Trim((union _SLIST_HEADER *)this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v23);
  v13 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          v23);
  v11 = v13;
  if ( v13 < 0 )
  {
    v18 = 632;
    goto LABEL_25;
  }
  memset_0(v37, 0, 0xC8uLL);
  v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23[0] + 32LL))(v23[0], v37);
  v11 = v13;
  if ( v13 < 0 )
  {
    v18 = 635;
    goto LABEL_25;
  }
  if ( !v38 || !v39 )
  {
    v11 = -2003304442;
    v18 = 640;
    goto LABEL_3;
  }
  v24[0] = a3->width;
  v24[1] = a3->height;
  v25 = v40;
  v26 = *(_DWORD *)a4;
  v27 = v41;
  v31 = a6;
  lpVtbl = a2->lpVtbl;
  v32 = 0;
  v36 = 1LL;
  v28 = 0;
  GetParent = lpVtbl->GetParent;
  v29 = 1LL;
  v30 = 96;
  v33 = 0LL;
  v34 = 0;
  v35 = 1;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v13 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v22);
  v11 = v13;
  if ( v13 < 0 )
  {
    v18 = 665;
    goto LABEL_25;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 48LL))(
          v22,
          &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
          &v21);
  v11 = v13;
  if ( v13 < 0 )
  {
    v18 = 666;
    goto LABEL_25;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **)))(*(_QWORD *)v21 + 24LL))(
          v21,
          *((_QWORD *)this + 68),
          v24,
          a2,
          &v20);
  v11 = v13;
  if ( v13 < 0 )
  {
    v18 = 672;
    goto LABEL_25;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v19);
  v13 = (**v20)(v20, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v19);
  v11 = v13;
  if ( v13 < 0 )
  {
    v18 = 674;
    goto LABEL_25;
  }
  v13 = CConversionSwapChain::Create(this, (const struct DXGI_OUTPUT_DWM_DESC *)v37, v19, a4, a5, a7);
  v11 = v13;
  if ( v13 < 0 )
  {
    v18 = 682;
LABEL_25:
    v12 = v13;
    goto LABEL_26;
  }
LABEL_27:
  v16 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v11, 2u);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v23);
  return v16;
}

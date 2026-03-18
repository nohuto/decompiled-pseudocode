/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180123EB4
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18012352C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180124348 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012452C (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ @ 0x18021F4E8 (-GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x18025684C (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802993E4 (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this)
{
  __int64 v1; // rbx
  _QWORD *v2; // r12
  __int64 v3; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r14d
  __int64 v10; // rcx
  int v12; // edi
  unsigned int v13; // eax
  struct IDXGIResource *CurrentFrameBuffer; // rdi
  int v15; // eax
  int Device; // eax
  float EffectiveSDRBoost; // xmm6_4
  __int64 v18; // rcx
  CD3DDevice *v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  struct IDXGIResource **v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // r8
  int StereoRenderTargetBitmap; // eax
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-49h]
  __int64 v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  struct IDXGIResource *v36; // [rsp+50h] [rbp-19h] BYREF
  __int64 v37[3]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+6Fh] BYREF
  CD3DDevice *v40; // [rsp+E0h] [rbp+77h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v34 = 0LL;
  v2 = (_QWORD *)((char *)this + 2632);
  v35 = 0LL;
  v3 = *((_QWORD *)this + 329);
  v39 = 0LL;
  while ( 1 )
  {
    if ( v3 == v2[1] )
      goto LABEL_25;
    if ( *(struct IDXGIResource **)v3 == CCaptureRenderTarget::GetCurrentFrameBuffer(this) )
      break;
    v3 += 24LL;
  }
  v5 = *(_QWORD *)(v3 + 8);
  v39 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v5 = v39;
  }
  v1 = *(_QWORD *)(v3 + 16);
  v35 = v1;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    v5 = v39;
  }
  if ( !v5 )
  {
LABEL_25:
    CurrentFrameBuffer = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
    v15 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))CurrentFrameBuffer->lpVtbl->QueryInterface)(
            CurrentFrameBuffer,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v34);
    LODWORD(v38) = v15;
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x4FBu, 0LL);
      goto LABEL_24;
    }
    v40 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v40);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 2400), &v40);
    LODWORD(v38) = Device;
    v9 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x4FEu, 0LL);
    }
    else
    {
      if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)this + 34)) )
        EffectiveSDRBoost = CCaptureRenderTarget::GetEffectiveSDRBoost(this);
      else
        EffectiveSDRBoost = 0.0;
      if ( *((_BYTE *)this + 2591) )
      {
        v19 = v40;
        v27 = *((unsigned int *)this + 33);
        v41 = 0LL;
        StereoRenderTargetBitmap = CD3DDevice::CreateStereoRenderTargetBitmap(v40, v34, v27);
        LODWORD(v38) = StereoRenderTargetBitmap;
        v9 = StereoRenderTargetBitmap;
        if ( StereoRenderTargetBitmap < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, StereoRenderTargetBitmap, 0x513u, 0LL);
        }
        else
        {
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v39);
          v29 = (__int64)v41;
          v30 = (**v41)(v41, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v39);
          LODWORD(v38) = v30;
          v9 = v30;
          if ( v30 >= 0 )
          {
            v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 24LL))(v29);
            wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(&v35, v31);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
            v1 = v35;
LABEL_33:
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 144LL))(v39);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 152LL))(v21, 0LL);
            if ( v1 )
            {
              v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 152LL))(v24, 0LL);
            }
            *(_OWORD *)v37 = 0LL;
            v36 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
            wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(v37, v39);
            wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(&v37[1], v1);
            if ( v2[1] == *v2 )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 72LL))(
                v39,
                ((unsigned __int64)this + 2384) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
            v22 = (struct IDXGIResource **)v2[1];
            if ( v22 == (struct IDXGIResource **)v2[2] )
            {
              std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
                v2,
                v2[1],
                &v36);
            }
            else
            {
              v23 = v37[0];
              *v22 = v36;
              wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
                v22 + 1,
                v23);
              wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
                v22 + 2,
                v37[1]);
              v2[1] += 24LL;
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37[1]);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v37);
            if ( v19 )
              CD3DDevice::Release(v19);
            v5 = v39;
            goto LABEL_9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x515u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
      }
      else
      {
        v18 = v39;
        v39 = 0LL;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = v40;
        v20 = CD3DDevice::CreateRenderTargetBitmap(
                v40,
                v34,
                *((unsigned int *)this + 33),
                *((unsigned int *)this + 34),
                -3,
                LODWORD(EffectiveSDRBoost),
                &v39);
        LODWORD(v38) = v20;
        v9 = v20;
        if ( v20 >= 0 )
          goto LABEL_33;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x509u, 0LL);
      }
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v40);
    goto LABEL_24;
  }
LABEL_9:
  v6 = (_QWORD *)((char *)this + 2288);
  v38 = v5;
  v7 = *((_DWORD *)this + 578);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v12 = -2147024362;
    v13 = 183;
    v9 = -2147024362;
  }
  else
  {
    if ( v8 <= *((_DWORD *)this + 577) )
    {
      v9 = 0;
      *(_QWORD *)(*v6 + 8LL * v7) = v5;
      *((_DWORD *)this + 578) = v8;
LABEL_12:
      if ( !*((_BYTE *)this + 2591) )
      {
LABEL_13:
        v10 = 0LL;
        v1 = 0LL;
        v39 = 0LL;
        goto LABEL_14;
      }
      v25 = *((_DWORD *)this + 578);
      v38 = v1;
      v26 = v25 + 1;
      if ( v25 + 1 < v25 )
      {
        v12 = -2147024362;
        v32 = 183;
        v9 = -2147024362;
      }
      else
      {
        v9 = 0;
        if ( v26 <= *((_DWORD *)this + 577) )
        {
          *(_QWORD *)(*v6 + 8LL * v25) = v1;
          *((_DWORD *)this + 578) = v26;
          goto LABEL_13;
        }
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2288, 8, 1, &v38);
        v9 = v12;
        if ( v12 >= 0 )
          goto LABEL_13;
        v32 = 194;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v32, 0LL);
      v33 = 1333;
      goto LABEL_23;
    }
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2288, 8, 1, &v38);
    v9 = v12;
    if ( v12 >= 0 )
      goto LABEL_12;
    v13 = 194;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v13, 0LL);
  v33 = 1330;
LABEL_23:
  LODWORD(v38) = v9;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v33, 0LL);
LABEL_24:
  TranslateDXGIorD3DErrorInContext(v9, 0, &v38);
  v10 = v39;
  v9 = v38;
LABEL_14:
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    v10 = v39;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  return v9;
}

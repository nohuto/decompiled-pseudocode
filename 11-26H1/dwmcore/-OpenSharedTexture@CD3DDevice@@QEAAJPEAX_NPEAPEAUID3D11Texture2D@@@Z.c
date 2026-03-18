/*
 * XREFs of ?OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F7904
 * Callers:
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x1800F7138 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x1800FAB08 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802992A0 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 *     ?OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z @ 0x1802B840C (-OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z.c)
 *     ?OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z @ 0x1802B8594 (-OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::OpenSharedTexture(__int64 **this, void *a2, char a3, struct ID3D11Texture2D **a4)
{
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r8
  int v12; // ebx
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(this, &OPEN_SHARED_TEXTURE_EVENT_Start, a2);
  *a4 = 0LL;
  if ( *((_DWORD *)this + 281) )
  {
    v12 = -2003304307;
    v14 = -2003304307;
    v15 = 1908;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
    goto LABEL_7;
  }
  v8 = this[68];
  v9 = *v8;
  if ( !a3 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v9 + 224))(
            v8,
            a2,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            a4);
    v12 = v10;
    if ( v10 >= 0 )
      goto LABEL_7;
    v15 = 1918;
    goto LABEL_16;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v9 + 384))(
          v8,
          a2,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          a4);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 1913;
LABEL_16:
    v14 = v10;
    goto LABEL_11;
  }
LABEL_7:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &OPEN_SHARED_TEXTURE_EVENT_Stop,
      v11,
      1u,
      &v16);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v12, 6u);
}

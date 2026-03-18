/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ @ 0x180133DEC
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180133624 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckTextureFormatSupported@CD3DDevice@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x180134514 (-CheckTextureFormatSupported@CD3DDevice@@AEAA_NW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GatherSupportedTextureFormats(CD3DDevice *this)
{
  unsigned int v1; // ebp
  __int64 v3; // rcx
  bool v4; // di
  int *v5; // rdi
  int *v6; // rsi
  int v7; // eax
  int v8; // r14d
  int v9; // edi
  int v10; // edi
  unsigned int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R8_UNORM) )
    *((_DWORD *)this + 270) = 61;
  *((_DWORD *)this + 271) = CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_A8_UNORM) ? 65 : 87;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R8G8B8A8_UNORM) )
  {
    v12 = 754;
    goto LABEL_30;
  }
  *((_DWORD *)this + 272) = 28;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8A8_UNORM) )
  {
    v12 = 764;
    goto LABEL_30;
  }
  *((_DWORD *)this + 274) = 87;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8X8_UNORM) )
  {
    v12 = 783;
LABEL_30:
    v1 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, v12, 0LL);
    return v1;
  }
  v3 = *((_QWORD *)this + 68);
  *((_DWORD *)this + 275) = 88;
  v13 = 0;
  v4 = (*(int (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v3 + 264LL))(v3, 7LL, &v13, 4LL) >= 0 && v13;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R32G32B32A32_FLOAT) && v4 )
    *((_DWORD *)this + 280) = 2;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_FLOAT) && v4 )
  {
    v5 = (int *)((char *)this + 1120);
    v6 = (int *)((char *)this + 1112);
    *((_DWORD *)this + 278) = 10;
    if ( !*((_DWORD *)this + 280) )
      *v5 = 10;
  }
  else
  {
    v5 = (int *)((char *)this + 1120);
    v7 = *((_DWORD *)this + 280);
    v6 = (int *)((char *)this + 1112);
    if ( v7 )
    {
      *v6 = v7;
    }
    else
    {
      *v5 = 87;
      *v6 = 87;
    }
  }
  v8 = 11;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_UNORM) )
    v8 = *v5;
  v9 = 24;
  *((_DWORD *)this + 279) = v8;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R10G10B10A2_UNORM) )
    v9 = *v6;
  *((_DWORD *)this + 276) = v9;
  v10 = 67;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R9G9B9E5_SHAREDEXP) )
    v10 = *v6;
  *((_DWORD *)this + 277) = v10;
  return v1;
}

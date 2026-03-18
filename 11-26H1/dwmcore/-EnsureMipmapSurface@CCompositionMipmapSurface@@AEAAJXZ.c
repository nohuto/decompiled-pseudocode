/*
 * XREFs of ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18026AF0C
 * Callers:
 *     ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18026B1A0 (-OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180132790 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x18026B088 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1802A45FC (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionMipmapSurface::EnsureMipmapSurface(struct _LUID *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  CDeviceManager *v4; // rcx
  int ExistingDevice; // eax
  struct D3D11_SUBRESOURCE_DATA *v6; // r8
  int v7; // eax
  struct CD3DDevice *v9; // [rsp+38h] [rbp-9h] BYREF
  int v10; // [rsp+44h] [rbp+3h]
  _DWORD v11[5]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v12; // [rsp+5Ch] [rbp+1Bh]
  int v13; // [rsp+64h] [rbp+23h]
  __int64 v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+70h] [rbp+2Fh]
  const char *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]

  v1 = 0;
  v2 = (__int64 *)&this[21];
  if ( !*(_QWORD *)&this[21] )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v9);
    ExistingDevice = CDeviceManager::GetExistingDevice(v4, this[15], &v9);
    v1 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ExistingDevice, 0x113u, 0LL);
    }
    else
    {
      v17 = 30;
      v16 = "DWM Composition Mipmap Surface";
      v18 = v10;
      v11[0] = this[16].LowPart;
      v11[1] = this[16].HighPart;
      v11[2] = this[17].LowPart;
      v11[4] = this[17].HighPart;
      v11[3] = 1;
      v12 = 1LL;
      v13 = 0;
      v14 = 8LL;
      v15 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
      v7 = CD3DSurface::Create(
             (struct CD3DDevice *)((char *)v9 + 1136),
             (const struct DWM_TEXTURE2D_DESC *)v11,
             v6,
             (struct CD3DSurface **)v2);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x125u, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v2 + 72LL))(
          *v2,
          (unsigned __int64)&this[10] & -(__int64)(this != 0LL));
        LOBYTE(this[20].LowPart) = 1;
      }
    }
    Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v9);
  }
  return v1;
}

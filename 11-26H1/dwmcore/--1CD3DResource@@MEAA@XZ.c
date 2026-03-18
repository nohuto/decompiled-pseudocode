/*
 * XREFs of ??1CD3DResource@@MEAA@XZ @ 0x18012BC24
 * Callers:
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x18012BBFC (--1CD3DConstantBuffer@@MEAA@XZ.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x18014ED58 (--1CD3DTexture@@MEAA@XZ.c)
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x1801C7CEC (--1CD3DPixelShader@@MEAA@XZ.c)
 *     ??1CExternalD3DRenderer@@UEAA@XZ @ 0x180295998 (--1CExternalD3DRenderer@@UEAA@XZ.c)
 *     ??1CD3DSurface@@MEAA@XZ @ 0x1802A452C (--1CD3DSurface@@MEAA@XZ.c)
 *     ??1?$CDeviceTextureT@VIDeviceTexture@@@@UEAA@XZ @ 0x1802B759C (--1-$CDeviceTextureT@VIDeviceTexture@@@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CD3DResource::~CD3DResource(CD3DResource *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 8) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(this);
}

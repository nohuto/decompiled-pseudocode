/*
 * XREFs of ??1CSysmemTexture@@MEAA@XZ @ 0x1802B8FC4
 * Callers:
 *     ??_GCSysmemTexture@@MEAAPEAXI@Z @ 0x1802B9010 (--_GCSysmemTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSysmemTexture::~CSysmemTexture(CD3DResource *this)
{
  *((_QWORD *)this + 30) = &CSysmemTexture::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 31) = &CSysmemTexture::`vftable'{for `IBitmapDest'};
  *(_QWORD *)this = &CCrossAdapterTexture::`vftable';
  *((_QWORD *)this + 15) = &CCrossAdapterTexture::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 16) = &CSysmemTexture::`vftable'{for `IPixelFormat'};
  CDeviceTextureT<IDeviceTexture>::~CDeviceTextureT<IDeviceTexture>(this);
}

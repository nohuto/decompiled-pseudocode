/*
 * XREFs of ??_ECDeviceTexture@@MEAAPEAXI@Z @ 0x1802B7660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceTextureT@VIDeviceTexture@@@@UEAA@XZ @ 0x1802B759C (--1-$CDeviceTextureT@VIDeviceTexture@@@@UEAA@XZ.c)
 */

CDeviceTexture *__fastcall CDeviceTexture::`vector deleting destructor'(CDeviceTexture *this, char a2)
{
  *(_QWORD *)this = &CDeviceTexture::`vftable';
  *((_QWORD *)this + 15) = &CDeviceTexture::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 16) = &CSysmemTexture::`vftable'{for `IPixelFormat'};
  CDeviceTextureT<IDeviceTexture>::~CDeviceTextureT<IDeviceTexture>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

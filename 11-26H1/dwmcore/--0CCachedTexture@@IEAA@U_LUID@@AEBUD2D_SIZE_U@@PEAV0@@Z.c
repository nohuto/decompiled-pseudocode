/*
 * XREFs of ??0CCachedTexture@@IEAA@U_LUID@@AEBUD2D_SIZE_U@@PEAV0@@Z @ 0x1802B1440
 * Callers:
 *     ?Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z @ 0x1802B167C (-Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z.c)
 *     ?CreateSecondary@CCachedTexture@@KAJPEAV1@U_LUID@@PEAPEAV1@@Z @ 0x1802B17C4 (-CreateSecondary@CCachedTexture@@KAJPEAV1@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CCachedTexture *__fastcall CCachedTexture::CCachedTexture(
        CCachedTexture *this,
        struct _LUID a2,
        const struct D2D_SIZE_U *a3,
        struct CCachedTexture *a4)
{
  UINT32 height; // r10d
  CCachedTexture *result; // rax

  *((_DWORD *)this + 2) = 0;
  height = a3->height;
  *((_DWORD *)this + 8) = a3->width;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 9) = height;
  *((_QWORD *)this + 5) = (char *)this + 48;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CCachedTexture::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CCachedTexture::`vftable'{for `IDeviceResourceNotify'};
  *((struct _LUID *)this + 14) = a2;
  *((_QWORD *)this + 15) = ((unsigned __int64)a4 + 16) & -(__int64)(a4 != 0LL);
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_WORD *)this + 80) = 0;
  return result;
}

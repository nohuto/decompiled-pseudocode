/*
 * XREFs of ??0CSysmemTexture@@IEAA@XZ @ 0x1802B8F2C
 * Callers:
 *     ?Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B920C (-Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800F7A8C (--0CD3DResource@@IEAA@_N@Z.c)
 */

CSysmemTexture *__fastcall CSysmemTexture::CSysmemTexture(CSysmemTexture *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  CD3DResource::CD3DResource(this, 0LL);
  *(_QWORD *)(v2 + 136) = v1;
  *(_DWORD *)(v2 + 188) = v1;
  *(_DWORD *)(v2 + 192) = 3;
  *(_DWORD *)(v2 + 200) = -1;
  *(_QWORD *)(v2 + 208) = v1;
  *(_QWORD *)(v2 + 216) = v1;
  *(_QWORD *)(v2 + 224) = v1;
  *(_QWORD *)(v2 + 232) = v1;
  *(_QWORD *)v2 = &CSysmemTexture::`vftable'{for `CCrossAdapterTexture'};
  *(_QWORD *)(v2 + 120) = &CCrossAdapterTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v2 + 128) = &CSysmemTexture::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(v2 + 240) = &CSysmemTexture::`vftable'{for `IBitmapSource'};
  *(_QWORD *)(v2 + 248) = &CSysmemTexture::`vftable'{for `IBitmapDest'};
  return (CSysmemTexture *)v2;
}

/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x1800F652C
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z @ 0x1800F6434 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F7AD0 (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802B0844 (-Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800F51D4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IDeviceTextureTarget *a2)
{
  __int64 v2; // rsi
  struct ID2DBitmapCacheSource *v5; // rcx
  struct ID2DBitmapCacheSource *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 15) + 72LL))(
    *((_QWORD *)this + 15),
    ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  v5 = 0LL;
  v6 = 0LL;
  if ( *((_BYTE *)this + 128) )
    goto LABEL_6;
  if ( (**(int (__fastcall ***)(struct IDeviceTextureTarget *, GUID *, struct ID2DBitmapCacheSource **))a2)(
         a2,
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         &v6) < 0 )
  {
    v5 = v6;
LABEL_6:
    *((_BYTE *)this + 128) = 1;
    goto LABEL_7;
  }
  CD2DBitmapCache::InitializeCache(this, v6);
  v5 = v6;
LABEL_7:
  if ( v5 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v5 + 16LL))(v5);
}

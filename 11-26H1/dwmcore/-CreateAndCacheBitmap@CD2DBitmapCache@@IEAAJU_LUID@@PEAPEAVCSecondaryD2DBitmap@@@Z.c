/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18012F084
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18012D3C0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 *     ??R?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@QEBAXPEAVCCachedBitmap@CD2DBitmapCache@@@Z @ 0x180130AE8 (--R-$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@QEBAXPEAVCCachedBitmap@CD2DBitmapCache.c)
 *     ??$emplace_back@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@1@$$QEAV21@@Z @ 0x1802B0B4C (--$emplace_back@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        __int64 this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  CD3DDevice *v4; // rdi
  int Device; // eax
  CD3DDevice *v8; // rbx
  unsigned int v9; // esi
  char **v10; // rdx
  CD3DDevice *v11; // rax
  CD3DDevice *v12; // r14
  struct CSecondaryD2DBitmap *v13; // rcx
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-10h]
  struct CSecondaryD2DBitmap *v17; // [rsp+70h] [rbp+40h] BYREF
  CD3DDevice *v18; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  v18 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v18);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a2, &v18);
  v8 = v18;
  v9 = Device;
  if ( Device < 0 )
  {
    v16 = 257;
    goto LABEL_21;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v17 + 16LL))(v17);
  v10 = &off_1802DB340;
  if ( !*(_QWORD *)(this + 32) )
    v10 = &off_1802DB330;
  Device = CD3DDevice::CreateSecondaryD2DBitmap(
             v8,
             (const struct CResourceTag *)v10,
             *(struct ID2DBitmapCacheSource **)(this + 24),
             &v17);
  v9 = Device;
  if ( Device < 0 )
  {
    v16 = 261;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, v16, 0LL);
    goto LABEL_11;
  }
  v11 = (CD3DDevice *)MIDL_user_allocate(0x10uLL);
  v12 = v11;
  if ( v11 )
  {
    v13 = v17;
    *(_QWORD *)v11 = (this + 16) & -(__int64)(this != 0);
    *((_QWORD *)v11 + 1) = v13;
    if ( v13 )
      (*(void (__fastcall **)(struct CSecondaryD2DBitmap *, __int64))(*(_QWORD *)v13 + 8LL))(v13, -this);
    (*(void (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)v12 + 1) + 72LL))(
      *((_QWORD **)v12 + 1),
      (this + 16) & -(__int64)(this != 0));
    v18 = v12;
    std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::emplace_back<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>(
      this + 48,
      &v18);
    v4 = v18;
    *a3 = v17;
    v17 = 0LL;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x108u, 0LL);
  }
LABEL_11:
  if ( v8 )
    CD3DDevice::Release(v8);
  if ( v4 )
    std::default_delete<CD2DBitmapCache::CCachedBitmap>::operator()(v14, v4);
  if ( v17 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v17 + 16LL))(v17);
  return v9;
}

/*
 * XREFs of ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800FA824
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1800FA640 (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1800FA790 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801333D0 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1801D3550 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x1800FAB08 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FABC4 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureTexture(CDxHandleYUVBitmapRealization *this)
{
  unsigned int v1; // edi
  struct CD3DVidMemOnlyTexture **v2; // r14
  int Device; // eax
  bool v5; // r8
  unsigned int v6; // r9d
  int v7; // eax
  char *v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  CD3DDevice *v11; // rcx
  CD3DDevice *v13; // [rsp+40h] [rbp+8h] BYREF
  char *v14; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (struct CD3DVidMemOnlyTexture **)((char *)this + 376);
  if ( !*((_QWORD *)this + 47) )
  {
    if ( *((_DWORD *)this + 70) )
    {
      v1 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x284u, 0LL);
      return v1;
    }
    v13 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v13);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 264), &v13);
    v1 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x278u, 0LL);
      v11 = v13;
      if ( !v13 )
        return v1;
      goto LABEL_10;
    }
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v2);
    v7 = CD3DVidMemOnlyTexture::OpenSharedTexture(v13, *((void **)this + 32), v5, v6, v2);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x27Eu, 0LL);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v13);
      return v1;
    }
    v8 = (char *)this + 16;
    v9 = (_QWORD *)((char *)*v2 + 48);
    v14 = v8;
    v10 = (_QWORD *)v9[1];
    if ( v10 == (_QWORD *)v9[2] )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        v9,
        (__int64)v10,
        (__int64 *)&v14);
    }
    else
    {
      *v10 = v8;
      v9[1] += 8LL;
    }
    if ( v13 )
    {
      v11 = v13;
LABEL_10:
      CD3DDevice::Release(v11);
    }
  }
  return v1;
}

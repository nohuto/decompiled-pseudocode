/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1801D3550
 * Callers:
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801DCCFC (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800FA824 (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FABC4 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1801B0930 (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA-AU_LUID@@XZ.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1801BAC74 (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        CDxHandleYUVBitmapRealization *this,
        struct IYUVSwapChainRealization *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char *v6; // rsi
  struct _LUID *AdapterLuid; // rax
  int Device; // eax
  __int64 v10; // r8
  int v11; // eax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  struct CD3DDevice *v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    v14 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v14);
    AdapterLuid = (struct _LUID *)CDxHandleYUVBitmapRealization::GetAdapterLuid(
                                    (CDxHandleYUVBitmapRealization *)((char *)this + 328),
                                    &v15);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *AdapterLuid, &v14);
    v5 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0xABu, 0LL);
    }
    else
    {
      v6 = (char *)this + 376;
      wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 47);
      v11 = CD3DVidMemOnlyTexture::Create(
              *(struct ID3D11Texture2D **)(*((_QWORD *)a2 + 6) + 120LL),
              *((_DWORD *)this + 70),
              v10,
              v14,
              (struct CD3DVidMemOnlyTexture **)this + 47);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v12 = (_QWORD *)(*(_QWORD *)v6 + 48LL);
        v15 = (__int64)this + 16;
        v13 = (_QWORD *)v12[1];
        if ( v13 == (_QWORD *)v12[2] )
        {
          std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
            v12,
            (__int64)v13,
            &v15);
        }
        else
        {
          *v13 = (char *)this + 16;
          v12[1] += 8LL;
        }
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v14);
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xB1u, 0LL);
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v14);
    return v5;
  }
  v4 = CDxHandleYUVBitmapRealization::EnsureTexture(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xA0u, 0LL);
    return v5;
  }
  v6 = (char *)this + 376;
LABEL_4:
  *((_BYTE *)this + 393) = (*(_DWORD *)(*(_QWORD *)v6 + 168LL) & 0x400000) == 0;
  return v5;
}

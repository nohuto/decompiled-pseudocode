/*
 * XREFs of ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802509A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18005E960 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180102580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTANDSIZE_L@@2W4SurfaceShaderType@@@Z @ 0x180250B7C (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGammaBlendLayer::ApplyState(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  int v2; // eax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]
  int v16; // [rsp+3Ch] [rbp-Ch]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 6);
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 3);
  v14 = 0LL;
  v15 = v2;
  v6 = *((_DWORD *)this + 7);
  v17 = 0LL;
  v16 = v6;
  wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v17);
  v7 = (**v4)(v4, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x3Cu, 0LL);
  }
  else if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 120LL))(v17, 0LL) )
  {
    v9 = CDrawingContext::FlushD2D(a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x47u, 0LL);
    }
    else
    {
      v10 = CExternalLayer::ApplyState(this, a2);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x49u, 0LL);
      }
      else
      {
        v12 = ((__int64 (__fastcall *)(__int64, struct CDrawingContext *, __int64, char *, __int64 *, int))CGammaBlendLayer::CopyAndTransform)(
                v11,
                a2,
                v17,
                (char *)this + 16,
                &v14,
                2);
        v8 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x4Fu, 0LL);
      }
    }
  }
  else
  {
    v8 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292287, 0x44u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  return v8;
}

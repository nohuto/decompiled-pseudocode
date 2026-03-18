/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x180125000
 * Callers:
 *     ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180123428 (-GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801249F0 (-GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180124F78 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F6010 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18019B6C4 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180215DF4 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18026F644 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef(
        struct CD3DDevice *a1,
        struct CD3DDevice *a2,
        struct CD2DGenericInk **a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // r11
  __int64 v10; // rax
  struct CD2DGenericInk *v11; // rax
  CDeviceManager *v12; // rcx
  int DefaultDevice; // eax
  CGenericInk *v14; // rcx
  int v15; // eax
  CGenericInk *v16; // rcx
  int v17; // eax
  struct CD2DGenericInk *v18; // rsi
  _QWORD *v19; // rcx
  struct CD3DDevice **v20; // rdx
  struct CD3DDevice *v22; // [rsp+50h] [rbp+20h] BYREF
  struct CD2DGenericInk *v23; // [rsp+60h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0;
  v5 = 0LL;
  v6 = *((_QWORD *)a1 + 3) - v3;
  *a3 = 0LL;
  v7 = v6 >> 3;
  while ( (unsigned int)v5 < v7 )
  {
    if ( !a2
      || (v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8 * v5) + 40LL) + 24LL),
          a2 == (struct CD3DDevice *)((v10 - 16) & -(__int64)(v10 != 0))) )
    {
      v11 = *(struct CD2DGenericInk **)(v3 + 8 * v5);
      *a3 = v11;
      if ( v11 )
        return v4;
      break;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  if ( a2 )
  {
    v16 = (CGenericInk *)*((_QWORD *)a1 + 1);
    v23 = 0LL;
    v17 = CGenericInk::CreateResource(v16, a2, &v23);
    v4 = v17;
    if ( v17 >= 0 )
      goto LABEL_14;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x52u, 0LL);
  }
  else
  {
    v22 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v22);
    DefaultDevice = CDeviceManager::GetDefaultDevice(v12, &v22);
    v4 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v22);
      return v4;
    }
    v14 = (CGenericInk *)*((_QWORD *)a1 + 1);
    v23 = 0LL;
    v15 = CGenericInk::CreateResource(v14, v22, &v23);
    v4 = v15;
    if ( v15 >= 0 )
    {
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v22);
LABEL_14:
      v18 = v23;
      v22 = a1;
      v19 = (_QWORD *)((char *)v23 + 16);
      v20 = (struct CD3DDevice **)*((_QWORD *)v23 + 3);
      if ( v20 == *((struct CD3DDevice ***)v23 + 4) )
      {
        std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
          v19,
          (__int64)v20,
          (__int64 *)&v22);
      }
      else
      {
        *v20 = a1;
        v19[1] += 8LL;
      }
      *a3 = v18;
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)a1 + 16,
                   (__int64)(*((_QWORD *)a1 + 3) - *((_QWORD *)a1 + 2)) >> 3) = v18;
      return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x4Eu, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v22);
  }
  if ( v23 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v23);
  return v4;
}

/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18026FE00
 * Callers:
 *     ?GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18026FFB0 (-GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802700E0 (-GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180196808 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180215DF4 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18026FC10 (-CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDevice *a2,
        struct CD2DInk **a3)
{
  unsigned int v3; // edi
  __int64 i; // r12
  __int64 v8; // rcx
  CDeviceManager *v9; // rcx
  int DefaultDevice; // eax
  int v11; // eax
  int v12; // eax
  struct CD2DInk *v13; // rbx
  __int64 v14; // rdx
  struct CD2DInk *v16; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DDevice *v17; // [rsp+80h] [rbp+50h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  *a3 = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( (unsigned int)i >= (unsigned __int64)((*(_QWORD *)(a1 + 24) - v8) >> 3) )
      break;
    if ( !a2
      || a2 == (struct CD3DDevice *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8 * i) + 40LL))(*(_QWORD *)(v8 + 8 * i)) )
    {
      *a3 = *(struct CD2DInk **)(*(_QWORD *)(a1 + 16) + 8 * i);
      break;
    }
  }
  if ( !*a3 )
  {
    v16 = 0LL;
    if ( !a2 )
    {
      v17 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v17);
      DefaultDevice = CDeviceManager::GetDefaultDevice(v9, &v17);
      v3 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      }
      else
      {
        v11 = CInk::CreateResource(*(CInk **)(a1 + 8), v17, &v16);
        v3 = v11;
        if ( v11 >= 0 )
        {
          wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v17);
LABEL_16:
          v13 = v16;
          (*(void (__fastcall **)(struct CD2DInk *, __int64))(*(_QWORD *)v16 + 72LL))(v16, a1);
          *a3 = v13;
          v14 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
          v16 = 0LL;
          v18 = 0LL;
          v17 = 0LL;
          *detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
             (__int64 *)(a1 + 16),
             v14) = (__int64)v13;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
          goto LABEL_18;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x4Eu, 0LL);
      }
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v17);
LABEL_18:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      return v3;
    }
    v12 = CInk::CreateResource(*(CInk **)(a1 + 8), a2, &v16);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x52u, 0LL);
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  return v3;
}

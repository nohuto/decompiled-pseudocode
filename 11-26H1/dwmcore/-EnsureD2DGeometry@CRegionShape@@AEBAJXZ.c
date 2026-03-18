/*
 * XREFs of ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x1800AF944
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800AF8B0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x1800AFAC0 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqu.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800AFB20 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U.c)
 *     ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x1800AFBE4 (-CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRegionShape::EnsureD2DGeometry(CRegionShape *this)
{
  unsigned int v1; // edi
  CD2DFactory *v4; // rcx
  int v5; // eax
  struct ID2D1Geometry *v6; // rbx
  __int64 v7; // rax
  struct ID2D1Geometry *v8; // rcx
  signed __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  struct ID2D1Geometry *v10; // [rsp+40h] [rbp-C8h] BYREF
  struct tagRECT *v11[3]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v12; // [rsp+60h] [rbp-A8h]

  v1 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v9 = 0LL;
    DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>(v11);
    v12 = 0;
    CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>>(
      (char *)this + 16,
      v11);
    v10 = 0LL;
    v5 = CD2DFactory::CreateRegionGeometry(v4, v11[0], v12, &v10);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xE8u, 0LL);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v11);
      v8 = v10;
      if ( !v10 )
        return v1;
      v7 = *(_QWORD *)v10;
    }
    else
    {
      v6 = v10;
      (**(void (__fastcall ***)(struct ID2D1Geometry *, GUID *, signed __int64 *))v10)(
        v10,
        &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
        &v9);
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v9, 0LL) )
        v9 = 0LL;
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v11);
      if ( v9 )
        (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v9 + 16LL))(v9);
      v7 = *(_QWORD *)v6;
      v8 = v6;
    }
    (*(void (__fastcall **)(struct ID2D1Geometry *))(v7 + 16))(v8);
  }
  return v1;
}

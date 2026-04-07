/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800119B4 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x180014168 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ThumbnailVisualDirtyFlags@CThumbnailVisual@@0P@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E50 (--$ConvertDirtyEnumToFlag@$MW4ThumbnailVisualDirtyFlags@CThumbnailVisual@@0P@$00@@YA-AVDirtyFlag.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800289EC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800458AC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180065C98 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180077688 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC (-RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18008B908 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowVisual(CSecondaryWindowRepresentation **this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  float v7; // xmm0_4
  int v8; // ecx
  int v9; // eax
  float v10; // xmm4_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  __int32 v14; // xmm2_4
  LONG v15; // esi
  LONG v16; // ebp
  __int64 v17; // r8
  __int64 v18; // r8
  struct CBaseGeometryProxy *v19; // rdx
  int v20; // ecx
  int v21; // edx
  int RectangleGeometry; // eax
  int v23; // eax
  struct tagPOINT v25[2]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0;
  CPrimitiveGroupVisual::RemoveAllPrimitives((CPrimitiveGroupVisual *)this);
  CContainerVisual::RemoveAllChildren((CContainerVisual *)this);
  if ( *((_BYTE *)this + 416) )
  {
    v3 = CThumbnailVisual::EnsureSecondaryWindowRepresentation((CThumbnailVisual *)this, 0LL);
    v2 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x276u, 0LL);
      return v2;
    }
    v4 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this[45]);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x277u, 0LL);
      return v2;
    }
    v5 = CContainerVisual::AddChild((CContainerVisual *)this, *((struct CVisual **)this[45] + 6));
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x278u, 0LL);
      return v2;
    }
    v6 = CSecondaryWindowRepresentation::Validate(this[45]);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x279u, 0LL);
      return v2;
    }
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      this[60] = 0LL;
      *((_DWORD *)this + 122) = 0;
      v7 = FLOAT_1_0;
    }
    else
    {
      v7 = 0.0;
    }
    *((float *)this + 123) = v7;
    *((_DWORD *)this + 8) &= ~*___ConvertDirtyEnumToFlag__MW4ThumbnailVisualDirtyFlags_CThumbnailVisual__0P__00__YA_AVDirtyFlags__XZ(v25);
    v8 = *((_DWORD *)this + 114);
    if ( v8 )
    {
      v9 = *((_DWORD *)this + 115);
      if ( v9 )
      {
        v10 = (float)*((int *)this + 110);
        v11 = v10 / (float)v8;
        v12 = (float)*((int *)this + 111);
        v13 = v12 / (float)v9;
        if ( (*((_DWORD *)this[44] + 9) & 0x100000) != 0 && *((_BYTE *)this + 418) )
        {
          COERCE_FLOAT(v14 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 105) - 0.0) & v14) > 0.0000011920929 )
            v11 = v10 / *((float *)this + 105);
          else
            v11 = 0.0;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 106) - 0.0) & v14) > 0.0000011920929 )
            v13 = v12 / *((float *)this + 106);
          else
            v13 = 0.0;
        }
        CVisual::SetScale(*((CVisual **)this[45] + 6), v11, v13);
        v15 = *((_DWORD *)this + 108);
        v25[0].x = v15;
        v16 = *((_DWORD *)this + 109);
        v25[0].y = v16;
        CVisual::SetOffset(*((struct tagPOINT **)this[45] + 6), v25, v17);
        if ( !*((_BYTE *)this[44] + 34) )
        {
          if ( v11 == 1.0 && v13 == 1.0 )
            CVisual::ClearInterpolationMode((CVisual *)this);
          else
            CVisual::SetInterpolationMode((__int64)this, 6LL, v18);
        }
        if ( !*((_BYTE *)this[44] + 34) )
        {
          v19 = 0LL;
          v25[0] = 0LL;
          if ( v13 != 0.0 && v11 != 0.0 )
          {
            *(_OWORD *)&v25[0].x = *((_OWORD *)this + 29);
            v20 = _mm_cvtsi128_si32(*(__m128i *)&v25[0].x) - v15;
            v21 = v25[0].y - v16;
            v25[0] = 0LL;
            RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                  v20,
                                  v21,
                                  (int)((double)v25[1].x / v11 + 0.5),
                                  (int)((double)v25[1].y / v13 + 0.5),
                                  (struct CRectangleGeometryProxy **)v25);
            v2 = RectangleGeometry;
            if ( RectangleGeometry < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x2AEu, 0LL);
LABEL_29:
              wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)v25);
              return v2;
            }
            v19 = (struct CBaseGeometryProxy *)v25[0];
          }
          v23 = CVisualProxy::SetClip(*(CVisualProxy **)(*((_QWORD *)this[45] + 6) + 16LL), v19);
          v2 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x2B1u, 0LL);
          goto LABEL_29;
        }
      }
    }
  }
  return v2;
}

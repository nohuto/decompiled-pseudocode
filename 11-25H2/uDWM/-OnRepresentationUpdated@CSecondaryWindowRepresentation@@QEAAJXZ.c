/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001D550
 * Callers:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001D380 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18001E5DC (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x18001D7B4 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18001DA54 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001DBAC (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001DC7C (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001DCF8 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18001DFB8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x18001DFCC (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001E330 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001E370 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800B8B5C (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v2; // rcx
  unsigned int v3; // edi
  int v4; // edx
  CWindowData **v5; // r14
  char v6; // si
  __m128i v7; // xmm6
  char v8; // r15
  int v9; // eax
  int v10; // eax
  char v11; // bp
  CWindowData *RepresentationWindowData; // rax
  CVisual *v13; // rcx
  CBaseObject *v15; // rcx
  CWindowData *v16; // rax
  CBaseObject *v17; // rcx
  int v18; // eax
  __m128i v19; // [rsp+30h] [rbp-38h] BYREF

  v2 = (CWindowData *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 && !*((_BYTE *)this + 161) )
  {
    v4 = *((_DWORD *)this + 10);
    v5 = (CWindowData **)((char *)this + 64);
    v6 = 1;
    v7 = *((__m128i *)this + 4);
    v19 = v7;
    if ( (v4 & 0x800) != 0 )
    {
      *((_DWORD *)this + 18) = 3;
      *v5 = v2;
    }
    else
    {
      CWindowData::GetIdealWindowRepresentation(
        v2,
        (v4 & 0x20) != 0,
        (CSecondaryWindowRepresentation *)((char *)this + 64));
    }
    v8 = 0;
    if ( (CWindowData *)v7.m128i_i64[0] != *v5 || _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) != *((_DWORD *)this + 18) )
    {
      CSecondaryWindowRepresentation::ReleaseAllResources(this);
      v8 = 1;
      if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
      {
        v17 = (CBaseObject *)*((_QWORD *)this + 47);
        if ( v17 )
        {
          CBaseObject::Release(v17);
          *((_QWORD *)this + 47) = 0LL;
        }
        v18 = CImmersiveWindowIconic::Create(
                *((struct CWindowData **)this + 4),
                *((_DWORD *)this + 41),
                (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
                (*((_DWORD *)this + 10) & 0x1000) != 0,
                (struct CImmersiveWindowIconic **)this + 47);
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x1C2u, 0LL);
          return v3;
        }
      }
      v9 = CWindowData::ChangeSecondaryWindowRepresentation(
             *((CWindowData **)this + 4),
             this,
             (struct CWindowRepresentation *)&v19);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1C5u, 0LL);
        return v3;
      }
      v10 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1C6u, 0LL);
        return v3;
      }
    }
    v11 = *((_BYTE *)this + 336);
    RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
    if ( !CWindowData::IsSimpleClientArea(RepresentationWindowData)
      || *((_QWORD *)this + 6)
      || (v16 = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64)),
          CWindowData::IsImmersiveWindow(v16)) )
    {
      v6 = 0;
    }
    *((_BYTE *)this + 336) = v6;
    if ( !v8 )
    {
      if ( !v11 && !v6 )
        return v3;
      v15 = (CBaseObject *)*((_QWORD *)this + 38);
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *((_QWORD *)this + 38) = 0LL;
      }
    }
    if ( (*((_BYTE *)this + 40) & 2) != 0 )
      (*(void (__fastcall **)(_QWORD, CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL))(
        *((_QWORD *)this + 21),
        this);
    CSecondaryWindowRepresentation::SetDirtyFlags(this, 4u);
    v13 = (CVisual *)*((_QWORD *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64))
                     + 55);
    if ( v13 )
      CVisual::PropagateDirtyChildren(v13);
    CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  }
  return v3;
}

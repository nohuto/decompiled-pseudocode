/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98
 * Callers:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180028C4C (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@IEAAXXZ @ 0x180015FBC (-PropagateDirtyChildren@CVisual@@IEAAXXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@01$00@@YA?AVDirtyFlags@@XZ @ 0x180016468 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@01$00@@YA-AVDirtyFla.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800282E4 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002910C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800295A8 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z @ 0x180029674 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002A920 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180034354 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800B7B4C (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v2; // rcx
  unsigned int v3; // edi
  int v4; // edx
  CWindowData **v5; // r14
  char v6; // si
  __m128i v7; // xmm6
  _DWORD *v8; // rdx
  char v9; // r15
  int v10; // eax
  int v11; // eax
  char v12; // bp
  CWindowData *RepresentationWindowData; // rax
  CWindowData *v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rdx
  CVisual *v17; // rcx
  CBaseObject *v19; // rcx
  int v20; // eax
  __m128i v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+70h] [rbp+8h] BYREF

  v2 = (CWindowData *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 && !*((_BYTE *)this + 161) )
  {
    v4 = *((_DWORD *)this + 10);
    v5 = (CWindowData **)((char *)this + 64);
    v6 = 1;
    v7 = *((__m128i *)this + 4);
    v21 = v7;
    if ( (v4 & 0x800) != 0 )
    {
      v8 = (_DWORD *)((char *)this + 72);
      *v5 = v2;
      *((_DWORD *)this + 18) = 3;
    }
    else
    {
      CWindowData::GetIdealWindowRepresentation(
        v2,
        (v4 & 0x20) != 0,
        (CSecondaryWindowRepresentation *)((char *)this + 64));
      v8 = (_DWORD *)((char *)this + 72);
    }
    v9 = 0;
    if ( (CWindowData *)v7.m128i_i64[0] != *v5 || _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) != *((_DWORD *)this + 18) )
    {
      v9 = 1;
      if ( *v8 == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
      {
        v19 = (CBaseObject *)*((_QWORD *)this + 26);
        if ( v19 )
        {
          CBaseObject::Release(v19);
          *((_QWORD *)this + 26) = 0LL;
        }
        v20 = CImmersiveWindowIconic::Create(
                *((struct CWindowData **)this + 4),
                *((_DWORD *)this + 41),
                (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
                (*((_DWORD *)this + 10) & 0x1000) != 0,
                (struct CImmersiveWindowIconic **)this + 26);
        v3 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x19Au, 0LL);
          return v3;
        }
      }
      v10 = CWindowData::ChangeSecondaryWindowRepresentation(
              *((CWindowData **)this + 4),
              this,
              (struct CWindowRepresentation *)&v21);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x19Du, 0LL);
        return v3;
      }
      v11 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x19Eu, 0LL);
        return v3;
      }
    }
    v12 = *((_BYTE *)this + 176);
    RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
    if ( !CWindowData::IsSimpleClientArea(RepresentationWindowData)
      || *((_QWORD *)this + 6)
      || (v14 = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64)),
          CWindowData::IsImmersiveWindow(v14)) )
    {
      v6 = 0;
    }
    *((_BYTE *)this + 176) = v6;
    if ( v9 || v12 || v6 )
    {
      if ( (*((_BYTE *)this + 40) & 2) != 0 )
        (*(void (__fastcall **)(_QWORD, CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL))(
          *((_QWORD *)this + 21),
          this);
      v15 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__01_00__YA_AVDirtyFlags__XZ(&v22);
      CSecondaryWindowRepresentation::SetDirtyFlags(this, (unsigned int)*v15);
      v17 = (CVisual *)*((_QWORD *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64))
                       + 55);
      if ( v17 )
        CVisual::PropagateDirtyChildren(v17, v16);
      CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
    }
  }
  return v3;
}

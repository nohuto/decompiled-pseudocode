/*
 * XREFs of ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800E8BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x1800E9694 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CRegionGeometry::GetShapeDataCore(
        CRegionGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v4; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  const struct tagRECT *v8; // r14
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v6 = operator new(0x60uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x60uLL);
    *v7 = &CRegionShape::`vftable';
    v7[2] = v7 + 3;
    v8 = (const struct tagRECT *)*((_QWORD *)this + 17);
    v9 = (__int64)(*((_QWORD *)this + 18) - (_QWORD)v8) >> 4;
    CRegionShape::SetEmpty((CRegionShape *)v7);
    if ( v9 )
    {
      if ( (_DWORD)v9 )
      {
        v10 = CRegion::TryAddRectangles((CRegion *)(v7 + 2), v8, v9);
        if ( v10 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1D1,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
            (const char *)(unsigned int)v10,
            v12);
      }
    }
    CShapePtr::~CShapePtr(a3);
    *(_QWORD *)a3 = v7;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v4;
}

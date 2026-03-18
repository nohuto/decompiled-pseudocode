/*
 * XREFs of ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800EA824
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169910 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180193F90 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801BD674 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800EA480 (--1CRegionShape@@UEAA@XZ.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::GetSpriteClipShape(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebx
  int v6; // eax
  CGeometry *v7; // rcx
  int ShapeData; // eax
  void *v9; // rdi
  __int64 v10; // rcx
  CShape *v12; // r15
  __int64 v13; // rdx
  int v14; // esi
  CComplexShape *v15; // r14
  HANDLE ProcessHeap; // rax
  unsigned int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-79h]
  CShape *v19; // [rsp+30h] [rbp-69h] BYREF
  char v20; // [rsp+38h] [rbp-61h]
  CComplexShape *v21[2]; // [rsp+40h] [rbp-59h] BYREF
  void **v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  LPVOID lpMem; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v25[16]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 101);
  v5 = 0;
  if ( v2 && *(_BYTE *)(v2 + 160) )
  {
    CShapePtr::~CShapePtr(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
    return v5;
  }
  v23 = 0LL;
  v22 = &CRegionShape::`vftable';
  v25[0] = 0;
  lpMem = v25;
  v26 = 0LL;
  v6 = CRegion::TryAddRectangles((CRegion *)&lpMem, (const struct tagRECT *)this + 44, 1u);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D1,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
      (const char *)(unsigned int)v6,
      v18);
  v7 = (CGeometry *)*((_QWORD *)this + 101);
  v19 = 0LL;
  v20 = 0;
  ShapeData = CGeometry::GetShapeData(v7, (const struct D2D_SIZE_F *)((char *)this + 140), (struct CShapePtr *)&v19);
  v5 = ShapeData;
  if ( ShapeData >= 0 )
  {
    v12 = v19;
    v21[0] = 0LL;
    v14 = CShape::TryOptimizedCombinePaths(v19, 0LL, (char *)&v22, 0LL, 1, v21);
    v5 = v14;
    if ( v14 < 0 )
    {
      v17 = 456;
    }
    else
    {
      v15 = v21[0];
      if ( v21[0] )
        goto LABEL_17;
      v14 = CShape::D2DCombine((__int64)v12, v13, (__int64)&v22, 0LL, 1, v21);
      v5 = v14;
      if ( v14 >= 0 )
      {
        v15 = v21[0];
LABEL_17:
        v5 = v14;
        CShapePtr::~CShapePtr(a2);
        *(_QWORD *)a2 = v15;
        *((_BYTE *)a2 + 8) = 1;
        if ( v20 && v19 )
          (**(void (__fastcall ***)(CShape *, __int64))v19)(v19, 1LL);
        v19 = 0LL;
        v20 = 0;
        goto LABEL_19;
      }
      v17 = 467;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, v17, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x62Au, 0LL);
    CShapePtr::~CShapePtr((CShapePtr *)&v19);
LABEL_19:
    CRegionShape::~CRegionShape((CRegionShape *)&v22);
    return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x624u, 0LL);
  if ( v20 && v19 )
    (**(void (__fastcall ***)(CShape *, __int64))v19)(v19, 1LL);
  v19 = 0LL;
  v20 = 0;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  v9 = lpMem;
  if ( v25 != lpMem )
  {
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v9);
    }
    v25[0] = 0;
    lpMem = v25;
  }
  v10 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}

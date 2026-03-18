/*
 * XREFs of ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801B8F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180054E28 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180104A24 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x180294100 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathSegmentsShape::GetSimplifiedPathDataInternal(CPathSegmentsShape *this, struct CPathData **a2)
{
  CPathData **v2; // rdi
  unsigned int v3; // ebx
  CPathData *v4; // rcx
  struct CPathData *v6; // rcx
  CPathData *v8; // rbx
  int v9; // eax
  struct CPathData *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CPathData **)((char *)this + 16);
  v3 = 0;
  v4 = (CPathData *)*((_QWORD *)this + 2);
  v10 = 0LL;
  if ( CPathData::IsSimpleGeometry(v4) )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v10, v2);
LABEL_3:
    v6 = 0LL;
    *a2 = v10;
    goto LABEL_4;
  }
  v8 = *v2;
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)&v10);
  v9 = CPathData::Simplify(v8, &v10);
  v3 = v9;
  if ( v9 >= 0 )
    goto LABEL_3;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x2Fu, 0LL);
  v6 = v10;
LABEL_4:
  if ( v6 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v6 + 16LL))(v6);
  return v3;
}

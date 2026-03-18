/*
 * XREFs of ??0CTreeDirty@@QEAA@PEAVCVisualTree@@@Z @ 0x18005A0B8
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800D10EC (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x18005AB18 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 */

CTreeDirty *__fastcall CTreeDirty::CTreeDirty(CTreeDirty *this, struct CVisualTree *a2)
{
  char *v2; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  CDirtyRegionAnnotation *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rsi
  char *v9; // rdi
  _QWORD *v10; // rax
  char *v11; // rcx

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 20;
  *((_DWORD *)this + 4) = 0;
  v4 = 9LL;
  v5 = 9LL;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v2);
    v2 += 16;
    --v5;
  }
  while ( v5 );
  *((_BYTE *)this + 452) = 0;
  v6 = (CTreeDirty *)((char *)this + 632);
  v7 = 32LL;
  do
  {
    CDirtyRegionAnnotation::CDirtyRegionAnnotation(v6);
    v6 = (CDirtyRegionAnnotation *)((char *)v6 + 48);
    --v7;
  }
  while ( v7 );
  *((_QWORD *)this + 77) = (char *)this + 600;
  v8 = 8LL;
  *((_QWORD *)this + 78) = (char *)this + 600;
  *((_QWORD *)this + 76) = (char *)this + 616;
  *((_QWORD *)this + 75) = (char *)this + 616;
  *((_DWORD *)this + 542) = 0;
  v9 = (char *)this + 2176;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v9);
    v9 += 16;
    --v8;
  }
  while ( v8 );
  *((_QWORD *)this + 288) = 0LL;
  v10 = (_QWORD *)((char *)this + 456);
  *((_QWORD *)this + 289) = 0LL;
  v11 = (char *)this + 456;
  *((_QWORD *)this + 290) = 0LL;
  *((_BYTE *)this + 2328) = 0;
  do
  {
    v10[1] = v11;
    *v10 = v11;
    v11 += 16;
    v10 += 2;
    --v4;
  }
  while ( v4 );
  return this;
}

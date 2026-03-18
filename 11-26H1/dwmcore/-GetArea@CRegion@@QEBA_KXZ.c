/*
 * XREFs of ?GetArea@CRegion@@QEBA_KXZ @ 0x180293B94
 * Callers:
 *     ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180258E80 (-CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CRegion::GetArea(int **this)
{
  __int64 v1; // rbx
  FastRegion::Internal::CRgnData *v2; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-30h]
  _DWORD *v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  FastRegion::CRegion::BeginIterator(this, (__int64)v4);
  while ( (unsigned __int64)v6 < v5 )
  {
    v2 = (FastRegion::Internal::CRgnData *)(2 * v8);
    v1 += (*(_DWORD *)(v7 + 4LL * (_QWORD)v2 + 4) - *(_DWORD *)(v7 + 4LL * (_QWORD)v2)) * (v6[2] - *v6);
    FastRegion::Internal::CRgnData::StepIterator(v2, (struct FastRegion::CRegion::Iterator *)v4);
  }
  return v1;
}

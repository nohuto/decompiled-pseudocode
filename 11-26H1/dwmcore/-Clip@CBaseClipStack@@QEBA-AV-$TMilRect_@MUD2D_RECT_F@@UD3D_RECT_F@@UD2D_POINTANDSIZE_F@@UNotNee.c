/*
 * XREFs of ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x180074700
 * Callers:
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180074510 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CBaseClipStack::Clip(__int64 a1, _OWORD *a2, float *a3)
{
  int v3; // eax
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  _OWORD *result; // rax
  float v9[6]; // [rsp+0h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_OWORD *)v9 = *(_OWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(v3 - 1));
    LODWORD(v4) = HIDWORD(*(_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(v3 - 1)));
    v5 = fmaxf(*a3, v9[0]);
    v9[0] = v5;
    if ( a3[1] > v9[1] )
    {
      v9[1] = a3[1];
      v4 = v9[1];
    }
    v6 = v9[2];
    if ( v9[2] > a3[2] )
    {
      v9[2] = a3[2];
      v6 = v9[2];
    }
    v7 = v9[3];
    if ( v9[3] > a3[3] )
    {
      v9[3] = a3[3];
      v7 = v9[3];
    }
    if ( v6 <= v5 || v7 <= v4 )
      *(_OWORD *)v9 = 0uLL;
    result = a2;
    *a2 = *(_OWORD *)v9;
  }
  else
  {
    result = a2;
    *a2 = *(_OWORD *)a3;
  }
  return result;
}

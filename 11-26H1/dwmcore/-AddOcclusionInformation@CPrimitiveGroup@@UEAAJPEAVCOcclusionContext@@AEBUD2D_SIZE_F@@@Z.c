/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A75C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v3; // xmm3_4
  float v4; // xmm1_4
  FLOAT v5; // xmm4_4
  float v6; // xmm2_4
  __int64 v7; // r9
  float v8; // xmm4_4
  struct D2D_RECT_F v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 402) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2BE,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\primitivegroup.cpp",
      (const char *)a2);
  if ( *((_QWORD *)this + 41) )
  {
    v3 = *((float *)this + 95);
    v4 = *((float *)this + 96);
    v5 = *((float *)this + 97);
    v6 = *((float *)this + 98);
    v10.left = v3;
    v10.top = v4;
    v10.right = v5;
    v10.bottom = v6;
    if ( !IsEmpty(&v10) && v8 >= v3 && v6 >= v4 )
      COcclusionContext::CollectRectangleForOcclusion(v7, &v10, 0LL);
  }
  return 0LL;
}

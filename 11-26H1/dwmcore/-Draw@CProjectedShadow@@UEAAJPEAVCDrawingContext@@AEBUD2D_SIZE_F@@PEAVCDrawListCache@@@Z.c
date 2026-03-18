/*
 * XREFs of ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D72A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800D711C (-GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CheckForVisualTree@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@@Z @ 0x1800D7464 (-CheckForVisualTree@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1800D74BC (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1800D7574 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180130610 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18019805C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::Draw(
        CProjectedShadow *this,
        const struct CVisualTree **a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned __int64 v8; // rdx
  __m128 v9; // xmm1
  int v10; // eax
  __int32 v11; // xmm1_4
  void (__fastcall *v12)(CProjectedShadow *, __int64, CProjectedShadow *); // rax
  int updated; // eax
  unsigned int v14; // edi
  int v15; // eax
  __int64 v17; // rdi
  struct _D3DCOLORVALUE v18; // [rsp+30h] [rbp-28h] BYREF

  if ( !CProjectedShadowCaster::CheckForVisualTree(*((CProjectedShadowCaster **)this + 10), a2[993]) )
    return 0LL;
  v9 = (__m128)_mm_loadu_si128((const __m128i *)CProjectedShadowCaster::GetCasterBounds(*((_QWORD *)this + 10), v8));
  *((float *)this + 96) = fminf(
                            _mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v9.m128_f32[0],
                            _mm_shuffle_ps(v9, v9, 255).m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0]);
  v10 = CProjectedShadow::ComputeShadowPath(this, a2);
  if ( *((_DWORD *)this + 63) != v10 )
  {
    *((_DWORD *)this + 63) = v10;
    (*(void (__fastcall **)(CProjectedShadow *, _QWORD, CProjectedShadow *))(*(_QWORD *)this + 80LL))(this, 0LL, this);
    v17 = *((_QWORD *)this + 46);
    if ( v17 )
    {
      *(_DWORD *)(v17 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v17 + 16, 24LL);
      *(_BYTE *)(v17 + 200) = 1;
      wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((char *)this + 368);
    }
    wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((char *)this + 376);
  }
  CProjectedShadow::ComputeShadowColor(this, &v18, (struct CDrawingContext *)a2);
  COERCE_FLOAT(v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 85) - v18.a) & v11) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 82) - v18.r) & v11) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 83) - v18.g) & v11) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 84) - v18.b) & v11) > 0.0000011920929 )
  {
    v12 = *(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(*(_QWORD *)this + 80LL);
    *(struct _D3DCOLORVALUE *)((char *)this + 328) = *(struct _D3DCOLORVALUE *)&v18.r;
    v12(this, 5LL, this);
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6272LL)
    || (updated = CProjectedShadow::UpdateShadowIntermediates(this, (struct CDrawingContext *)a2),
        v14 = updated,
        updated >= 0) )
  {
    v15 = CContent::Draw(this, (struct CDrawingContext *)a2, a3, a4);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x112u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x10Eu, 0LL);
  }
  return v14;
}

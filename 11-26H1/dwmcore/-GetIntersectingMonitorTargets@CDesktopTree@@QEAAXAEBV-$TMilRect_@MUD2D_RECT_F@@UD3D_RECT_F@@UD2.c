/*
 * XREFs of ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x18025FF38
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255E28 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopTree::GetIntersectingMonitorTargets(__int64 a1, const struct D2D_RECT_F *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // rdi
  struct D2D_RECT_F v7; // xmm2
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v9; // rdx
  struct D2D_RECT_F v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(a1 + 2448);
  v5 = *(_QWORD **)(a1 + 2456);
  while ( v3 != v5 )
  {
    v7 = (struct D2D_RECT_F)_mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 32LL))(*v3));
    v10 = v7;
    if ( !IsEmpty(a2)
      && !IsEmpty(&v10)
      && a2->right > v7.left
      && _mm_shuffle_ps((__m128)v7, (__m128)v7, 170).m128_f32[0] > a2->left
      && a2->bottom > _mm_shuffle_ps((__m128)v7, (__m128)v7, 85).m128_f32[0]
      && _mm_shuffle_ps((__m128)v7, (__m128)v7, 255).m128_f32[0] > a2->top )
    {
      v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v3;
      v11 = 0LL;
      if ( (**v8)(v8, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v11) >= 0 )
      {
        v9 = (_QWORD *)a3[1];
        v12 = v11;
        if ( v9 == (_QWORD *)a3[2] )
        {
          std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
            a3,
            (__int64)v9,
            &v12);
        }
        else
        {
          *v9 = v11;
          a3[1] += 8LL;
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
    }
    ++v3;
  }
}

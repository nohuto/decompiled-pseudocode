/*
 * XREFs of ?AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180281E60
 * Callers:
 *     <none>
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180014280 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$find@V?$basic_iterator@PEAVCVisual@@@detail@@PEAVCVisual@@@std@@YA?AV?$basic_iterator@PEAVCVisual@@@detail@@V12@V12@AEBQEAVCVisual@@@Z @ 0x180187C3C (--$find@V-$basic_iterator@PEAVCVisual@@@detail@@PEAVCVisual@@@std@@YA-AV-$basic_iterator@PEAVCVi.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18018A5A0 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?erase@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@@Z @ 0x1801B0FA4 (-erase@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QE.c)
 *     ?insert@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@AEBQEAVCVisual@@@Z @ 0x1801B17D0 (-insert@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@Q.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 *     tanf_0 @ 0x1802B97A4 (tanf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSpotLight::AffectsVisual(CSpotLight *this, const struct CVisualTree *a2, struct CVisual *a3)
{
  bool v3; // zf
  char v7; // si
  float v9; // xmm1_4
  __int64 v10; // rax
  float v11; // xmm8_4
  int WorldTransform; // eax
  int v13; // eax
  float v14; // xmm0_4
  FLOAT v15; // xmm6_4
  float *v16; // rax
  CVisual *v17; // rcx
  float v18; // xmm7_4
  int v19; // eax
  __int64 *v20; // rdi
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  struct D2D_RECT_F v25; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_RECT_F v26; // [rsp+48h] [rbp-C0h] BYREF
  struct CVisual *v27; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v28; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v29[64]; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+B8h] [rbp-50h]
  struct D2D_RECT_F v31; // [rsp+C8h] [rbp-40h] BYREF

  v3 = *((_BYTE *)this + 80) == 0;
  v27 = a3;
  v7 = 1;
  if ( v3 )
    return 0;
  if ( *(float *)(*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 240LL))(this) == 0.0
    && *(float *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 240LL))(this) + 4) == 0.0
    && *(float *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 240LL))(this) + 8) == -1.0 )
  {
    v9 = *((float *)this + 76);
    if ( *((float *)this + 64) <= v9 && v9 <= 1.5707952 )
    {
      v28.left = 0.0;
      CVisual::GetEffectiveOffset(a3, &v25.left, &v26.left, &v28.left);
      v10 = (*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this);
      v30 = 0;
      v11 = *(float *)(v10 + 8) - v28.left;
      v26 = 0LL;
      v25 = 0LL;
      WorldTransform = CVisual::GetWorldTransform(a3, a2, (struct CMILMatrix *)v29, 0LL, 0LL);
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, 0x6Bu, 0LL);
      }
      else if ( CMILMatrix::Is2DAffine<1>((__int64)v29, 1) )
      {
        if ( v11 <= 0.0 || *((float *)this + 76) <= 0.0 )
          goto LABEL_20;
        v31 = 0LL;
        v13 = (*(__int64 (__fastcall **)(struct CVisual *, struct D2D_RECT_F *))(*(_QWORD *)a3 + 240LL))(a3, &v31);
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x7Bu, 0LL);
        }
        else
        {
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)v29, &v31, &v25.left);
          v14 = tanf_0(*((float *)this + 76));
          v15 = *(float *)((*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this) + 4)
              - (float)(v14 * v11);
          v16 = (float *)(*(__int64 (__fastcall **)(CSpotLight *))(*(_QWORD *)this + 232LL))(this);
          v17 = (CVisual *)*((_QWORD *)this + 29);
          v28.top = v15;
          v30 = 0;
          v18 = (float)(v14 * v11) + (float)(v14 * v11);
          v28.left = *v16 - (float)(v14 * v11);
          v28.bottom = v18 + v15;
          v28.right = v18 + v28.left;
          v19 = CVisual::GetWorldTransform(v17, a2, (struct CMILMatrix *)v29, 0LL, 0LL);
          if ( v19 >= 0 )
          {
            CMILMatrix::Transform2DBoundsHelper<1>((__int64)v29, &v28, &v26.left);
            if ( !IsEmpty(&v26)
              && !IsEmpty(&v25)
              && v26.right > v25.left
              && v25.right > v26.left
              && v26.bottom > v25.top
              && v25.bottom > v26.top )
            {
LABEL_21:
              v20 = (__int64 *)((char *)this + 336);
              *(_QWORD *)&v25.left = detail::pointer_buffer_impl<CVisual *,0>::last((__int64 *)this + 42);
              *(_QWORD *)&v26.left = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 42);
              v21 = std::find<detail::basic_iterator<CVisual *>,CVisual *>(&v28, &v26, &v25, &v27);
              v22 = (__int64 *)((char *)this + 336);
              v23 = *v21;
              v24 = detail::pointer_buffer_impl<CVisual *,0>::last(v22);
              if ( v7 )
              {
                if ( v23 != v24 )
                {
                  v27 = (struct CVisual *)v23;
                  detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::erase(
                    (__int64)v20,
                    (__int64)&v25,
                    (__int64 *)&v27);
                }
              }
              else if ( v23 == v24 )
              {
                v7 = 1;
                *(_QWORD *)&v25.left = detail::pointer_buffer_impl<CVisual *,0>::last(v20);
                detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::insert(
                  v20,
                  &v26,
                  (__int64 *)&v25,
                  &v27);
              }
              return v7;
            }
LABEL_20:
            v7 = 0;
            goto LABEL_21;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x8Au, 0LL);
        }
      }
    }
  }
  return v7;
}

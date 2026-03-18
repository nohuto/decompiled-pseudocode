/*
 * XREFs of ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x1800C88D0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x180178260 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x180178348 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x18017840C (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x180178440 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x18017849C (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801784FC (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::IssueContextUpdateNotification(CVisual *this, float a2, const struct D2D_VECTOR_2F *a3)
{
  struct CSparseStorage::AllocatedStorage **v3; // r15
  __int64 v4; // rsi
  char *v5; // r12
  char v6; // r14
  int v9; // edi
  int v10; // eax
  __m128 v11; // xmm11
  __m128 v12; // xmm12
  int v13; // xmm13_4
  __m128 v14; // xmm6
  unsigned __int64 v15; // xmm10_8
  float v16; // xmm8_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  __m128 v21; // xmm6
  __m128 v22; // xmm7
  float v23; // xmm0_4
  int v24; // edi
  int v25; // eax
  unsigned __int64 v26; // xmm9_8
  __int64 v27; // r10
  struct CSparseStorage::DataInfo *Slot; // rax
  struct D2D_POINT_2F v29; // xmm0_8
  struct CSparseStorage::DataInfo *v30; // rax
  struct D2D_POINT_2F v31; // xmm0_8
  unsigned __int64 Buf1; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h]
  unsigned __int64 Buf2; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h]
  _BYTE v36[12]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v37[18]; // [rsp+88h] [rbp-80h] BYREF

  v3 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  v4 = *((_QWORD *)this + 27);
  v5 = (char *)this + 600;
  v6 = 0;
  v9 = *(_DWORD *)(v4 + 4);
  if ( (v9 & 0x400000) != 0 )
  {
    Slot = CSparseStorage::AllocatedStorage::FindSlot(*((CSparseStorage::AllocatedStorage **)this + 27), 10);
    v29 = *(struct D2D_POINT_2F *)((char *)Slot + 4);
    v10 = *((_DWORD *)Slot + 3);
    Buf1 = (unsigned __int64)v29;
  }
  else
  {
    v10 = 0;
    Buf1 = 0LL;
  }
  v11 = (__m128)*((unsigned int *)v5 + 12);
  v12 = (__m128)*((unsigned int *)v5 + 13);
  v13 = *((_DWORD *)v5 + 14);
  LODWORD(Buf2) = *((_DWORD *)v5 + 12);
  HIDWORD(Buf2) = v12.m128_i32[0];
  LODWORD(v35) = v13;
  LODWORD(v33) = v10;
  if ( memcmp_0(&Buf1, &Buf2, 0xCuLL) )
  {
    LODWORD(Buf1) = v11.m128_i32[0];
    HIDWORD(Buf1) = v12.m128_i32[0];
    LODWORD(v33) = v13;
    if ( !memcmp_0(&Buf1, &`CVisual::SetNotifiedWorldOffset'::`2'::sc_defaultValue, 0xCuLL) )
      *(_DWORD *)(v4 + 4) = v9 & 0xFFBFFFFF;
    else
      CSparseStorage::SetData(v3, 10, 0xCu, &Buf1);
    v6 = 1;
  }
  if ( (*((_DWORD *)*v3 + 1) & 0x800000) != 0 )
    Buf1 = *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot(*v3, 9) + 4);
  else
    Buf1 = 0LL;
  v14 = (__m128)*((unsigned int *)this + 36);
  LODWORD(Buf2) = *((_DWORD *)this + 35);
  HIDWORD(Buf2) = v14.m128_i32[0];
  v15 = _mm_unpacklo_ps((__m128)(unsigned int)Buf2, v14).m128_u64[0];
  if ( memcmp_0(&Buf1, &Buf2, 8uLL) )
  {
    CVisual::SetNotifiedEffectiveLayoutSize(this, v15);
    v6 = 1;
  }
  v16 = CVisual::CalculateWorldRenderingScale(this) * a2;
  if ( CVisual::GetNotifiedWorldRenderingScale(this) != v16 )
  {
    CVisual::SetNotifiedWorldRenderingScale(this, v16);
    v6 = 1;
  }
  v17 = *(float *)v5;
  v18 = *((float *)v5 + 4) * 0.0;
  Buf2 = 0LL;
  *(_QWORD *)&v36[4] = 0LL;
  v19 = v18 + (float)(v17 * 0.0);
  v20 = *((float *)v5 + 1) * 0.0;
  *(float *)&Buf1 = (float)(v19 + *((float *)v5 + 12)) + a3->x;
  *((float *)&Buf1 + 1) = (float)((float)((float)(*((float *)v5 + 5) * 0.0) + v20) + *((float *)v5 + 13)) + a3->y;
  if ( CHitTestContext::GetPointInLocalSpace(
         (const struct D2D_POINT_2F *)&Buf1,
         (const struct CMILMatrix *)v5,
         (struct D2D_POINT_2F *)&Buf2)
    && (v21 = (__m128)HIDWORD(Buf2),
        v22 = (__m128)(unsigned int)Buf2,
        v23 = sqrtf_0((float)(v21.m128_f32[0] * v21.m128_f32[0]) + (float)(v22.m128_f32[0] * v22.m128_f32[0])),
        v23 > 0.00000011920929) )
  {
    v22.m128_f32[0] = v22.m128_f32[0] / v23;
    v21.m128_f32[0] = v21.m128_f32[0] / v23;
    v24 = _mm_cvtsi128_si32((__m128i)0LL);
  }
  else
  {
    v24 = 0;
    *(_QWORD *)v36 = 0LL;
    v21 = 0u;
    v22 = (__m128)_mm_cvtsi32_si128(0);
  }
  if ( (*((_DWORD *)*v3 + 1) & 0x200000) != 0 )
  {
    v30 = CSparseStorage::AllocatedStorage::FindSlot(*v3, 11);
    v31 = *(struct D2D_POINT_2F *)((char *)v30 + 4);
    v25 = *((_DWORD *)v30 + 3);
    Buf1 = (unsigned __int64)v31;
  }
  else
  {
    v25 = 0;
    Buf1 = 0LL;
  }
  LODWORD(v33) = v25;
  v26 = _mm_unpacklo_ps(v22, v21).m128_u64[0];
  if ( *(float *)&Buf1 == v22.m128_f32[0] && *((float *)&Buf1 + 1) == v21.m128_f32[0] )
  {
    if ( !v6 )
      return;
  }
  else
  {
    *(_QWORD *)v36 = v26;
    *(_DWORD *)&v36[8] = v24;
    CVisual::SetNotifiedWorldUpVector(this, v36);
  }
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
         10LL) )
  {
    v37[0] = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
    v37[1] = *((unsigned int *)this + 18);
    Buf2 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
    *(_DWORD *)&v36[8] = v24;
    LODWORD(v35) = v13;
    *(_QWORD *)v36 = v26;
    Buf1 = v15;
    CoreUICallSend(v27, v37, 2LL, 10LL, 9, &unk_1802F5B59, COERCE_UNSIGNED_INT64(v16), &Buf1, (unsigned int)&Buf2);
  }
}

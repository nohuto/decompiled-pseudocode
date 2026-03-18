/*
 * XREFs of ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801D2AA4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18001E9C8 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800264A4 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18008DB30 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18008DBC0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CVisual::UpdateLayoutSize(CVisual *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  float v4; // xmm3_4
  float v5; // xmm6_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  bool v14; // si
  char v15; // di
  __int64 v16; // rax
  struct D2D_VECTOR_3F v17; // [rsp+20h] [rbp-58h] BYREF

  if ( (*((_BYTE *)this + 102) & 0x20) == 0 || (v2 = *((_QWORD *)this + 11)) == 0 || (*(_BYTE *)(v2 + 96) & 1) != 0 )
  {
    v3 = *((_QWORD *)this + 11);
    v4 = 0.0;
    v5 = *((float *)this + 32);
    v6 = *((float *)this + 35);
    v7 = *((float *)this + 36);
    if ( v3 )
      v4 = *(float *)(v3 + 140);
    CVisual::GetRelativeOffsetInternal(this, &v17);
    v9 = (float)(v17.x * v4) + *((float *)this + 28);
    *((float *)this + 32) = (float)(v17.y * v8) + *((float *)this + 29);
    *((float *)this + 31) = v9;
    CVisual::GetRelativeLayoutSizeInternal(this, &v17);
    v12 = (float)(v17.x * v4) + *((float *)this + 33);
    v13 = (float)(v17.y * v11) + *((float *)this + 34);
    *((float *)this + 35) = v12;
    *((float *)this + 36) = v13;
    if ( v12 < 0.0 )
    {
      *((_DWORD *)this + 35) = 0;
      v12 = 0.0;
    }
    if ( v13 < 0.0 )
    {
      *((_DWORD *)this + 36) = 0;
      v13 = 0.0;
    }
    v14 = v10 != *((float *)this + 31) || v5 != *((float *)this + 32);
    if ( v6 == v12 && v7 == v13 )
    {
      v15 = 0;
    }
    else
    {
      v16 = *((_QWORD *)this + 30);
      v15 = 1;
      if ( v16 )
      {
        if ( *(_BYTE *)(v16 + 132) )
          CVisual::OnClipChanged(this);
      }
      CVisual::OnLayoutChanged(this);
    }
    if ( v14 )
    {
      CVisual::OnOuterTransformChanged(this);
    }
    else if ( !v15 )
    {
      return;
    }
    *((_BYTE *)this + 96) |= 1u;
  }
}

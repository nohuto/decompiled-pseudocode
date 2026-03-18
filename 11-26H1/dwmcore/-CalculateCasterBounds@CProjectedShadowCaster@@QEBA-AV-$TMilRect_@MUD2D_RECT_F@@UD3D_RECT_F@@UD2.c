/*
 * XREFs of ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800CAB74
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1800D5144 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800416D0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800CAED0 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016DC6C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowCaster::CalculateCasterBounds(__int64 a1, __int64 a2, CVisual **a3, char *a4)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  float left; // xmm6_4
  float top; // xmm7_4
  int v9; // xmm1_4
  __m128i si128; // xmm0
  char v14; // r15
  __m128i v15; // xmm1
  float right; // xmm8_4
  float bottom; // xmm9_4
  CVisual *v18; // rbx
  __int64 v19; // rcx
  struct TransformParentData *TransformParentDataInternal; // rax
  struct _LIST_ENTRY *v21; // rcx
  bool v22; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rdx
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  bool v29; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v30; // [rsp+38h] [rbp-C8h] BYREF
  __m128 v31[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+90h] [rbp-70h]
  _BYTE v33[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v34; // [rsp+E0h] [rbp-20h]
  __int128 v35; // [rsp+F0h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  v5 = 0LL;
  v32 = 0;
  left = 0.0;
  top = 0.0;
  v30.left = 0.0;
  v30.top = 0.0;
  v9 = *(_DWORD *)(v4 + 144);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v4 + 140);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v14 = 0;
  *(_DWORD *)(a2 + 12) = v9;
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)a2 = 0LL;
  right = *(float *)(v4 + 140);
  bottom = *(float *)(v4 + 144);
  v18 = *(CVisual **)(a1 + 72);
  v31[0] = (__m128)si128;
  v31[1] = (__m128)v15;
  BYTE1(v32) = BYTE1(v32) & 0xC0 | 0x29;
  v30.right = right;
  v30.bottom = bottom;
  v31[2] = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v31[3] = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v32) = -86;
  while ( v18 )
  {
    v19 = *((_QWORD *)v18 + 30);
    if ( v19 )
    {
      v35 = 0LL;
      if ( (unsigned __int8)CGeometry::TryGetAxisAlignedRectangle(v19, (char *)v18 + 140, &v35) )
      {
        if ( *(float *)&v35 > left )
        {
          LODWORD(v30.left) = v35;
          left = *(float *)&v35;
        }
        v26 = top;
        if ( *((float *)&v35 + 1) > top )
        {
          v30.top = *((FLOAT *)&v35 + 1);
          top = *((float *)&v35 + 1);
          v26 = *((float *)&v35 + 1);
        }
        v27 = right;
        if ( right > *((float *)&v35 + 2) )
        {
          v30.right = *((FLOAT *)&v35 + 2);
          right = *((float *)&v35 + 2);
          v27 = *((float *)&v35 + 2);
        }
        v28 = bottom;
        if ( bottom > *((float *)&v35 + 3) )
        {
          v30.bottom = *((FLOAT *)&v35 + 3);
          bottom = *((float *)&v35 + 3);
          v28 = *((float *)&v35 + 3);
        }
        if ( v27 <= left || v28 <= v26 )
        {
          bottom = 0.0;
          right = 0.0;
          top = 0.0;
          v30.bottom = 0.0;
          left = 0.0;
          v30.right = 0.0;
          v30.top = 0.0;
          v30.left = 0.0;
        }
        v14 = 1;
      }
    }
    if ( !*(_QWORD *)(a1 + 80) )
      break;
    if ( v18 != a3[9] )
    {
      TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v18);
      if ( TransformParentDataInternal )
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 192LL))(*(_QWORD *)TransformParentDataInternal);
      if ( (*((unsigned __int8 (__fastcall **)(CVisual **))*a3 + 24))(a3) )
      {
        v21 = (struct _LIST_ENTRY *)((char *)v18 + 320);
LABEL_9:
        if ( v21 && BYTE4(v21->Blink) && v5 )
          break;
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v18);
        if ( TreeDataListHead )
        {
          for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
          {
            v21 = i - 22;
            if ( (CVisual **)i[2].Flink == a3 )
              goto LABEL_9;
          }
        }
      }
    }
    v5 = 0LL;
    v29 = 0;
    v34 = 0;
    CVisual::CalcTransform(v18, a3, 0LL, &v29, (struct CMILMatrix *)v33, 0LL);
    if ( v29 )
    {
      if ( !CMILMatrix::IsTranslateAndScale<1>((__int64)v33) )
        break;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v33, &v30, &v30.left);
      CMILMatrix::Multiply((CMILMatrix *)v31, (const struct CMILMatrix *)v33);
      bottom = v30.bottom;
      right = v30.right;
      top = v30.top;
      left = v30.left;
    }
    v18 = (CVisual *)*((_QWORD *)v18 + 11);
  }
  v22 = Windows::Foundation::Numerics::invert(
          (Windows::Foundation::Numerics *)v31,
          v31,
          (struct Windows::Foundation::Numerics::float4x4 *)a3);
  LOWORD(v32) = v32 & 0xC003;
  if ( v22 )
  {
    *a4 = v14;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v31, &v30, (float *)a2);
  }
  return a2;
}

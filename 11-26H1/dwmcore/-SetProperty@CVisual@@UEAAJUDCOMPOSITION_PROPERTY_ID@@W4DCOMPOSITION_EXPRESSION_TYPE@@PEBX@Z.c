/*
 * XREFs of ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0
 * Callers:
 *     ?SetProperty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E470 (-SetProperty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W.c)
 *     ?SetProperty@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180265440 (-SetProperty@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_I.c)
 * Callees:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020674 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800209C0 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020E7C (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18008DB30 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18008DBC0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180110FA0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18011165C (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x18016CF94 (-UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801B32D0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1801B7C58 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x180261184 (-SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(CVisual **a1, unsigned int a2, int a3, float *a4)
{
  CVisual **v4; // rbx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // ebx
  char v10; // r10
  float v11; // xmm3_4
  double v12; // xmm2_8
  double v13; // xmm1_8
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  CVisual *v17; // rcx
  bool v18; // r8
  float z; // xmm3_4
  float v20; // xmm2_4
  float x; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // edx
  float y; // xmm2_4
  struct D2D_VECTOR_3F *RelativeOffsetInternal; // rax
  struct D2D_VECTOR_3F v34; // [rsp+30h] [rbp-48h] BYREF
  struct D2D_VECTOR_3F v35; // [rsp+40h] [rbp-38h] BYREF

  v4 = a1;
  v5 = a3 - 17;
  if ( !v5 )
  {
    v10 = *(_BYTE *)a4;
    if ( a2 == 27 )
    {
      CVisual::SetPixelSnappingEnabled((CVisual *)a1, *(_BYTE *)a4);
    }
    else
    {
      if ( a2 != 38 )
        goto LABEL_5;
      if ( v10 != ((*((_BYTE *)a1 + 102) & 0x20) != 0) )
      {
        *((_BYTE *)a1 + 102) ^= (*((_BYTE *)a1 + 102) ^ (32 * v10)) & 0x20;
        v17 = a1[11];
        if ( v17 )
        {
          if ( v10 )
          {
            CVisual::DirtyForVisibleChild(v17, (struct CVisual *)v4);
            v18 = 1;
          }
          else
          {
            CVisual::DirtyForInvisibleChild(v17, (struct CVisual *)v4);
            v18 = 0;
          }
          CVisual::UpdateBackdropCounts(v4[11], (const struct CVisual *)v4, v18);
        }
      }
    }
    return 0;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v14 = *a4;
    if ( a2 <= 0x1A )
    {
      if ( a2 == 26 )
      {
        CVisual::SetOpacity((CVisual *)a1, *a4);
        return 0;
      }
      v24 = a2 - 1;
      if ( !v24 )
      {
        v11 = *((float *)a1 + 30);
        *(_QWORD *)&v13 = *(unsigned int *)a4;
        *(_QWORD *)&v12 = *((unsigned int *)a1 + 29);
        goto LABEL_13;
      }
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 21;
          if ( v27 )
          {
            if ( v27 != 1 )
              goto LABEL_5;
            v16 = *((float *)a1 + 33);
            v15 = *a4;
          }
          else
          {
            v15 = *((float *)a1 + 34);
            v16 = *a4;
          }
          goto LABEL_19;
        }
        *(_QWORD *)&v12 = *((unsigned int *)a1 + 29);
        v11 = *a4;
      }
      else
      {
        v11 = *((float *)a1 + 30);
        *(_QWORD *)&v12 = *(unsigned int *)a4;
      }
      *(_QWORD *)&v13 = *((unsigned int *)a1 + 28);
      goto LABEL_13;
    }
    v28 = a2 - 32;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 != 1 )
              goto LABEL_5;
            v22 = *a4;
            v23 = **(float **)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1, &v34);
            goto LABEL_42;
          }
        }
        else
        {
          y = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v34)->y;
          RelativeOffsetInternal = CVisual::GetRelativeOffsetInternal((CVisual *)v4, &v35);
          CVisual::SetRelativeOffset((CVisual *)v4, RelativeOffsetInternal->x, y, v14);
        }
        v23 = v14;
        v22 = *(float *)(*(_QWORD *)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)v4, &v34) + 4LL);
LABEL_42:
        a1 = v4;
        goto LABEL_43;
      }
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v35)->z;
      v20 = v14;
      x = CVisual::GetRelativeOffsetInternal((CVisual *)v4, &v34)->x;
    }
    else
    {
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v35)->z;
      x = v14;
      v20 = CVisual::GetRelativeOffsetInternal((CVisual *)v4, &v34)->y;
    }
    a1 = v4;
    goto LABEL_54;
  }
  v7 = v6 - 17;
  if ( !v7 )
  {
    if ( a2 == 29 )
    {
      v15 = a4[1];
      v16 = *a4;
LABEL_19:
      CVisual::SetSize((CVisual *)a1, v16, v15);
      return 0;
    }
    if ( a2 != 31 )
      goto LABEL_5;
    v22 = a4[1];
    v23 = *a4;
LABEL_43:
    CVisual::SetRelativeSize((CVisual *)a1, v23, v22);
    return 0;
  }
  if ( v7 == 17 )
  {
    if ( a2 == 28 )
    {
      v11 = a4[2];
      *(_QWORD *)&v12 = *((unsigned int *)a4 + 1);
      *(_QWORD *)&v13 = *(unsigned int *)a4;
LABEL_13:
      CVisual::SetOffset((CVisual *)a1, v13, v12, v11);
      return 0;
    }
    if ( a2 != 30 )
      goto LABEL_5;
    z = a4[2];
    v20 = a4[1];
    x = *a4;
LABEL_54:
    CVisual::SetRelativeOffset((CVisual *)a1, x, v20, z);
    return 0;
  }
LABEL_5:
  v8 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x93Au, 0LL);
  return v8;
}

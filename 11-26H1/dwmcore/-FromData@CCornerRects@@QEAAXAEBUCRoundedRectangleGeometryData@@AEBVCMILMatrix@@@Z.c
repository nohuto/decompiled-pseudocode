/*
 * XREFs of ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x1800DE720
 * Callers:
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x1800DED38 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180012E70 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1800DE6E0 (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 */

void __fastcall CCornerRects::FromData(
        struct D2D_RECT_F *this,
        const struct CRoundedRectangleGeometryData *a2,
        const struct CMILMatrix *a3)
{
  float v4; // xmm6_4
  float v6; // xmm9_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float *v9; // rdi
  bool IsRoundedCorner; // al
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r11
  unsigned int v14; // ebp
  struct D2D_RECT_F *v15; // r14
  char v16; // r8
  __int64 v17; // r11
  FLOAT v18; // xmm0_4
  bool v19; // r13
  struct D2D_RECT_F *v20; // rsi
  __int64 v21; // r11
  unsigned __int64 v22; // rcx
  FLOAT v23; // xmm1_4
  bool v24; // r15
  char v25; // r8
  __int64 v26; // r11
  struct D2D_RECT_F *v27; // rdi
  char v28; // al
  unsigned __int64 v29; // rcx
  FLOAT v30; // xmm9_4
  bool v31; // al
  int v32; // eax
  int v33; // eax
  struct D2D_RECT_F v34; // xmm3
  struct D2D_RECT_F v35; // xmm2
  struct D2D_RECT_F v36; // xmm1
  struct D2D_RECT_F v37; // xmm3
  struct D2D_RECT_F v38; // xmm2
  struct D2D_RECT_F v39; // xmm0
  struct D2D_RECT_F v40; // xmm3
  struct D2D_RECT_F v41; // xmm1
  struct D2D_RECT_F v42; // xmm0
  char v43; // [rsp+E0h] [rbp+8h]

  v4 = *((float *)a2 + 1);
  v6 = *(float *)a2;
  if ( *((_BYTE *)a2 + 52) )
  {
    v7 = v6 + *((float *)a2 + 2);
    v8 = v4 + *((float *)a2 + 3);
  }
  else
  {
    v7 = *((float *)a2 + 2);
    v8 = *((float *)a2 + 3);
  }
  v9 = (float *)((char *)a2 + 16);
  IsRoundedCorner = CRoundedRectangleGeometryData::IsRoundedCorner((__int64)a2, 0);
  v14 = v11 + 1;
  if ( IsRoundedCorner )
  {
    this->left = v6;
    this->top = v4;
    this->right = v6 + *v9;
    this->bottom = v4 + v9[1];
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, this, &this->left);
    v43 = IsEmpty(this);
  }
  else
  {
    *(_QWORD *)&this->left = v12;
    *(_QWORD *)&this->right = v12;
    v43 = v11 + 1;
  }
  v15 = this + 1;
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v13, v14) )
  {
    if ( *(_BYTE *)(v17 + 52) == v16 )
      v9 += 2;
    v18 = v7 - *v9;
    this[1].top = v4;
    this[1].right = v7;
    v15->left = v18;
    this[1].bottom = v4 + v9[1];
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, this + 1, &this[1].left);
    v19 = IsEmpty(this + 1);
  }
  else
  {
    *(_QWORD *)&v15->left = 0LL;
    v19 = v14;
    *(_QWORD *)&this[1].right = 0LL;
  }
  v20 = this + 2;
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v17, 2u) )
  {
    v22 = -(__int64)(*(_BYTE *)(v21 + 52) != 0) & 0xFFFFFFFFFFFFFFF0uLL;
    v20->left = v7 - *(float *)(v22 + v21 + 32);
    v23 = v8 - *(float *)(v22 + v21 + 36);
    this[2].right = v7;
    this[2].bottom = v8;
    this[2].top = v23;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, this + 2, &this[2].left);
    v24 = IsEmpty(this + 2);
  }
  else
  {
    *(_QWORD *)&v20->left = 0LL;
    v24 = v14;
    *(_QWORD *)&this[2].right = 0LL;
  }
  v27 = this + 3;
  if ( CRoundedRectangleGeometryData::IsRoundedCorner(v21, 3u) )
  {
    v28 = *(_BYTE *)(v26 + 52);
    v27->left = v6;
    v29 = -(__int64)(v28 != 0) & 0xFFFFFFFFFFFFFFE8uLL;
    this[3].top = v8 - *(float *)(v29 + v26 + 44);
    v30 = v6 + *(float *)(v29 + v26 + 40);
    this[3].bottom = v8;
    this[3].right = v30;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, this + 3, &this[3].left);
    v31 = IsEmpty(this + 3);
    v25 = 0;
  }
  else
  {
    *(_QWORD *)&v27->left = 0LL;
    v31 = v14;
    *(_QWORD *)&this[3].right = 0LL;
  }
  if ( v43 == v25 || !v19 || !v24 || !v31 )
    LOBYTE(v14) = v25;
  LOBYTE(this[4].left) = v14;
  if ( !(_BYTE)v14 )
  {
    v32 = CMILMatrix::GetRotation(a3) - 2;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
          v34 = *this;
          v35 = this[1];
          v36 = this[2];
          *this = this[3];
          *v15 = v34;
          *v20 = v35;
          this[3] = v36;
        }
      }
      else
      {
        v37 = *this;
        v38 = this[1];
        v39 = this[3];
        *this = this[2];
        *v15 = v39;
        *v20 = v37;
        *v27 = v38;
      }
    }
    else
    {
      v40 = *this;
      v41 = this[2];
      v42 = this[3];
      *this = this[1];
      *v15 = v41;
      *v20 = v42;
      *v27 = v40;
    }
  }
}

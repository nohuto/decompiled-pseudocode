/*
 * XREFs of ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUD2D_RECT_F@@AEAU2@@Z @ 0x1800AF780
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE51C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall MILMatrix3x2::Transform2DBounds(MILMatrix3x2 *this, const struct D2D_RECT_F *a2, struct D2D_RECT_F *a3)
{
  FLOAT *v3; // rax
  FLOAT left; // xmm2_4
  FLOAT right; // xmm1_4
  FLOAT bottom; // xmm0_4
  int v7; // edx
  FLOAT v8; // xmm3_4
  float v9; // xmm0_4
  unsigned int v10; // ecx
  float v11; // xmm1_4
  float *v12; // rax
  float v13; // xmm2_4
  float v14; // xmm2_4
  FLOAT v15; // [rsp+0h] [rbp-30h] BYREF
  FLOAT top; // [rsp+4h] [rbp-2Ch]
  FLOAT v17; // [rsp+8h] [rbp-28h]
  _DWORD v18[5]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = &v15;
  left = a2->left;
  right = a2->right;
  top = a2->top;
  *(FLOAT *)v18 = top;
  bottom = a2->bottom;
  v7 = 4;
  *(FLOAT *)&v18[2] = bottom;
  *(FLOAT *)&v18[4] = bottom;
  v15 = left;
  v17 = right;
  *(FLOAT *)&v18[1] = left;
  *(FLOAT *)&v18[3] = right;
  do
  {
    v8 = (float)((float)(v3[1] * *((float *)this + 3)) + (float)(*v3 * *((float *)this + 1))) + *((float *)this + 5);
    *v3 = (float)((float)(v3[1] * *((float *)this + 2)) + (float)(*v3 * *(float *)this)) + *((float *)this + 4);
    v3[1] = v8;
    v3 += 2;
    --v7;
  }
  while ( v7 );
  v9 = v15;
  v10 = 1;
  v11 = top;
  v12 = (float *)v18;
  a3->left = v15;
  a3->top = v11;
  a3->right = v9;
  a3->bottom = v11;
  do
  {
    v13 = *(v12 - 1);
    if ( v9 > v13 )
    {
      a3->left = v13;
      v9 = v13;
    }
    else if ( v13 > a3->right )
    {
      a3->right = v13;
    }
    v14 = *v12;
    if ( v11 > *v12 )
    {
      a3->top = v14;
      v11 = v14;
    }
    else if ( v14 > a3->bottom )
    {
      a3->bottom = v14;
    }
    ++v10;
    v12 += 2;
  }
  while ( v10 < 4 );
}

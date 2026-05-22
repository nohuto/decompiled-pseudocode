/*
 * XREFs of ?GetHittestRegion@Edge@@AEAA_NPEBUD2D_VECTOR_2F@@PEAUD2D_RECT_F@@@Z @ 0x1801AE5B0
 * Callers:
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1801AE73C (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::GetHittestRegion(Edge *this, const struct D2D_VECTOR_2F *a2, struct D2D_RECT_F *a3)
{
  float v3; // xmm1_4
  bool result; // al
  bool v6; // r11
  char v7; // r8
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  struct D2D_RECT_F v11; // [rsp+0h] [rbp-18h]

  v3 = *((float *)this + 19);
  result = 0;
  v6 = v3 == *((float *)this + 21) || *((float *)this + 20) == *((float *)this + 22);
  if ( v3 != *((float *)this + 21) || (v7 = 0, *((float *)this + 20) != *((float *)this + 22)) )
    v7 = 1;
  if ( *((_DWORD *)this + 18) != 2 || !v6 || !v7 )
    goto LABEL_24;
  if ( v3 == *((float *)this + 21) )
  {
    v8 = *((float *)this + 14);
    if ( v8 > 0.0 )
    {
      v11.left = *((FLOAT *)this + 19);
      v11.right = v11.left + a2->x;
LABEL_16:
      v11.top = fminf(*((float *)this + 20), *((float *)this + 22));
      v11.bottom = fmaxf(*((float *)this + 20), *((float *)this + 22));
LABEL_23:
      result = 1;
      *a3 = v11;
      return result;
    }
    if ( v8 < 0.0 )
    {
      v11.right = *((FLOAT *)this + 19);
      v11.left = v11.right - a2->x;
      goto LABEL_16;
    }
  }
  else
  {
    v9 = *((float *)this + 20);
    if ( v9 == *((float *)this + 22) )
    {
      v10 = *((float *)this + 15);
      if ( v10 <= 0.0 )
      {
        if ( v10 >= 0.0 )
          goto LABEL_24;
        v11.bottom = *((FLOAT *)this + 20);
        v11.top = v9 - a2->y;
      }
      else
      {
        v11.top = *((FLOAT *)this + 20);
        v11.bottom = v9 + a2->y;
      }
      v11.left = fminf(*((float *)this + 19), *((float *)this + 21));
      v11.right = fmaxf(*((float *)this + 19), *((float *)this + 21));
      goto LABEL_23;
    }
  }
LABEL_24:
  *a3 = 0LL;
  return result;
}

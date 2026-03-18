/*
 * XREFs of ?GetArea@CD2DLayer@@UEBA_KXZ @ 0x1802515D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CD2DLayer::GetArea(CD2DLayer *this)
{
  float v1; // xmm0_4
  float v2; // xmm1_4
  unsigned __int64 v3; // rcx
  float v4; // xmm1_4

  v1 = *((float *)this + 4) - *((float *)this + 2);
  v2 = *((float *)this + 5) - *((float *)this + 3);
  v3 = 0LL;
  v4 = v2 * v1;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v3 = 0x8000000000000000uLL;
  }
  return v3 + (unsigned int)(int)v4;
}

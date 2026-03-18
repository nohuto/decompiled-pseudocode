/*
 * XREFs of ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140265848
 * Callers:
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x140338650 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vDIBnPatBltSrccopy6x6(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5)
{
  LONG x; // r8d
  LONG y; // ecx
  int v12; // ebx
  unsigned int v13; // ecx
  LONG v14; // r9d
  LONG v15; // r10d
  LONG v16; // edx
  LONG v17; // r8d
  LONG *v18; // rax
  LONG left; // r8d
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // edx
  _QWORD v23[2]; // [rsp+38h] [rbp-1F0h] BYREF
  int v24; // [rsp+48h] [rbp-1E0h]
  _BYTE v25[12]; // [rsp+4Ch] [rbp-1DCh] BYREF
  int v26; // [rsp+58h] [rbp-1D0h]
  int v27; // [rsp+5Ch] [rbp-1CCh]
  __int128 v28; // [rsp+60h] [rbp-1C8h]
  struct _CLIPOBJ *v29; // [rsp+70h] [rbp-1B8h]
  struct _RECTL *v30; // [rsp+78h] [rbp-1B0h]
  void (__fastcall *v31)(struct _PATBLTFRAME *, int); // [rsp+80h] [rbp-1A8h]
  unsigned int v32; // [rsp+90h] [rbp-198h] BYREF
  __m128i rclBounds; // [rsp+94h] [rbp-194h] BYREF

  v29 = a2;
  v30 = a3;
  v31 = vPatCpyRect1_6x6;
  memset(v25, 0, sizeof(v25));
  v28 = 0LL;
  memset_0(&v32, 0, 0x144uLL);
  v23[0] = *((_QWORD *)a1 + 10);
  v24 = *((_DWORD *)a1 + 22);
  v23[1] = *((_QWORD *)a4[1].pvRbrush + 4);
  x = a5->x;
  if ( a5->x < 0 )
    v26 = 5 - ~x % 6;
  else
    v26 = x % 6;
  y = a5->y;
  if ( y < 0 )
    v27 = 5 - ~y % 6;
  else
    v27 = y % 6;
  if ( a2 && a2->iDComplexity )
  {
    if ( a2->iDComplexity == 1 )
    {
      rclBounds = (__m128i)a2->rclBounds;
      left = _mm_cvtsi128_si32(rclBounds);
      if ( left <= a3->left )
      {
        left = a3->left;
        rclBounds.m128i_i32[0] = a3->left;
      }
      right = rclBounds.m128i_i32[2];
      if ( rclBounds.m128i_i32[2] >= a3->right )
      {
        right = a3->right;
        rclBounds.m128i_i32[2] = right;
      }
      top = rclBounds.m128i_i32[1];
      if ( rclBounds.m128i_i32[1] <= a3->top )
      {
        top = a3->top;
        rclBounds.m128i_i32[1] = top;
      }
      bottom = rclBounds.m128i_i32[3];
      if ( rclBounds.m128i_i32[3] >= a3->bottom )
      {
        bottom = a3->bottom;
        rclBounds.m128i_i32[3] = bottom;
      }
      if ( left < right && top < bottom )
      {
        *(_QWORD *)&v25[4] = &rclBounds;
        vPatCpyRect1_6x6((struct _PATBLTFRAME *)v23, 1);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v32, 0LL);
        if ( v32 - 1 <= 0x13 )
        {
          v13 = 0;
          if ( v32 )
          {
            v14 = a3->left;
            v15 = a3->right;
            v16 = a3->top;
            v17 = a3->bottom;
            v18 = &rclBounds.m128i_i32[1];
            do
            {
              if ( *(v18 - 1) < v14 )
                *(v18 - 1) = v14;
              if ( v18[1] > v15 )
                v18[1] = v15;
              if ( *v18 < v16 )
                *v18 = v16;
              if ( v18[2] > v17 )
                v18[2] = v17;
              ++v13;
              v18 += 4;
            }
            while ( v13 < v32 );
          }
          *(_QWORD *)&v25[4] = &rclBounds;
          vPatCpyRect1_6x6((struct _PATBLTFRAME *)v23, v32);
        }
      }
      while ( v12 );
    }
  }
  else
  {
    *(_QWORD *)&v25[4] = a3;
    vPatCpyRect1_6x6((struct _PATBLTFRAME *)v23, 1);
  }
}

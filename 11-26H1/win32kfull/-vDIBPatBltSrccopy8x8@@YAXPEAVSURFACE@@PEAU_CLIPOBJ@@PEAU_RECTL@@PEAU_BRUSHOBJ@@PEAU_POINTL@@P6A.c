/*
 * XREFs of ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x14024CA8C
 * Callers:
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vDIBPatBltSrccopy8x8(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        void (*a6)(struct _PATBLTFRAME *, int))
{
  struct _RECTL *v10; // r14
  _QWORD *pvRbrush; // rcx
  int v12; // ebx
  int v13; // r10d
  LONG v14; // edi
  LONG v15; // r11d
  LONG v16; // esi
  __int64 *v17; // rax
  LONG v18; // r14d
  LONG v19; // edx
  LONG v20; // r8d
  LONG v21; // ecx
  LONG v22; // r9d
  LONG left; // r8d
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // edx
  _QWORD v28[2]; // [rsp+40h] [rbp-1E8h] BYREF
  int v29; // [rsp+50h] [rbp-1D8h]
  int v30; // [rsp+54h] [rbp-1D4h]
  __m128i *p_rclBounds; // [rsp+58h] [rbp-1D0h]
  int v32; // [rsp+60h] [rbp-1C8h]
  int v33; // [rsp+64h] [rbp-1C4h]
  __int128 v34; // [rsp+68h] [rbp-1C0h]
  struct _CLIPOBJ *v35; // [rsp+78h] [rbp-1B0h]
  void (*v36)(struct _PATBLTFRAME *, int); // [rsp+80h] [rbp-1A8h]
  int v37; // [rsp+90h] [rbp-198h] BYREF
  __m128i rclBounds; // [rsp+94h] [rbp-194h] BYREF

  v35 = a2;
  v10 = a3;
  v36 = a6;
  p_rclBounds = 0LL;
  v34 = 0LL;
  memset_0(&v37, 0, 0x144uLL);
  v28[0] = *((_QWORD *)a1 + 10);
  v29 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v28[1] = pvRbrush[4];
  v30 = *((_DWORD *)pvRbrush + 7);
  v32 = a5->x & 7;
  v33 = a5->y & 7;
  if ( a2 )
  {
    if ( a2->iDComplexity )
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
          p_rclBounds = &rclBounds;
          ((void (__fastcall *)(_QWORD *, __int64))a6)(v28, 1LL);
        }
      }
      else if ( a2->iDComplexity == 3 )
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
        do
        {
          v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v37, 0LL);
          if ( (unsigned int)(v37 - 1) <= 0x13 )
          {
            v13 = 0;
            if ( v37 > 0 )
            {
              v14 = a3->left;
              v15 = v10->right;
              v16 = v10->top;
              v17 = &rclBounds.m128i_i64[1];
              v18 = v10->bottom;
              do
              {
                v19 = *((_DWORD *)v17 - 2);
                if ( v19 < v14 )
                {
                  *((_DWORD *)v17 - 2) = v14;
                  v19 = v14;
                }
                v20 = *(_DWORD *)v17;
                if ( *(_DWORD *)v17 > v15 )
                {
                  *(_DWORD *)v17 = v15;
                  v20 = v15;
                }
                v21 = *((_DWORD *)v17 - 1);
                if ( v21 < v16 )
                {
                  *((_DWORD *)v17 - 1) = v16;
                  v21 = v16;
                }
                v22 = *((_DWORD *)v17 + 1);
                if ( v22 > v18 )
                {
                  *((_DWORD *)v17 + 1) = v18;
                  v22 = v18;
                }
                if ( v20 < v19 )
                  *(_DWORD *)v17 = v19;
                if ( v22 < v21 )
                  *((_DWORD *)v17 + 1) = v21;
                ++v13;
                v17 += 2;
              }
              while ( v13 < v37 );
              v10 = a3;
            }
            p_rclBounds = &rclBounds;
            ((void (__fastcall *)(_QWORD *, _QWORD))a6)(v28, (unsigned int)v37);
          }
        }
        while ( v12 );
      }
    }
    else
    {
      p_rclBounds = (__m128i *)a3;
      ((void (__fastcall *)(_QWORD *, __int64))a6)(v28, 1LL);
    }
  }
  else
  {
    p_rclBounds = (__m128i *)v10;
    ((void (__fastcall *)(_QWORD *, __int64))a6)(v28, 1LL);
  }
}

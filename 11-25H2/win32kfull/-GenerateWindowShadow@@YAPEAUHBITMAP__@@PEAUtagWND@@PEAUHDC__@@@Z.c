/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400E1C54
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400E1A4C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x14007C874 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1400E1950 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1400E1A10 (GreDecBitmapExclusiveRefCnt.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E1FB8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x140269E2C (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1402CA158 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GenerateWindowShadow(struct tagWND *a1, HDC a2)
{
  __int64 v2; // rax
  int v4; // r12d
  int v6; // r13d
  __m128i v7; // xmm0
  signed int v8; // r14d
  LONG v9; // esi
  LONG v10; // esi
  LONG v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rbx
  HBRUSH StockObject; // rax
  __int64 v20; // rdx
  __int64 v22; // rcx
  HBITMAP ScaledWindowShadowFromDIB; // rax
  HBITMAP v24; // rdi
  RECT v25; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+74h] [rbp-8Ch]
  void *v28; // [rsp+78h] [rbp-88h] BYREF
  struct tagWND *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 v31[3]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v32; // [rsp+A8h] [rbp-58h]
  _BYTE v33[128]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v34[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v35; // [rsp+13Ch] [rbp+3Ch]
  __int128 v36; // [rsp+144h] [rbp+44h]
  __int64 v37; // [rsp+154h] [rbp+54h]

  v2 = *((_QWORD *)a1 + 5);
  v29 = a1;
  v4 = 0;
  v28 = 0LL;
  v26 = 0;
  v6 = 0;
  v7 = *(__m128i *)(v2 + 88);
  v8 = 1;
  v27 = *(_BYTE *)(v2 + 26) & 0x40;
  v25.bottom = v7.m128i_i32[3] - v7.m128i_i32[1];
  v9 = v7.m128i_i32[2] - _mm_cvtsi128_si32(v7);
  v25.left = 0;
  v25.right = v9;
  v25.top = 0;
  if ( v7.m128i_i32[3] - v7.m128i_i32[1] > 0 && v9 > 0 )
  {
    v10 = v9 + 5;
    v11 = v7.m128i_i32[3] - v7.m128i_i32[1] + 5;
    v25.right = v10;
    v25.bottom = v11;
    if ( PtiCurrent(0LL, 0LL) )
    {
      if ( *((_QWORD *)PtiCurrent(v13, v12) + 62) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v15, v14) + 62) + 8LL) + 64LL) & 1) != 0 )
        {
          v16 = *((_QWORD *)a1 + 5);
          v17 = *(_DWORD *)(v16 + 288);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
          {
            v22 = *(unsigned __int16 *)(v16 + 284);
            if ( (_WORD)v22 != 96 )
            {
              v8 = (unsigned __int16)GreGetScaledLogPixels(v22) / 0x60u;
              v10 *= v8;
              v11 *= v8;
              v25.right = v10;
              v25.bottom = v11;
            }
          }
        }
      }
    }
    v37 = 0LL;
    v32 = 0;
    v34[0] = 40;
    v34[1] = v10;
    v36 = 0LL;
    v34[2] = v11;
    v35 = 2097153LL;
    memset(v31, 0, sizeof(v31));
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v33, a2);
    v18 = GrepCreateDIBitmapReal((struct OPTAPIDCOBJ *)v33, 0, v31, v34, 0, 0x2Cu, 0LL, 0, 0LL, 0, 0LL, &v28);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v33);
    if ( v18 )
    {
      v30 = GreSelectBitmap(a2, v18);
      StockObject = (HBRUSH)GreGetStockObject(4LL);
      FillRect(a2, &v25, StockObject);
      if ( v10 < 15 || v11 < 15 )
        v6 = 1;
      if ( (unsigned int)DrawWindowShadow(v29, a2, v27, v6, &v26) )
      {
        if ( !v26 || v6 )
          DrawRegionalShadow((char *)v28, v10, v11);
        else
          DrawRoundedRectangularShadow(v28, v10, v11, v27, v8);
        v4 = 1;
      }
      GreDecBitmapExclusiveRefCnt(v18, v20);
      if ( v4 )
      {
        if ( v8 <= 1 )
          return v18;
        ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v29, a2, v8);
        v24 = ScaledWindowShadowFromDIB;
        if ( ScaledWindowShadowFromDIB )
        {
          GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
          GreDeleteObject(v18);
          return (__int64)v24;
        }
      }
      GreSelectBitmap(a2, v30);
      GreDeleteObject(v18);
      return 0LL;
    }
  }
  return 0LL;
}

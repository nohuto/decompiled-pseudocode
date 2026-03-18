/*
 * XREFs of UpdateSpriteArea @ 0x1401DB604
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GreConvertMemToRedirectionDC @ 0x1400574D0 (GreConvertMemToRedirectionDC.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     GreConvertRedirectionToMemDC @ 0x140333098 (GreConvertRedirectionToMemDC.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall UpdateSpriteArea(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        HDC a5,
        __int64 a6,
        struct tagRECT *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _UNKNOWN **result; // rax
  __int64 v13; // r15
  __int64 v15; // rdx
  bool v18; // zf
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __m128i v21; // xmm6
  __int64 v22; // r8
  LONG v23; // ecx
  int v24; // esi
  HDC v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rax
  __int64 v29; // r8
  int v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v33; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v34; // [rsp+A0h] [rbp-68h]
  struct tagPOINT v35; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v36; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-50h]
  HDC v38; // [rsp+C0h] [rbp-48h]
  __int64 v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  struct tagRECT v42; // [rsp+E8h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v13 = 0LL;
  v32 = 0;
  v15 = *((_QWORD *)a1 + 5);
  v42 = 0LL;
  v37 = a3;
  v38 = a5;
  v18 = (*(_BYTE *)(v15 + 26) & 8) == 0;
  v19 = *(_DWORD *)(v15 + 88);
  v20 = *(_DWORD *)(v15 + 92);
  v34 = v19;
  v33 = v20;
  v39 = a6;
  if ( !v18 && a2 )
  {
    v22 = -v20;
    v42 = *a7;
    v21 = (__m128i)v42;
    v36.cx = *(_DWORD *)(v15 + 96) - *(_DWORD *)(v15 + 88);
    v23 = *(_DWORD *)(v15 + 100) - *(_DWORD *)(v15 + 92);
    v42.bottom += v22;
    v42.right -= v19;
    v42.top += v22;
    v36.cy = v23;
    v41 = v21.m128i_i64[1];
    v42.left = _mm_cvtsi128_si32(v21) - v19;
    GreOffsetRgn(a6, -v19, v22);
    v31 = a8 + _mm_cvtsi128_si32(v21) - a10;
    v40 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v13 = GreSelectBitmap(a4, a2);
    GreSelectVisRgn(a4, a6, 4LL);
    v24 = GreConvertMemToRedirectionDC(a4, &v32);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      v37,
      (unsigned int)v42.left,
      v42.top,
      v42.right,
      v42.bottom,
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      a2,
      v31,
      v21.m128i_i32[1] - a11 + a9,
      v42.right + v31 - v42.left,
      v42.bottom + v21.m128i_i32[1] - a11 + a9 - v42.top,
      v21.m128i_i32[1] - a11 + a9);
    v25 = v38;
    GreBitBltInternal(
      a4,
      v42.left,
      v42.top,
      v42.right - v42.left,
      v42.bottom - v42.top,
      v38,
      v31,
      v30,
      0x80CC0020,
      0,
      0);
    if ( v24 )
      GreConvertRedirectionToMemDC(a4);
    v27 = *((_QWORD *)a1 + 5);
    v35 = *(struct tagPOINT *)(v27 + 88);
    UserSessionState = W32GetUserSessionState(v27, v26);
    UpdateSprite(
      *(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL),
      a1,
      v29,
      0LL,
      0LL,
      &v36,
      a4,
      &v35,
      0,
      0LL,
      0x40000000u,
      &v42);
    GreSelectVisRgn(a4, v39, 4LL);
    GreOffsetRgn(v39, v34, v33);
    result = (_UNKNOWN **)GreSelectBitmap(v25, v40);
    if ( v13 )
      return (_UNKNOWN **)GreSelectBitmap(a4, v13);
  }
  return result;
}

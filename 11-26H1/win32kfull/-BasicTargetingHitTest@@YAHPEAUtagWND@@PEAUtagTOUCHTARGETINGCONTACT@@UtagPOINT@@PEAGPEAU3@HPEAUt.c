/*
 * XREFs of ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x140089318
 * Callers:
 *     xxxTouchTargetWindow @ 0x14008868C (xxxTouchTargetWindow.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     TouchTargetingRankForRect @ 0x1400878F8 (TouchTargetingRankForRect.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x140264828 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     TouchTargetingRankForRegion @ 0x140303104 (TouchTargetingRankForRegion.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall BasicTargetingHitTest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        unsigned int a10,
        int a11)
{
  unsigned int v11; // edi
  __int64 v14; // r10
  BOOL v16; // r12d
  __int64 v17; // rax
  __m128i v18; // xmm1
  unsigned int v19; // edx
  int v20; // r8d
  unsigned __int64 v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int16 *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rcx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // ax
  int v30; // [rsp+40h] [rbp-78h]
  __m128i v33; // [rsp+60h] [rbp-58h] BYREF
  __m128i v34; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+108h] [rbp+50h]

  v11 = 0;
  v14 = a2;
  v16 = !*(_DWORD *)(a2 + 176) || a7 && !(unsigned int)PtInRect(a7, a3);
  v17 = *(_QWORD *)(a1 + 40);
  *a4 = 0;
  v18 = *(__m128i *)(v17 + 88);
  *(_QWORD *)a5 = 0LL;
  if ( a11 )
    return 1LL;
  v19 = a10;
  v20 = 0;
  if ( (_WORD)a10 != 3 )
  {
    v20 = a9;
    v19 = a8;
  }
  v30 = v20;
  v36 = v19;
  if ( v16
    || (int)a3 < v18.m128i_i32[0]
    || (v21 = _mm_srli_si128(v18, 8).m128i_u64[0], (int)a3 >= (int)v21)
    || SHIDWORD(a3) < v18.m128i_i32[1]
    || SHIDWORD(a3) >= SHIDWORD(v21) )
  {
    if ( v20 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) == 0 )
      return 0LL;
    v34 = v18;
    v33 = v18;
    v28 = TouchTargetingRankForRect((struct tagRECT *)&v33, (struct tagRECT *)&v34, v14, a7, a5, v19);
    *a4 = v28;
    if ( v28 > 0xFFDu )
      return 0LL;
  }
  v22 = *(_QWORD *)(a1 + 40);
  v23 = *(_QWORD *)(v22 + 168);
  if ( !v23
    || !v16
    && (unsigned int)GrePtInRegion(
                       *(_QWORD *)(v22 + 168),
                       (unsigned int)(*(_DWORD *)a5 + a3),
                       (unsigned int)(*(_DWORD *)(a5 + 4) + HIDWORD(a3))) )
  {
    v24 = a4;
    v25 = a2;
    goto LABEL_14;
  }
  if ( !v30 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) != 0 )
  {
    v25 = a2;
    v33 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 88LL);
    v29 = TouchTargetingRankForRegion(v23, (unsigned int)&v33, a2, a5, v36);
    v24 = a4;
    *a4 = v29;
    if ( v29 <= 0xFFDu )
    {
LABEL_14:
      v26 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v26 + 26) & 8) != 0 && (!a6 || (*(_DWORD *)(v26 + 232) & 2) == 0) )
      {
        LOBYTE(v11) = (unsigned int)TouchTargetingLayerHitTest(a1, a3, a6, v25, a7, v24, a5, a8) != 0;
        return v11;
      }
      return 1LL;
    }
  }
  return 0LL;
}

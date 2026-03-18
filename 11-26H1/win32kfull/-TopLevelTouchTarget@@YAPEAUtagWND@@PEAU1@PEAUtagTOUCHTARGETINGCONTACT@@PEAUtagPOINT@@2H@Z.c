/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x14008837C
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1400869B0 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     EditionNonDwmTouchHitTest @ 0x1402C2960 (EditionNonDwmTouchHitTest.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     xxxTouchTargetWindow @ 0x14008868C (xxxTouchTargetWindow.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1402C2720 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 */

struct tagWND *__fastcall TopLevelTouchTarget(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        int a5)
{
  struct tagWND *v6; // r15
  __int64 v7; // r13
  struct tagPOINT v8; // rbx
  struct tagPOINT v9; // rdi
  struct tagWND *v11; // r14
  int v12; // esi
  __int64 v13; // rax
  int v15; // esi
  const struct _D3DMATRIX *v16; // r8
  const struct _D3DMATRIX *v17; // r8
  struct tagRECT *ScreenRect; // rax
  __m128i v19; // xmm5
  const struct _D3DMATRIX *v20; // r8
  const struct _D3DMATRIX *v21; // r8
  struct tagRECT *v22; // rax
  __m128i v23; // xmm5
  const struct _D3DMATRIX *v24; // r8
  const struct _D3DMATRIX *v25; // r8
  struct tagRECT *v26; // rax
  __m128i v27; // xmm5
  const struct _D3DMATRIX *v28; // r8
  const struct _D3DMATRIX *v29; // r8
  struct tagRECT *v30; // rax
  __m128i v31; // xmm5
  struct tagRECT v32; // [rsp+58h] [rbp-91h] BYREF
  int v33; // [rsp+68h] [rbp-81h]
  int v34; // [rsp+6Ch] [rbp-7Dh]
  struct tagPOINT v35; // [rsp+70h] [rbp-79h] BYREF
  _BYTE v36[8]; // [rsp+78h] [rbp-71h] BYREF
  __int64 v37; // [rsp+80h] [rbp-69h]
  struct tagRECT v38; // [rsp+88h] [rbp-61h] BYREF
  struct tagRECT v39; // [rsp+98h] [rbp-51h] BYREF
  struct tagRECT v40; // [rsp+A8h] [rbp-41h] BYREF
  struct tagRECT v41; // [rsp+B8h] [rbp-31h] BYREF
  struct tagRECT v42; // [rsp+C8h] [rbp-21h] BYREF
  struct tagRECT v43; // [rsp+D8h] [rbp-11h] BYREF
  struct tagRECT v44; // [rsp+E8h] [rbp-1h] BYREF
  struct tagRECT v45; // [rsp+F8h] [rbp+Fh] BYREF
  __int64 v46; // [rsp+148h] [rbp+5Fh] BYREF
  struct tagTOUCHTARGETINGCONTACT *v47; // [rsp+150h] [rbp+67h]
  struct tagPOINT *v48; // [rsp+158h] [rbp+6Fh]

  v48 = a3;
  v47 = a2;
  v34 = 4094;
  v33 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v36);
  v11 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( !v11 )
    goto LABEL_14;
  do
  {
    LOWORD(v46) = 0;
    if ( !*((_DWORD *)v47 + 44) && !*((_DWORD *)v47 + 45) )
      break;
    v35 = *v48;
    v12 = xxxTouchTargetWindow(v11, v47, &v35, (__int64)&v46, (__int64)a4, a5);
    v13 = HMValidateHandleNoSecure(v7, 1);
    v6 = (struct tagWND *)v13;
    if ( v12 )
    {
      if ( !v13 )
        goto LABEL_11;
      v15 = a5;
      v16 = *(const struct _D3DMATRIX **)(v13 + 216);
      v32 = *(struct tagRECT *)(*(_QWORD *)(v13 + 40) + 88LL);
      GetScreenRect(&v38, a5, v16, &v32);
      v17 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      v32 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 88LL);
      ScreenRect = GetScreenRect(&v39, v15, v17, &v32);
      if ( _mm_cvtsi128_si32(v19) >= ScreenRect->right )
        goto LABEL_19;
      v20 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      v32 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 88LL);
      GetScreenRect(&v40, v15, v20, &v32);
      v21 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      v32 = *(struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL);
      v22 = GetScreenRect(&v41, v15, v21, &v32);
      if ( _mm_cvtsi128_si32(v23) >= v22->right )
        goto LABEL_19;
      v24 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      v32 = *(struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL);
      GetScreenRect(&v42, v15, v24, &v32);
      v25 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      v32 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 88LL);
      v26 = GetScreenRect(&v43, v15, v25, &v32);
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v27, 4)) >= (int)HIDWORD(*(_QWORD *)&v26->right)
        || (v28 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27),
            v32 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 88LL),
            GetScreenRect(&v44, v15, v28, &v32),
            v29 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27),
            v32 = *(struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL),
            v30 = GetScreenRect(&v45, v15, v29, &v32),
            _mm_cvtsi128_si32(_mm_srli_si128(v31, 4)) >= (int)HIDWORD(*(_QWORD *)&v30->right)) )
      {
LABEL_19:
        if ( (unsigned int)(unsigned __int16)v46 + 4095 < (unsigned __int16)v34 + (v33 == 0 ? 0xFFF : 0) )
        {
LABEL_11:
          v6 = v11;
          v33 = 0;
          v7 = *(_QWORD *)v11;
          v8 = *a4;
          v9 = v35;
          v34 = (unsigned __int16)v46;
        }
      }
    }
    v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
  }
  while ( v11 );
  if ( v6 )
  {
    *v48 = v9;
    *a4 = v8;
  }
  else
  {
LABEL_14:
    *a4 = 0LL;
  }
  if ( v36[0] )
    --*(_DWORD *)(v37 + 28);
  return v6;
}

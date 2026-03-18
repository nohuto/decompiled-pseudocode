/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x140022DCC
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1401BF8B8 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     EditionNonDwmTouchHitTest @ 0x1402A4E60 (EditionNonDwmTouchHitTest.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxTouchTargetWindow @ 0x1400230D8 (xxxTouchTargetWindow.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1402A4C18 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
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
  int v12; // eax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rax
  int v17; // esi
  const struct _D3DMATRIX *v18; // r8
  const struct _D3DMATRIX *v19; // r8
  struct tagRECT *ScreenRect; // rax
  __m128i v21; // xmm5
  const struct _D3DMATRIX *v22; // r8
  const struct _D3DMATRIX *v23; // r8
  struct tagRECT *v24; // rax
  __m128i v25; // xmm5
  const struct _D3DMATRIX *v26; // r8
  const struct _D3DMATRIX *v27; // r8
  struct tagRECT *v28; // rax
  __m128i v29; // xmm5
  const struct _D3DMATRIX *v30; // r8
  const struct _D3DMATRIX *v31; // r8
  struct tagRECT *v32; // rax
  __m128i v33; // xmm5
  struct tagRECT v34; // [rsp+58h] [rbp-91h] BYREF
  int v35; // [rsp+68h] [rbp-81h]
  int v36; // [rsp+6Ch] [rbp-7Dh]
  struct tagPOINT v37; // [rsp+70h] [rbp-79h] BYREF
  _BYTE v38[16]; // [rsp+78h] [rbp-71h] BYREF
  struct tagRECT v39; // [rsp+88h] [rbp-61h] BYREF
  struct tagRECT v40; // [rsp+98h] [rbp-51h] BYREF
  struct tagRECT v41; // [rsp+A8h] [rbp-41h] BYREF
  struct tagRECT v42; // [rsp+B8h] [rbp-31h] BYREF
  struct tagRECT v43; // [rsp+C8h] [rbp-21h] BYREF
  struct tagRECT v44; // [rsp+D8h] [rbp-11h] BYREF
  struct tagRECT v45; // [rsp+E8h] [rbp-1h] BYREF
  struct tagRECT v46; // [rsp+F8h] [rbp+Fh] BYREF
  __int64 v47; // [rsp+148h] [rbp+5Fh] BYREF
  struct tagTOUCHTARGETINGCONTACT *v48; // [rsp+150h] [rbp+67h]
  struct tagPOINT *v49; // [rsp+158h] [rbp+6Fh]

  v49 = a3;
  v48 = a2;
  v36 = 4094;
  v35 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v38);
  v11 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( !v11 )
    goto LABEL_12;
  do
  {
    LOWORD(v47) = 0;
    if ( !*((_DWORD *)v48 + 44) && !*((_DWORD *)v48 + 45) )
      break;
    v37 = *v49;
    v12 = xxxTouchTargetWindow(v11, v48, &v37, (__int64)&v47, (__int64)a4, a5);
    LOBYTE(v13) = 1;
    v14 = v12;
    v15 = HMValidateHandleNoSecure(v7, v13);
    v6 = (struct tagWND *)v15;
    if ( v14 )
    {
      if ( !v15 )
        goto LABEL_9;
      v17 = a5;
      v18 = *(const struct _D3DMATRIX **)(v15 + 216);
      v34 = *(struct tagRECT *)(*(_QWORD *)(v15 + 40) + 88LL);
      GetScreenRect(&v39, a5, v18, &v34);
      v19 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      v34 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 88LL);
      ScreenRect = GetScreenRect(&v40, v17, v19, &v34);
      if ( _mm_cvtsi128_si32(v21) >= ScreenRect->right )
        goto LABEL_17;
      v22 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      v34 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 88LL);
      GetScreenRect(&v41, v17, v22, &v34);
      v23 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      v34 = *(struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL);
      v24 = GetScreenRect(&v42, v17, v23, &v34);
      if ( _mm_cvtsi128_si32(v25) >= v24->right )
        goto LABEL_17;
      v26 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      v34 = *(struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL);
      GetScreenRect(&v43, v17, v26, &v34);
      v27 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      v34 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 88LL);
      v28 = GetScreenRect(&v44, v17, v27, &v34);
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v29, 4)) >= (int)HIDWORD(*(_QWORD *)&v28->right)
        || (v30 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27),
            v34 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 88LL),
            GetScreenRect(&v45, v17, v30, &v34),
            v31 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27),
            v34 = *(struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL),
            v32 = GetScreenRect(&v46, v17, v31, &v34),
            _mm_cvtsi128_si32(_mm_srli_si128(v33, 4)) >= (int)HIDWORD(*(_QWORD *)&v32->right)) )
      {
LABEL_17:
        if ( (unsigned int)(unsigned __int16)v47 + 4095 < (unsigned __int16)v36 + (v35 == 0 ? 0xFFF : 0) )
        {
LABEL_9:
          v6 = v11;
          v35 = 0;
          v7 = *(_QWORD *)v11;
          v8 = *a4;
          v9 = v37;
          v36 = (unsigned __int16)v47;
        }
      }
    }
    v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
  }
  while ( v11 );
  if ( v6 )
  {
    *v49 = v9;
    *a4 = v8;
  }
  else
  {
LABEL_12:
    *a4 = 0LL;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v38);
  return v6;
}

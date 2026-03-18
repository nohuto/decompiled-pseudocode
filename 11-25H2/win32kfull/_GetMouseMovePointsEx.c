/*
 * XREFs of _GetMouseMovePointsEx @ 0x1401E3F10
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1402983A0 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140090E74 (GetCurrentThreadCompositedDpi.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  int v5; // r12d
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r14d
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  INT v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  INT v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  INT v25; // r13d
  __int64 v26; // rax
  int v27; // r13d
  int v28; // eax
  unsigned int v29; // eax
  __int64 v31; // rcx
  __int64 v32; // r14
  unsigned __int64 v33; // rcx
  INT v34; // r12d
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  INT v37; // r13d
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  INT v43; // ebx
  __int64 v44; // rax
  INT v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  INT v48; // ebx
  __int64 v49; // rax
  INT v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rcx
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __m128i v55; // xmm6
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 UserSessionState; // rax
  unsigned int v62; // [rsp+20h] [rbp-A8h]
  unsigned int i; // [rsp+24h] [rbp-A4h]
  INT b; // [rsp+28h] [rbp-A0h]
  INT ba; // [rsp+28h] [rbp-A0h]
  int c; // [rsp+30h] [rbp-98h]
  unsigned int ca; // [rsp+30h] [rbp-98h]
  unsigned __int64 v68; // [rsp+38h] [rbp-90h] BYREF
  __int64 v69; // [rsp+40h] [rbp-88h] BYREF
  __int128 v70; // [rsp+48h] [rbp-80h]
  __int64 v71; // [rsp+58h] [rbp-70h] BYREF
  __int64 v72; // [rsp+60h] [rbp-68h] BYREF
  __m128i v73[3]; // [rsp+70h] [rbp-58h] BYREF

  v5 = 0;
  v72 = 0LL;
  LODWORD(v71) = *a1;
  HIDWORD(v71) = a1[2];
  v69 = 0LL;
  v68 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  LogicalToPhysicalDPIPoint(&v72, &v71, CurrentThreadDpiAwarenessContext, 0LL);
  if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 14724) )
    v11 = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v10, v9) + 14724) - 1) & 0x3F;
  else
    v11 = 63;
  v12 = v11;
  v62 = v11;
  v14 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 56968);
  v70 = *(_OWORD *)(*(_QWORD *)v14 + 24LL);
  while ( 1 )
  {
    v15 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v14, v13) + 24LL * v12 + 14728) >> 16;
    if ( !(_WORD)v15
      || (v16 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v15, v13) + 24LL * v12 + 14732) >> 16,
          !(_WORD)v16) )
    {
      v28 = 0;
      goto LABEL_22;
    }
    v17 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v16, v13) + 24LL * v12 + 14728) >> 16;
    v18 = (unsigned __int16)v17 + 1;
    v21 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v17, v19) + 24LL * v12 + 14732) >> 16;
    c = (unsigned __int16)v21 + 1;
    b = DWORD2(v70) - v70;
    if ( v18 == DWORD2(v70) - (_DWORD)v70 )
    {
      v22 = *(__int16 *)(W32GetUserSessionState(v21, v20) + 24LL * v12 + 14728);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v21, v20);
      v22 = v70 + EngMulDiv(*(unsigned __int16 *)(UserSessionState + 24LL * v12 + 14728), b, v18);
    }
    ba = v22;
    v25 = HIDWORD(v70) - DWORD1(v70);
    v26 = W32GetUserSessionState(v24, v23);
    if ( c == v25 )
      v27 = *(__int16 *)(v26 + 24LL * v12 + 14732);
    else
      v27 = DWORD1(v70) + EngMulDiv(*(unsigned __int16 *)(v26 + 24LL * v12 + 14732), v25, c);
    if ( __PAIR64__(v27, ba) == v72 )
    {
      v5 = 1;
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext(v14) & 0xF) != 2 )
    {
      v68 = __PAIR64__(v27, ba);
      v29 = W32GetCurrentThreadDpiAwarenessContext(v14);
      PhysicalToLogicalDPIPoint(&v69, &v68, v29, 0LL);
      if ( v69 == v71 )
        v5 = 1;
    }
    if ( !v5 )
    {
      v5 = 0;
      goto LABEL_14;
    }
    v5 = 0;
    if ( !*((_DWORD *)a1 + 2)
      || *((_DWORD *)a1 + 2) == *(_DWORD *)(W32GetUserSessionState(v14, v13) + 24LL * v12 + 14736) )
    {
      break;
    }
LABEL_14:
    if ( v12 )
      v12 = ((_BYTE)v12 - 1) & 0x3F;
    else
      v12 = 63;
    v62 = v12;
    if ( v12 == v11 )
    {
      v28 = 0;
      goto LABEL_22;
    }
  }
  v28 = 1;
LABEL_22:
  if ( v28 )
  {
    v31 = v12 - v11 + 64;
    if ( v12 > v11 )
      v31 = v12 - v11;
    if ( (unsigned int)v31 >= a3 )
      v31 = a3;
    ca = v31;
    for ( i = 0; i < (unsigned int)v31; ++i )
    {
      v32 = 3LL * v12;
      v33 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v31, v13) + 24LL * v12 + 14728) >> 16;
      v34 = (unsigned __int16)v33 + 1;
      v36 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v33, v35) + 24LL * v12 + 14732) >> 16;
      v37 = (unsigned __int16)v36 + 1;
      v40 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v36, v38) + 24LL * v12 + 14728) >> 16;
      if ( !(_WORD)v40 )
        break;
      v42 = (unsigned __int64)*(unsigned int *)(W32GetUserSessionState(v40, v39) + 24LL * v12 + 14732) >> 16;
      if ( !(_WORD)v42 )
        break;
      v43 = DWORD2(v70) - v70;
      v44 = W32GetUserSessionState(v42, v41);
      if ( v34 == v43 )
        v45 = EngMulDiv(*(__int16 *)(v44 + 24LL * v12 + 14728), v43, v34);
      else
        v45 = v70 + EngMulDiv(*(unsigned __int16 *)(v44 + 24LL * v12 + 14728), v43, v34);
      LODWORD(v68) = v45;
      v48 = HIDWORD(v70) - DWORD1(v70);
      v49 = W32GetUserSessionState(v47, v46);
      if ( v37 == v48 )
        v50 = EngMulDiv(*(__int16 *)(v49 + 24LL * v12 + 14732), v48, v37);
      else
        v50 = DWORD1(v70) + EngMulDiv(*(unsigned __int16 *)(v49 + 24LL * v12 + 14732), v48, v37);
      HIDWORD(v68) = v50;
      v52 = W32GetCurrentThreadDpiAwarenessContext(v51);
      PhysicalToLogicalDPIPoint(&v69, &v68, v52, 0LL);
      if ( a4 == 2 )
      {
        CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi(v53);
        GetScreenRectForDpi(v73, CurrentThreadCompositedDpi);
        v55 = v73[0];
        v73[1] = v73[0];
        *(_DWORD *)(a2 + 24LL * i) = EngMulDiv(
                                       (unsigned __int16)v69,
                                       0x10000,
                                       _mm_cvtsi128_si32(_mm_srli_si128(v73[0], 8)) - _mm_cvtsi128_si32(v73[0]) - 1);
        *(_DWORD *)(a2 + 24LL * i + 4) = EngMulDiv(
                                           WORD2(v69),
                                           0x10000,
                                           _mm_cvtsi128_si32(_mm_srli_si128(v55, 12))
                                         - _mm_cvtsi128_si32(_mm_srli_si128(v55, 4))
                                         - 1);
        v57 = i;
      }
      else
      {
        *(_QWORD *)(a2 + 24LL * i) = v69;
        v57 = i;
        v56 = 3LL * i;
        if ( *(int *)(a2 + 24LL * i) < 0 )
          *(_DWORD *)(a2 + 24LL * i) += 0x10000;
        if ( *(int *)(a2 + 24LL * i + 4) < 0 )
          *(_DWORD *)(a2 + 24LL * i + 4) += 0x10000;
        v12 = v62;
      }
      v58 = 3 * v57;
      v59 = *(unsigned int *)(W32GetUserSessionState(v56, v57) + 8 * v32 + 14736);
      *(_DWORD *)(a2 + 8 * v58 + 8) = v59;
      *(_QWORD *)(a2 + 8 * v58 + 16) = *(_QWORD *)(W32GetUserSessionState(v59, v60) + 8 * v32 + 14744);
      if ( v12 )
        v12 = ((_BYTE)v12 - 1) & 0x3F;
      else
        v12 = 63;
      v62 = v12;
      v31 = ca;
    }
    return i;
  }
  else
  {
    UserSetLastError(1171);
    return 0xFFFFFFFFLL;
  }
}

/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1402C55A4
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x140242080 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1402C41AC (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1402C3BD0 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402C46F4 (-IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, LONG a5)
{
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // r13d
  char v11; // si
  char v12; // bl
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  LONG v16; // r12d
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct tagRECT *v24; // rax
  LONG top; // ebx
  __int64 v26; // rax
  unsigned __int32 v27; // edx
  __int32 v28; // edi
  __int64 v29; // rcx
  __int32 v30; // r9d
  __int32 v31; // eax
  char v32; // si
  char v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  LONG v37; // r12d
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct tagRECT *v44; // rax
  LONG bottom; // ebx
  __int64 v46; // rax
  unsigned __int32 v47; // edx
  __int32 v48; // edi
  __int64 v49; // rcx
  __int32 v50; // ebx
  __int32 v51; // eax
  __int32 v52; // eax
  _QWORD v54[2]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v55; // [rsp+50h] [rbp-30h]
  struct tagRECT v56; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v57; // [rsp+70h] [rbp-10h] BYREF
  __int64 v58; // [rsp+C0h] [rbp+40h] BYREF
  __int64 *v59; // [rsp+D8h] [rbp+58h] BYREF

  v58 = a1;
  v59 = &v58;
  v54[0] = 0LL;
  v7 = 0;
  lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 *)&v59, &v56, a2);
  v55 = (__m128i)v56;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8);
  if ( a3 )
  {
    if ( a3 != 3 )
      return v7;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v11 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v12 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v12 = 0;
    }
    if ( v11 || v12 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        1,
        19,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
    v16 = a5;
    v17 = *(_QWORD *)(v58 + 240);
    while ( 1 )
    {
      v56 = *lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 *)&v59, &v57, v17);
      if ( IsDockTargetActive(v58) )
      {
        if ( v56.left <= v16 && v16 < v56.right )
          break;
      }
      v20 = *(_QWORD *)(v17 + 96);
      v22 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 56968) + 144LL;
      if ( v20 == v22 )
        v20 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v21) + 56968) + 144LL);
      v17 = v20 - 96;
      if ( v17 == *(_QWORD *)(v58 + 240) )
        return v7;
    }
    v23 = v58;
    v7 = 1;
    v54[0] = v17;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 40LL) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v17 + 40) + 60LL) == *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL) )
    {
      top = v56.top;
      v55.m128i_i32[1] = v56.top;
    }
    else
    {
      v54[0] = a2;
      v24 = lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 *)&v59, &v57, a2);
      v23 = v58;
      v17 = a2;
      v55 = *(__m128i *)v24;
      top = _mm_cvtsi128_si32(_mm_srli_si128(v55, 4));
    }
    v26 = *(_QWORD *)(v23 + 16);
    v27 = *(_DWORD *)(v23 + 40);
    v28 = *(_DWORD *)(v23 + 48);
    v55.m128i_i32[0] = v27;
    v29 = *(_QWORD *)(v26 + 40);
    v55.m128i_i32[2] = v28;
    if ( (*(_DWORD *)(v29 + 288) & 0xF) != 2 && v17 != *(_QWORD *)(v23 + 216) )
    {
      v59 = (__int64 *)v27;
      LogicalToPhysicalDPIPoint(&v59, &v59, CurrentThreadDpiAwarenessContext, v23 + 216);
      PhysicalToLogicalDPIPoint(&v59, &v59, CurrentThreadDpiAwarenessContext, v54);
      v55.m128i_i32[0] = (__int16)v59;
      LODWORD(v59) = v28;
      LogicalToPhysicalDPIPoint(&v59, &v59, CurrentThreadDpiAwarenessContext, v58 + 216);
      PhysicalToLogicalDPIPoint(&v59, &v59, CurrentThreadDpiAwarenessContext, v54);
      v23 = v58;
      v55.m128i_i32[2] = (__int16)v59;
    }
    v30 = *(_DWORD *)(v23 + 108);
    if ( v55.m128i_i32[3] - top < v30 )
      v55.m128i_i32[1] = v55.m128i_i32[3] - v30;
    v31 = *(_DWORD *)(v23 + 116);
    if ( v55.m128i_i32[3] - top >= v31 )
      v55.m128i_i32[1] = v55.m128i_i32[3] - v31;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v32 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v33 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v33 = 0;
    }
    if ( v32 || v33 )
    {
      v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69152),
        5,
        1,
        18,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
    v37 = a5;
    v38 = *(_QWORD *)(v58 + 240);
    while ( 1 )
    {
      v56 = *lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 *)&v59, &v57, v38);
      if ( IsDockTargetActive(v58) )
      {
        if ( v56.left <= v37 && v37 < v56.right )
          break;
      }
      v41 = *(_QWORD *)(v38 + 96);
      v43 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 56968) + 144LL;
      if ( v41 == v43 )
        v41 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v43, v42) + 56968) + 144LL);
      v38 = v41 - 96;
      if ( v38 == *(_QWORD *)(v58 + 240) )
        return v7;
    }
    v23 = v58;
    v7 = 1;
    v54[0] = v38;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 40LL) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v38 + 40) + 60LL) == *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL) )
    {
      bottom = v56.bottom;
      v55.m128i_i32[3] = v56.bottom;
    }
    else
    {
      v54[0] = a2;
      v44 = lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 *)&v59, &v57, a2);
      v23 = v58;
      v38 = a2;
      v55 = *(__m128i *)v44;
      bottom = _mm_cvtsi128_si32(_mm_srli_si128(v55, 12));
    }
    v46 = *(_QWORD *)(v23 + 16);
    v47 = *(_DWORD *)(v23 + 40);
    v48 = *(_DWORD *)(v23 + 48);
    v55.m128i_i32[0] = v47;
    v49 = *(_QWORD *)(v46 + 40);
    v55.m128i_i32[2] = v48;
    if ( (*(_DWORD *)(v49 + 288) & 0xF) != 2 && v38 != *(_QWORD *)(v23 + 216) )
    {
      v59 = (__int64 *)v47;
      LogicalToPhysicalDPIPoint(&v59, &v59, CurrentThreadDpiAwarenessContext, v23 + 216);
      PhysicalToLogicalDPIPoint(&v59, &v59, CurrentThreadDpiAwarenessContext, v54);
      v55.m128i_i32[0] = (__int16)v59;
      LODWORD(v59) = v48;
      LogicalToPhysicalDPIPoint(&v59, &v59, CurrentThreadDpiAwarenessContext, v58 + 216);
      PhysicalToLogicalDPIPoint(&v59, &v59, CurrentThreadDpiAwarenessContext, v54);
      v23 = v58;
      v55.m128i_i32[2] = (__int16)v59;
    }
    v50 = bottom - v55.m128i_i32[1];
    v51 = *(_DWORD *)(v23 + 108);
    if ( v50 < v51 )
      v55.m128i_i32[3] = v55.m128i_i32[1] + v51;
    v52 = *(_DWORD *)(v23 + 116);
    if ( v50 >= v52 )
      v55.m128i_i32[3] = v55.m128i_i32[1] + v52;
  }
  if ( (*(_DWORD *)(v23 + 200) & 0x80000) != 0 )
    *(__m128i *)(v23 + 72) = v55;
  else
    *(__m128i *)(v23 + 40) = v55;
  return v7;
}

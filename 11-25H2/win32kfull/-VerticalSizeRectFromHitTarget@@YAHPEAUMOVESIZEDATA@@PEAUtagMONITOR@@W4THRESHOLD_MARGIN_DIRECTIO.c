/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1402A87E0
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1401F7F88 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1402A6DC4 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1402A6914 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A7750 (-IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, LONG a5)
{
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  char v11; // bl
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  LONG v15; // r15d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct tagRECT *v23; // rax
  LONG top; // edi
  __int64 v25; // rax
  unsigned __int32 v26; // edx
  __int32 v27; // r14d
  __int64 v28; // rcx
  __int32 v29; // r9d
  __int32 v30; // eax
  char v31; // bl
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  LONG v35; // r15d
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct tagRECT *v42; // rax
  LONG bottom; // edi
  __int64 v44; // rax
  unsigned __int32 v45; // edx
  __int32 v46; // r14d
  __int64 v47; // rcx
  __int32 v48; // edi
  __int32 v49; // eax
  __int32 v50; // eax
  _QWORD v52[2]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v53; // [rsp+50h] [rbp-30h]
  struct tagRECT v54; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v55; // [rsp+70h] [rbp-10h] BYREF
  __int64 v56; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v57; // [rsp+D8h] [rbp+58h] BYREF

  v56 = a1;
  v57 = (unsigned __int64)&v56;
  v52[0] = 0LL;
  v7 = 0;
  lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v57, &v54, a2);
  v53 = (__m128i)v54;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8);
  if ( a3 )
  {
    if ( a3 != 3 )
      return v7;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      LOBYTE(v7) = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v11 = 0;
    }
    if ( (_BYTE)v7 || v11 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        1,
        19,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
    v7 = 0;
    v15 = a5;
    v16 = *(_QWORD *)(v56 + 240);
    while ( 1 )
    {
      v54 = *lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v57, &v55, v16);
      if ( IsDockTargetActive(v56) )
      {
        if ( v54.left <= v15 && v15 < v54.right )
          break;
      }
      v19 = *(_QWORD *)(v16 + 96);
      v21 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 56968) + 152LL;
      if ( v19 == v21 )
        v19 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v21, v20) + 56968) + 152LL);
      v16 = v19 - 96;
      if ( v16 == *(_QWORD *)(v56 + 240) )
        return v7;
    }
    v22 = v56;
    v7 = 1;
    v52[0] = v16;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 16) + 40LL) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v16 + 40) + 60LL) == *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL) )
    {
      top = v54.top;
      v53.m128i_i32[1] = v54.top;
    }
    else
    {
      v52[0] = a2;
      v23 = lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v57, &v55, a2);
      v22 = v56;
      v16 = a2;
      v53 = *(__m128i *)v23;
      top = _mm_cvtsi128_si32(_mm_srli_si128(v53, 4));
    }
    v25 = *(_QWORD *)(v22 + 16);
    v26 = *(_DWORD *)(v22 + 40);
    v27 = *(_DWORD *)(v22 + 48);
    v53.m128i_i32[0] = v26;
    v28 = *(_QWORD *)(v25 + 40);
    v53.m128i_i32[2] = v27;
    if ( (*(_DWORD *)(v28 + 288) & 0xF) != 2 && v16 != *(_QWORD *)(v22 + 216) )
    {
      v57 = v26;
      LogicalToPhysicalDPIPoint(&v57, &v57, CurrentThreadDpiAwarenessContext, v22 + 216);
      PhysicalToLogicalDPIPoint(&v57, &v57, CurrentThreadDpiAwarenessContext, v52);
      v53.m128i_i32[0] = (__int16)v57;
      LODWORD(v57) = v27;
      LogicalToPhysicalDPIPoint(&v57, &v57, CurrentThreadDpiAwarenessContext, v56 + 216);
      PhysicalToLogicalDPIPoint(&v57, &v57, CurrentThreadDpiAwarenessContext, v52);
      v22 = v56;
      v53.m128i_i32[2] = (__int16)v57;
    }
    v29 = *(_DWORD *)(v22 + 108);
    if ( v53.m128i_i32[3] - top < v29 )
      v53.m128i_i32[1] = v53.m128i_i32[3] - v29;
    v30 = *(_DWORD *)(v22 + 116);
    if ( v53.m128i_i32[3] - top >= v30 )
      v53.m128i_i32[1] = v53.m128i_i32[3] - v30;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      LOBYTE(v7) = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v31 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v31 = 0;
    }
    if ( (_BYTE)v7 || v31 )
    {
      v32 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v34,
        v33,
        *(_QWORD *)(v32 + 69160),
        5,
        1,
        18,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
    v7 = 0;
    v35 = a5;
    v36 = *(_QWORD *)(v56 + 240);
    while ( 1 )
    {
      v54 = *lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v57, &v55, v36);
      if ( IsDockTargetActive(v56) )
      {
        if ( v54.left <= v35 && v35 < v54.right )
          break;
      }
      v39 = *(_QWORD *)(v36 + 96);
      v41 = *(_QWORD *)(W32GetUserSessionState(v38, v37) + 56968) + 152LL;
      if ( v39 == v41 )
        v39 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v41, v40) + 56968) + 152LL);
      v36 = v39 - 96;
      if ( v36 == *(_QWORD *)(v56 + 240) )
        return v7;
    }
    v22 = v56;
    v7 = 1;
    v52[0] = v36;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 16) + 40LL) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v36 + 40) + 60LL) == *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL) )
    {
      bottom = v54.bottom;
      v53.m128i_i32[3] = v54.bottom;
    }
    else
    {
      v52[0] = a2;
      v42 = lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v57, &v55, a2);
      v22 = v56;
      v36 = a2;
      v53 = *(__m128i *)v42;
      bottom = _mm_cvtsi128_si32(_mm_srli_si128(v53, 12));
    }
    v44 = *(_QWORD *)(v22 + 16);
    v45 = *(_DWORD *)(v22 + 40);
    v46 = *(_DWORD *)(v22 + 48);
    v53.m128i_i32[0] = v45;
    v47 = *(_QWORD *)(v44 + 40);
    v53.m128i_i32[2] = v46;
    if ( (*(_DWORD *)(v47 + 288) & 0xF) != 2 && v36 != *(_QWORD *)(v22 + 216) )
    {
      v57 = v45;
      LogicalToPhysicalDPIPoint(&v57, &v57, CurrentThreadDpiAwarenessContext, v22 + 216);
      PhysicalToLogicalDPIPoint(&v57, &v57, CurrentThreadDpiAwarenessContext, v52);
      v53.m128i_i32[0] = (__int16)v57;
      LODWORD(v57) = v46;
      LogicalToPhysicalDPIPoint(&v57, &v57, CurrentThreadDpiAwarenessContext, v56 + 216);
      PhysicalToLogicalDPIPoint(&v57, &v57, CurrentThreadDpiAwarenessContext, v52);
      v22 = v56;
      v53.m128i_i32[2] = (__int16)v57;
    }
    v48 = bottom - v53.m128i_i32[1];
    v49 = *(_DWORD *)(v22 + 108);
    if ( v48 < v49 )
      v53.m128i_i32[3] = v53.m128i_i32[1] + v49;
    v50 = *(_DWORD *)(v22 + 116);
    if ( v48 >= v50 )
      v53.m128i_i32[3] = v53.m128i_i32[1] + v50;
  }
  if ( (*(_DWORD *)(v22 + 200) & 0x80000) != 0 )
    *(__m128i *)(v22 + 72) = v53;
  else
    *(__m128i *)(v22 + 40) = v53;
  return v7;
}

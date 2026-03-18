/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x140063190
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetTopLevelWindow @ 0x140062E7C (_GetTopLevelWindow.c)
 *     Is_GetTopLevelWindowSupported @ 0x140062EB8 (Is_GetTopLevelWindowSupported.c)
 *     TransformOffscreenAdjacentRect @ 0x140062EF0 (TransformOffscreenAdjacentRect.c)
 *     _MonitorFromRect @ 0x140063140 (_MonitorFromRect.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x14006365C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400637C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x14006398C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     PhysicalToLogicalDPIRect @ 0x140063C70 (PhysicalToLogicalDPIRect.c)
 *     Is_MonitorFromRectSupported @ 0x140064450 (Is_MonitorFromRectSupported.c)
 *     LogicalToPhysicalDPIRect @ 0x140064490 (LogicalToPhysicalDPIRect.c)
 *     HMValidateSharedHandleNoRip @ 0x140064D58 (HMValidateSharedHandleNoRip.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x1401B9710 (IsDpiAwarenessBoundaryInParentChain.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(
        struct tagRECT *a1,
        const struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  unsigned int v9; // r14d
  struct tagRECT v10; // xmm1
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagMONITOR *v14; // rax
  __int64 v15; // rdx
  int v16; // ebx
  int v17; // eax
  LONG v19; // ebx
  int v20; // r15d
  int v21; // r13d
  struct tagRECT *v22; // rax
  LONG left; // r9d
  LONG right; // r10d
  __m128i v25; // xmm0
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // xmm0_8
  LONG top; // ecx
  LONG bottom; // edx
  unsigned __int64 v30; // rax
  int v31; // ecx
  int v32; // ebx
  int v33; // eax
  int v34; // eax
  struct tagRECT v35; // kr00_16
  __int64 v36; // rax
  LONG v37; // eax
  int v38; // eax
  __int64 (__fastcall *TopLevelWindow)(__int64); // rax
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // eax
  int v46; // eax
  __int64 v47; // [rsp+20h] [rbp-99h]
  int v48; // [rsp+30h] [rbp-89h]
  int v49; // [rsp+38h] [rbp-81h]
  int v50; // [rsp+40h] [rbp-79h]
  struct tagMONITOR *v51; // [rsp+50h] [rbp-69h] BYREF
  struct tagMONITOR *v52; // [rsp+58h] [rbp-61h]
  __m128i *v53; // [rsp+60h] [rbp-59h]
  struct tagRECT v54; // [rsp+68h] [rbp-51h] BYREF
  __m128i v55; // [rsp+80h] [rbp-39h] BYREF
  __m128i v56; // [rsp+90h] [rbp-29h] BYREF
  __m128i v57; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v58; // [rsp+B0h] [rbp-9h] BYREF

  v53 = (__m128i *)a1;
  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v9 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v9 = W32GetCurrentThreadDpiAwarenessContext();
  v10 = *a2;
  v49 = 0;
  v11 = 0;
  v57 = 0LL;
  v58 = v10;
  v56 = 0LL;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v9 >> 8)) & 0x1FF) == 0
    || (unsigned int)IsRectEmptyInl(a2) && !a2->left && !a2->top )
  {
    *a1 = v10;
    return 0LL;
  }
  if ( !a3
    || (int)Is_GetTopLevelWindowSupported() < 0
    || (TopLevelWindow = GetTopLevelWindow(a3)) == 0LL
    || TopLevelWindow == (__int64 (__fastcall *)(__int64))a3
    || !(unsigned int)IsDpiAwarenessBoundaryInParentChain(a3)
    || (v40 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL))) == 0 )
  {
    v14 = *(struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968) + 112LL);
    v52 = v14;
    if ( !v14 )
      goto LABEL_9;
    v19 = v56.m128i_i32[2];
    v20 = v56.m128i_i32[3];
    v21 = v56.m128i_i32[1];
    v48 = v56.m128i_i32[2];
    v50 = v56.m128i_i32[0];
    do
    {
      v55 = 0LL;
      v22 = ExpandedMonitorRect(&v54, v14, v9);
      left = a2->left;
      right = a2->right;
      v25 = *(__m128i *)v22;
      v26 = *(_QWORD *)&v22->left;
      v27 = _mm_srli_si128(v25, 8).m128i_u64[0];
      if ( (int)v26 > a2->left )
        left = v26;
      v55.m128i_i32[0] = left;
      if ( (int)v27 < right )
        right = v27;
      v55.m128i_i32[2] = right;
      if ( left >= right )
        goto LABEL_24;
      top = a2->top;
      bottom = a2->bottom;
      v30 = HIDWORD(v26);
      if ( (int)v30 > top )
        top = v30;
      v55.m128i_i32[1] = top;
      if ( SHIDWORD(v27) < bottom )
        bottom = HIDWORD(v27);
      v55.m128i_i32[3] = bottom;
      if ( top < bottom )
      {
        if ( v49 )
        {
          v42 = v50;
          if ( v50 >= left )
            v42 = left;
          v50 = v42;
          if ( v21 >= top )
            v21 = top;
          v56.m128i_i64[0] = __PAIR64__(v21, v42);
          if ( v19 <= right )
            v19 = right;
          v48 = v19;
          if ( v20 <= bottom )
            v20 = bottom;
          v56.m128i_i64[1] = __PAIR64__(v20, v19);
        }
        else
        {
          v56 = v55;
          v20 = _mm_cvtsi128_si32(_mm_srli_si128(v55, 12));
          v21 = _mm_cvtsi128_si32(_mm_srli_si128(v55, 4));
          v48 = _mm_cvtsi128_si32(_mm_srli_si128(v55, 8));
          v50 = _mm_cvtsi128_si32(v55);
        }
        v51 = v52;
        v32 = LogicalToPhysicalDPIRect(&v55, &v55, v9, &v51, v47);
        v33 = PhysicalToLogicalDPIRect(&v55, &v55, CurrentThreadDpiAwarenessContext, &v51);
        v31 = v49;
        v34 = v32 | v33;
        v19 = v48;
        v11 |= v34;
        if ( v49 )
        {
          v43 = v57.m128i_i32[0];
          if ( v57.m128i_i32[0] >= v55.m128i_i32[0] )
            v43 = v55.m128i_i32[0];
          v57.m128i_i32[0] = v43;
          v44 = v57.m128i_i32[1];
          if ( v57.m128i_i32[1] >= v55.m128i_i32[1] )
            v44 = v55.m128i_i32[1];
          v57.m128i_i32[1] = v44;
          v45 = v57.m128i_i32[2];
          if ( v57.m128i_i32[2] <= v55.m128i_i32[2] )
            v45 = v55.m128i_i32[2];
          v57.m128i_i32[2] = v45;
          if ( v57.m128i_i32[3] <= v55.m128i_i32[3] )
            v57.m128i_i32[3] = v55.m128i_i32[3];
        }
        else
        {
          v31 = 1;
          v57 = v55;
          v49 = 1;
        }
      }
      else
      {
LABEL_24:
        v31 = v49;
        v55 = 0LL;
      }
      v14 = (struct tagMONITOR *)*((_QWORD *)v52 + 7);
      v52 = v14;
    }
    while ( v14 );
    if ( v31 )
    {
      v35 = v58;
      v36 = v56.m128i_i64[0] - *(_QWORD *)&v58.left;
      if ( v56.m128i_i64[0] == *(_QWORD *)&v58.left )
        v36 = v56.m128i_i64[1] - *(_QWORD *)&v58.right;
      if ( !v36 )
        goto LABEL_12;
      if ( v50 > v58.left )
      {
        v55.m128i_i32[2] = v50;
        v55.m128i_i32[3] = v58.bottom;
        v55.m128i_i64[0] = *(_QWORD *)&v58.left;
        v41 = TransformOffscreenAdjacentRect(
                v56.m128i_i32,
                v57.m128i_i32,
                (struct tagRECT *)&v55,
                CurrentThreadDpiAwarenessContext,
                v9);
        v20 = v56.m128i_i32[3];
        v11 |= v41;
        v37 = v56.m128i_i32[2];
        v21 = v56.m128i_i32[1];
      }
      else
      {
        v37 = v48;
      }
      if ( v37 < v35.right )
      {
        v55.m128i_i32[0] = v37;
        v55.m128i_i32[1] = v58.top;
        v55.m128i_i32[3] = v58.bottom;
        v55.m128i_i32[2] = v35.right;
        v38 = TransformOffscreenAdjacentRect(
                v56.m128i_i32,
                v57.m128i_i32,
                (struct tagRECT *)&v55,
                CurrentThreadDpiAwarenessContext,
                v9);
        v20 = v56.m128i_i32[3];
        v11 |= v38;
        v21 = v56.m128i_i32[1];
      }
      if ( v21 > v58.top )
      {
        v55.m128i_i32[0] = v35.left;
        v55.m128i_i32[1] = v58.top;
        v55.m128i_i32[2] = v35.right;
        v55.m128i_i32[3] = v21;
        v46 = TransformOffscreenAdjacentRect(
                v56.m128i_i32,
                v57.m128i_i32,
                (struct tagRECT *)&v55,
                CurrentThreadDpiAwarenessContext,
                v9);
        v20 = v56.m128i_i32[3];
        v11 |= v46;
      }
      if ( v20 >= v58.bottom )
        goto LABEL_12;
      v58.left = v35.left;
      v58.top = v20;
      v58.right = v35.right;
      v17 = TransformOffscreenAdjacentRect(v56.m128i_i32, v57.m128i_i32, &v58, CurrentThreadDpiAwarenessContext, v9);
    }
    else
    {
LABEL_9:
      if ( (int)Is_MonitorFromRectSupported() < 0 )
      {
LABEL_12:
        *v53 = v57;
        return v11;
      }
      v51 = (struct tagMONITOR *)MonitorFromRect((__int64)a2, v15, v9);
      v16 = LogicalToPhysicalDPIRect(&v57, a2, v9, &v51, v47);
      v17 = v16 | PhysicalToLogicalDPIRect(&v57, &v57, CurrentThreadDpiAwarenessContext, &v51);
    }
    v11 |= v17;
    goto LABEL_12;
  }
  return TransformRectBetweenCoordinateSpacesPerMonitor(
           (_DWORD)a1,
           (_DWORD)a2,
           CurrentThreadDpiAwarenessContext,
           v9,
           v40);
}

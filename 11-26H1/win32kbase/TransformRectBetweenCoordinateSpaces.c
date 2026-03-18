/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x140082FC0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     TransformOffscreenAdjacentRect @ 0x140081918 (TransformOffscreenAdjacentRect.c)
 *     _MonitorFromRect @ 0x140082058 (_MonitorFromRect.c)
 *     HMValidateSharedHandleNoRip @ 0x140082658 (HMValidateSharedHandleNoRip.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x140082868 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400828BC (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1400828DC (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     LogicalToPhysicalDPIRect @ 0x140082A40 (LogicalToPhysicalDPIRect.c)
 *     Is_MonitorFromRectSupported @ 0x140083BBC (Is_MonitorFromRectSupported.c)
 *     PhysicalToLogicalDPIRect @ 0x140083DF0 (PhysicalToLogicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     Is_GetTopLevelWindowSupported @ 0x1400DD6E8 (Is_GetTopLevelWindowSupported.c)
 *     _GetTopLevelWindow @ 0x1400DD720 (_GetTopLevelWindow.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x14019DA10 (IsDpiAwarenessBoundaryInParentChain.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(struct tagRECT *a1, struct tagRECT *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  unsigned int v9; // r14d
  struct tagRECT v10; // xmm1
  unsigned int v11; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  struct tagMONITOR *v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  int v18; // eax
  LONG v20; // r15d
  LONG v21; // ebx
  int v22; // r13d
  struct tagRECT *v23; // rax
  LONG left; // r9d
  LONG right; // r10d
  __m128i v26; // xmm0
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // xmm0_8
  LONG top; // ecx
  LONG bottom; // edx
  unsigned __int64 v31; // rax
  int v32; // ecx
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  LONG v36; // esi
  LONG v37; // ebx
  int v38; // eax
  __int64 TopLevelWindow; // rax
  __int64 v40; // rax
  int v41; // eax
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  int v45; // eax
  int v46; // eax
  __m128i Buf1; // [rsp+30h] [rbp-89h] BYREF
  int v48; // [rsp+40h] [rbp-79h]
  int v49; // [rsp+48h] [rbp-71h]
  int v50; // [rsp+50h] [rbp-69h]
  __int64 (__fastcall *v51)(__int64, __int64, _QWORD); // [rsp+60h] [rbp-59h] BYREF
  __int64 v52; // [rsp+68h] [rbp-51h]
  __m128i *v53; // [rsp+70h] [rbp-49h]
  struct tagRECT v54; // [rsp+78h] [rbp-41h] BYREF
  __m128i v55; // [rsp+90h] [rbp-29h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT Buf2; // [rsp+B0h] [rbp-9h] BYREF

  v53 = (__m128i *)a1;
  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  if ( a4 )
    v9 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v9 = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v10 = *a2;
  v49 = 0;
  v11 = 0;
  v56 = 0LL;
  Buf2 = v10;
  Buf1 = 0LL;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v9 >> 8)) & 0x1FF) == 0
    || IsRectEmptyInl(a2) && !a2->left && !a2->top )
  {
    *a1 = v10;
    return 0LL;
  }
  if ( !a3
    || (int)Is_GetTopLevelWindowSupported() < 0
    || (TopLevelWindow = GetTopLevelWindow(a3)) == 0
    || TopLevelWindow == a3
    || !(unsigned int)IsDpiAwarenessBoundaryInParentChain(a3)
    || (v40 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL), v12, v14)) == 0 )
  {
    v15 = *(struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 56968) + 104LL);
    v52 = (__int64)v15;
    if ( !v15 )
      goto LABEL_9;
    v20 = Buf1.m128i_i32[3];
    v21 = Buf1.m128i_i32[2];
    v22 = Buf1.m128i_i32[1];
    v50 = Buf1.m128i_i32[0];
    do
    {
      v55 = 0LL;
      v23 = ExpandedMonitorRect(&v54, v15, v9);
      left = a2->left;
      right = a2->right;
      v26 = *(__m128i *)v23;
      v27 = *(_QWORD *)&v23->left;
      v28 = _mm_srli_si128(v26, 8).m128i_u64[0];
      if ( (int)v27 > a2->left )
        left = v27;
      v55.m128i_i32[0] = left;
      if ( (int)v28 < right )
        right = v28;
      v55.m128i_i32[2] = right;
      if ( left >= right )
        goto LABEL_24;
      top = a2->top;
      bottom = a2->bottom;
      v31 = HIDWORD(v27);
      if ( (int)v31 > top )
        top = v31;
      v55.m128i_i32[1] = top;
      if ( SHIDWORD(v28) < bottom )
        bottom = HIDWORD(v28);
      v55.m128i_i32[3] = bottom;
      if ( top < bottom )
      {
        if ( v49 )
        {
          v45 = v50;
          if ( v50 >= left )
            v45 = left;
          v50 = v45;
          if ( v22 >= top )
            v22 = top;
          Buf1.m128i_i64[0] = __PAIR64__(v22, v45);
          if ( v21 <= right )
            v21 = right;
          v48 = v21;
          if ( v20 <= bottom )
            v20 = bottom;
          Buf1.m128i_i64[1] = __PAIR64__(v20, v21);
        }
        else
        {
          Buf1 = v55;
          v20 = _mm_cvtsi128_si32(_mm_srli_si128(v55, 12));
          v22 = _mm_cvtsi128_si32(_mm_srli_si128(v55, 4));
          v48 = _mm_cvtsi128_si32(_mm_srli_si128(v55, 8));
          v50 = _mm_cvtsi128_si32(v55);
        }
        v51 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))v52;
        v33 = LogicalToPhysicalDPIRect((__int64)&v55, &v55, v9, (__int64 *)&v51);
        v34 = PhysicalToLogicalDPIRect(&v55, &v55, CurrentThreadDpiAwarenessContext, &v51);
        v32 = v49;
        v35 = v33 | v34;
        v21 = v48;
        v11 |= v35;
        if ( v49 )
        {
          v42 = v56.m128i_i32[0];
          if ( v56.m128i_i32[0] >= v55.m128i_i32[0] )
            v42 = v55.m128i_i32[0];
          v56.m128i_i32[0] = v42;
          v43 = v56.m128i_i32[1];
          if ( v56.m128i_i32[1] >= v55.m128i_i32[1] )
            v43 = v55.m128i_i32[1];
          v56.m128i_i32[1] = v43;
          v44 = v56.m128i_i32[2];
          if ( v56.m128i_i32[2] <= v55.m128i_i32[2] )
            v44 = v55.m128i_i32[2];
          v56.m128i_i32[2] = v44;
          if ( v56.m128i_i32[3] <= v55.m128i_i32[3] )
            v56.m128i_i32[3] = v55.m128i_i32[3];
        }
        else
        {
          v32 = 1;
          v56 = v55;
          v49 = 1;
        }
      }
      else
      {
LABEL_24:
        v32 = v49;
        v55 = 0LL;
      }
      v15 = *(struct tagMONITOR **)(v52 + 56);
      v52 = (__int64)v15;
    }
    while ( v15 );
    if ( v32 )
    {
      if ( !memcmp(&Buf1, &Buf2, 0x10uLL) )
        goto LABEL_12;
      if ( v50 > Buf2.left )
      {
        v55.m128i_i64[0] = *(_QWORD *)&Buf2.left;
        v55.m128i_i32[2] = v50;
        v55.m128i_i32[3] = Buf2.bottom;
        v41 = TransformOffscreenAdjacentRect(
                Buf1.m128i_i32,
                v56.m128i_i32,
                (struct tagRECT *)&v55,
                CurrentThreadDpiAwarenessContext,
                v9);
        v20 = Buf1.m128i_i32[3];
        v11 |= v41;
        v21 = Buf1.m128i_i32[2];
        v22 = Buf1.m128i_i32[1];
      }
      v36 = Buf2.right;
      if ( v21 < Buf2.right )
      {
        v55.m128i_i32[0] = v21;
        v37 = Buf2.bottom;
        v55.m128i_i32[1] = Buf2.top;
        v55.m128i_i64[1] = *(_QWORD *)&Buf2.right;
        v38 = TransformOffscreenAdjacentRect(
                Buf1.m128i_i32,
                v56.m128i_i32,
                (struct tagRECT *)&v55,
                CurrentThreadDpiAwarenessContext,
                v9);
        v20 = Buf1.m128i_i32[3];
        v11 |= v38;
        v22 = Buf1.m128i_i32[1];
      }
      else
      {
        v37 = Buf2.bottom;
      }
      if ( v22 > Buf2.top )
      {
        v55.m128i_i64[0] = *(_QWORD *)&Buf2.left;
        v55.m128i_i32[2] = v36;
        v55.m128i_i32[3] = v22;
        v46 = TransformOffscreenAdjacentRect(
                Buf1.m128i_i32,
                v56.m128i_i32,
                (struct tagRECT *)&v55,
                CurrentThreadDpiAwarenessContext,
                v9);
        v20 = Buf1.m128i_i32[3];
        v11 |= v46;
      }
      if ( v20 >= v37 )
        goto LABEL_12;
      Buf2.top = v20;
      Buf2.right = v36;
      Buf2.bottom = v37;
      v18 = TransformOffscreenAdjacentRect(Buf1.m128i_i32, v56.m128i_i32, &Buf2, CurrentThreadDpiAwarenessContext, v9);
    }
    else
    {
LABEL_9:
      if ( (int)Is_MonitorFromRectSupported() < 0 )
      {
LABEL_12:
        *v53 = v56;
        return v11;
      }
      v51 = MonitorFromRect((__int64)a2, v16, v9);
      v17 = LogicalToPhysicalDPIRect((__int64)&v56, a2, v9, (__int64 *)&v51);
      v18 = v17 | PhysicalToLogicalDPIRect(&v56, &v56, CurrentThreadDpiAwarenessContext, &v51);
    }
    v11 |= v18;
    goto LABEL_12;
  }
  return TransformRectBetweenCoordinateSpacesPerMonitor(
           (__int64)a1,
           (__int64)a2,
           CurrentThreadDpiAwarenessContext,
           v9,
           v40);
}

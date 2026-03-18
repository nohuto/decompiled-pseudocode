/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1402ED798
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402EBEC0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x1402EE214 (_CapturePresentMultiPlaneOverlayArgs3_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs3(
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *Src,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 ***a3,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **a5,
        struct tagRECT ***a6,
        unsigned int **a7,
        unsigned int **a8,
        unsigned __int8 **a9,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **a10)
{
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // r14
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // r12
  unsigned int i; // ebx
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 DirtyRectCount; // kr00_8
  __int64 v33; // rax
  void *v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int *v42; // r14
  unsigned int v43; // r8d
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 CurrentProcess; // rax
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // [rsp+28h] [rbp-120h]
  __int64 v63; // [rsp+30h] [rbp-118h]
  __int128 v64; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v65; // [rsp+60h] [rbp-E8h]
  void *v66[2]; // [rsp+70h] [rbp-D8h]
  void *v67[2]; // [rsp+80h] [rbp-C8h]
  int v68; // [rsp+90h] [rbp-B8h]
  unsigned int v69; // [rsp+A0h] [rbp-A8h]
  void *v70[10]; // [rsp+B0h] [rbp-98h] BYREF
  void **v71; // [rsp+100h] [rbp-48h]

  memset(v70, 0, sizeof(v70));
  RtlCopyFromUser(v70, Src, 0x50uLL);
  if ( (unsigned int)(HIDWORD(v70[3]) - 1) > 9 )
  {
    v51 = HIDWORD(v70[3]);
    CurrentProcess = PsGetCurrentProcess(HIDWORD(v70[3]));
    WdLogSingleEntry3(2LL, v51, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2477;
    v53 = HIDWORD(v70[3]);
    v63 = PsGetCurrentProcess(v54);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v53,
      -1073741811LL,
      v63,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (unsigned int)(HIDWORD(v70[0]) - 1) > 0x3F )
  {
    v60 = PsGetCurrentProcess(HIDWORD(v70[3]));
    WdLogSingleEntry2(2LL, -1073741811LL, v60);
    WdLogGlobalForLineNumber = 2486;
    v62 = PsGetCurrentProcess(v61);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid ContextCount, returing 0x%I64x at 0x%I64x",
      -1073741811LL,
      v62,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *((_QWORD *)&v64 + 1) = 0LL;
  v65 = 0LL;
  *(_OWORD *)v66 = 0LL;
  *(_OWORD *)v67 = 0LL;
  v68 = HIDWORD(v70[3]);
  v11 = 8LL * HIDWORD(v70[3]);
  if ( !is_mul_ok(HIDWORD(v70[3]), 8uLL) )
    v11 = -1LL;
  v13 = (void *)operator new[](v11, 0x4B677844u, 256LL);
  *(_QWORD *)&v64 = v13;
  if ( !v13 )
  {
    v55 = PsGetCurrentProcess(v12);
    WdLogSingleEntry2(3LL, -1073741801LL, v55);
    WdLogGlobalForLineNumber = 2543;
    goto LABEL_46;
  }
  v14 = 80LL * HIDWORD(v70[3]);
  if ( !is_mul_ok(HIDWORD(v70[3]), 0x50uLL) )
    v14 = -1LL;
  *((_QWORD *)&v64 + 1) = operator new[](v14, 0x4B677844u, 256LL);
  if ( !*((_QWORD *)&v64 + 1) )
  {
    v50 = PsGetCurrentProcess(v15);
    WdLogSingleEntry2(3LL, -1073741801LL, v50);
    WdLogGlobalForLineNumber = 2553;
    goto LABEL_46;
  }
  v16 = 88LL * HIDWORD(v70[3]);
  if ( !is_mul_ok(HIDWORD(v70[3]), 0x58uLL) )
    v16 = -1LL;
  v18 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)operator new[](v16, 0x4B677844u, 256LL);
  *(_QWORD *)&v65 = v18;
  if ( !v18 )
  {
    v56 = PsGetCurrentProcess(v17);
    WdLogSingleEntry2(3LL, -1073741801LL, v56);
    WdLogGlobalForLineNumber = 2563;
    goto LABEL_46;
  }
  v19 = 8LL * HIDWORD(v70[3]);
  if ( !is_mul_ok(HIDWORD(v70[3]), 8uLL) )
    v19 = -1LL;
  v21 = (void *)operator new[](v19, 0x4B677844u, 256LL);
  v67[0] = v21;
  if ( !v21 )
  {
    v57 = PsGetCurrentProcess(v20);
    WdLogSingleEntry2(3LL, -1073741801LL, v57);
    WdLogGlobalForLineNumber = 2573;
    goto LABEL_46;
  }
  v22 = 4LL * HIDWORD(v70[0]);
  if ( !is_mul_ok(HIDWORD(v70[0]), 4uLL) )
    v22 = -1LL;
  v24 = (void *)operator new[](v22, 0x4B677844u, 256LL);
  *((_QWORD *)&v65 + 1) = v24;
  if ( !v24 )
  {
    v49 = PsGetCurrentProcess(v23);
    WdLogSingleEntry2(3LL, -1073741801LL, v49);
    WdLogGlobalForLineNumber = 2583;
    goto LABEL_46;
  }
  v25 = 4LL * (unsigned int)(HIDWORD(v70[3]) * HIDWORD(v70[0]));
  if ( !is_mul_ok((unsigned int)(HIDWORD(v70[3]) * HIDWORD(v70[0])), 4uLL) )
    v25 = -1LL;
  v27 = (char *)operator new[](v25, 0x4B677844u, 256LL);
  v66[0] = v27;
  if ( !v27 )
  {
    v46 = PsGetCurrentProcess(v26);
    WdLogSingleEntry2(3LL, -1073741801LL, v46);
    WdLogGlobalForLineNumber = 2593;
LABEL_46:
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v64);
    return 3221225495LL;
  }
  if ( v70[8] )
  {
    if ( LODWORD(v70[7]) )
    {
      v66[1] = (void *)operator new[](LODWORD(v70[7]), 0x4B677844u, 256LL);
      if ( !v66[1] )
      {
        v59 = PsGetCurrentProcess(v58);
        WdLogSingleEntry2(3LL, -1073741801LL, v59);
        WdLogGlobalForLineNumber = 2605;
        goto LABEL_46;
      }
    }
  }
  if ( v70[5] )
  {
    v67[1] = (void *)operator new(0x28uLL, 0x4B677844u, 256LL);
    if ( !v67[1] )
    {
      v48 = PsGetCurrentProcess(v47);
      WdLogSingleEntry2(3LL, -1073741801LL, v48);
      WdLogGlobalForLineNumber = 2618;
      goto LABEL_46;
    }
  }
  RtlCopyFromUser(v13, v70[4], 8LL * HIDWORD(v70[3]));
  RtlCopyFromUser(v24, v70[1], 4LL * HIDWORD(v70[0]));
  if ( v70[8] && LODWORD(v70[7]) )
    RtlCopyFromUser(v66[1], v70[8], LODWORD(v70[7]));
  if ( v70[5] )
    RtlCopyFromUser(v67[1], v70[5], 0x28uLL);
  for ( i = 0; ; ++i )
  {
    v69 = i;
    if ( i >= HIDWORD(v70[3]) )
      break;
    v71 = (void **)(*((_QWORD *)&v64 + 1) + 80LL * i);
    RtlCopyFromUser(v71, *((void **)v13 + i), 0x50uLL);
    v29 = &v18[i];
    RtlCopyFromUser(v29, *(void **)(*((_QWORD *)&v64 + 1) + 80LL * i + 48), 0x58uLL);
    v30 = i;
    if ( v29->DirtyRectCount > 0xFFF )
    {
      WdLogSingleEntry3(2LL, v18[v30].DirtyRectCount, i, -1073741811LL);
      WdLogGlobalForLineNumber = 2659;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid DirtyRectCount:%u on plane %u, returing 0x%I64x",
        v29->DirtyRectCount,
        i,
        -1073741811LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v64);
      return 3221225485LL;
    }
    DirtyRectCount = v18[v30].DirtyRectCount;
    v31 = 16 * DirtyRectCount;
    if ( !is_mul_ok(DirtyRectCount, 0x10uLL) )
      v31 = -1LL;
    v33 = operator new[](v31, 0x4B677844u, 256LL);
    v34 = v67[0];
    *((_QWORD *)v67[0] + i) = v33;
    if ( !v33 )
    {
      v37 = PsGetCurrentProcess(v34);
      WdLogSingleEntry2(3LL, -1073741801LL, v37);
      WdLogGlobalForLineNumber = 2669;
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v64);
      return 3221225495LL;
    }
    v21 = v34;
    RtlCopyFromUser(*((void **)v34 + i), v29->pDirtyRects, 16LL * v29->DirtyRectCount);
    v29->pDirtyRects = (RECT *)*((_QWORD *)v21 + i);
    v36 = *((_DWORD *)v71 + 4);
    if ( v36 > HIDWORD(v70[0]) )
    {
      v39 = PsGetCurrentProcess(v35);
      WdLogSingleEntry2(2LL, -1073741811LL, v39);
      WdLogGlobalForLineNumber = 2679;
      v41 = PsGetCurrentProcess(v40);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid AllocationCount, returing 0x%I64x at 0x%I64x",
        -1073741811LL,
        v41,
        0LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v64);
      return 3221225485LL;
    }
    v27 = (char *)v66[0];
    if ( v36 )
      RtlCopyFromUser((char *)v66[0] + 4 * HIDWORD(v70[0]) * i, v71[3], 4LL * v36);
  }
  v70[4] = v13;
  v42 = (unsigned int *)*((_QWORD *)&v65 + 1);
  v70[1] = *((void **)&v65 + 1);
  v70[8] = v66[1];
  v70[5] = v67[1];
  v43 = 0;
  if ( HIDWORD(v70[3]) )
  {
    v44 = *((_QWORD *)&v64 + 1);
    do
    {
      v45 = v44 + 80LL * v43;
      *((_QWORD *)v13 + v43) = v45;
      *(_QWORD *)(v45 + 48) = &v18[v43];
      *(_QWORD *)(v45 + 24) = &v27[4 * HIDWORD(v70[0]) * v43++];
    }
    while ( v43 < HIDWORD(v70[3]) );
  }
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v70;
  *(_OWORD *)&a2->VidPnSourceId = *(_OWORD *)&v70[2];
  *(_OWORD *)&a2->ppPresentPlanes = *(_OWORD *)&v70[4];
  *(_OWORD *)&a2->Duration = *(_OWORD *)&v70[6];
  *(_OWORD *)&a2->pHDRMetaData = *(_OWORD *)&v70[8];
  *a3 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v13;
  *a4 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)*((_QWORD *)&v64 + 1);
  *a5 = v18;
  *a6 = (struct tagRECT **)v21;
  *a7 = v42;
  *a8 = (unsigned int *)v27;
  *a9 = (unsigned __int8 *)v66[1];
  *a10 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)v67[1];
  v64 = 0LL;
  v65 = 0uLL;
  v67[0] = 0LL;
  *(_OWORD *)v66 = 0LL;
  v67[1] = 0LL;
  CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v64);
  return 0LL;
}

/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x140082A40
 * Callers:
 *     TransformOffscreenAdjacentRect @ 0x140081918 (TransformOffscreenAdjacentRect.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x140082868 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 *     NtUserClipCursor @ 0x1401E2460 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x1401E7A00 (NtUserLockCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(__int64 a1, _OWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v8; // rcx
  int (*v9)(void); // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(_OWORD *, __int64, _QWORD); // rax
  __int64 v13; // rax
  unsigned __int16 v14; // bx
  int v15; // r9d
  __int128 v16; // xmm0
  unsigned int v17; // ecx
  unsigned __int64 v18; // r12
  signed int v19; // r10d
  int v20; // edx
  unsigned __int64 v21; // rax
  __int128 v22; // rtt
  int v23; // r11d
  signed int v24; // edi
  int v25; // edx
  unsigned __int64 v26; // rax
  int v27; // r10d
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  signed int v31; // r8d
  int v32; // ecx
  unsigned __int64 v33; // rax
  signed int v34; // r10d
  int v35; // r8d
  unsigned __int64 v36; // rax
  signed int v37; // r10d
  int v38; // ecx
  unsigned __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  signed int v42; // r8d
  int v43; // ecx
  unsigned __int64 v44; // rax
  __int64 result; // rax
  int v46; // [rsp+34h] [rbp-74h]
  __int64 v47; // [rsp+40h] [rbp-68h]
  __int128 v48; // [rsp+50h] [rbp-58h]

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v8 = CurrentThreadDpiAwarenessContext;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2
    || (LOBYTE(v8) = CurrentThreadDpiAwarenessContext & 0xF,
        (v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 3504LL)) == 0LL)
    || v9() < 0 )
  {
    result = 0LL;
    *(_OWORD *)a1 = *a2;
  }
  else
  {
    if ( a4 && (v11 = *a4) != 0
      || ((v12 = *(__int64 (__fastcall **)(_OWORD *, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48)
                                                                     + 3512LL)) == 0LL
        ? (v11 = 0LL)
        : (v11 = v12(a2, 2LL, CurrentThreadDpiAwarenessContext)),
          a4) )
    {
      *a4 = v11;
    }
    v13 = *(_QWORD *)(v11 + 40);
    v14 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v15 = 0x80000000;
    v16 = *(_OWORD *)(v13 + 28);
    v18 = *(unsigned __int16 *)(v13 + 60);
    v47 = v16;
    if ( v14 )
    {
      v17 = *(unsigned __int16 *)(v13 + 62);
      v19 = ((int)v16 >> 31) & 0xFFFFFFFE;
      v20 = -(int)v16;
      if ( (int)v16 > 0 )
        v20 = v16;
      if ( *(_WORD *)(v13 + 62)
        && (v22 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v13 + 62) >> 1) + v20 * (unsigned __int64)v14),
            v21 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v13 + 62) >> 1) + v20 * (unsigned __int64)v14)
                / (int)v17,
            v23 = v22 / (int)v17,
            v21 <= 0x7FFFFFFF) )
      {
        if ( v19 <= -1 )
          v23 = -(int)v21;
      }
      else
      {
        v23 = 0x80000000;
        if ( v19 > -1 )
          v23 = 0x7FFFFFFF;
      }
      v24 = (SDWORD1(v16) >> 31) & 0xFFFFFFFE;
      v25 = -DWORD1(v16);
      if ( SDWORD1(v16) > 0 )
        v25 = DWORD1(v16);
      if ( v17
        && (v26 = (__int64)(((unsigned __int64)v17 >> 1) + v25 * (unsigned __int64)v14) / v17,
            v27 = v26,
            v26 <= 0x7FFFFFFF) )
      {
        if ( v24 <= -1 )
          v27 = -(int)v26;
      }
      else
      {
        v27 = 0x80000000;
        if ( v24 > -1 )
          v27 = 0x7FFFFFFF;
      }
      if ( (_DWORD)v18 )
      {
        v28 = (v18 >> 1) / (int)v18;
        if ( v28 > 0x7FFFFFFF )
          LODWORD(v28) = 0x7FFFFFFF;
      }
      else
      {
        LODWORD(v28) = 0x7FFFFFFF;
      }
      LODWORD(v47) = v28 + v23;
      if ( !(_DWORD)v18 || (v29 = (__int64)(v18 >> 1) / (int)v18, v29 > 0x7FFFFFFF) )
        LODWORD(v29) = 0x7FFFFFFF;
      HIDWORD(v47) = v29 + v27;
    }
    v48 = *a2;
    v30 = *(_QWORD *)a2;
    v31 = ((int)(*a2 - v47) >> 31) & 0xFFFFFFFE;
    v32 = v47 - *a2;
    v46 = HIDWORD(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 28LL));
    if ( v32 < 0 )
      v32 = *a2 - v47;
    if ( v14 && (v33 = (__int64)(((unsigned __int64)v14 >> 1) + v18 * v32) / v14, v33 <= 0x7FFFFFFF) )
    {
      if ( v31 <= -1 )
        LODWORD(v33) = -(int)v33;
    }
    else
    {
      LODWORD(v33) = 0x80000000;
      if ( v31 > -1 )
        LODWORD(v33) = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 28LL) + v33;
    v34 = ((HIDWORD(v30) - HIDWORD(v47)) >> 31) & 0xFFFFFFFE;
    v35 = HIDWORD(v47) - HIDWORD(v30);
    if ( HIDWORD(v47) - HIDWORD(v30) < 0 )
      v35 = HIDWORD(v30) - HIDWORD(v47);
    if ( v14 && (v36 = (__int64)(((unsigned __int64)v14 >> 1) + v35 * v18) / v14, v36 <= 0x7FFFFFFF) )
    {
      if ( v34 <= -1 )
        LODWORD(v36) = -(int)v36;
    }
    else
    {
      LODWORD(v36) = 0x80000000;
      if ( v34 > -1 )
        LODWORD(v36) = 0x7FFFFFFF;
    }
    *(_DWORD *)(a1 + 4) = v36 + v46;
    v37 = ((DWORD2(v48) - (int)v30) >> 31) & 0xFFFFFFFE;
    v38 = v30 - DWORD2(v48);
    if ( (int)v30 - DWORD2(v48) < 0 )
      v38 = DWORD2(v48) - v30;
    if ( v14 && (v39 = (__int64)(((unsigned __int64)v14 >> 1) + v38 * v18) / v14, v40 = v39, v39 <= 0x7FFFFFFF) )
    {
      if ( v37 <= -1 )
        v40 = -(int)v39;
    }
    else
    {
      v40 = 0x80000000;
      if ( v37 > -1 )
        v40 = 0x7FFFFFFF;
    }
    v41 = v40 + *(_DWORD *)a1;
    v42 = ((HIDWORD(v48) - HIDWORD(v30)) >> 31) & 0xFFFFFFFE;
    v43 = HIDWORD(v30) - HIDWORD(v48);
    *(_DWORD *)(a1 + 8) = v41;
    if ( HIDWORD(v48) - HIDWORD(v30) > 0 )
      v43 = HIDWORD(v48) - HIDWORD(v30);
    if ( v14 && (v44 = (__int64)(((unsigned __int64)v14 >> 1) + v43 * v18) / v14, v44 <= 0x7FFFFFFF) )
    {
      v15 = (__int64)(((unsigned __int64)v14 >> 1) + v43 * v18) / v14;
      if ( v42 <= -1 )
        v15 = -(int)v44;
    }
    else if ( v42 > -1 )
    {
      v15 = 0x7FFFFFFF;
    }
    *(_DWORD *)(a1 + 12) = v15 + *(_DWORD *)(a1 + 4);
    return 1LL;
  }
  return result;
}

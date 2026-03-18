/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x140064490
 * Callers:
 *     TransformOffscreenAdjacentRect @ 0x140062EF0 (TransformOffscreenAdjacentRect.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x14006398C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserClipCursor @ 0x140107790 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x14011D610 (NtUserLockCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(__int64 a1, _OWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  int (*v8)(void); // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_OWORD *, __int64, _QWORD); // rax
  __int64 v11; // rax
  unsigned __int16 v12; // bx
  int v13; // r9d
  __int128 v14; // xmm0
  unsigned int v15; // ecx
  unsigned __int64 v16; // r15
  int v17; // eax
  signed int v18; // r10d
  unsigned __int64 v19; // rax
  __int128 v20; // rtt
  int v21; // r11d
  signed int v22; // edi
  int v23; // edx
  unsigned __int64 v24; // rax
  int v25; // r10d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // ecx
  signed int v30; // r8d
  unsigned __int64 v31; // rax
  int v32; // r8d
  signed int v33; // r10d
  unsigned __int64 v34; // rax
  int v35; // ecx
  signed int v36; // r10d
  unsigned __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  signed int v41; // r8d
  unsigned __int64 v42; // rax
  __int64 result; // rax
  int v44; // [rsp+34h] [rbp-74h]
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int128 v46; // [rsp+50h] [rbp-58h]

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2
    || (v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3952LL)) == 0LL
    || v8() < 0 )
  {
    result = 0LL;
    *(_OWORD *)a1 = *a2;
  }
  else
  {
    if ( a4 && (v9 = *a4) != 0
      || ((v10 = *(__int64 (__fastcall **)(_OWORD *, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                     + 3960LL)) == 0LL
        ? (v9 = 0LL)
        : (v9 = v10(a2, 2LL, CurrentThreadDpiAwarenessContext)),
          a4) )
    {
      *a4 = v9;
    }
    v11 = *(_QWORD *)(v9 + 40);
    v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v13 = 0x80000000;
    v14 = *(_OWORD *)(v11 + 28);
    v16 = *(unsigned __int16 *)(v11 + 60);
    v45 = v14;
    if ( v12 )
    {
      v15 = *(unsigned __int16 *)(v11 + 62);
      v17 = -(int)v14;
      v18 = ((int)v14 >> 31) & 0xFFFFFFFE;
      if ( (int)v14 >= 0 )
        v17 = v14;
      if ( v15
        && (v20 = (__int64)(((unsigned __int64)v15 >> 1) + v12 * (__int64)v17),
            v19 = (__int64)(((unsigned __int64)v15 >> 1) + v12 * (__int64)v17) / (int)v15,
            v21 = v20 / (int)v15,
            v19 <= 0x7FFFFFFF) )
      {
        if ( v18 <= -1 )
          v21 = -(int)v19;
      }
      else
      {
        v21 = 0x80000000;
        if ( v18 > -1 )
          v21 = 0x7FFFFFFF;
      }
      v22 = (SDWORD1(v14) >> 31) & 0xFFFFFFFE;
      v23 = -DWORD1(v14);
      if ( SDWORD1(v14) > 0 )
        v23 = DWORD1(v14);
      if ( v15
        && (v24 = (__int64)(((unsigned __int64)v15 >> 1) + v12 * (__int64)v23) / v15, v25 = v24, v24 <= 0x7FFFFFFF) )
      {
        if ( v22 <= -1 )
          v25 = -(int)v24;
      }
      else
      {
        v25 = 0x80000000;
        if ( v22 > -1 )
          v25 = 0x7FFFFFFF;
      }
      if ( (_DWORD)v16 )
      {
        v26 = (v16 >> 1) / (int)v16;
        if ( v26 > 0x7FFFFFFF )
          LODWORD(v26) = 0x7FFFFFFF;
      }
      else
      {
        LODWORD(v26) = 0x7FFFFFFF;
      }
      LODWORD(v45) = v26 + v21;
      if ( !(_DWORD)v16 || (v27 = (__int64)(v16 >> 1) / (int)v16, v27 > 0x7FFFFFFF) )
        LODWORD(v27) = 0x7FFFFFFF;
      HIDWORD(v45) = v25 + v27;
    }
    v46 = *a2;
    v28 = *(_QWORD *)a2;
    v29 = v45 - *a2;
    v30 = ((int)(*a2 - v45) >> 31) & 0xFFFFFFFE;
    v44 = HIDWORD(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 28LL));
    if ( (int)(*a2 - v45) >= 0 )
      v29 = *a2 - v45;
    if ( v12 && (v31 = (__int64)(((unsigned __int64)v12 >> 1) + v29 * v16) / v12, v31 <= 0x7FFFFFFF) )
    {
      if ( v30 <= -1 )
        LODWORD(v31) = -(int)v31;
    }
    else
    {
      LODWORD(v31) = 0x80000000;
      if ( v30 > -1 )
        LODWORD(v31) = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 28LL) + v31;
    v32 = HIDWORD(v45) - HIDWORD(v28);
    v33 = ((HIDWORD(v28) - HIDWORD(v45)) >> 31) & 0xFFFFFFFE;
    if ( HIDWORD(v28) - HIDWORD(v45) >= 0 )
      v32 = HIDWORD(v28) - HIDWORD(v45);
    if ( v12 && (v34 = (__int64)(((unsigned __int64)v12 >> 1) + v32 * v16) / v12, v34 <= 0x7FFFFFFF) )
    {
      if ( v33 <= -1 )
        LODWORD(v34) = -(int)v34;
    }
    else
    {
      LODWORD(v34) = 0x80000000;
      if ( v33 > -1 )
        LODWORD(v34) = 0x7FFFFFFF;
    }
    *(_DWORD *)(a1 + 4) = v34 + v44;
    v35 = v28 - DWORD2(v46);
    v36 = ((DWORD2(v46) - (int)v28) >> 31) & 0xFFFFFFFE;
    if ( DWORD2(v46) - (int)v28 >= 0 )
      v35 = DWORD2(v46) - v28;
    if ( v12 && (v37 = (__int64)(((unsigned __int64)v12 >> 1) + v35 * v16) / v12, v38 = v37, v37 <= 0x7FFFFFFF) )
    {
      if ( v36 <= -1 )
        v38 = -(int)v37;
    }
    else
    {
      v38 = 0x80000000;
      if ( v36 > -1 )
        v38 = 0x7FFFFFFF;
    }
    v39 = v38 + *(_DWORD *)a1;
    v40 = HIDWORD(v28) - HIDWORD(v46);
    v41 = ((HIDWORD(v46) - HIDWORD(v28)) >> 31) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 8) = v39;
    if ( HIDWORD(v46) - HIDWORD(v28) >= 0 )
      v40 = HIDWORD(v46) - HIDWORD(v28);
    if ( v12 && (v42 = (__int64)(((unsigned __int64)v12 >> 1) + v40 * v16) / v12, v42 <= 0x7FFFFFFF) )
    {
      v13 = (__int64)(((unsigned __int64)v12 >> 1) + v40 * v16) / v12;
      if ( v41 <= -1 )
        v13 = -(int)v42;
    }
    else if ( v41 > -1 )
    {
      v13 = 0x7FFFFFFF;
    }
    *(_DWORD *)(a1 + 12) = v13 + *(_DWORD *)(a1 + 4);
    return 1LL;
  }
  return result;
}

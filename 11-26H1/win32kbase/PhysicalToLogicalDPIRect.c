/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x140083DF0
 * Callers:
 *     TransformOffscreenAdjacentRect @ 0x140081918 (TransformOffscreenAdjacentRect.c)
 *     NtUserGetClipCursor @ 0x140082750 (NtUserGetClipCursor.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x140082868 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     Is_MonitorFromRectSupported @ 0x140083BBC (Is_MonitorFromRectSupported.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x140085450 (GetMonitorRectForDpi.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(__int64 a1, _OWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_OWORD *, __int64, __int64); // rax
  unsigned __int16 v12; // di
  unsigned int v13; // ebx
  unsigned __int64 v14; // r11
  __int64 v15; // xmm1_8
  int v16; // r8d
  int v17; // eax
  signed int v18; // r10d
  int v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // rbp
  signed int v23; // r10d
  int v24; // ecx
  unsigned __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rsi
  signed int v28; // ebx
  int v29; // ecx
  unsigned __int64 v30; // rax
  int v31; // r10d
  int v32; // edx
  signed int v33; // r10d
  int v34; // eax
  unsigned __int64 v35; // rax
  int v36; // [rsp+28h] [rbp-40h] BYREF
  int v37; // [rsp+2Ch] [rbp-3Ch]
  _DWORD v38[4]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v39; // [rsp+48h] [rbp-20h]

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromRectSupported(a1) < 0 )
  {
    result = 0LL;
    *(_OWORD *)a1 = *a2;
  }
  else
  {
    if ( a4 && (v10 = *a4) != 0
      || ((v11 = *(__int64 (__fastcall **)(_OWORD *, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48)
                                                                      + 3512LL)) == 0LL
        ? (v10 = 0LL)
        : (v10 = v11(a2, 2LL, 18LL)),
          a4) )
    {
      *a4 = v10;
    }
    v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v13 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 60LL);
    GetMonitorRectForDpi(&v36, v10, 0LL);
    GetMonitorRectForDpi(v38, v10, v12);
    v14 = v13;
    v16 = 0x80000000;
    v17 = *a2 - v36;
    v18 = (v17 >> 31) & 0xFFFFFFFE;
    v19 = v36 - *a2;
    v39 = *a2;
    v15 = v39;
    if ( v36 - (int)v39 < 0 )
      v19 = v17;
    if ( v13
      && (v20 = (__int64)(((unsigned __int64)v13 >> 1) + v12 * (__int64)v19) / (int)v13, v21 = v20, v20 <= 0x7FFFFFFF) )
    {
      if ( v18 <= -1 )
        v21 = -(int)v20;
    }
    else
    {
      v21 = 0x80000000;
      if ( v18 > -1 )
        v21 = 0x7FFFFFFF;
    }
    v22 = DWORD1(v39);
    *(_DWORD *)a1 = v38[0] + v21;
    v23 = ((HIDWORD(v15) - v37) >> 31) & 0xFFFFFFFE;
    v24 = v37 - HIDWORD(v15);
    if ( v37 - HIDWORD(v15) < 0 )
      v24 = HIDWORD(v15) - v37;
    if ( v13
      && (v25 = (__int64)(((unsigned __int64)v13 >> 1) + v12 * (__int64)v24) / (int)v13, v26 = v25, v25 <= 0x7FFFFFFF) )
    {
      if ( v23 <= -1 )
        v26 = -(int)v25;
    }
    else
    {
      v26 = 0x80000000;
      if ( v23 > -1 )
        v26 = 0x7FFFFFFF;
    }
    v27 = *((_QWORD *)&v39 + 1);
    *(_DWORD *)(a1 + 4) = v38[1] + v26;
    v28 = (((int)v27 - (int)v15) >> 31) & 0xFFFFFFFE;
    v29 = v15 - v27;
    if ( (int)v27 - (int)v15 > 0 )
      v29 = v27 - v15;
    if ( (_DWORD)v14 && (v30 = (__int64)((v14 >> 1) + v12 * (__int64)v29) / (int)v14, v31 = v30, v30 <= 0x7FFFFFFF) )
    {
      if ( v28 <= -1 )
        v31 = -(int)v30;
    }
    else
    {
      v31 = 0x80000000;
      if ( v28 > -1 )
        v31 = 0x7FFFFFFF;
    }
    v32 = v31 + *(_DWORD *)a1;
    v33 = ((HIDWORD(v27) - (int)v22) >> 31) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 8) = v32;
    v34 = v22 - HIDWORD(v27);
    if ( HIDWORD(v27) - (int)v22 > 0 )
      v34 = HIDWORD(v27) - v22;
    if ( (_DWORD)v14 && (v35 = (__int64)((v14 >> 1) + v12 * (__int64)v34) / (__int64)v14, v35 <= 0x7FFFFFFF) )
    {
      v16 = v35;
      if ( v33 <= -1 )
        v16 = -(int)v35;
    }
    else if ( v33 > -1 )
    {
      v16 = 0x7FFFFFFF;
    }
    *(_DWORD *)(a1 + 12) = v16 + *(_DWORD *)(a1 + 4);
    return 1LL;
  }
  return result;
}

/*
 * XREFs of xxxCalcCaptionButton @ 0x140118DE4
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x140118784 (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1401192EC (xxxTrackCaptionButton.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     xxxMNCanClose @ 0x1400471A0 (xxxMNCanClose.c)
 *     GetWindowBordersForDpi @ 0x14004B870 (GetWindowBordersForDpi.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 */

__int64 __fastcall xxxCalcCaptionButton(__int64 a1, int a2, _WORD *a3, _DWORD *a4, int *a5, int a6)
{
  __int64 v8; // r8
  int v10; // ecx
  unsigned int WindowDpiLastNotify; // ebp
  int v12; // r9d
  _DWORD *v13; // r8
  __int64 v14; // rax
  int v15; // r15d
  int v16; // r13d
  int v17; // ebx
  int DpiDependentMetric; // r12d
  int v19; // ebx
  __int64 v21; // rax
  int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  int v26; // eax
  int v27; // r9d
  int v28; // r8d
  __int64 v29; // rcx
  int v30; // eax

  *a3 = 0;
  v8 = *(_QWORD *)(a1 + 40);
  v10 = *(_DWORD *)(v8 + 288) & 0xF;
  if ( v10 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v8 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( !v10
         && (v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 272LL);
  }
  if ( (*(_BYTE *)(v8 + 31) & 0x20) != 0 )
    v12 = -3;
  else
    v12 = -(int)GetWindowBordersForDpi(
                  *(_DWORD *)(v8 + 28),
                  *(unsigned int *)(v8 + 24),
                  v8,
                  (__int64)a4,
                  WindowDpiLastNotify);
  v13 = *(_DWORD **)(a1 + 40);
  *a4 = v13[22] - v12;
  a4[2] = v12 + v13[24];
  a4[1] = v13[23] - v12;
  a4[3] = v12 + v13[25];
  v14 = *(_QWORD *)(a1 + 40);
  v15 = -*(_DWORD *)(v14 + 88);
  v16 = -*(_DWORD *)(v14 + 92);
  v17 = (*(char *)(v14 + 24) >> 7) & 0xB;
  DpiDependentMetric = GetDpiDependentMetric(v17 + 12, WindowDpiLastNotify);
  v19 = GetDpiDependentMetric(v17 + 13, WindowDpiLastNotify);
  if ( a2 == 5 )
  {
    if ( (unsigned int)xxxMNCanClose(a1) || a6 )
    {
      v24 = *(_QWORD *)(a1 + 40);
      *a3 = -4000;
      *a5 = (*(char *)(v24 + 24) >> 7) & 0x29;
    }
    goto LABEL_8;
  }
  v21 = *(_QWORD *)(a1 + 40);
  if ( a2 == 2 )
  {
    if ( (*(_BYTE *)(v21 + 30) & 2) == 0 && !a6 )
      goto LABEL_8;
    LOWORD(v15) = v15 + 2;
    a4[2] += -2 * DpiDependentMetric;
    v22 = a5;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) == 0 )
    {
      *a5 = 4;
      *a3 = -4064;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a2 != 3 )
    {
      if ( (*(_BYTE *)(v21 + 25) & 4) != 0 )
      {
        a4[2] -= DpiDependentMetric;
        *a3 = -3712;
        *a5 = 11;
      }
LABEL_8:
      if ( !*a3 )
        return (unsigned __int16)v15 | ((unsigned __int16)v16 << 16);
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(v21 + 30) & 1) == 0 && !a6 )
      goto LABEL_8;
    a4[2] -= DpiDependentMetric;
    v22 = a5;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) == 0 )
    {
      *a5 = 14;
      *a3 = -4048;
      goto LABEL_8;
    }
  }
  *v22 = 8;
  *a3 = -3808;
LABEL_30:
  v25 = a4[1];
  v26 = a4[2] - DpiDependentMetric;
  LOWORD(v16) = v25 + v16 + 2;
  LOWORD(v15) = v26 + v15;
  v27 = a4[2] + 1;
  a4[2] = v27;
  v28 = v26 - 1;
  *a4 = v26 - 1;
  a4[1] = v25 - 1;
  a4[3] = v19 + v25 + 1;
  v29 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v29 + 26) & 0x40) != 0 )
  {
    v30 = *(_DWORD *)(v29 + 88) + *(_DWORD *)(v29 + 96) - v28;
    a4[2] = v30;
    *a4 = v30 + v28 - v27;
  }
  return (unsigned __int16)v15 | ((unsigned __int16)v16 << 16);
}

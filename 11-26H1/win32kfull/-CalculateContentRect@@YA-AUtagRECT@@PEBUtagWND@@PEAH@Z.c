/*
 * XREFs of ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x14004E5D8
 * Callers:
 *     DwmChildRectChange @ 0x14004E990 (DwmChildRectChange.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140032AE8 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x14004E344 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 */

struct tagRECT *__fastcall CalculateContentRect(struct tagRECT *__return_ptr retstr, const struct tagWND *a2, int *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  unsigned int WindowDpiLastNotify; // edi
  int v7; // esi
  int v8; // r13d
  unsigned int v9; // edx
  int v10; // ebp
  int v11; // r15d
  __int16 v12; // ax
  int v13; // esi
  int AppCompatFlags2; // r14d
  int v15; // esi
  int SystemMetricsForDpi; // ebp
  int v17; // ecx
  int v18; // r8d
  LONG top; // r10d
  LONG left; // edx
  int v21; // r10d
  LONG right; // edi
  LONG bottom; // r11d
  _DWORD *v24; // rcx
  LONG v25; // r9d
  LONG v26; // r8d
  LONG v27; // eax
  LONG v28; // esi
  LONG v29; // edi
  LONG v30; // eax
  LONG v31; // edx
  LONG v32; // r11d
  LONG v33; // eax
  LONG v34; // ecx
  LONG v35; // r10d
  LONG v36; // eax
  LONG v37; // r9d
  LONG v38; // eax
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-48h]
  int v42; // [rsp+70h] [rbp+8h]
  int v45; // [rsp+88h] [rbp+20h]

  v3 = *((_QWORD *)a2 + 5);
  *retstr = *(struct tagRECT *)(v3 + 88);
  if ( retstr->left < retstr->right && retstr->top < retstr->bottom )
  {
    v42 = 0;
    v5 = *(_DWORD *)(v3 + 288) & 0xF;
    if ( (*(_DWORD *)(v3 + 288) & 0xF) == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v3 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v3 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a2);
    }
    else if ( (*(_DWORD *)(v3 + 288) & 0xF) == 0
           && (v40 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 488LL)) != 0
           && (v5 = **(_QWORD **)(v40 + 8), (*(_DWORD *)(v5 + 64) & 1) != 0) )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      v5 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL);
      WindowDpiLastNotify = *(unsigned __int16 *)(v5 + 272);
    }
    v7 = *(_DWORD *)(v3 + 24);
    v8 = *(_DWORD *)(v3 + 28);
    v9 = *((_DWORD *)PtiCurrent(v5) + 166);
    v10 = v7 & 0x20000;
    v45 = v7 & 1;
    if ( (v7 & 1) != 0
      || !v10 && ((v8 & 0x40000) != 0 || (v8 & 0xC00000) == 0x400000 || (v8 & 0xC00000) == 0xC00000 && v9 >= 0x400) )
    {
      v11 = 256;
    }
    else
    {
      v11 = 0;
    }
    v12 = v7;
    v13 = v7 & 0x80;
    v41 = v12 & 0x200;
    if ( (BYTE2(v8) & 0xC0) == 0xC0 )
      v42 = -(int)RealGetSystemMetricsForDpi(v13 != 0 ? 51 : 4, WindowDpiLastNotify);
    AppCompatFlags2 = GetAppCompatFlags2(39168LL);
    if ( v11 )
      v15 = 2;
    else
      v15 = v10 != 0;
    if ( (v8 & 0xC00000) != 0 || v45 )
      ++v15;
    if ( (AppCompatFlags2 & 0x10000000) != 0 || (AppCompatFlags2 & 0x20000000) != 0 )
      SystemMetricsForDpi = 0;
    else
      SystemMetricsForDpi = RealGetSystemMetricsForDpi(92LL, WindowDpiLastNotify);
    if ( (v8 & 0x40000) != 0
      || SystemMetricsForDpi > 0 && (v8 & 0xC00000) == 0xC00000 && (AppCompatFlags2 & 0x30000000) == 0 )
    {
      v15 += SystemMetricsForDpi + GetResizeBorderWidthForDpiWithAppCompat2(WindowDpiLastNotify, AppCompatFlags2);
    }
    v17 = v15 + 2;
    if ( !v41 )
      v17 = v15;
    if ( v17 )
    {
      v42 -= v17;
      v18 = v17;
    }
    else
    {
      v18 = 0;
    }
    top = retstr->top;
    left = v17 + retstr->left;
    if ( !v17 )
      left = retstr->left;
    retstr->right -= v18;
    retstr->bottom -= v18;
    v21 = top - v42;
    right = retstr->right;
    bottom = retstr->bottom;
    if ( a3 )
      *a3 = v18;
    v24 = (_DWORD *)*((_QWORD *)a2 + 5);
    v25 = v24[28];
    v26 = v24[26];
    if ( v26 >= v25 || (v27 = v24[29], v24[27] >= v27) )
    {
      v26 = left;
      v28 = v21;
      v25 = right;
    }
    else
    {
      v28 = v24[27];
      if ( left < v26 )
        v26 = left;
      if ( v21 < v28 )
        v28 = v21;
      if ( right > v25 )
        v25 = right;
      if ( bottom <= v27 )
        bottom = v24[29];
      retstr->bottom = bottom;
    }
    v29 = v24[22];
    v30 = v26;
    v31 = v24[24];
    if ( v26 <= v29 )
      v30 = v24[22];
    if ( v30 >= v31 )
    {
      v26 = v24[24];
    }
    else if ( v26 <= v29 )
    {
      v26 = v24[22];
    }
    v32 = v24[23];
    v33 = v28;
    v34 = v24[25];
    retstr->left = v26;
    if ( v28 <= v32 )
      v33 = v32;
    if ( v33 >= v34 )
    {
      v35 = v34;
    }
    else
    {
      v35 = v32;
      if ( v28 > v32 )
        v35 = v28;
    }
    retstr->top = v35;
    v36 = v31;
    if ( v25 < v31 )
      v36 = v25;
    if ( v36 <= v29 )
    {
      v31 = v29;
    }
    else if ( v25 < v31 )
    {
      v31 = v25;
    }
    v37 = retstr->bottom;
    v38 = v34;
    if ( v37 < v34 )
      v38 = retstr->bottom;
    if ( v38 <= v32 )
    {
      v34 = v32;
    }
    else if ( v37 < v34 )
    {
      v34 = retstr->bottom;
    }
    if ( v26 > v31 )
      v31 = v26;
    retstr->right = v31;
    if ( v35 > v34 )
      v34 = v35;
    retstr->bottom = v34;
  }
  return retstr;
}

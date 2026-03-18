/*
 * XREFs of ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x140037D74
 * Callers:
 *     DwmChildRectChange @ 0x140036870 (DwmChildRectChange.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140049A78 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140049E90 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

struct tagRECT *__fastcall CalculateContentRect(struct tagRECT *__return_ptr retstr, const struct tagWND *a2, int *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  int v6; // r13d
  __int64 v7; // rcx
  unsigned int WindowDpiLastNotify; // edi
  int v9; // r12d
  int v10; // esi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int AppCompatFlags2; // r15d
  int v15; // edx
  int v16; // r8d
  int v17; // ebp
  int v18; // r14d
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  bool v22; // zf
  LONG bottom; // r9d
  LONG left; // edx
  LONG top; // ecx
  LONG v26; // ecx
  LONG right; // edi
  LONG v28; // r9d
  LONG v29; // esi
  _DWORD *v30; // r10
  LONG v31; // r8d
  LONG v32; // eax
  LONG v33; // ecx
  LONG v34; // r11d
  LONG v35; // eax
  LONG v36; // edx
  LONG v37; // r9d
  LONG v38; // eax
  LONG v39; // ecx
  LONG v40; // eax
  LONG v41; // r11d
  LONG v42; // eax
  LONG v43; // r10d
  int SystemMetricsForDpi; // eax
  __int64 v46; // rax

  v3 = *((_QWORD *)a2 + 5);
  *retstr = *(struct tagRECT *)(v3 + 88);
  if ( retstr->left < retstr->right && retstr->top < retstr->bottom )
  {
    v5 = *(_DWORD *)(v3 + 288);
    v6 = 0;
    v7 = v5 & 0xF;
    if ( (_DWORD)v7 == 3 )
    {
      WindowDpiLastNotify = (v5 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v3 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a2);
    }
    else if ( (v5 & 0xF) == 0
           && (v46 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 496LL)) != 0
           && (v7 = **(_QWORD **)(v46 + 8), (*(_DWORD *)(v7 + 64) & 1) != 0) )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 464LL);
      WindowDpiLastNotify = *(unsigned __int16 *)(v7 + 272);
    }
    v9 = *(_DWORD *)(v3 + 28);
    v10 = *(_DWORD *)(v3 + 24);
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v7, a2);
    if ( CurrentThreadNonPaged )
      v12 = *CurrentThreadNonPaged;
    else
      v12 = 0LL;
    if ( (v10 & 1) != 0
      || (v10 & 0x20000) == 0
      && ((v9 & 0x40000) != 0
       || (v9 & 0xC00000) == 0x400000
       || (v9 & 0xC00000) == 0xC00000 && *(_DWORD *)(v12 + 672) >= 0x400u) )
    {
      v13 = v10 | 0x100;
    }
    else
    {
      v13 = v10 & 0xFFFFFEFF;
    }
    if ( (BYTE2(v9) & 0xC0) == 0xC0 )
      v6 = -(int)RealGetSystemMetricsForDpi((v13 & 0x80u) != 0 ? 51 : 4, WindowDpiLastNotify);
    AppCompatFlags2 = GetAppCompatFlags2(39168LL);
    if ( (v13 & 0x100) != 0 )
      v15 = 2;
    else
      v15 = (v13 & 0x20000) != 0;
    v16 = v9 & 0xC00000;
    v17 = v15 + 1;
    if ( (v9 & 0xC00000) == 0 && (v13 & 1) == 0 )
      v17 = v15;
    if ( (AppCompatFlags2 & 0x10000000) != 0 || (AppCompatFlags2 & 0x20000000) != 0 )
    {
      v18 = 0;
    }
    else
    {
      SystemMetricsForDpi = RealGetSystemMetricsForDpi(92, WindowDpiLastNotify);
      v16 = v9 & 0xC00000;
      v18 = SystemMetricsForDpi;
    }
    if ( (v9 & 0x40000) != 0 || (v19 = v17, v18 > 0) && v16 == 12582912 && (AppCompatFlags2 & 0x30000000) == 0 )
      v19 = v18 + v17 + GetResizeBorderWidthForDpiWithAppCompat2(WindowDpiLastNotify, AppCompatFlags2);
    v20 = v19 + 2;
    if ( (v13 & 0x200) == 0 )
      v20 = v19;
    if ( v20 )
    {
      v21 = v20;
      v6 -= v20;
    }
    else
    {
      v21 = 0;
    }
    v22 = v20 == 0;
    bottom = retstr->bottom;
    left = retstr->left + v20;
    top = retstr->top;
    if ( v22 )
      left = retstr->left;
    retstr->right -= v21;
    v26 = top - v6;
    right = retstr->right;
    v28 = bottom - v21;
    retstr->top = v26;
    v29 = v26;
    retstr->bottom = v28;
    if ( a3 )
      *a3 = v21;
    v30 = (_DWORD *)*((_QWORD *)a2 + 5);
    v31 = v30[26];
    if ( v31 >= v30[28] || (v32 = v30[29], v30[27] >= v32) )
    {
      v31 = left;
    }
    else
    {
      v29 = v30[27];
      if ( left < v31 )
        v31 = left;
      if ( v26 < v29 )
        v29 = v26;
      v33 = v30[28];
      if ( v28 <= v32 )
        v28 = v30[29];
      retstr->bottom = v28;
      if ( right <= v33 )
        right = v33;
    }
    v34 = v30[22];
    v35 = v31;
    v36 = v30[24];
    if ( v31 <= v34 )
      v35 = v30[22];
    if ( v35 >= v36 )
    {
      v31 = v30[24];
    }
    else if ( v31 <= v34 )
    {
      v31 = v30[22];
    }
    v37 = v30[23];
    v38 = v29;
    v39 = v30[25];
    retstr->left = v31;
    if ( v29 <= v37 )
      v38 = v37;
    if ( v38 >= v39 )
    {
      v37 = v39;
    }
    else if ( v29 > v37 )
    {
      v37 = v29;
    }
    retstr->top = v37;
    v40 = v36;
    if ( right < v36 )
      v40 = right;
    if ( v40 <= v34 )
    {
      v36 = v34;
    }
    else if ( right < v36 )
    {
      v36 = right;
    }
    v41 = retstr->bottom;
    v42 = v39;
    v43 = v30[23];
    if ( v41 < v39 )
      v42 = retstr->bottom;
    if ( v42 <= v43 )
    {
      v39 = v43;
    }
    else if ( v41 < v39 )
    {
      v39 = retstr->bottom;
    }
    if ( v31 > v36 )
      v36 = v31;
    retstr->right = v36;
    if ( v37 > v39 )
      v39 = v37;
    retstr->bottom = v39;
  }
  return retstr;
}

/*
 * XREFs of GreExtCreatePen @ 0x1400E35BC
 * Callers:
 *     NtGdiCreatePen @ 0x1400E34B0 (NtGdiCreatePen.c)
 *     GreCreatePen @ 0x1400E3538 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1401A3B80 (NtGdiExtCreatePen.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3CF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E3D80 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x1400E3DC0 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1400E40C8 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 */

__int64 __fastcall GreExtCreatePen(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        void *a5,
        void *a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  void *v11; // rdi
  int v12; // r12d
  int v13; // r13d
  int v14; // r15d
  unsigned int v15; // ebx
  int v17; // esi
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  unsigned __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r14d
  int v24; // esi
  _BOOL8 v25; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v27; // rsi
  __int64 v28; // rbx
  __int64 v30; // rax
  _DWORD *v31; // rdx
  unsigned __int64 v32; // r11
  int v33; // r10d
  int v34; // r8d
  int v35; // ecx
  ULONG v36; // ecx
  int v37; // ecx
  int v38; // r8d
  int v39; // r10d
  int v40; // eax
  bool v41; // zf
  int v42; // eax
  char v43; // [rsp+30h] [rbp-50h]
  int v44; // [rsp+34h] [rbp-4Ch]
  int v45; // [rsp+38h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v46; // [rsp+40h] [rbp-40h]
  _QWORD v47[7]; // [rsp+48h] [rbp-38h] BYREF

  v11 = 0LL;
  v44 = 0;
  v12 = a1 & 0xF0000;
  v13 = a1 & 0xF;
  v14 = 0;
  v15 = -a2;
  if ( a2 > 0 )
    v15 = a2;
  v45 = v15;
  v17 = v15 >> 31;
  if ( (a1 & 0xFFF000F0) != 0 )
    v17 = 1;
  v18 = Gre::Base::Globals((Gre::Base *)1);
  v46 = v18;
  if ( v13 == 5 )
    return *(_QWORD *)(*((_QWORD *)v18 + 376) + 64LL);
  v19 = 0x10000LL;
  if ( v12 )
  {
    if ( v12 != 0x10000 )
LABEL_114:
      v17 = 1;
  }
  else if ( a3 && (a3 != 2 || (((unsigned __int64)a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_114;
  }
  if ( v15 != 1 && !v12 && !a10 )
    v17 = 1;
  v20 = a1 & 0xF000;
  if ( (a1 & 0xF000) == 0 )
    goto LABEL_10;
  if ( v20 == 0x2000 )
  {
    v43 = 2;
  }
  else
  {
    if ( v20 != 4096 )
    {
      v17 = 1;
LABEL_10:
      v43 = 0;
      goto LABEL_11;
    }
    v43 = 1;
  }
LABEL_11:
  v21 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v21 == 512 )
    {
      v44 = 2;
    }
    else if ( v21 == 256 )
    {
      v44 = 1;
    }
    else
    {
      v17 = 1;
    }
  }
  else
  {
    v44 = 0;
  }
  v22 = a7;
  if ( v13 == 7 )
  {
    if ( a7 )
    {
LABEL_15:
      if ( a7 <= 0x10 )
        goto LABEL_16;
    }
  }
  else if ( !a7 )
  {
    goto LABEL_15;
  }
  v17 = 1;
LABEL_16:
  if ( v12 == 0x10000 )
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        v22 = 2;
        a8 = (int *)&unk_1403514C0;
        goto LABEL_18;
      case 2:
        v22 = 2;
        a8 = (int *)&unk_1403514C8;
        goto LABEL_18;
      case 3:
        v22 = 4;
        a8 = (int *)&unk_1403514D0;
        goto LABEL_18;
      case 4:
        v22 = 6;
        a8 = (int *)&unk_1403514A8;
        goto LABEL_18;
    }
    v42 = v13 - 6;
    v41 = v13 == 6;
  }
  else
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        v22 = 2;
        v11 = &unk_140365238;
        goto LABEL_102;
      case 2:
        v22 = 8;
        v11 = &unk_140351480;
LABEL_102:
        v14 = 1;
        goto LABEL_18;
      case 3:
        v22 = 4;
        v11 = &unk_140365228;
        goto LABEL_102;
      case 4:
        v22 = 6;
        v11 = &unk_140365210;
        goto LABEL_102;
      case 6:
        if ( !a10 )
          v17 = 1;
        goto LABEL_18;
    }
    v42 = v13 - 7;
    v41 = v13 == 7;
  }
  if ( !v41 && v42 != 1 )
    goto LABEL_63;
LABEL_18:
  if ( v17 )
  {
LABEL_63:
    v36 = 87;
LABEL_64:
    EngSetLastError(v36);
    return 0LL;
  }
  if ( !v22 || v11 )
  {
    v24 = v45;
    goto LABEL_21;
  }
  if ( !(4 * v22) || (v30 = Win32AllocPool(4 * v22, 2037674823LL), (v31 = (_DWORD *)v30) == 0LL) )
  {
    v36 = 8;
    goto LABEL_64;
  }
  v19 = v30;
  v32 = v30 + 4LL * v22;
  if ( !v12 || a10 )
  {
    v19 = 0LL;
    v37 = 1;
    v38 = 1;
    v11 = (void *)v30;
    if ( a8 )
    {
      while ( 1 )
      {
        v39 = v37;
        if ( (unsigned __int64)v31 >= v32 )
          break;
        v37 = *a8;
        v19 = (unsigned int)(*a8 + v19);
        *v31 = *a8;
        v40 = v37;
        ++v31;
        if ( v38 < v37 )
          v40 = v38;
        v38 = v40;
        if ( v39 > v37 )
          v37 = v39;
        if ( !++a8 )
          goto LABEL_62;
      }
      if ( v38 > 0 && v37 <= 0x3FFF && (int)v19 <= 0x3FFF )
      {
        v24 = v45;
        goto LABEL_21;
      }
    }
    goto LABEL_62;
  }
  v33 = 0;
  v34 = 0;
  v11 = (void *)v30;
  if ( !a8 )
    goto LABEL_62;
  v24 = v45;
  while ( v19 < v32 )
  {
    v35 = *a8;
    if ( v13 != 7 )
    {
      if ( v44 != 2 )
        v35 += (((_BYTE)v19 - (_BYTE)v30) & 4) != 0 ? 1 : -1;
      v35 *= v45;
    }
    if ( v34 >= v35 )
      v34 = v35;
    v33 += v35;
    *(float *)v19 = (float)v35;
    v19 += 4LL;
    if ( !++a8 )
      goto LABEL_62;
  }
  if ( v34 < 0 || v33 <= 0 )
  {
LABEL_62:
    Win32FreePool(v11);
    goto LABEL_63;
  }
LABEL_21:
  switch ( a3 )
  {
    case 0:
      v25 = !v24 && !v13;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(a4, 1LL, a11, v25);
      break;
    case 1:
      if ( v11 && !v14 )
        Win32FreePool(v11);
      v18 = v46;
      return *(_QWORD *)(*((_QWORD *)v18 + 376) + 64LL);
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal((unsigned int)a6, a4, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v19);
      break;
    case 6:
      SolidBrushInternal = GreCreateDIBBrush(a6, a4, a9, 0, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_82;
  }
  v27 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_82:
    if ( v11 && !v14 )
      Win32FreePool(v11);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v47, SolidBrushInternal);
  if ( !v47[0] )
  {
    if ( v11 && !v14 )
      Win32FreePool(v11);
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v47);
    return 0LL;
  }
  *(_DWORD *)(v47[0] + 40LL) |= 0x400u;
  *(_DWORD *)(v47[0] + 176LL) = a1;
  *(_BYTE *)(v47[0] + 185LL) = v44;
  *(_BYTE *)(v47[0] + 184LL) = v43;
  *(_QWORD *)(v47[0] + 152LL) = v11;
  *(_DWORD *)(v47[0] + 180LL) = v22;
  *(_DWORD *)(v47[0] + 168LL) = v45;
  if ( v14 )
    *(_DWORD *)(v47[0] + 40LL) |= 0x4000u;
  *(_DWORD *)(v47[0] + 188LL) = a3;
  *(_QWORD *)(v47[0] + 160LL) = a5;
  if ( a10 || v12 == 0x10000 )
    *(float *)(v47[0] + 172LL) = (float)v45;
  v28 = (unsigned __int64)v27 | 0x500000;
  if ( a10 )
  {
    *(_DWORD *)(v47[0] + 40LL) |= 0xC00u;
    *(_DWORD *)(v47[0] + 40LL) &= ~4u;
    if ( v13 == 6 )
    {
      *(_DWORD *)(v47[0] + 40LL) |= 4u;
      *(_DWORD *)(v47[0] + 40LL) |= 0x10000u;
    }
    v28 = (unsigned __int64)v27 | 0x300000;
  }
  else if ( v12 )
  {
    if ( v13 == 6 )
      *(_DWORD *)(v47[0] + 40LL) |= 0x10000u;
  }
  else
  {
    *(_DWORD *)(v47[0] + 40LL) &= ~4u;
  }
  HmgModifyHandleType(v28, 0x10000LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v47);
  return v28;
}

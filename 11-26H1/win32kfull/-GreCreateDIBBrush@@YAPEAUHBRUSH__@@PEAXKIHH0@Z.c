/*
 * XREFs of ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x14028C6C8
 * Callers:
 *     GreExtCreatePen @ 0x14008259C (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1403311A0 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140295898 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140296670 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GreCreateDIBBrush(char *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  __int64 v6; // rdi
  unsigned int v9; // r14d
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // eax
  char *v14; // r11
  int v15; // edx
  __int64 v16; // r9
  unsigned int v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  int v27; // r8d
  ULONG v29; // ecx
  char *Src; // [rsp+70h] [rbp-90h]
  _QWORD v31[3]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v32; // [rsp+90h] [rbp-70h]
  _BYTE v33[32]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-48h]
  _QWORD v35[6]; // [rsp+C0h] [rbp-40h] BYREF
  int v36; // [rsp+F0h] [rbp-10h]
  _BYTE v37[16]; // [rsp+100h] [rbp+0h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+1A0h] [rbp+A0h]

  v6 = 0LL;
  v9 = a2;
  if ( !a1 )
    goto LABEL_56;
  if ( a3 < 0x28 )
    goto LABEL_56;
  v11 = *(unsigned int *)a1;
  if ( (unsigned int)v11 > a3 )
    goto LABEL_56;
  v12 = 2LL;
  if ( a2 > 2 )
    goto LABEL_56;
  v13 = *((_DWORD *)a1 + 4);
  v14 = &a1[v11];
  v15 = *((unsigned __int16 *)a1 + 7);
  v16 = 4LL;
  v17 = *((_DWORD *)a1 + 8);
  Src = &a1[v11];
  switch ( v13 )
  {
    case 3:
      v17 = 3;
      v18 = 0;
      if ( v9 != 1 )
        v18 = v9;
      v9 = v18;
      if ( (((_WORD)v15 - 16) & 0xFFEF) != 0 )
        return 0LL;
      break;
    case 0:
      switch ( v15 )
      {
        case 1:
          v20 = 2;
          break;
        case 4:
          v20 = 16;
          break;
        case 8:
          v20 = 256;
          break;
        case 16:
        case 24:
        case 32:
          v19 = 0;
          v20 = 0;
          if ( v9 != 1 )
            v19 = v9;
          v9 = v19;
          goto LABEL_25;
        default:
          return 0LL;
      }
      if ( v17 && v20 >= v17 )
        break;
LABEL_25:
      v17 = v20;
      break;
    case 2:
      if ( (_WORD)v15 != 4 )
        return 0LL;
      if ( !v17 )
        v17 = 16;
      break;
    default:
      if ( v13 != 1 || (_WORD)v15 != 8 )
        return 0LL;
      if ( !v17 )
        v17 = 256;
      break;
  }
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
      v16 = 0LL;
    v12 = v16;
  }
  v21 = v12 * v17;
  if ( v21 > 0xFFFFFFFF || (int)v21 + 3 < (unsigned int)v21 )
  {
    v29 = 534;
LABEL_57:
    EngSetLastError(v29);
    return 0LL;
  }
  v22 = ((_DWORD)v21 + 3) & 0xFFFFFFFC;
  if ( (unsigned int)v22 > a3 - (unsigned int)v11 )
  {
LABEL_56:
    v29 = 87;
    goto LABEL_57;
  }
  v31[2] = 0LL;
  v31[0] = &v14[v22];
  v32 = 0;
  v31[1] = (int)(a3 + (_DWORD)a1 - ((_DWORD)v14 + v22));
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v37, 0LL);
  GrepCreateDIBitmap(
    (__int64)v33,
    (OPTAPIDCOBJ *)v37,
    6,
    v31,
    (unsigned int *)a1,
    v9 != 0 ? 3 : 0,
    a3,
    0LL,
    0,
    0LL,
    1,
    0LL,
    0LL);
  v23 = v34;
  if ( !v34 )
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v33);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
    return 0LL;
  }
  if ( a4 )
  {
    v24 = *(_QWORD *)(v34 + 56);
    if ( (int)v24 > 8 )
      LODWORD(v24) = 8;
    LODWORD(v39) = v24;
    v25 = HIDWORD(*(_QWORD *)(v34 + 56));
    if ( *(int *)(v34 + 60) > 8 )
      v25 = 8;
    HIDWORD(v39) = v25;
    *(_QWORD *)(v34 + 56) = v39;
    v23 = v34;
  }
  if ( v9 == 1 )
  {
    v26 = *(_QWORD *)(v23 + 128);
    *(_DWORD *)(v26 + 24) |= 0x4000u;
    memmove(*(void **)(v26 + 112), Src, (unsigned int)v21);
    *(_DWORD *)(v26 + 60) = v17;
    v23 = v34;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v35, *(HBITMAP *)v23, a6, 0, v9, 0x80u, a5);
  if ( v35[0] )
  {
    v36 = 1;
    *(_DWORD *)(v35[0] + 84LL) = v9;
    v6 = *(_QWORD *)v35[0];
  }
  else
  {
    SURFREF::bDeleteSurface((SURFREF *)v33, v38, v27);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v35);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v33);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
  return v6;
}

/*
 * XREFs of ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140118D68
 * Callers:
 *     EngFillPath @ 0x140118840 (EngFillPath.c)
 * Callees:
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x140119398 (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140119840 (-bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x14011A618 (-bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x14011B048 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018888C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140297AAC (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall EngFastFill(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned __int64 v10; // r14
  unsigned int v11; // ebx
  int v12; // edx
  ULONG v13; // ecx
  __int64 v14; // r8
  void (__fastcall *v15)(struct _ROW *, unsigned int, int, unsigned __int8 *, unsigned int, int, unsigned int); // rax
  bool v16; // cf
  struct _PATHOBJ v17; // rcx
  int v18; // ebx
  int v19; // r14d
  int v20; // edi
  struct _POINTFIX *v21; // rdx
  int v22; // ecx
  ULONG iSolidColor; // r9d
  unsigned int v26; // r9d
  _DWORD *pvRbrush; // rax
  __int64 p_iBitmapFormat; // rax
  ULONG v29; // r9d
  __int64 v30; // rax
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+60h] [rbp-A0h]
  int v34; // [rsp+64h] [rbp-9Ch]
  ULONG v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+6Ch] [rbp-94h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  struct _POINTFIX v38[40]; // [rsp+80h] [rbp-80h] BYREF

  v10 = (unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL);
  v11 = -1;
  if ( a1->iType )
    return v11;
  v12 = gaMix[a6 & 0xF] | (gaMix[(a6 >> 8) & 0xF] << 8);
  if ( !v12 )
  {
    v26 = 0;
    return (unsigned int)bPaintPath((struct SURFACE *)v10, a2, a3, v26, 0, a7);
  }
  if ( v12 != 61680 )
  {
    switch ( v12 )
    {
      case 0x5A5A:
        iSolidColor = a4->iSolidColor;
        if ( a4->iSolidColor != -1 )
          return (unsigned int)bPaintPath((struct SURFACE *)v10, a2, a3, iSolidColor, 1, a7);
        p_iBitmapFormat = (__int64)&a1->iBitmapFormat;
        if ( !a1 )
          p_iBitmapFormat = 96LL;
        if ( *(_DWORD *)p_iBitmapFormat >= 3u && pvGetEngRbrush(a4) && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
          return (unsigned int)bBrushPath((struct SURFACE *)v10, a2, a3, a4, a5, 2u, a7);
        return v11;
      case 0xF0F:
        v29 = a4->iSolidColor;
        if ( a4->iSolidColor == -1 )
        {
          v30 = (__int64)&a1->iBitmapFormat;
          if ( !a1 )
            v30 = 96LL;
          if ( *(_DWORD *)v30 >= 3u && pvGetEngRbrush(a4) && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
            return (unsigned int)bBrushPath((struct SURFACE *)v10, a2, a3, a4, a5, 1u, a7);
          return v11;
        }
        v26 = ~v29;
        break;
      case 0x5555:
        return (unsigned int)bPaintPath((struct SURFACE *)v10, a2, a3, 0xFFFFFFFF, 1, a7);
      case 0xAAAA:
        return 1;
      case 0xFFFF:
        v26 = -1;
        break;
      default:
        return v11;
    }
    return (unsigned int)bPaintPath((struct SURFACE *)v10, a2, a3, v26, 0, a7);
  }
  v13 = a4->iSolidColor;
  v14 = *(unsigned int *)(v10 + 96);
  if ( a4->iSolidColor == -1 )
  {
    if ( (unsigned int)(v14 - 2) <= 1 )
    {
      if ( pvGetEngRbrush(a4) )
      {
        pvRbrush = a4[1].pvRbrush;
        if ( pvRbrush[5] == 8 && pvRbrush[6] == 8 )
          return (unsigned int)bBrushPathN_8x8((struct SURFACE *)v10, a2, a3, a4, a5, *(_DWORD *)(v10 + 96), a7);
      }
    }
    else if ( (unsigned int)v14 >= 3 && pvGetEngRbrush(a4) && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
    {
      return (unsigned int)bBrushPath((struct SURFACE *)v10, a2, a3, a4, a5, 0, a7);
    }
    return v11;
  }
  if ( (unsigned int)(v14 - 1) > 5 )
    return 0;
  v34 = dword_14035EBA0[v14];
  v36 = 0;
  switch ( (_DWORD)v14 )
  {
    case 1:
      if ( v13 )
        v13 = -1;
      break;
    case 2:
      v13 |= 16 * v13;
      goto LABEL_50;
    case 3:
LABEL_50:
      v13 |= v13 << 8;
      goto LABEL_51;
    case 4:
LABEL_51:
      v13 |= v13 << 16;
      break;
  }
  v37 = *(_QWORD *)(v10 + 80);
  v33 = *(_DWORD *)(v10 + 88);
  v35 = v13;
  if ( (_DWORD)v14 == 5 )
  {
    v32[0] = vSolidFillRect24;
    v15 = vSolidFillRow24;
  }
  else if ( *(_QWORD *)(v10 + 632) )
  {
    v37 = *(_QWORD *)(v10 + 632);
    v32[0] = vSolidFillRectWithCallback;
    v15 = vSolidFillRowWithCallback;
  }
  else
  {
    v32[0] = vSolidFillRect1;
    v15 = vSolidFillRow1;
  }
  v16 = a2->cCurves < 2;
  *(_OWORD *)Src = 0LL;
  v32[1] = v15;
  if ( v16 )
    return 1;
  v17 = a2[1];
  a2->fl &= ~8u;
  *(_QWORD *)(*(_QWORD *)&v17 + 80LL) = *(_QWORD *)(*(_QWORD *)&v17 + 32LL);
  if ( EPATHOBJ::bEnum((EPATHOBJ *)a2, (struct _PATHDATA *)Src) )
  {
    if ( ((__int64)Src[0] & 2) == 0 && a2->cCurves <= 0x28 )
    {
      v18 = HIDWORD(Src[0]);
      if ( HIDWORD(Src[0]) <= 0x28 )
      {
        memmove(v38, Src[1], 8LL * HIDWORD(Src[0]));
        while ( 1 )
        {
          v19 = EPATHOBJ::bEnum((EPATHOBJ *)a2, (struct _PATHDATA *)Src);
          if ( ((__int64)Src[0] & 1) != 0 )
            break;
          v20 = v18 + HIDWORD(Src[0]);
          if ( (unsigned int)(v18 + HIDWORD(Src[0])) > 0x28 )
            break;
          memmove(&v38[v18], Src[1], 8LL * HIDWORD(Src[0]));
          v18 = v20;
          if ( !v19 )
          {
            if ( !v20 )
              return (unsigned int)bFill(
                                     (struct EPATHOBJ *)a2,
                                     a3,
                                     a7,
                                     (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
                                     v32);
            v21 = v38;
            v22 = v20;
            goto LABEL_24;
          }
        }
      }
    }
    return (unsigned int)bFill(
                           (struct EPATHOBJ *)a2,
                           a3,
                           a7,
                           (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
                           v32);
  }
  v22 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) <= 1 )
    return 1;
  v21 = (struct _POINTFIX *)Src[1];
LABEL_24:
  v11 = bFastFill(
          v22,
          v21,
          a3,
          (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
          (void (*)(int, struct _ROW *, unsigned int, void *))vPaintPathEnumRow,
          v32);
  if ( !v11 )
    return (unsigned int)bFill(
                           (struct EPATHOBJ *)a2,
                           a3,
                           a7,
                           (void (*)(struct _RECTL *, unsigned int, void *))vPaintPathEnum,
                           v32);
  return v11;
}

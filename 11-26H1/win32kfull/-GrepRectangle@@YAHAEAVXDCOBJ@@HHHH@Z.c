/*
 * XREFs of ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14011683C
 * Callers:
 *     NtGdiRectangle @ 0x1401166F0 (NtGdiRectangle.c)
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400ABA6C (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x140113AD4 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x140116520 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     ?fxFastX@EXFORMOBJ@@QEBAJJ@Z @ 0x14011660C (-fxFastX@EXFORMOBJ@@QEBAJJ@Z.c)
 *     ?fxFastY@EXFORMOBJ@@QEBAJJ@Z @ 0x14011667C (-fxFastY@EXFORMOBJ@@QEBAJJ@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepRectangle(struct XDCOBJ *a1, LONG a2, LONG a3, LONG a4, int a5)
{
  __int64 v5; // rsi
  __int64 v7; // r9
  LONG v10; // r12d
  unsigned int v11; // ebx
  LONG v12; // r15d
  bool v13; // zf
  __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // rdx
  LINEATTRS *v17; // r14
  int v18; // ecx
  int v19; // eax
  LONG v20; // edx
  LONG v21; // r8d
  LONG v22; // r9d
  LONG v23; // r10d
  __int64 v24; // rsi
  int v26; // ecx
  int v27; // ecx
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // r10d
  LONG v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // ebx
  unsigned int v35; // r14d
  int v36; // ecx
  LONG left; // r9d
  LONG right; // r8d
  int v39; // ecx
  LONG top; // edx
  LONG v41; // eax
  int v42; // ecx
  int v43; // eax
  LONG v44; // r8d
  LONG v45; // r9d
  LONG v46; // r10d
  LONG v47; // edx
  int v48; // eax
  int v49; // ecx
  int v50; // ecx
  LONG v51; // eax
  LONG v52; // eax
  LONG v53; // r8d
  LONG v54; // edx
  int v55; // ecx
  int v56; // ecx
  LONG v57; // eax
  LONG v58; // eax
  int v59; // eax
  __int64 v60; // rbx
  struct _RECTFX v61; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v62; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  __int16 v64; // [rsp+50h] [rbp-B0h]
  struct _RECTL v65; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v66[2]; // [rsp+70h] [rbp-90h] BYREF
  char v67; // [rsp+78h] [rbp-88h] BYREF
  char v68; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v69[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]
  _BYTE v71[464]; // [rsp+380h] [rbp+280h] BYREF

  v5 = *((_QWORD *)a1 + 2);
  v7 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  v10 = a2 - 1;
  v11 = 0;
  v12 = a4 - 1;
  v13 = (*(_DWORD *)(*(_QWORD *)(v7 + 976) + 108LL) & 1) == 0;
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 976) + 108LL) & 1) == 0 )
    v10 = a2;
  v65.top = a3;
  if ( v13 )
    v12 = a4;
  v65.left = v10;
  v65.right = v12;
  v65.bottom = a5;
  v14 = *(_QWORD *)(v7 + 976);
  v15 = *(_DWORD *)(v14 + 152);
  if ( (v15 & 0x1000) != 0 )
    GreDCSelectBrush(v7, *(_QWORD *)(v14 + 160));
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 168LL));
  DC::QuickInitXform(*(_QWORD *)a1, &v61, 516LL);
  if ( (*(_BYTE *)(*(_QWORD *)&v61.xLeft + 32LL) & 1) == 0
    || (v16 = *(_QWORD *)a1, (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0) )
  {
LABEL_17:
    v24 = *(_QWORD *)a1;
    EBOX::EBOX((EBOX *)v66, a1, &v65, (struct _LINEATTRS *)(*(_QWORD *)a1 + 208LL), 0);
    if ( v66[0] )
      return 1LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v69, (DC **)a1, 1);
    if ( !v70 )
    {
      EngSetLastError(8u);
      goto LABEL_42;
    }
    v62 = 1LL;
    *(_QWORD *)&v61.xRight = &v67;
    v63 = 0LL;
    v64 = 0;
    if ( (unsigned __int8)EPATHOBJ::bMoveTo(v69, 0LL, &v61.xRight) )
    {
      v63 = 0LL;
      v62 = 3LL;
      *(_QWORD *)&v61.xRight = &v68;
      v64 = 0;
      if ( (unsigned __int8)EPATHOBJ::bPolyLineTo(v69, 0LL, &v61.xRight, 3LL) )
      {
        if ( EPATHOBJ::bCloseFigure((EPATHOBJ *)v69) )
        {
          v32 = *(_QWORD *)a1;
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) == 0 )
          {
            v33 = *(_QWORD *)(v32 + 144);
            if ( v66[1] )
            {
              v60 = *(_QWORD *)(v32 + 136);
              *(_QWORD *)(v32 + 136) = v33;
              *(_DWORD *)(*(_QWORD *)a1 + 316LL) |= 1u;
              v35 = EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)v69, a1, 0LL, 0LL, 2u);
              *(_QWORD *)(*(_QWORD *)a1 + 136LL) = v60;
              *(_DWORD *)(*(_QWORD *)a1 + 316LL) |= 1u;
            }
            else
            {
              v34 = *(_DWORD *)(v24 + 212);
              if ( (*(_DWORD *)(v33 + 40) & 0x800) != 0 )
                *(_DWORD *)(v24 + 212) = 2;
              v35 = EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)v69, a1, (LINEATTRS *)(v24 + 208), &v61, 3u);
              *(_DWORD *)(v24 + 212) = v34;
            }
            PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v69);
            return v35;
          }
          v11 = 1;
LABEL_42:
          PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v69);
          return v11;
        }
      }
    }
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v69);
    return 0LL;
  }
  if ( *(_QWORD *)(v16 + 144) != *(_QWORD *)(v5 + 176) )
  {
    v17 = (LINEATTRS *)(v16 + 208);
    if ( (*(_DWORD *)(v16 + 208) & 1) == 0 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)&v61.xLeft + 32LL);
      if ( *(_DWORD *)(*(_QWORD *)(v16 + 976) + 208LL) == 2 )
      {
        if ( (v18 & 2) != 0 )
        {
          v36 = (*(_DWORD *)(*(_QWORD *)&v61.xLeft + 24LL) + 15) >> 4;
          left = v36 + v65.left;
          right = v36 + v65.right;
          v65.left += v36;
          v65.right += v36;
          v39 = (*(_DWORD *)(*(_QWORD *)&v61.xLeft + 28LL) + 15) >> 4;
          top = v39 + v65.top;
          v65.top += v39;
          v41 = v39 + v65.bottom;
        }
        else
        {
          v65.left = (int)(EXFORMOBJ::fxFastX((EXFORMOBJ *)&v61, v65.left) + 15) >> 4;
          v65.right = (int)(EXFORMOBJ::fxFastX((EXFORMOBJ *)&v61, v65.right) + 15) >> 4;
          v65.top = (int)(EXFORMOBJ::fxFastY((EXFORMOBJ *)&v61, v65.top) + 15) >> 4;
          v48 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v61, v65.bottom);
          right = v65.right;
          top = v65.top;
          left = v65.left;
          v41 = (v48 + 15) >> 4;
        }
        v65.bottom = v41;
        if ( left > right )
        {
          v65.left = right;
          v65.right = left;
        }
        if ( top > v41 )
        {
          v65.top = v41;
          v65.bottom = top;
        }
        goto LABEL_26;
      }
      if ( (v18 & 2) != 0 )
      {
        v26 = ((*(int *)(*(_QWORD *)&v61.xLeft + 24LL) >> 3) + 1) >> 1;
        v22 = v26 + v65.left;
        v20 = v26 + v65.right;
        v65.left += v26;
        v65.right += v26;
        v27 = ((*(int *)(*(_QWORD *)&v61.xLeft + 28LL) >> 3) + 1) >> 1;
        v21 = v27 + v65.top;
        v65.top += v27;
        v23 = v27 + v65.bottom;
      }
      else
      {
        v65.left = (((int)EXFORMOBJ::fxFastX((EXFORMOBJ *)&v61, v65.left) >> 3) + 1) >> 1;
        v65.right = (((int)EXFORMOBJ::fxFastX((EXFORMOBJ *)&v61, v65.right) >> 3) + 1) >> 1;
        v65.top = (((int)EXFORMOBJ::fxFastY((EXFORMOBJ *)&v61, v65.top) >> 3) + 1) >> 1;
        v19 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v61, v65.bottom);
        v20 = v65.right;
        v21 = v65.top;
        v22 = v65.left;
        v23 = ((v19 >> 3) + 1) >> 1;
      }
      if ( v22 > v20 )
      {
        v28 = v22;
        v65.left = v20;
        v22 = v20;
        v20 = v28;
      }
      if ( v21 > v23 )
      {
        v29 = v21;
        v65.top = v23;
        v21 = v23;
        v23 = v29;
      }
      v30 = v23 - 1;
      v65.right = v20 - 1;
      v65.bottom = v30;
      if ( v22 <= v20 - 1 && v21 <= v30 )
      {
LABEL_26:
        RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)v71, &v65, *(_DWORD *)(*(_QWORD *)a1 + 248LL) & 4);
        if ( *(_QWORD *)(*(_QWORD *)a1 + 136LL) == *(_QWORD *)(v5 + 160) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x40) != 0 )
          {
            v61.xRight = v10;
            v61.yBottom = a3;
            v62 = __PAIR64__(a5, v12);
            XDCOBJ::vAccumulate(a1, (struct ERECTL *)&v61.xRight);
          }
          return EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)v71, a1, v17, 0LL, 1u);
        }
        v31 = v65.top + 1;
        ++v65.left;
        ++v65.top;
        if ( v65.left >= v65.right
          || v31 >= v65.bottom
          || (unsigned int)GrepRectBlt((struct _ERESOURCE ***)a1, (struct ERECTL *)&v65) )
        {
          return EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)v71, a1, v17, 0LL, 1u);
        }
        return 0LL;
      }
      return 1LL;
    }
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v16 + 136) == *(_QWORD *)(v5 + 160) && (*(_DWORD *)(v16 + 36) & 0x40) == 0 )
    return 1LL;
  v42 = *(_DWORD *)(*(_QWORD *)&v61.xLeft + 32LL);
  if ( *(_DWORD *)(*(_QWORD *)(v16 + 976) + 208LL) == 2 )
  {
    if ( (v42 & 2) != 0 )
    {
      v55 = (*(_DWORD *)(*(_QWORD *)&v61.xLeft + 24LL) + 15) >> 4;
      v46 = v55 + v65.left;
      v53 = v55 + v65.right;
      v65.left += v55;
      v65.right += v55;
      v56 = (*(_DWORD *)(*(_QWORD *)&v61.xLeft + 28LL) + 15) >> 4;
      v45 = v56 + v65.top;
      v65.top += v56;
      v54 = v56 + v65.bottom;
    }
    else
    {
      v65.left = (int)(EXFORMOBJ::fxFastX((EXFORMOBJ *)&v61, v65.left) + 15) >> 4;
      v65.right = (int)(EXFORMOBJ::fxFastX((EXFORMOBJ *)&v61, v65.right) + 15) >> 4;
      v65.top = (int)(EXFORMOBJ::fxFastY((EXFORMOBJ *)&v61, v65.top) + 15) >> 4;
      v59 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v61, v65.bottom);
      v53 = v65.right;
      v45 = v65.top;
      v46 = v65.left;
      v54 = (v59 + 15) >> 4;
    }
    v65.bottom = v54;
    if ( v46 > v53 )
    {
      v57 = v46;
      v65.left = v53;
      v46 = v53;
      v65.right = v57;
      v53 = v57;
    }
    if ( v45 > v54 )
    {
      v58 = v45;
      v65.top = v54;
      v45 = v54;
      v65.bottom = v58;
      v54 = v58;
    }
  }
  else
  {
    if ( (v42 & 2) != 0 )
    {
      v49 = ((*(int *)(*(_QWORD *)&v61.xLeft + 24LL) >> 3) + 1) >> 1;
      v46 = v49 + v65.left;
      v44 = v49 + v65.right;
      v65.left += v49;
      v65.right += v49;
      v50 = ((*(int *)(*(_QWORD *)&v61.xLeft + 28LL) >> 3) + 1) >> 1;
      v45 = v50 + v65.top;
      v65.top += v50;
      v47 = v50 + v65.bottom;
    }
    else
    {
      v65.left = (((int)EXFORMOBJ::fxFastX((EXFORMOBJ *)&v61, v65.left) >> 3) + 1) >> 1;
      v65.right = (((int)EXFORMOBJ::fxFastX((EXFORMOBJ *)&v61, v65.right) >> 3) + 1) >> 1;
      v65.top = (((int)EXFORMOBJ::fxFastY((EXFORMOBJ *)&v61, v65.top) >> 3) + 1) >> 1;
      v43 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v61, v65.bottom);
      v44 = v65.right;
      v45 = v65.top;
      v46 = v65.left;
      v47 = ((v43 >> 3) + 1) >> 1;
    }
    if ( v46 > v44 )
    {
      v51 = v46;
      v65.left = v44;
      v46 = v44;
      v44 = v51;
    }
    if ( v45 > v47 )
    {
      v52 = v45;
      v65.top = v47;
      v45 = v47;
      v47 = v52;
    }
    v53 = v44 - 1;
    v54 = v47 - 1;
    v65.right = v53;
    v65.bottom = v54;
  }
  if ( v46 >= v53 || v45 >= v54 )
    return 1LL;
  return GrepRectBlt((struct _ERESOURCE ***)a1, (struct ERECTL *)&v65);
}

/*
 * XREFs of ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E7180
 * Callers:
 *     NtGdiRectangle @ 0x1400E7030 (NtGdiRectangle.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x140079C98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x14009CDEC (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1400E7A78 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1400E7B68 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?fxFastY@EXFORMOBJ@@QEBAJJ@Z @ 0x1400E8138 (-fxFastY@EXFORMOBJ@@QEBAJJ@Z.c)
 *     ?fxFastX@EXFORMOBJ@@QEBAJJ@Z @ 0x1400E81AC (-fxFastX@EXFORMOBJ@@QEBAJJ@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepRectangle(struct XDCOBJ *this, LONG a2, LONG a3, LONG a4, int a5)
{
  __int64 v5; // rsi
  __int64 v7; // r9
  LONG v10; // r12d
  unsigned int v11; // ebx
  LONG v12; // r15d
  bool v13; // zf
  __int64 v14; // rdx
  int v15; // r14d
  unsigned int v16; // r11d
  __int64 v17; // rdx
  LINEATTRS *v18; // r14
  int v19; // ecx
  int v20; // ecx
  LONG v21; // r9d
  LONG v22; // edx
  int v23; // ecx
  LONG v24; // r8d
  LONG v25; // r10d
  LONG v26; // r10d
  LONG v27; // eax
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // ebx
  unsigned int v33; // r14d
  LONG v34; // eax
  int v35; // ecx
  LONG v36; // r9d
  LONG v37; // r8d
  int v38; // ecx
  LONG v39; // edx
  LONG v40; // eax
  LONG v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // ecx
  LONG left; // r10d
  LONG v46; // r8d
  int v47; // ecx
  LONG top; // r9d
  LONG v49; // edx
  LONG right; // r8d
  LONG v51; // edx
  LONG v52; // eax
  LONG v53; // eax
  int v54; // eax
  int v55; // r11d
  int v56; // eax
  int v57; // r11d
  int v58; // eax
  int v59; // r11d
  int v60; // eax
  int v61; // ecx
  int v62; // ecx
  LONG v63; // eax
  LONG v64; // eax
  __int64 v65; // rbx
  int v66; // eax
  int v67; // r11d
  int v68; // eax
  int v69; // r11d
  int v70; // eax
  int v71; // r11d
  int v72; // eax
  int v73; // eax
  struct _RECTFX v74; // [rsp+30h] [rbp-D0h] BYREF
  char *v75; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v76; // [rsp+48h] [rbp-B8h]
  __int64 v77; // [rsp+50h] [rbp-B0h]
  __int16 v78; // [rsp+58h] [rbp-A8h]
  struct _RECTL v79; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v80[2]; // [rsp+70h] [rbp-90h] BYREF
  char v81; // [rsp+78h] [rbp-88h] BYREF
  char v82; // [rsp+80h] [rbp-80h] BYREF
  int *v83[10]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v84[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v85[560]; // [rsp+150h] [rbp+50h] BYREF
  int *v86[58]; // [rsp+380h] [rbp+280h] BYREF

  v5 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x10000) != 0 )
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
  v79.top = a3;
  if ( v13 )
    v12 = a4;
  v79.left = v10;
  v79.right = v12;
  v79.bottom = a5;
  v14 = *(_QWORD *)(v7 + 976);
  v15 = *(_DWORD *)(v14 + 152);
  if ( (v15 & 0x1000) != 0 )
    GreDCSelectBrush(v7, *(_QWORD *)(v14 + 160));
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(*(_QWORD *)this, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 168LL));
  DC::QuickInitXform(*(_QWORD *)this, &v74, 516LL);
  v16 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)&v74.xLeft + 32LL) & 1) != 0 )
  {
    v17 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 248LL) & 1) == 0 )
    {
      if ( *(_QWORD *)(v17 + 144) == *(_QWORD *)(v5 + 88) )
      {
        if ( *(_QWORD *)(v17 + 136) != *(_QWORD *)(v5 + 72) || (*(_DWORD *)(v17 + 36) & 0x40) != 0 )
        {
          v43 = *(_DWORD *)(*(_QWORD *)&v74.xLeft + 32LL);
          if ( *(_DWORD *)(*(_QWORD *)(v17 + 976) + 208LL) == 2 )
          {
            if ( (v43 & 2) != 0 )
            {
              v61 = (*(_DWORD *)(*(_QWORD *)&v74.xLeft + 24LL) + 15) >> 4;
              left = v61 + v79.left;
              right = v61 + v79.right;
              v79.left += v61;
              v79.right += v61;
              v62 = (*(_DWORD *)(*(_QWORD *)&v74.xLeft + 28LL) + 15) >> 4;
              top = v62 + v79.top;
              v79.top += v62;
              v51 = v62 + v79.bottom;
            }
            else
            {
              v79.left = (int)(EXFORMOBJ::fxFastX((EXFORMOBJ *)&v74, v79.left) + 15) >> 4;
              v79.right = (int)(EXFORMOBJ::fxFastX((EXFORMOBJ *)&v74, v79.right) + 15) >> 4;
              v79.top = (int)(EXFORMOBJ::fxFastY((EXFORMOBJ *)&v74, v79.top) + 15) >> 4;
              v73 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v74, v79.bottom);
              right = v79.right;
              top = v79.top;
              left = v79.left;
              v51 = (v73 + 15) >> 4;
            }
            v79.bottom = v51;
            if ( left > right )
            {
              v64 = left;
              v79.left = right;
              left = right;
              v79.right = v64;
              right = v64;
            }
            if ( top > v51 )
            {
              v63 = top;
              v79.top = v51;
              top = v51;
              v79.bottom = v63;
              v51 = v63;
            }
          }
          else
          {
            if ( (v43 & 2) != 0 )
            {
              v44 = ((*(int *)(*(_QWORD *)&v74.xLeft + 24LL) >> 3) + 1) >> 1;
              left = v44 + v79.left;
              v46 = v44 + v79.right;
              v79.left += v44;
              v79.right += v44;
              v47 = ((*(int *)(*(_QWORD *)&v74.xLeft + 28LL) >> 3) + 1) >> 1;
              top = v47 + v79.top;
              v79.top += v47;
              v49 = v47 + v79.bottom;
            }
            else
            {
              v66 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v74, v79.left);
              v79.left = (v67 + (v66 >> 3)) >> 1;
              v68 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v74, v79.right);
              v79.right = (v69 + (v68 >> 3)) >> 1;
              v70 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v74, v79.top);
              v79.top = (v71 + (v70 >> 3)) >> 1;
              v72 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v74, v79.bottom);
              v46 = v79.right;
              top = v79.top;
              left = v79.left;
              v49 = (int)(v16 + (v72 >> 3)) >> 1;
            }
            if ( left > v46 )
            {
              v53 = left;
              v79.left = v46;
              left = v46;
              v46 = v53;
            }
            if ( top > v49 )
            {
              v52 = top;
              v79.top = v49;
              top = v49;
              v49 = v52;
            }
            right = v46 - v16;
            v51 = v49 - v16;
            v79.right = right;
            v79.bottom = v51;
          }
          if ( left < right && top < v51 )
            return GrepRectBlt(this, (struct ERECTL *)&v79);
        }
        return v16;
      }
      v18 = (LINEATTRS *)(v17 + 208);
      if ( (*(_DWORD *)(v17 + 208) & 1) == 0 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)&v74.xLeft + 32LL);
        if ( *(_DWORD *)(*(_QWORD *)(v17 + 976) + 208LL) == 2 )
        {
          if ( (v19 & 2) != 0 )
          {
            v35 = (*(_DWORD *)(*(_QWORD *)&v74.xLeft + 24LL) + 15) >> 4;
            v36 = v35 + v79.left;
            v37 = v35 + v79.right;
            v79.left += v35;
            v79.right += v35;
            v38 = (*(_DWORD *)(*(_QWORD *)&v74.xLeft + 28LL) + 15) >> 4;
            v39 = v38 + v79.top;
            v79.top += v38;
            v40 = v38 + v79.bottom;
          }
          else
          {
            v79.left = (int)(EXFORMOBJ::fxFastX((EXFORMOBJ *)&v74, v79.left) + 15) >> 4;
            v79.right = (int)(EXFORMOBJ::fxFastX((EXFORMOBJ *)&v74, v79.right) + 15) >> 4;
            v79.top = (int)(EXFORMOBJ::fxFastY((EXFORMOBJ *)&v74, v79.top) + 15) >> 4;
            v42 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v74, v79.bottom);
            v37 = v79.right;
            v39 = v79.top;
            v36 = v79.left;
            v40 = (v42 + 15) >> 4;
          }
          v79.bottom = v40;
          if ( v36 > v37 )
          {
            v79.left = v37;
            v79.right = v36;
          }
          if ( v39 > v40 )
          {
            v79.top = v40;
            v79.bottom = v39;
          }
          goto LABEL_23;
        }
        if ( (v19 & 2) != 0 )
        {
          v20 = ((*(int *)(*(_QWORD *)&v74.xLeft + 24LL) >> 3) + 1) >> 1;
          v21 = v20 + v79.left;
          v22 = v20 + v79.right;
          v79.left += v20;
          v79.right += v20;
          v23 = ((*(int *)(*(_QWORD *)&v74.xLeft + 28LL) >> 3) + 1) >> 1;
          v24 = v23 + v79.top;
          v79.top += v23;
          v25 = v23 + v79.bottom;
        }
        else
        {
          v54 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v74, v79.left);
          v79.left = (v55 + (v54 >> 3)) >> 1;
          v56 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v74, v79.right);
          v79.right = (v57 + (v56 >> 3)) >> 1;
          v58 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v74, v79.top);
          v79.top = (v59 + (v58 >> 3)) >> 1;
          v60 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v74, v79.bottom);
          v22 = v79.right;
          v24 = v79.top;
          v21 = v79.left;
          v25 = (int)(v16 + (v60 >> 3)) >> 1;
        }
        if ( v21 > v22 )
        {
          v41 = v21;
          v79.left = v22;
          v21 = v22;
          v22 = v41;
        }
        if ( v24 > v25 )
        {
          v34 = v24;
          v79.top = v25;
          v24 = v25;
          v25 = v34;
        }
        v26 = v25 - 1;
        v79.right = v22 - v16;
        v79.bottom = v26;
        if ( v21 <= (int)(v22 - v16) && v24 <= v26 )
        {
LABEL_23:
          RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)v86, &v79, *(_DWORD *)(*(_QWORD *)this + 248LL) & 4);
          if ( *(_QWORD *)(*(_QWORD *)this + 136LL) == *(_QWORD *)(v5 + 72) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x40) != 0 )
            {
              v75 = (char *)__PAIR64__(a3, v10);
              v76 = __PAIR64__(a5, v12);
              XDCOBJ::vAccumulate(this, (struct ERECTL *)&v75);
            }
            return EPATHOBJ_bStrokeAndOrFill(v86, (struct _POINTL **)this, v18, 0LL, 1u);
          }
          v27 = v79.top + 1;
          ++v79.left;
          ++v79.top;
          if ( v79.left >= v79.right || v27 >= v79.bottom || (unsigned int)GrepRectBlt(this, (struct ERECTL *)&v79) )
            return EPATHOBJ_bStrokeAndOrFill(v86, (struct _POINTL **)this, v18, 0LL, 1u);
          return 0LL;
        }
        return v16;
      }
    }
  }
  v29 = *(_QWORD *)this;
  EBOX::EBOX((EBOX *)v80, this, &v79, (struct _LINEATTRS *)(*(_QWORD *)this + 208LL), 0);
  if ( v80[0] )
    return 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v83, (DC **)this, 1);
  if ( !v83[1] )
  {
    EngSetLastError(8u);
LABEL_48:
    EPATHOBJ::vUnlock((EPATHOBJ *)v83);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v85);
    CAutoTGO::vUnguard((CAutoTGO *)v84);
    return v11;
  }
  v76 = 1LL;
  v78 = 0;
  v75 = &v81;
  v77 = 0LL;
  if ( !(unsigned __int8)EPATHOBJ::bMoveTo(v83, 0LL, &v75)
    || (v77 = 0LL, v78 = 0, v75 = &v82, v76 = 3LL, !(unsigned __int8)EPATHOBJ::bPolyLineTo(v83, 0LL, &v75, 3LL))
    || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v83) )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)v83);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v85);
    CAutoTGO::vUnguard((CAutoTGO *)v84);
    return 0LL;
  }
  v30 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 248LL) & 1) != 0 )
  {
    v11 = 1;
    goto LABEL_48;
  }
  v31 = *(_QWORD *)(v30 + 144);
  if ( v80[1] )
  {
    v65 = *(_QWORD *)(v30 + 136);
    *(_QWORD *)(v30 + 136) = v31;
    *(_DWORD *)(*(_QWORD *)this + 316LL) |= 1u;
    v33 = EPATHOBJ_bStrokeAndOrFill(v83, (struct _POINTL **)this, 0LL, 0LL, 2u);
    *(_QWORD *)(*(_QWORD *)this + 136LL) = v65;
    *(_DWORD *)(*(_QWORD *)this + 316LL) |= 1u;
  }
  else
  {
    v32 = *(_DWORD *)(v29 + 212);
    if ( (*(_DWORD *)(v31 + 40) & 0x800) != 0 )
      *(_DWORD *)(v29 + 212) = 2;
    v33 = EPATHOBJ_bStrokeAndOrFill(v83, (struct _POINTL **)this, (LINEATTRS *)(v29 + 208), (XFORMOBJ *)&v74, 3u);
    *(_DWORD *)(v29 + 212) = v32;
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)v83);
  PATH_CORE::~PATH_CORE((PATH_CORE *)v85);
  CAutoTGO::vUnguard((CAutoTGO *)v84);
  return v33;
}

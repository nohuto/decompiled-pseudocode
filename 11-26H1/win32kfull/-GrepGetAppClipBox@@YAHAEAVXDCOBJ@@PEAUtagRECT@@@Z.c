/*
 * XREFs of ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400AC974
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1400AC830 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400781A0 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetAppClipBox(struct XDCOBJ *this, struct tagRECT *a2)
{
  LONG *p_top; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  LONG v7; // r10d
  LONG v8; // r11d
  __int64 v9; // rdx
  LONG v10; // r9d
  LONG v11; // r10d
  LONG v12; // r11d
  LONG bottom; // edx
  __int64 v14; // rdi
  unsigned int v15; // edi
  LONG right; // eax
  LONG left; // ecx
  LONG v19; // edx
  LONG v20; // eax
  LONG x; // r9d
  LONG v22; // r11d
  LONG v23; // eax
  LONG v24; // edi
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // ecx
  LONG y; // r8d
  bool v29; // cc
  LONG v30; // r10d
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  __int64 v41; // [rsp+20h] [rbp-99h] BYREF
  struct REGION *v42; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v43[160]; // [rsp+30h] [rbp-89h] BYREF
  struct _POINTL v44; // [rsp+D0h] [rbp+17h] BYREF
  LONG v45; // [rsp+D8h] [rbp+1Fh]
  LONG v46; // [rsp+DCh] [rbp+23h]
  LONG v47; // [rsp+E0h] [rbp+27h]
  LONG v48; // [rsp+E4h] [rbp+2Bh]
  LONG v49; // [rsp+E8h] [rbp+2Fh]
  LONG v50; // [rsp+ECh] [rbp+33h]

  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v43);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v43, this, 1) )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen(this) )
    {
      *(_QWORD *)&a2->left = 0LL;
      v15 = 3;
      *(_QWORD *)&a2->right = 0LL;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
  v42 = XDCOBJ::prgnEffRao((DC **)this);
  p_top = &a2->top;
  *a2 = *(struct tagRECT *)((char *)v42 + 52);
  if ( a2->left >= a2->right || *p_top >= a2->bottom )
  {
    *p_top = 0;
    v15 = 1;
    a2->left = 0;
    *(_QWORD *)&a2->right = 0LL;
LABEL_12:
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 108LL) & 1) != 0 )
    {
      right = a2->right;
      left = a2->left;
      if ( a2->left > right )
      {
        a2->left = right;
        a2->right = left;
      }
    }
    goto LABEL_13;
  }
  DC::QuickInitXform(*(_QWORD *)this, &v41, 2147484674LL);
  v5 = v41;
  if ( !v41 )
  {
LABEL_14:
    v15 = 0;
    goto LABEL_13;
  }
  v6 = *(_QWORD *)this;
  v7 = a2->right;
  v8 = *p_top;
  v9 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1;
  v10 = a2->left - *(_DWORD *)(*(_QWORD *)this + 8 * v9 + 1016);
  a2->left = v10;
  v11 = v7 - *(_DWORD *)(v6 + 8 * v9 + 1016);
  a2->right = v11;
  v12 = v8 - *(_DWORD *)(v6 + 8 * v9 + 1020);
  *p_top = v12;
  a2->bottom -= *(_DWORD *)(v6 + 8 * v9 + 1020);
  bottom = a2->bottom;
  if ( (*(_BYTE *)(v5 + 32) & 1) != 0 )
  {
    v14 = *(_QWORD *)this;
    if ( (*(_BYTE *)(v5 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v5, (__int64)a2, 2LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v14 + 976) + 108LL) & 1) != 0 )
      {
        ++a2->left;
        ++a2->right;
      }
      v15 = RGNOBJ::iComplexity((RGNOBJ *)&v42);
    }
    else
    {
      v15 = 0;
    }
  }
  else
  {
    v48 = a2->bottom;
    v50 = bottom;
    v44.x = v10;
    v44.y = v12;
    v45 = v11;
    v46 = v12;
    v47 = v10;
    v49 = v11;
    EXFORMOBJ::bXform((EXFORMOBJ *)&v41, &v44);
    v19 = v45;
    v20 = v45;
    x = v44.x;
    v22 = v47;
    if ( v44.x < v45 )
      v20 = v44.x;
    if ( v20 >= v47 )
    {
      v23 = v47;
    }
    else
    {
      v23 = v45;
      if ( v44.x < v45 )
        v23 = v44.x;
    }
    v24 = v49;
    if ( v23 >= v49 )
    {
      v26 = v49;
    }
    else
    {
      v25 = v45;
      if ( v44.x < v45 )
        v25 = v44.x;
      if ( v25 >= v47 )
      {
        v26 = v47;
      }
      else
      {
        v26 = v45;
        if ( v44.x < v45 )
          v26 = v44.x;
      }
    }
    v27 = v46;
    y = v44.y;
    v29 = v44.y < v46;
    v30 = v48;
    a2->left = v26;
    v31 = v27;
    if ( v29 )
      v31 = y;
    if ( v31 >= v30 )
    {
      v32 = v30;
    }
    else
    {
      v32 = v27;
      if ( y < v27 )
        v32 = y;
    }
    if ( v32 >= v50 )
    {
      v34 = v50;
    }
    else
    {
      v33 = v27;
      if ( y < v27 )
        v33 = y;
      if ( v33 >= v30 )
      {
        v34 = v30;
      }
      else
      {
        v34 = v27;
        if ( y < v27 )
          v34 = y;
      }
    }
    a2->top = v34;
    v35 = v19;
    if ( x > v19 )
      v35 = x;
    if ( v35 <= v22 )
    {
      v36 = v22;
    }
    else
    {
      v36 = v19;
      if ( x > v19 )
        v36 = x;
    }
    if ( v36 <= v24 )
    {
      v19 = v24;
    }
    else
    {
      v37 = v19;
      if ( x > v19 )
        v37 = x;
      if ( v37 <= v22 )
      {
        v19 = v22;
      }
      else if ( x > v19 )
      {
        v19 = x;
      }
    }
    a2->right = v19;
    v38 = v27;
    if ( y > v27 )
      v38 = y;
    if ( v38 <= v30 )
    {
      v39 = v30;
    }
    else
    {
      v39 = v27;
      if ( y > v27 )
        v39 = y;
    }
    if ( v39 <= v50 )
    {
      v27 = v50;
    }
    else
    {
      v40 = v27;
      if ( y > v27 )
        v40 = y;
      if ( v40 <= v30 )
      {
        v27 = v30;
      }
      else if ( y > v27 )
      {
        v27 = y;
      }
    }
    a2->bottom = v27;
    v15 = 3;
  }
  if ( v15 )
    goto LABEL_12;
LABEL_13:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v43);
  return v15;
}

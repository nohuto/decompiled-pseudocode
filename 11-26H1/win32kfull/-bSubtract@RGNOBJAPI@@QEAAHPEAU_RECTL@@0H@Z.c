/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400AA854
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z @ 0x1400A9784 (-RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z.c)
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400AB1D8 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400AB1FC (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400ABFD0 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400E3898 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  const struct _RECTL *v4; // r15
  __int64 v9; // r14
  LONG bottom; // r10d
  LONG top; // r9d
  LONG right; // ecx
  LONG left; // r11d
  LONG v14; // r15d
  LONG v15; // edx
  LONG v16; // r8d
  bool v17; // cc
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int sizeScan; // eax
  unsigned int v28; // ebx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  const struct _RECTL *v35; // rdx
  struct SCAN *v36; // rdx
  __int64 v37; // rax
  struct SCAN *v38; // rdx
  __int64 v39; // rcx
  struct SCAN *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // eax
  struct SCAN *pScan; // rdx
  __int64 v47; // rax
  _DWORD *v48; // rdx
  __int64 v49; // rcx
  struct SCAN *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  LONG v53; // eax
  struct SCAN *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // [rsp+20h] [rbp-28h] BYREF
  __int128 v60; // [rsp+28h] [rbp-20h] BYREF

  v4 = (const struct _RECTL *)a4;
  if ( (unsigned __int8)IsBaseRustExportsEnabled<1>() )
    return Win32kRS::RegionCore_subtract(
             (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
             (struct REGION_CORE *)a2,
             a3,
             v4);
  v9 = *(_QWORD *)this;
  if ( ERECTL::bEmpty((ERECTL *)a2) )
    goto LABEL_47;
  if ( (_DWORD)v4 == 1 )
  {
    bottom = a2->bottom;
    top = a3->top;
    if ( top >= bottom
      || (right = a2->right, left = a3->left, a3->left >= right)
      || (v14 = a2->top, v15 = a3->bottom, v15 <= v14)
      || (v16 = a3->right, v16 <= a2->left) )
    {
      v35 = a2;
      goto LABEL_39;
    }
    v17 = left <= a2->left;
    v60 = 0LL;
    v18 = v16 >= right;
    if ( !v17 )
      v18 += 2;
    if ( top > v14 )
    {
      v19 = 8;
      if ( v15 >= bottom )
        v19 = 12;
    }
    else
    {
      v19 = 0;
      if ( v15 >= bottom )
        v19 = 4;
    }
    v20 = v18 + v19;
    if ( v20 > 8 )
    {
      v21 = v20 - 9;
      if ( !v21 )
      {
        REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x60u);
        *(_DWORD *)(v9 + 48) = 5;
        *(struct _RECTL *)(v9 + 52) = *a2;
        pScan = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
        *(_DWORD *)pScan = 0;
        *((_DWORD *)pScan + 1) = 0x80000000;
        *((_DWORD *)pScan + 2) = a2->top;
        *((_DWORD *)pScan + 3) = 0;
        *((_DWORD *)pScan + 4) = 2;
        *((_DWORD *)pScan + 5) = a2->top;
        *((_DWORD *)pScan + 6) = a3->top;
        *((_DWORD *)pScan + 7) = a2->left;
        *((_DWORD *)pScan + 8) = a2->right;
        *((_DWORD *)pScan + 9) = 2;
        v47 = (unsigned int)(4 * *((_DWORD *)pScan + 4) + 16);
        *(_DWORD *)((char *)pScan + v47 + 16) = 0;
        *(_DWORD *)((char *)pScan + (unsigned int)v47 + 20) = a3->top;
        *(_DWORD *)((char *)pScan + (unsigned int)v47 + 24) = a3->bottom;
        *(_DWORD *)((char *)pScan + (unsigned int)v47 + 28) = 0;
        v48 = (_DWORD *)((char *)pScan + (unsigned int)v47);
        v48[8] = 2;
        v48[9] = a3->bottom;
        v48[10] = a2->bottom;
        v48[11] = a2->left;
        v48[12] = a2->right;
        v48[13] = 2;
        v49 = (unsigned int)(4 * v48[8] + 16);
        *(_DWORD *)((char *)v48 + v49 + 32) = 0;
        *(_DWORD *)((char *)v48 + v49 + 36) = a2->bottom;
        *(_QWORD *)((char *)v48 + v49 + 40) = 0x7FFFFFFFLL;
        return 1LL;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
        REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x70u);
        *(_DWORD *)(v9 + 48) = 5;
        *(struct _RECTL *)(v9 + 52) = *a2;
        v36 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
        *(_DWORD *)v36 = 0;
        *((_DWORD *)v36 + 1) = 0x80000000;
        *((_DWORD *)v36 + 2) = a2->top;
        *((_DWORD *)v36 + 3) = 0;
        *((_DWORD *)v36 + 4) = 2;
        *((_DWORD *)v36 + 5) = a2->top;
        *((_DWORD *)v36 + 6) = a3->top;
        *((_DWORD *)v36 + 7) = a2->left;
        *((_DWORD *)v36 + 8) = a2->right;
        *((_DWORD *)v36 + 9) = 2;
        v37 = (unsigned int)(4 * *((_DWORD *)v36 + 4) + 16);
        *(_DWORD *)((char *)v36 + v37 + 16) = 4;
        *(_DWORD *)((char *)v36 + (unsigned int)v37 + 20) = a3->top;
        *(_DWORD *)((char *)v36 + (unsigned int)v37 + 24) = a3->bottom;
        *(_DWORD *)((char *)v36 + (unsigned int)v37 + 28) = a2->left;
        *(_DWORD *)((char *)v36 + (unsigned int)v37 + 32) = a3->left;
        *(_DWORD *)((char *)v36 + (unsigned int)v37 + 36) = a3->right;
        *(_DWORD *)((char *)v36 + (unsigned int)v37 + 40) = a2->right;
        *(_DWORD *)((char *)v36 + (unsigned int)v37 + 44) = 4;
        v38 = (struct SCAN *)((char *)v36 + (unsigned int)v37);
        *((_DWORD *)v38 + 12) = 2;
        *((_DWORD *)v38 + 13) = a3->bottom;
        *((_DWORD *)v38 + 14) = a2->bottom;
        *((_DWORD *)v38 + 15) = a2->left;
        *((_DWORD *)v38 + 16) = a2->right;
        *((_DWORD *)v38 + 17) = 2;
        v39 = (unsigned int)(4 * *((_DWORD *)v38 + 12) + 16);
        *(_DWORD *)((char *)v38 + v39 + 48) = 0;
        goto LABEL_44;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              if ( v26 != 1 )
                return 1LL;
              REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x50u);
              *(_DWORD *)(v9 + 48) = 4;
              *(struct _RECTL *)(v9 + 52) = *a2;
              v40 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
              *(_DWORD *)v40 = 0;
              *((_DWORD *)v40 + 1) = 0x80000000;
              *((_DWORD *)v40 + 2) = a2->top;
              *((_DWORD *)v40 + 3) = 0;
              *((_DWORD *)v40 + 4) = 2;
              *((_DWORD *)v40 + 5) = a2->top;
              *((_DWORD *)v40 + 6) = a3->top;
              *((_DWORD *)v40 + 7) = a2->left;
              *((_DWORD *)v40 + 8) = a2->right;
              *((_DWORD *)v40 + 9) = 2;
              v56 = (unsigned int)(4 * *((_DWORD *)v40 + 4) + 16);
              v42 = (unsigned int)v56;
              *(_DWORD *)((char *)v40 + v56 + 16) = 2;
              *(_DWORD *)((char *)v40 + (unsigned int)v56 + 20) = a3->top;
              *(_DWORD *)((char *)v40 + (unsigned int)v56 + 24) = a2->bottom;
              *(_DWORD *)((char *)v40 + (unsigned int)v56 + 28) = a2->left;
              v45 = a3->left;
              goto LABEL_53;
            }
            REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x58u);
            *(_DWORD *)(v9 + 48) = 4;
            *(struct _RECTL *)(v9 + 52) = *a2;
            v38 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
            *(_DWORD *)v38 = 0;
            *((_DWORD *)v38 + 1) = 0x80000000;
            *((_DWORD *)v38 + 2) = a2->top;
            *((_DWORD *)v38 + 3) = 0;
            *((_DWORD *)v38 + 4) = 2;
            *((_DWORD *)v38 + 5) = a2->top;
            *((_DWORD *)v38 + 6) = a3->top;
            *((_DWORD *)v38 + 7) = a2->left;
            *((_DWORD *)v38 + 8) = a2->right;
            *((_DWORD *)v38 + 9) = 2;
            v58 = (unsigned int)(4 * *((_DWORD *)v38 + 4) + 16);
            v39 = (unsigned int)v58;
            *(_DWORD *)((char *)v38 + v58 + 16) = 4;
            *(_DWORD *)((char *)v38 + (unsigned int)v58 + 20) = a3->top;
            *(_DWORD *)((char *)v38 + (unsigned int)v58 + 24) = a2->bottom;
            *(_DWORD *)((char *)v38 + (unsigned int)v58 + 28) = a2->left;
            *(_DWORD *)((char *)v38 + (unsigned int)v58 + 32) = a3->left;
            *(_DWORD *)((char *)v38 + (unsigned int)v58 + 36) = a3->right;
            *(_DWORD *)((char *)v38 + (unsigned int)v58 + 40) = a2->right;
            *(_QWORD *)((char *)v38 + (unsigned int)v58 + 44) = 4LL;
LABEL_44:
            *(_DWORD *)((char *)v38 + v39 + 52) = a2->bottom;
            *(_QWORD *)((char *)v38 + v39 + 56) = 0x7FFFFFFFLL;
            return 1LL;
          }
          v60 = (__int128)*a2;
          HIDWORD(v60) = top;
          goto LABEL_38;
        }
        REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x50u);
        *(_DWORD *)(v9 + 48) = 4;
        *(struct _RECTL *)(v9 + 52) = *a2;
        v40 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
        *(_DWORD *)v40 = 0;
        *((_DWORD *)v40 + 1) = 0x80000000;
        *((_DWORD *)v40 + 2) = a2->top;
        *((_DWORD *)v40 + 3) = 0;
        *((_DWORD *)v40 + 4) = 2;
        *((_DWORD *)v40 + 5) = a2->top;
        *((_DWORD *)v40 + 6) = a3->top;
        *((_DWORD *)v40 + 7) = a2->left;
        *((_DWORD *)v40 + 8) = a2->right;
        *((_DWORD *)v40 + 9) = 2;
        v41 = (unsigned int)(4 * *((_DWORD *)v40 + 4) + 16);
        v42 = (unsigned int)v41;
        *(_DWORD *)((char *)v40 + v41 + 16) = 2;
        *(_DWORD *)((char *)v40 + (unsigned int)v41 + 20) = a3->top;
        *(_DWORD *)((char *)v40 + (unsigned int)v41 + 24) = a2->bottom;
        v43 = a3->right;
LABEL_52:
        *(_DWORD *)((char *)v40 + v42 + 28) = v43;
        v45 = a2->right;
LABEL_53:
        *(_DWORD *)((char *)v40 + v42 + 32) = v45;
        *(_QWORD *)((char *)v40 + v42 + 36) = 2LL;
LABEL_54:
        *(_DWORD *)((char *)v40 + v42 + 44) = a2->bottom;
        *(_QWORD *)((char *)v40 + v42 + 48) = 0x7FFFFFFFLL;
        return 1LL;
      }
      REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x68u);
      *(_DWORD *)(v9 + 48) = 5;
      *(struct _RECTL *)(v9 + 52) = *a2;
      v50 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
      *(_DWORD *)v50 = 0;
      *((_DWORD *)v50 + 1) = 0x80000000;
      *((_DWORD *)v50 + 2) = a2->top;
      *((_DWORD *)v50 + 3) = 0;
      *((_DWORD *)v50 + 4) = 2;
      *((_DWORD *)v50 + 5) = a2->top;
      *((_DWORD *)v50 + 6) = a3->top;
      *((_DWORD *)v50 + 7) = a2->left;
      *((_DWORD *)v50 + 8) = a2->right;
      *((_DWORD *)v50 + 9) = 2;
      v51 = (unsigned int)(4 * *((_DWORD *)v50 + 4) + 16);
      v52 = (unsigned int)v51;
      *(_DWORD *)((char *)v50 + v51 + 16) = 2;
      *(_DWORD *)((char *)v50 + (unsigned int)v51 + 20) = a3->top;
      *(_DWORD *)((char *)v50 + (unsigned int)v51 + 24) = a3->bottom;
      *(_DWORD *)((char *)v50 + (unsigned int)v51 + 28) = a2->left;
      v53 = a3->left;
LABEL_57:
      *(_DWORD *)((char *)v50 + v52 + 32) = v53;
      *(_DWORD *)((char *)v50 + v52 + 36) = 2;
      v40 = (struct SCAN *)((char *)v50 + v52);
      *((_DWORD *)v40 + 10) = 2;
      *((_DWORD *)v40 + 11) = a3->bottom;
      *((_DWORD *)v40 + 12) = a2->bottom;
      *((_DWORD *)v40 + 13) = a2->left;
      *((_DWORD *)v40 + 14) = a2->right;
      *((_DWORD *)v40 + 15) = 2;
      v42 = (unsigned int)(4 * *((_DWORD *)v40 + 10) + 16);
      *(_DWORD *)((char *)v40 + v42 + 40) = 0;
      goto LABEL_54;
    }
    if ( v20 == 8 )
    {
      REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x68u);
      *(_DWORD *)(v9 + 48) = 5;
      *(struct _RECTL *)(v9 + 52) = *a2;
      v50 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
      *(_DWORD *)v50 = 0;
      *((_DWORD *)v50 + 1) = 0x80000000;
      *((_DWORD *)v50 + 2) = a2->top;
      *((_DWORD *)v50 + 3) = 0;
      *((_DWORD *)v50 + 4) = 2;
      *((_DWORD *)v50 + 5) = a2->top;
      *((_DWORD *)v50 + 6) = a3->top;
      *((_DWORD *)v50 + 7) = a2->left;
      *((_DWORD *)v50 + 8) = a2->right;
      *((_DWORD *)v50 + 9) = 2;
      v57 = (unsigned int)(4 * *((_DWORD *)v50 + 4) + 16);
      v52 = (unsigned int)v57;
      *(_DWORD *)((char *)v50 + v57 + 16) = 2;
      *(_DWORD *)((char *)v50 + (unsigned int)v57 + 20) = a3->top;
      *(_DWORD *)((char *)v50 + (unsigned int)v57 + 24) = a3->bottom;
      *(_DWORD *)((char *)v50 + (unsigned int)v57 + 28) = a3->right;
      v53 = a2->right;
      goto LABEL_57;
    }
    if ( v20 )
    {
      v29 = v20 - 1;
      if ( !v29 )
      {
        v60 = (__int128)*a2;
        DWORD1(v60) = v15;
        goto LABEL_38;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x58u);
        *(_DWORD *)(v9 + 48) = 4;
        *(struct _RECTL *)(v9 + 52) = *a2;
        v40 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
        *(_DWORD *)v40 = 0;
        *((_DWORD *)v40 + 1) = 0x80000000;
        *((_DWORD *)v40 + 2) = a2->top;
        *((_DWORD *)v40 + 3) = 0;
        *((_DWORD *)v40 + 4) = 4;
        *((_DWORD *)v40 + 5) = a2->top;
        *((_DWORD *)v40 + 6) = a3->bottom;
        *((_DWORD *)v40 + 7) = a2->left;
        *((_DWORD *)v40 + 8) = a3->left;
        *((_DWORD *)v40 + 9) = a3->right;
        *((_DWORD *)v40 + 10) = a2->right;
        *((_DWORD *)v40 + 11) = 4;
        goto LABEL_51;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( !v34 )
            {
              REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x40u);
              *(_DWORD *)(v9 + 48) = 3;
              *(struct _RECTL *)(v9 + 52) = *a2;
              v54 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
              *(_DWORD *)v54 = 0;
              *((_DWORD *)v54 + 1) = 0x80000000;
              *((_DWORD *)v54 + 2) = a2->top;
              *((_DWORD *)v54 + 3) = 0;
              *((_DWORD *)v54 + 4) = 4;
              *((_DWORD *)v54 + 5) = a2->top;
              *((_DWORD *)v54 + 6) = a2->bottom;
              *((_DWORD *)v54 + 7) = a2->left;
              *((_DWORD *)v54 + 8) = a3->left;
              *((_DWORD *)v54 + 9) = a3->right;
              *((_DWORD *)v54 + 10) = a2->right;
              *((_DWORD *)v54 + 11) = 4;
              v55 = (unsigned int)(4 * *((_DWORD *)v54 + 4) + 16);
              *(_DWORD *)((char *)v54 + v55 + 16) = 0;
              *(_DWORD *)((char *)v54 + (unsigned int)v55 + 20) = a2->bottom;
              *(_QWORD *)((char *)v54 + (unsigned int)v55 + 24) = 0x7FFFFFFFLL;
              return 1LL;
            }
            if ( v34 != 1 )
              return 1LL;
            v60 = (__int128)*a2;
            DWORD2(v60) = left;
            goto LABEL_38;
          }
LABEL_47:
          RGNOBJ::vSet(this);
          return 1LL;
        }
        v60 = (__int128)*a2;
        LODWORD(v60) = v16;
LABEL_38:
        v35 = (const struct _RECTL *)&v60;
LABEL_39:
        RGNOBJ::vSet(this, v35);
        return 1LL;
      }
      REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x50u);
      *(_DWORD *)(v9 + 48) = 4;
      *(struct _RECTL *)(v9 + 52) = *a2;
      v40 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
      *(_DWORD *)v40 = 0;
      *((_DWORD *)v40 + 1) = 0x80000000;
      *((_DWORD *)v40 + 2) = a2->top;
      *((_DWORD *)v40 + 3) = 0;
      *((_DWORD *)v40 + 4) = 2;
      *((_DWORD *)v40 + 5) = a2->top;
      *((_DWORD *)v40 + 6) = a3->bottom;
      *((_DWORD *)v40 + 7) = a2->left;
      v44 = a3->left;
    }
    else
    {
      REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), 0x50u);
      *(_DWORD *)(v9 + 48) = 4;
      *(struct _RECTL *)(v9 + 52) = *a2;
      v40 = REGION_CORE::get_pScan((REGION_CORE *)(v9 + 24));
      *(_DWORD *)v40 = 0;
      *((_DWORD *)v40 + 1) = 0x80000000;
      *((_DWORD *)v40 + 2) = a2->top;
      *((_DWORD *)v40 + 3) = 0;
      *((_DWORD *)v40 + 4) = 2;
      *((_DWORD *)v40 + 5) = a2->top;
      *((_DWORD *)v40 + 6) = a3->bottom;
      *((_DWORD *)v40 + 7) = a3->right;
      v44 = a2->right;
    }
    *((_DWORD *)v40 + 8) = v44;
    *((_DWORD *)v40 + 9) = 2;
LABEL_51:
    v42 = (unsigned int)(4 * *((_DWORD *)v40 + 4) + 16);
    *(_DWORD *)((char *)v40 + v42 + 16) = 2;
    *(_DWORD *)((char *)v40 + v42 + 20) = a3->bottom;
    *(_DWORD *)((char *)v40 + v42 + 24) = a2->bottom;
    v43 = a2->left;
    goto LABEL_52;
  }
  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v9 + 24));
  v59 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v59, sizeScan);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v59);
  if ( v59
    && (RGNOBJ::vCopy((RGNOBJ *)&v59, this), (unsigned int)RGNOBJ::bSubtractComplex((RGNOBJ *)&v59, a2, a3, (int)v4)) )
  {
    v28 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v59);
  }
  else
  {
    v28 = 0;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v59);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v59);
  return v28;
}

/*
 * XREFs of ?vStrWrite01@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400F5160
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400F5060 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400F5AF4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall stretch::vStrWrite01(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  struct stretch::_STRRUN *v4; // r13
  struct SURFACE *v5; // r14
  struct stretch::_STRRUN *v8; // r15
  __int64 v9; // r13
  int v10; // r9d
  int v11; // edi
  int *v12; // r15
  int *v13; // rbx
  char v14; // dl
  int v15; // r11d
  int *v16; // rbp
  __int64 v17; // r8
  int *v18; // r10
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  Win32kRS *v23; // rbx
  int v24; // eax
  struct REGION_CORE *v25; // rdx
  struct SCAN *pScan_mut; // rdx
  bool v27; // zf
  int v28; // r9d
  struct SCAN *i; // r8
  LONG v30; // r8d
  int v31; // edi
  char *v32; // rax
  LONG v33; // ecx
  LONG v34; // eax
  LONG left; // r11d
  LONG top; // ebp
  LONG bottom; // r10d
  LONG right; // ebx
  struct stretch::_STRRUN *v39; // r12
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // rcx
  int v43; // ebp
  char v44; // r10
  unsigned int v45; // r10d
  _DWORD *v46; // r15
  int v47; // edi
  char v48; // cl
  _DWORD *v49; // r9
  __int64 v50; // r8
  int v51; // ecx
  _DWORD *v52; // r14
  __int64 j; // rbp
  __int64 v54; // rcx
  __int64 v55; // rdx
  LONG v56; // ebp
  LONG v57; // edx
  int v58; // edx
  int v59; // ebp
  int v60; // ecx
  __int64 v61; // rdx
  int v62; // edi
  __int64 v63; // rbp
  int v64; // r14d
  char *v65; // rdx
  int v66; // eax
  size_t v67; // r15
  char *v68; // rbx
  int v69; // r8d
  int v70; // r9d
  int v71; // r8d
  int v72; // edx
  int v73; // ecx
  int v74; // r10d
  int v75; // edx
  int *v76; // rcx
  int v77; // r9d
  int v78; // r9d
  int v79; // r10d
  int v80; // edx
  int v81; // r10d
  LONG v82; // eax
  LONG v83; // ecx
  LONG v84; // eax
  char v85; // [rsp+20h] [rbp-88h]
  LONG v86; // [rsp+24h] [rbp-84h]
  LONG v87; // [rsp+28h] [rbp-80h]
  struct _RECTL si128; // [rsp+30h] [rbp-78h] BYREF
  int *v89; // [rsp+40h] [rbp-68h]
  int v90; // [rsp+48h] [rbp-60h]
  LONG v91; // [rsp+4Ch] [rbp-5Ch]
  _DWORD *v92; // [rsp+50h] [rbp-58h]
  int v93; // [rsp+58h] [rbp-50h]
  __int64 v94; // [rsp+60h] [rbp-48h]
  struct stretch::_STRRUN *v95; // [rsp+68h] [rbp-40h]

  if ( !a2 )
    return;
  v4 = (struct stretch::_STRRUN *)(this + 2);
  v5 = a4;
  v8 = (struct stretch::_STRRUN *)(this + 2);
  v95 = (struct stretch::_STRRUN *)(this + 2);
  v89 = this + 2;
  if ( a4 )
  {
    v21 = *((_QWORD *)a4 + 7);
    v22 = *(_OWORD *)((char *)a4 + 4);
    *(_QWORD *)((char *)a4 + 108) = 0LL;
    *((_DWORD *)a4 + 32) = 0;
    *((_OWORD *)a4 + 4) = v22;
    v23 = (Win32kRS *)(v21 + 24);
    v24 = *(_DWORD *)(v21 + 48) - 1;
    *((_DWORD *)a4 + 29) = 0;
    *((_DWORD *)a4 + 22) = v24;
    *((_DWORD *)a4 + 31) = 0;
    if ( GetBaseRustGlobals() )
      pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v23, v25);
    else
      pScan_mut = *(struct SCAN **)v23;
    v27 = *((_DWORD *)v5 + 32) == 0;
    *((_QWORD *)v5 + 10) = pScan_mut;
    *((_DWORD *)v5 + 30) = 1;
    if ( v27 )
    {
      v28 = *((_DWORD *)v5 + 17);
      for ( i = (struct SCAN *)((char *)pScan_mut + (unsigned int)(4 * *(_DWORD *)pScan_mut + 16));
            *((_DWORD *)i + 2) <= v28;
            i = (struct SCAN *)((char *)i + (unsigned int)(4 * *(_DWORD *)i + 16)) )
      {
        v27 = (*((_DWORD *)v5 + 22))-- == 1;
        if ( v27 )
          goto LABEL_23;
        *((_QWORD *)v5 + 10) = i;
        pScan_mut = i;
      }
    }
    *((_DWORD *)v5 + 24) = 0;
    *(_QWORD *)((char *)v5 + 100) = 2LL;
LABEL_23:
    v30 = *this;
    v31 = this[1];
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    v91 = v30;
    if ( v30 >= *((_DWORD *)pScan_mut + 1) )
    {
      if ( v30 < *((_DWORD *)pScan_mut + 2) )
      {
        bottom = si128.bottom;
        top = si128.top;
        left = si128.left;
        v87 = si128.bottom;
        v86 = si128.top;
      }
      else
      {
        do
        {
          v32 = (char *)pScan_mut + (unsigned int)(4 * *(_DWORD *)pScan_mut + 16);
          *((_QWORD *)v5 + 10) = v32;
          pScan_mut = (struct SCAN *)v32;
          v33 = *((_DWORD *)v32 + 2);
        }
        while ( v30 >= v33 );
        v34 = *((_DWORD *)v32 + 1);
        left = 0x80000000;
        top = *((_DWORD *)v5 + 2);
        bottom = *((_DWORD *)v5 + 4);
        if ( v34 > top )
          top = v34;
        si128.left = 0x80000000;
        v86 = top;
        si128.top = top;
        if ( v33 < bottom )
          bottom = v33;
        v87 = bottom;
        si128.bottom = bottom;
        if ( top >= bottom )
        {
          bottom = 0x7FFFFFFF;
          v87 = 0x7FFFFFFF;
          si128.bottom = 0x7FFFFFFF;
        }
        else if ( bottom != 0x7FFFFFFF )
        {
          goto LABEL_32;
        }
        top = 0x7FFFFFFF;
        v86 = 0x7FFFFFFF;
        si128.top = 0x7FFFFFFF;
      }
LABEL_32:
      if ( v31 )
      {
        right = si128.right;
        do
        {
          v93 = --v31;
          if ( v30 >= top && v30 < bottom )
          {
            v39 = a2;
            v40 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v30;
            v94 = v40;
            if ( v8 != a2 )
            {
              do
              {
                v41 = *(_DWORD *)v8;
                v42 = (__int64)*(int *)v8 >> 5;
                v43 = *(_DWORD *)v8 + *((_DWORD *)v8 + 1);
                v44 = *(_DWORD *)v8;
                v90 = v43;
                v45 = v44 & 0x1F;
                v46 = (_DWORD *)(v40 + 4 * v42);
                v92 = v46;
                if ( v41 < 0 || v41 >= *((_DWORD *)a3 + 14) )
                {
                  v48 = 0;
                  v47 = 0;
                }
                else
                {
                  v47 = *v46;
                  v48 = 1;
                }
                v85 = v48;
                if ( v41 < v43 )
                {
                  v49 = v89 + 2;
                  v50 = v45;
                  do
                  {
                    if ( v41 < left || v41 >= right )
                    {
                      v52 = (_DWORD *)*((_QWORD *)v5 + 10);
                      for ( j = 0LL; ; j = (unsigned int)(j + 2) )
                      {
                        if ( (_DWORD)j == *v52 )
                        {
                          v5 = a4;
                          v46 = v92;
                          goto LABEL_76;
                        }
                        if ( v41 >= v52[j + 3] )
                        {
                          v54 = (unsigned int)(j + 1);
                          if ( v41 < v52[v54 + 3] )
                            break;
                        }
                      }
                      v5 = a4;
                      v55 = *((_QWORD *)a4 + 10);
                      v56 = *(_DWORD *)(4 * j + 12 + v55);
                      v57 = *(_DWORD *)(v55 + 4 * v54 + 12);
                      v46 = v92;
                      if ( v56 <= *((_DWORD *)a4 + 1) )
                        v56 = *((_DWORD *)a4 + 1);
                      if ( v57 >= *((_DWORD *)a4 + 3) )
                        v57 = *((_DWORD *)a4 + 3);
                      if ( v56 < v57 )
                      {
                        left = v56;
                        si128.left = v56;
                        right = v57;
                      }
LABEL_76:
                      v43 = v90;
                    }
                    if ( v41 >= left && v41 < right )
                    {
                      v51 = dword_140355080[v50];
                      if ( *v49 )
                        v47 |= v51;
                      else
                        v47 &= ~v51;
                    }
                    ++v45;
                    ++v50;
                    ++v41;
                    ++v49;
                    if ( (v45 & 0x20) != 0 )
                    {
                      if ( v85 )
                        *v46 = v47;
                      ++v46;
                      v45 = 0;
                      v50 = 0LL;
                      v92 = v46;
                      if ( v41 < 0 || v41 >= *((_DWORD *)a3 + 14) )
                      {
                        v85 = 0;
                        v47 = 0;
                      }
                      else
                      {
                        v47 = *v46;
                        v85 = 1;
                      }
                    }
                  }
                  while ( v41 < v43 );
                  v48 = v85;
                  v40 = v94;
                  v39 = a2;
                  si128.right = right;
                }
                if ( v48 )
                  *v46 = v47;
                v8 = (struct stretch::_STRRUN *)&v89[v89[1] + 2];
                v89 = (int *)v8;
              }
              while ( v8 != v39 );
              v30 = v91;
              bottom = v87;
              v31 = v93;
              v4 = v95;
              top = v86;
            }
            v8 = v4;
            v89 = (int *)v4;
          }
          v91 = ++v30;
          if ( v30 < top || v30 >= bottom )
          {
            XCLIPOBJ::vFindScan(v5, &si128, v30);
            bottom = si128.bottom;
            top = si128.top;
            right = si128.right;
            left = si128.left;
            v87 = si128.bottom;
            v86 = si128.top;
          }
        }
        while ( v31 );
      }
      return;
    }
    do
    {
      pScan_mut = (struct SCAN *)((char *)pScan_mut - (unsigned int)(4 * *((_DWORD *)pScan_mut - 1) + 16));
      *((_QWORD *)v5 + 10) = pScan_mut;
      v82 = *((_DWORD *)pScan_mut + 1);
    }
    while ( v30 < v82 );
    v83 = *((_DWORD *)v5 + 2);
    left = 0x80000000;
    bottom = *((_DWORD *)v5 + 4);
    si128.left = 0x80000000;
    if ( v82 > v83 )
      v83 = v82;
    v84 = *((_DWORD *)pScan_mut + 2);
    v86 = v83;
    si128.top = v83;
    if ( v84 < bottom )
      bottom = v84;
    v87 = bottom;
    si128.bottom = bottom;
    if ( v83 < bottom )
    {
      if ( v83 != 0x80000000 )
        goto LABEL_113;
    }
    else
    {
      v86 = 0x80000000;
      si128.top = 0x80000000;
    }
    bottom = 0x80000000;
    v87 = 0x80000000;
    si128.bottom = 0x80000000;
LABEL_113:
    top = v86;
    goto LABEL_32;
  }
  v9 = *((_QWORD *)a3 + 10) + *this * *((_DWORD *)a3 + 22);
  if ( v8 != a2 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)v8;
      v11 = *(_DWORD *)v8 + *((_DWORD *)v8 + 1);
      v12 = (int *)(v9 + 4 * ((__int64)*(int *)v8 >> 5));
      v13 = v12;
      if ( v10 >= v11 )
        goto LABEL_14;
      v14 = v10 & 0x1F;
      v15 = *v12;
      v16 = v89;
      if ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
      {
        v17 = v10 & 0x1F;
        v18 = v89 + 2;
        do
        {
          v19 = *v18++;
          v20 = dword_140355080[v17];
          if ( v19 )
            v15 |= v20;
          else
            v15 &= ~v20;
          ++v14;
          ++v17;
          if ( ++v10 >= v11 )
            break;
          if ( (v14 & 0x20) != 0 )
          {
            *v13 = v15;
            v14 = 0;
            v15 = v13[1];
            ++v13;
            v17 = 0LL;
          }
        }
        while ( (unsigned __int64)v13 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
      }
      *v13 = v15;
      if ( this[1] <= 1 )
        goto LABEL_14;
      v58 = *v16;
      v59 = *v16 + v16[1];
      v60 = v58 >> 5;
      v61 = v58 & 0x1F;
      v62 = v59 >> 5;
      v63 = v59 & 0x1F;
      if ( v60 != v62 )
        break;
      v70 = 1;
      v71 = *((_DWORD *)&aulMsk + v61) & ~*((_DWORD *)&aulMsk + v63);
      v72 = *v12;
      do
      {
        ++v70;
        v12 = (int *)((char *)v12 + *((int *)a3 + 22));
        v72 = v71 & v72 | *v12 & ~v71;
        *v12 = v72;
      }
      while ( v70 < this[1] );
LABEL_14:
      v8 = (struct stretch::_STRRUN *)&v89[v89[1] + 2];
      v89 = (int *)v8;
      if ( v8 == a2 )
        return;
    }
    if ( (_DWORD)v61 )
    {
      v78 = 1;
      v79 = *((_DWORD *)&aulMsk + v61);
      v80 = *v12 & v79;
      v81 = ~v79;
      do
      {
        ++v78;
        v12 = (int *)((char *)v12 + *((int *)a3 + 22));
        *v12 = v80 | v81 & *v12;
        v69 = this[1];
      }
      while ( v78 < v69 );
      v73 = v60 + 1;
      if ( v73 == v62 || (v64 = 1, v65 = (char *)(v9 + 4LL * v73), v66 = 4 * (v62 - v73), v69 <= 1) )
      {
LABEL_96:
        if ( (_DWORD)v63 )
        {
          v74 = *((_DWORD *)&aulMsk + v63);
          v75 = 1;
          v76 = (int *)(v9 + 4LL * v62);
          v77 = *v76 & ~v74;
          if ( v69 > 1 )
          {
            do
            {
              ++v75;
              v76 = (int *)((char *)v76 + *((int *)a3 + 22));
              *v76 = v77 | v74 & *v76;
            }
            while ( v75 < this[1] );
          }
        }
        goto LABEL_14;
      }
    }
    else
    {
      v64 = 1;
      v65 = (char *)(v9 + 4LL * v60);
      v66 = 4 * (v62 - v60);
    }
    v67 = v66;
    do
    {
      v68 = &v65[*((int *)a3 + 22)];
      memmove(v68, v65, v67);
      v69 = this[1];
      ++v64;
      v65 = v68;
    }
    while ( v64 < v69 );
    goto LABEL_96;
  }
}

/*
 * XREFs of ?vStrWrite04@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400F3500
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400F5060 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14014AEB0 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall stretch::vStrWrite04(
        stretch *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  XCLIPOBJ *v4; // r12
  int *v5; // rdi
  LONG *v7; // r15
  __int64 v8; // r13
  int v9; // r11d
  int *v10; // r8
  int *v11; // r9
  char v12; // r10
  int v13; // ebx
  int *v14; // r15
  __int64 v15; // r12
  int v16; // r13d
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // r10d
  int v21; // r9d
  int v22; // r12d
  int v23; // edx
  int v24; // r12d
  unsigned __int64 v25; // rcx
  unsigned int v26; // ebx
  int v27; // r8d
  char *v28; // rdx
  int v29; // r13d
  size_t v30; // r12
  char *v31; // rbx
  int v32; // r9d
  int *v33; // rcx
  int v34; // r10d
  int v35; // edx
  LONG v36; // ebx
  LONG v37; // r15d
  int *v38; // rdx
  __int64 v39; // rcx
  LONG v40; // r10d
  int v41; // r11d
  unsigned int v42; // r12d
  int *v43; // r13
  char v44; // al
  int v45; // r15d
  int *v46; // r9
  __int64 v47; // r8
  int v48; // edx
  int v49; // r10d
  int v50; // r9d
  int v51; // edx
  int v52; // r11d
  int v53; // ecx
  int v54; // r11d
  char v55; // [rsp+30h] [rbp-50h]
  int v56; // [rsp+34h] [rbp-4Ch]
  LONG v57; // [rsp+34h] [rbp-4Ch]
  int v58; // [rsp+38h] [rbp-48h]
  int v59; // [rsp+38h] [rbp-48h]
  __int64 i; // [rsp+40h] [rbp-40h]
  LONG v61; // [rsp+40h] [rbp-40h]
  char *v62; // [rsp+48h] [rbp-38h]
  struct _RECTL si128; // [rsp+50h] [rbp-30h] BYREF
  __int64 v64; // [rsp+60h] [rbp-20h]
  int *v65; // [rsp+68h] [rbp-18h]
  __int64 v66; // [rsp+70h] [rbp-10h]
  char *v67; // [rsp+78h] [rbp-8h]
  struct stretch::_STRRUN *v69; // [rsp+C8h] [rbp+48h]

  if ( a2 )
  {
    v69 = a2;
    v4 = a4;
    v67 = (char *)this + 8;
    v5 = (int *)((char *)this + 8);
    v62 = (char *)this + 8;
    v7 = (LONG *)this;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
      v36 = *v7;
      v37 = v7[1];
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v57 = v36;
      XCLIPOBJ::vFindScan(v4, &si128, v36);
      while ( v37 )
      {
        v61 = --v37;
        if ( v36 >= si128.top && v36 < si128.bottom )
        {
          v38 = (int *)v69;
          v39 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v36;
          v66 = v39;
          if ( v5 != (int *)v69 )
          {
            do
            {
              v40 = *v5;
              v41 = *v5 + v5[1];
              v59 = v41;
              v42 = *v5 & 7;
              v43 = (int *)(v39 + 4 * ((__int64)*v5 >> 3));
              if ( *v5 < 0 || v40 >= *((_DWORD *)a3 + 14) )
              {
                v44 = 0;
                v45 = 0;
              }
              else
              {
                v45 = *v43;
                v44 = 1;
              }
              v55 = v44;
              if ( v40 < v41 )
              {
                v46 = v5 + 2;
                v47 = v42;
                v64 = v42;
                v65 = v5 + 2;
                do
                {
                  if ( v40 < si128.left || v40 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment(a4, &si128, v40, (int)v46);
                    v47 = v64;
                    v46 = v65;
                    v41 = v59;
                  }
                  if ( v40 >= si128.left && v40 < si128.right )
                    v45 = v45 & ~dword_140363A68[v47] | dword_140363A68[v47] & (*v46 << dword_140363A48[v47]);
                  ++v47;
                  ++v46;
                  ++v42;
                  v64 = v47;
                  ++v40;
                  v65 = v46;
                  if ( (v42 & 8) != 0 )
                  {
                    if ( v55 )
                      *v43 = v45;
                    v47 = 0LL;
                    ++v43;
                    v42 = 0;
                    v64 = 0LL;
                    if ( v40 < 0 || v40 >= *((_DWORD *)a3 + 14) )
                    {
                      v44 = 0;
                      v55 = 0;
                      v45 = 0;
                    }
                    else
                    {
                      v45 = *v43;
                      v44 = 1;
                      v55 = 1;
                    }
                  }
                  else
                  {
                    v44 = v55;
                  }
                }
                while ( v40 < v41 );
                v5 = (int *)v62;
                v39 = v66;
                v38 = (int *)v69;
              }
              if ( v44 )
                *v43 = v45;
              v5 += v5[1] + 2;
              v62 = (char *)v5;
            }
            while ( v5 != v38 );
            v36 = v57;
            v4 = a4;
            v37 = v61;
          }
          v5 = (int *)v67;
          v62 = v67;
        }
        v57 = ++v36;
        if ( v36 < si128.top || v36 >= si128.bottom )
          XCLIPOBJ::vFindScan(v4, &si128, v36);
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)this * *((_DWORD *)a3 + 22);
      for ( i = v8; v5 != (int *)a2; v62 = (char *)v5 )
      {
        v9 = *v5;
        v10 = (int *)(v8 + 4 * ((__int64)*v5 >> 3));
        v11 = v10;
        if ( *v5 < *v5 + v5[1] )
        {
          v12 = v9 & 7;
          v13 = *v10;
          if ( (unsigned __int64)v10 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v14 = v5 + 2;
            v15 = v9 & 7;
            v16 = *v5 + v5[1];
            do
            {
              v17 = dword_140363A68[v15];
              ++v12;
              v18 = *v14;
              ++v9;
              v19 = dword_140363A48[v15];
              ++v14;
              ++v15;
              v13 = v13 & ~v17 | v17 & (v18 << v19);
              if ( v9 >= v16 )
                break;
              if ( (v12 & 8) != 0 )
              {
                *v11 = v13;
                v12 = 0;
                ++v11;
                v15 = 0LL;
                v13 = *v11;
              }
            }
            while ( (unsigned __int64)v11 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
            v5 = (int *)v62;
            v7 = (LONG *)this;
            v8 = i;
            a2 = v69;
          }
          *v11 = v13;
          v20 = v7[1];
          if ( v20 > 1 )
          {
            v21 = *v5 >> 3;
            v22 = *v5 + v5[1];
            v23 = v22 & 7;
            v24 = v22 >> 3;
            v25 = 4 * (*v5 & 7u);
            v56 = v24;
            v26 = 4 * v23;
            v58 = 4 * v23;
            if ( v21 == v24 )
            {
              v48 = *v10;
              v49 = 1;
              v50 = (__int64)(&aulMsk)[v25 / 2] & ~*((_DWORD *)&aulMsk + v26);
              do
              {
                ++v49;
                v10 = (int *)((char *)v10 + *((int *)a3 + 22));
                v48 = v50 & v48 | *v10 & ~v50;
                *v10 = v48;
              }
              while ( v49 < v7[1] );
            }
            else
            {
              if ( (_DWORD)v25 )
              {
                v51 = 1;
                v52 = *((_DWORD *)&aulMsk + (unsigned int)v25);
                v53 = *v10 & v52;
                v54 = ~v52;
                do
                {
                  ++v51;
                  v10 = (int *)((char *)v10 + *((int *)a3 + 22));
                  *v10 = v53 | v54 & *v10;
                  v20 = v7[1];
                }
                while ( v51 < v20 );
                ++v21;
              }
              v27 = v20;
              if ( v21 != v24 )
              {
                v28 = (char *)(v8 + 4LL * v21);
                v29 = 1;
                if ( v20 > 1 )
                {
                  v30 = 4 * (v24 - v21);
                  do
                  {
                    v31 = &v28[*((int *)a3 + 22)];
                    memmove(v31, v28, v30);
                    v27 = v7[1];
                    ++v29;
                    v28 = v31;
                  }
                  while ( v29 < v27 );
                  v24 = v56;
                  v26 = v58;
                }
                v8 = i;
              }
              if ( v26 )
              {
                v32 = 1;
                v33 = (int *)(v8 + 4LL * v24);
                v34 = *((_DWORD *)&aulMsk + v26);
                v35 = *v33 & ~v34;
                if ( v27 > 1 )
                {
                  do
                  {
                    ++v32;
                    v33 = (int *)((char *)v33 + *((int *)a3 + 22));
                    *v33 = v35 | v34 & *v33;
                  }
                  while ( v32 < v7[1] );
                }
              }
            }
            a2 = v69;
          }
        }
        v5 += v5[1] + 2;
      }
    }
  }
}

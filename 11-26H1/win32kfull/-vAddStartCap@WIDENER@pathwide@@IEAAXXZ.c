/*
 * XREFs of ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010AAB8
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010B0D4 (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BA78 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BF0C (-vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x14010C17C (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddStartCap(pathwide::WIDENER *this)
{
  int v2; // ecx
  struct pathwide::LINEDATA *v3; // rdx
  int v4; // ecx
  __int64 v5; // rbx
  pathwide::WIDEPATHOBJ *v6; // rsi
  _DWORD *v7; // rcx
  int *v8; // r15
  __int64 v9; // rdx
  _QWORD *v10; // r13
  struct _POINTFIX *v11; // r14
  BOOL v12; // r10d
  struct _POINTFIX *i; // r14
  __int64 v14; // rcx
  int v15; // r8d
  unsigned __int64 *v16; // rdx
  int v17; // eax
  struct _POINTFIX *v18; // rcx
  int v19; // r9d
  unsigned __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // ecx
  _DWORD *v27; // rdx
  int v28; // ecx
  struct _POINTFIX *v29; // rbx
  int v30; // r9d
  unsigned __int64 *v31; // rcx
  int v32; // eax
  struct _POINTFIX *v33; // rdx
  int v34; // r8d
  unsigned __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  _DWORD *v39; // rdx
  int v40; // eax
  int v41; // ecx
  BOOL v42; // eax
  int v43; // ecx
  struct pathwide::LINEDATA *v44; // rdx
  __int64 v45; // rbx
  _DWORD *v46; // rcx
  const struct _POINTFIX *v47; // rdi
  unsigned __int64 v48; // rbx
  _DWORD *v49; // rdx
  struct pathwide::LINEDATA *v50; // rdx
  __int64 v51; // rdx
  int v52; // ebx
  unsigned int v53; // esi
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // r14d
  unsigned int v57; // esi
  __int64 v58; // rax
  pathwide::WIDEPATHOBJ *v59; // rbx
  const struct _POINTFIX *v60; // rdi
  _DWORD *v61; // r8
  __int64 v62; // rax
  int v63; // ecx
  int v64; // edx
  _DWORD *v65; // rdx
  struct EVECTORFX *v66; // r8
  const struct _POINTFIX *v67; // rdx
  pathwide::WIDEPATHOBJ *v68; // rcx
  __int64 v69; // [rsp+20h] [rbp-20h]
  int v70; // [rsp+28h] [rbp-18h]
  unsigned __int64 v71; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v72; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v73; // [rsp+90h] [rbp+50h] BYREF
  __int64 v74; // [rsp+98h] [rbp+58h] BYREF

  v2 = *((_DWORD *)this + 321);
  if ( !v2 )
  {
    v3 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
    v4 = *(_DWORD *)v3;
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
    {
      if ( (v4 & 8) == 0 )
        pathwide::WIDENER::vVecDrawCompute(this, v3);
      v5 = *(_QWORD *)(*((_QWORD *)this + 89) + 72LL);
    }
    else
    {
      if ( (v4 & 4) == 0 )
        pathwide::WIDENER::vVecPerpCompute(this, v3);
      v5 = *(_QWORD *)(*((_QWORD *)this + 89) + 64LL);
    }
    v6 = (pathwide::WIDENER *)((char *)this + 1128);
    v74 = v5;
    v7 = (_DWORD *)*((_QWORD *)this + 157);
    v8 = (int *)((char *)this + 692);
    v70 = v5;
    if ( (unsigned __int64)v7 >= *((_QWORD *)this + 158) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        (pathwide::WIDENER *)((char *)this + 1128),
        (const struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v74,
        1);
    }
    else
    {
      *v7 = *v8 - v5;
      *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = *((_DWORD *)this + 174) - HIDWORD(v74);
      *((_QWORD *)this + 157) += 8LL;
    }
    v9 = *((_QWORD *)this + 89);
    v69 = v9;
    LODWORD(v72) = *((_DWORD *)this + 10) & 0x10;
    v10 = *(_QWORD **)(v9 + 8);
    v11 = *(struct _POINTFIX **)(v9 + 16);
    v12 = (*(_DWORD *)v9 & 1) == 0;
    LODWORD(v71) = v12;
    if ( !(_DWORD)v72 && *(_QWORD *)(v9 + 24) <= *(_QWORD *)(v9 + 32) )
    {
      pathwide::vAddNice(
        (pathwide::WIDENER *)((char *)this + 1128),
        (pathwide::WIDENER *)((char *)this + 692),
        v11,
        (struct EVECTORFX *)v12,
        v9);
      v9 = v69;
      v12 = v71;
    }
    for ( i = v11 + 1; ; i = (struct _POINTFIX *)(v10 + 4) )
    {
      v14 = *(_QWORD *)(v9 + 8);
      if ( v10 == (_QWORD *)v14 && (unsigned __int64)i <= *(_QWORD *)(v9 + 16) )
      {
        if ( (unsigned __int64)i < *(_QWORD *)(v9 + 16) )
        {
          while ( 1 )
          {
            v15 = *v8;
            v16 = (unsigned __int64 *)i;
            v17 = *v8;
            v73 = 0LL;
            v18 = i++;
            v19 = v12;
            if ( ((*((_BYTE *)this + 696) | (unsigned __int8)v17) & 0xF) == 0 )
              break;
LABEL_25:
            v24 = (_DWORD *)*((_QWORD *)this + 157);
            if ( (unsigned __int64)v24 >= *((_QWORD *)this + 158) )
            {
              pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
                (pathwide::WIDENER *)((char *)this + 1128),
                (const struct _POINTFIX *)((char *)this + 692),
                (struct EVECTORFX *)v16,
                v19);
              v12 = v71;
            }
            else
            {
              v25 = *(_DWORD *)v16;
              if ( v19 )
              {
                *v24 = v15 - v25;
                v26 = *((_DWORD *)this + 174) - *((_DWORD *)v16 + 1);
              }
              else
              {
                *v24 = v15 + v25;
                v26 = *((_DWORD *)v16 + 1) + *((_DWORD *)this + 174);
              }
              *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v26;
              *((_QWORD *)this + 157) += 8LL;
            }
            v9 = v69;
            if ( (unsigned __int64)i >= *(_QWORD *)(v69 + 16) )
              goto LABEL_30;
          }
          if ( v12 )
          {
            LODWORD(v20) = -*(_DWORD *)v16;
            v21 = -v18->y;
            v73 = __PAIR64__(v21, v20);
            v19 = 0;
          }
          else
          {
            v20 = (unsigned __int64)*v18;
            v73 = (unsigned __int64)*v18;
            v21 = HIDWORD(v73);
          }
          if ( (int)v20 > 0 )
          {
            v22 = v20 - 1;
LABEL_19:
            LODWORD(v73) = v22;
          }
          else if ( (v20 & 0x80000000) != 0LL )
          {
            v22 = v20 + 1;
            goto LABEL_19;
          }
          if ( v21 > 0 )
          {
            v23 = v21 - 1;
LABEL_23:
            HIDWORD(v73) = v23;
          }
          else if ( v21 < 0 )
          {
            v23 = v21 + 1;
            goto LABEL_23;
          }
          v16 = &v73;
          goto LABEL_25;
        }
LABEL_30:
        if ( !(_DWORD)v72 && *(_QWORD *)(v9 + 24) > *(_QWORD *)(v9 + 32) )
          pathwide::vAddNice(
            (pathwide::WIDENER *)((char *)this + 1128),
            (pathwide::WIDENER *)((char *)this + 692),
            i,
            (struct EVECTORFX *)v12,
            v69);
        v27 = (_DWORD *)*((_QWORD *)this + 157);
        if ( (unsigned __int64)v27 < *((_QWORD *)this + 158) )
        {
          *v27 = v70 + *v8;
          v28 = *((_DWORD *)this + 174) + HIDWORD(v74);
          goto LABEL_33;
        }
        v66 = (struct EVECTORFX *)&v74;
        v67 = (const struct _POINTFIX *)((char *)this + 692);
LABEL_92:
        v68 = v6;
LABEL_93:
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v68, v67, v66, 0);
        return;
      }
      if ( i >= (struct _POINTFIX *)&v10[(unsigned int)(*(_DWORD *)(v14 + 20) - 1) + 3] )
        goto LABEL_55;
      v29 = (struct _POINTFIX *)&v10[(unsigned int)(*(_DWORD *)(v14 + 20) - 1) + 3];
      do
      {
        v30 = *v8;
        v31 = (unsigned __int64 *)i;
        v32 = *v8;
        v73 = 0LL;
        v33 = i++;
        v34 = v12;
        if ( ((*((_BYTE *)this + 696) | (unsigned __int8)v32) & 0xF) != 0 )
          goto LABEL_49;
        if ( v12 )
        {
          LODWORD(v35) = -*(_DWORD *)v31;
          v36 = -v33->y;
          v73 = __PAIR64__(v36, v35);
          v34 = 0;
        }
        else
        {
          v35 = (unsigned __int64)*v33;
          v73 = (unsigned __int64)*v33;
          v36 = HIDWORD(v73);
        }
        if ( (int)v35 > 0 )
        {
          v37 = v35 - 1;
        }
        else
        {
          if ( (v35 & 0x80000000) == 0LL )
            goto LABEL_44;
          v37 = v35 + 1;
        }
        LODWORD(v73) = v37;
LABEL_44:
        if ( v36 > 0 )
        {
          v38 = v36 - 1;
          goto LABEL_47;
        }
        if ( v36 < 0 )
        {
          v38 = v36 + 1;
LABEL_47:
          HIDWORD(v73) = v38;
        }
        v31 = &v73;
LABEL_49:
        v39 = (_DWORD *)*((_QWORD *)this + 157);
        if ( (unsigned __int64)v39 >= *((_QWORD *)this + 158) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
            (pathwide::WIDENER *)((char *)this + 1128),
            (const struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)v31,
            v34);
          v12 = v71;
        }
        else
        {
          v40 = *(_DWORD *)v31;
          if ( v34 )
          {
            *v39 = v30 - v40;
            v41 = *((_DWORD *)this + 174) - *((_DWORD *)v31 + 1);
          }
          else
          {
            *v39 = v30 + v40;
            v41 = *((_DWORD *)this + 174) + *((_DWORD *)v31 + 1);
          }
          *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v41;
          *((_QWORD *)this + 157) += 8LL;
        }
      }
      while ( i < v29 );
      v9 = v69;
LABEL_55:
      v10 = (_QWORD *)*v10;
      if ( !v10 )
      {
        v10 = *(_QWORD **)(*((_QWORD *)this + 103) + 32LL);
        v42 = !v12;
        v12 = v42;
        LODWORD(v71) = v42;
      }
    }
  }
  v43 = v2 - 1;
  if ( v43 )
  {
    if ( v43 == 1 )
    {
      v44 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
      if ( (*(_DWORD *)v44 & 4) == 0 )
        pathwide::WIDENER::vVecPerpCompute(this, v44);
      v45 = *((_QWORD *)this + 89);
      v6 = (pathwide::WIDENER *)((char *)this + 1128);
      v46 = (_DWORD *)*((_QWORD *)this + 157);
      v47 = (const struct _POINTFIX *)((char *)this + 692);
      v48 = *(_QWORD *)(v45 + 64);
      v71 = v48;
      if ( (unsigned __int64)v46 >= *((_QWORD *)v6 + 17) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v6, v47, (struct EVECTORFX *)&v71, 1);
      }
      else
      {
        *v46 = v47->x - v48;
        *(_DWORD *)(*((_QWORD *)v6 + 16) + 4LL) = v47->y - HIDWORD(v48);
        *((_QWORD *)v6 + 16) += 8LL;
      }
      v49 = (_DWORD *)*((_QWORD *)v6 + 16);
      if ( (unsigned __int64)v49 >= *((_QWORD *)v6 + 17) )
      {
        v66 = (struct EVECTORFX *)&v71;
        v67 = v47;
        goto LABEL_92;
      }
      *v49 = v48 + v47->x;
      v28 = HIDWORD(v48) + v47->y;
LABEL_33:
      *(_DWORD *)(*((_QWORD *)v6 + 16) + 4LL) = v28;
      *((_QWORD *)v6 + 16) += 8LL;
    }
  }
  else
  {
    v50 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
    if ( (*(_DWORD *)v50 & 2) == 0 )
      pathwide::WIDENER::vVecSquareCompute(this, v50);
    v51 = *((_QWORD *)this + 89);
    v52 = -(int)*(_QWORD *)(v51 + 56);
    v53 = -HIDWORD(*(_QWORD *)(v51 + 56));
    v71 = __PAIR64__(v53, v52);
    v72 = __PAIR64__(v53, v52);
    if ( (*(_DWORD *)v51 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v51);
    v54 = *((_QWORD *)this + 89);
    v55 = *(_QWORD *)(v54 + 64);
    v56 = v52 + v55;
    v57 = HIDWORD(v55) + v53;
    LODWORD(v71) = v52 + v55;
    LODWORD(v55) = *(_DWORD *)v54;
    HIDWORD(v71) = v57;
    if ( (v55 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v54);
    v58 = *((_QWORD *)this + 89);
    v59 = (pathwide::WIDENER *)((char *)this + 1128);
    v60 = (const struct _POINTFIX *)((char *)this + 692);
    v61 = (_DWORD *)*((_QWORD *)v59 + 16);
    v62 = *(_QWORD *)(v58 + 64);
    v63 = v72 - v62;
    v64 = HIDWORD(v72) - HIDWORD(v62);
    LODWORD(v72) = v72 - v62;
    HIDWORD(v72) -= HIDWORD(v62);
    if ( (unsigned __int64)v61 >= *((_QWORD *)v59 + 17) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v59, v60, (struct EVECTORFX *)&v72, 0);
    }
    else
    {
      *v61 = v60->x + v63;
      *(_DWORD *)(*((_QWORD *)v59 + 16) + 4LL) = v64 + v60->y;
      *((_QWORD *)v59 + 16) += 8LL;
    }
    v65 = (_DWORD *)*((_QWORD *)v59 + 16);
    if ( (unsigned __int64)v65 >= *((_QWORD *)v59 + 17) )
    {
      v66 = (struct EVECTORFX *)&v71;
      v67 = v60;
      v68 = v59;
      goto LABEL_93;
    }
    *v65 = v56 + v60->x;
    *(_DWORD *)(*((_QWORD *)v59 + 16) + 4LL) = v57 + v60->y;
    *((_QWORD *)v59 + 16) += 8LL;
  }
}

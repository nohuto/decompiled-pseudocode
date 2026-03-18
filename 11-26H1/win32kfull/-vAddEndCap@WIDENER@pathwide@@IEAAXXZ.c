/*
 * XREFs of ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010A494
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010B0D4 (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BA78 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BF0C (-vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x14010C17C (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddEndCap(pathwide::WIDENER *this)
{
  int v2; // ecx
  struct pathwide::LINEDATA *v3; // rdx
  int v4; // ecx
  __int64 v5; // rbx
  pathwide::WIDEPATHOBJ *v6; // rsi
  _DWORD *v7; // rdx
  int *v8; // r12
  __int64 v9; // rdx
  _QWORD *v10; // r13
  unsigned int v11; // r10d
  struct _POINTFIX *v12; // r14
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
  _DWORD *v27; // rcx
  int v28; // ecx
  struct _POINTFIX *v29; // rbx
  int v30; // r9d
  unsigned __int64 *v31; // rdx
  int v32; // eax
  struct _POINTFIX *v33; // rcx
  int v34; // r8d
  unsigned __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  _DWORD *v39; // rcx
  int v40; // eax
  int v41; // ecx
  BOOL v42; // eax
  int v43; // ecx
  struct pathwide::LINEDATA *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // r15d
  int v49; // r12d
  __int64 v50; // rax
  pathwide::WIDEPATHOBJ *v51; // rbx
  const struct _POINTFIX *v52; // rdi
  _DWORD *v53; // rdx
  __int64 v54; // rax
  int v55; // esi
  int v56; // r14d
  _DWORD *v57; // rdx
  struct pathwide::LINEDATA *v58; // rdx
  __int64 v59; // rbx
  _DWORD *v60; // rdx
  const struct _POINTFIX *v61; // rdi
  __int64 v62; // rbx
  _DWORD *v63; // rcx
  int v64; // r9d
  struct EVECTORFX *v65; // r8
  const struct _POINTFIX *v66; // rdx
  pathwide::WIDEPATHOBJ *v67; // rcx
  __int64 v68; // [rsp+20h] [rbp-28h]
  int v69; // [rsp+28h] [rbp-20h]
  __int64 v70; // [rsp+90h] [rbp+48h] BYREF
  __int64 v71; // [rsp+98h] [rbp+50h] BYREF
  unsigned __int64 v72; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v73; // [rsp+A8h] [rbp+60h] BYREF

  v2 = *((_DWORD *)this + 321);
  if ( !v2 )
  {
    v3 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 88);
    v4 = *(_DWORD *)v3;
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
    {
      if ( (v4 & 8) == 0 )
        pathwide::WIDENER::vVecDrawCompute(this, v3);
      v5 = *(_QWORD *)(*((_QWORD *)this + 88) + 72LL);
    }
    else
    {
      if ( (v4 & 4) == 0 )
        pathwide::WIDENER::vVecPerpCompute(this, v3);
      v5 = *(_QWORD *)(*((_QWORD *)this + 88) + 64LL);
    }
    v6 = (pathwide::WIDENER *)((char *)this + 1128);
    v73 = v5;
    v7 = (_DWORD *)*((_QWORD *)this + 157);
    v8 = (int *)((char *)this + 692);
    v69 = v5;
    if ( (unsigned __int64)v7 >= *((_QWORD *)this + 158) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        (pathwide::WIDENER *)((char *)this + 1128),
        (const struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v73,
        0);
    }
    else
    {
      *v7 = v5 + *v8;
      *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = *((_DWORD *)this + 174) + HIDWORD(v73);
      *((_QWORD *)this + 157) += 8LL;
    }
    v9 = *((_QWORD *)this + 88);
    v68 = v9;
    LODWORD(v71) = *((_DWORD *)this + 10) & 0x10;
    v10 = *(_QWORD **)(v9 + 8);
    v11 = *(_DWORD *)v9 & 1;
    v12 = *(struct _POINTFIX **)(v9 + 16);
    LODWORD(v70) = v11;
    if ( !(_DWORD)v71 && *(_QWORD *)(v9 + 24) <= *(_QWORD *)(v9 + 32) )
    {
      pathwide::vAddNice(
        (pathwide::WIDENER *)((char *)this + 1128),
        (pathwide::WIDENER *)((char *)this + 692),
        v12,
        (struct EVECTORFX *)v11,
        v9);
      v9 = v68;
      v11 = v70;
    }
    for ( i = v12 + 1; ; i = (struct _POINTFIX *)(v10 + 4) )
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
            v72 = 0LL;
            v18 = i++;
            v19 = v11;
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
              v11 = v70;
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
            v9 = v68;
            if ( (unsigned __int64)i >= *(_QWORD *)(v68 + 16) )
              goto LABEL_30;
          }
          if ( v11 )
          {
            LODWORD(v20) = -*(_DWORD *)v16;
            v21 = -v18->y;
            v72 = __PAIR64__(v21, v20);
            v19 = 0;
          }
          else
          {
            v20 = (unsigned __int64)*v18;
            v72 = (unsigned __int64)*v18;
            v21 = HIDWORD(v72);
          }
          if ( (int)v20 > 0 )
          {
            v22 = v20 - 1;
LABEL_19:
            LODWORD(v72) = v22;
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
            HIDWORD(v72) = v23;
          }
          else if ( v21 < 0 )
          {
            v23 = v21 + 1;
            goto LABEL_23;
          }
          v16 = &v72;
          goto LABEL_25;
        }
LABEL_30:
        if ( !(_DWORD)v71 && *(_QWORD *)(v9 + 24) > *(_QWORD *)(v9 + 32) )
          pathwide::vAddNice(
            (pathwide::WIDENER *)((char *)this + 1128),
            (pathwide::WIDENER *)((char *)this + 692),
            i,
            (struct EVECTORFX *)v11,
            v68);
        v27 = (_DWORD *)*((_QWORD *)this + 157);
        if ( (unsigned __int64)v27 < *((_QWORD *)this + 158) )
        {
          *v27 = *v8 - v69;
          v28 = *((_DWORD *)this + 174) - HIDWORD(v73);
          goto LABEL_33;
        }
        v64 = 1;
        v65 = (struct EVECTORFX *)&v73;
        v66 = (const struct _POINTFIX *)((char *)this + 692);
LABEL_92:
        v67 = v6;
LABEL_93:
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v67, v66, v65, v64);
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
        v72 = 0LL;
        v33 = i++;
        v34 = v11;
        if ( ((*((_BYTE *)this + 696) | (unsigned __int8)v32) & 0xF) != 0 )
          goto LABEL_49;
        if ( v11 )
        {
          LODWORD(v35) = -*(_DWORD *)v31;
          v36 = -v33->y;
          v72 = __PAIR64__(v36, v35);
          v34 = 0;
        }
        else
        {
          v35 = (unsigned __int64)*v33;
          v72 = (unsigned __int64)*v33;
          v36 = HIDWORD(v72);
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
        LODWORD(v72) = v37;
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
          HIDWORD(v72) = v38;
        }
        v31 = &v72;
LABEL_49:
        v39 = (_DWORD *)*((_QWORD *)this + 157);
        if ( (unsigned __int64)v39 >= *((_QWORD *)this + 158) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
            (pathwide::WIDENER *)((char *)this + 1128),
            (const struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)v31,
            v34);
          v11 = v70;
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
            v41 = *((_DWORD *)v31 + 1) + *((_DWORD *)this + 174);
          }
          *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v41;
          *((_QWORD *)this + 157) += 8LL;
        }
      }
      while ( i < v29 );
      v9 = v68;
LABEL_55:
      v10 = (_QWORD *)*v10;
      if ( !v10 )
      {
        v10 = *(_QWORD **)(*((_QWORD *)this + 103) + 32LL);
        v42 = v11 == 0;
        v11 = v42;
        LODWORD(v70) = v42;
      }
    }
  }
  v43 = v2 - 1;
  if ( v43 )
  {
    if ( v43 == 1 )
    {
      v58 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 88);
      if ( (*(_DWORD *)v58 & 4) == 0 )
        pathwide::WIDENER::vVecPerpCompute(this, v58);
      v59 = *((_QWORD *)this + 88);
      v6 = (pathwide::WIDENER *)((char *)this + 1128);
      v60 = (_DWORD *)*((_QWORD *)this + 157);
      v61 = (const struct _POINTFIX *)((char *)this + 692);
      v62 = *(_QWORD *)(v59 + 64);
      v70 = v62;
      if ( (unsigned __int64)v60 >= *((_QWORD *)v6 + 17) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v6, v61, (struct EVECTORFX *)&v70, 0);
      }
      else
      {
        *v60 = v62 + v61->x;
        *(_DWORD *)(*((_QWORD *)v6 + 16) + 4LL) = HIDWORD(v62) + v61->y;
        *((_QWORD *)v6 + 16) += 8LL;
      }
      v63 = (_DWORD *)*((_QWORD *)v6 + 16);
      if ( (unsigned __int64)v63 >= *((_QWORD *)v6 + 17) )
      {
        v64 = 1;
        v65 = (struct EVECTORFX *)&v70;
        v66 = v61;
        goto LABEL_92;
      }
      *v63 = v61->x - v62;
      v28 = v61->y - HIDWORD(v62);
LABEL_33:
      *(_DWORD *)(*((_QWORD *)v6 + 16) + 4LL) = v28;
      *((_QWORD *)v6 + 16) += 8LL;
    }
  }
  else
  {
    v44 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 88);
    if ( (*(_DWORD *)v44 & 2) == 0 )
      pathwide::WIDENER::vVecSquareCompute(this, v44);
    v45 = *((_QWORD *)this + 88);
    v70 = *(_QWORD *)(v45 + 56);
    v71 = v70;
    if ( (*(_DWORD *)v45 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v45);
    v46 = *((_QWORD *)this + 88);
    v47 = *(_QWORD *)(v46 + 64);
    v48 = v47 + v70;
    v49 = HIDWORD(v47) + HIDWORD(v70);
    LODWORD(v70) = v47 + v70;
    LODWORD(v47) = *(_DWORD *)v46;
    HIDWORD(v70) += HIDWORD(v47);
    if ( (v47 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v46);
    v50 = *((_QWORD *)this + 88);
    v51 = (pathwide::WIDENER *)((char *)this + 1128);
    v52 = (const struct _POINTFIX *)((char *)this + 692);
    v53 = (_DWORD *)*((_QWORD *)v51 + 16);
    v54 = *(_QWORD *)(v50 + 64);
    v55 = v71 - v54;
    v56 = HIDWORD(v71) - HIDWORD(v54);
    LODWORD(v71) = v71 - v54;
    HIDWORD(v71) -= HIDWORD(v54);
    if ( (unsigned __int64)v53 >= *((_QWORD *)v51 + 17) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v51, v52, (struct EVECTORFX *)&v70, 0);
    }
    else
    {
      *v53 = v48 + v52->x;
      *(_DWORD *)(*((_QWORD *)v51 + 16) + 4LL) = v49 + v52->y;
      *((_QWORD *)v51 + 16) += 8LL;
    }
    v57 = (_DWORD *)*((_QWORD *)v51 + 16);
    if ( (unsigned __int64)v57 >= *((_QWORD *)v51 + 17) )
    {
      v64 = 0;
      v65 = (struct EVECTORFX *)&v71;
      v66 = v52;
      v67 = v51;
      goto LABEL_93;
    }
    *v57 = v55 + v52->x;
    *(_DWORD *)(*((_QWORD *)v51 + 16) + 4LL) = v56 + v52->y;
    *((_QWORD *)v51 + 16) += 8LL;
  }
}

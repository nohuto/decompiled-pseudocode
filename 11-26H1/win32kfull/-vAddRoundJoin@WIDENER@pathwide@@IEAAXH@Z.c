/*
 * XREFs of ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x14010B518
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x140108988 (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1401087D8 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010B0D4 (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BA78 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z @ 0x14010BC2C (-cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z.c)
 *     ?vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z @ 0x14010C244 (-vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddRoundJoin(pathwide::WIDENER *this, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // r9
  int v8; // r14d
  int v9; // r13d
  __int64 v10; // r15
  struct pathwide::LINEDATA *v11; // rdx
  int v12; // eax
  __int64 v13; // r12
  _DWORD *v14; // rdx
  _DWORD *v15; // rsi
  unsigned int v16; // edx
  _DWORD *v17; // rcx
  struct pathwide::LINEDATA *v18; // r9
  struct pathwide::LINEDATA *v19; // r8
  pathwide::WIDEPENOBJ *v20; // rcx
  unsigned int v21; // eax
  int v22; // r8d
  _QWORD *v23; // rcx
  unsigned int v24; // r15d
  _DWORD *v25; // rdx
  int v26; // edx
  _DWORD *v27; // rcx
  _DWORD *v28; // rdx
  _DWORD *v29; // rdx
  pathwide::WIDEPATHOBJ *v30; // rcx
  int v31; // r8d
  __int64 v32; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v33[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+8h]

  v2 = *((_QWORD *)this + 88);
  v3 = *((_QWORD *)this + 89);
  v5 = *(int *)(v3 + 48);
  v6 = *(int *)(v3 + 52);
  v7 = *(int *)(v2 + 48);
  if ( (int)(v7 ^ v5 ^ v6 ^ *(_DWORD *)(v2 + 52)) < 0 )
    v8 = ((unsigned int)v7 ^ (unsigned int)v6) >> 31;
  else
    v8 = v7 * v6 < v5 * *(int *)(v2 + 52);
  if ( (*((_DWORD *)this + 10) & 0x10) != 0 || a2 )
  {
    if ( (*(_DWORD *)v2 & 8) == 0 )
      pathwide::WIDENER::vVecDrawCompute(this, (struct pathwide::LINEDATA *)v2);
    v9 = 0;
    v10 = *(_QWORD *)(*((_QWORD *)this + 88) + 72LL);
  }
  else
  {
    if ( (*(_DWORD *)v2 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v2);
    v9 = 1;
    v10 = *(_QWORD *)(*((_QWORD *)this + 88) + 64LL);
  }
  v11 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
  v32 = v10;
  v12 = *(_DWORD *)v11;
  if ( v9 )
  {
    if ( (v12 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, v11);
    v13 = *(_QWORD *)(*((_QWORD *)this + 89) + 64LL);
  }
  else
  {
    if ( (v12 & 8) == 0 )
      pathwide::WIDENER::vVecDrawCompute(this, v11);
    v13 = *(_QWORD *)(*((_QWORD *)this + 89) + 72LL);
  }
  v14 = (_DWORD *)*((_QWORD *)this + 157);
  v15 = (_DWORD *)((char *)this + 692);
  v33[0] = v13;
  if ( (unsigned __int64)v14 >= *((_QWORD *)this + 158) )
  {
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
      (pathwide::WIDENER *)((char *)this + 1128),
      (const struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v32,
      0);
    v16 = HIDWORD(v10);
  }
  else
  {
    *v14 = v10 + *v15;
    v16 = HIDWORD(v10);
    *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = HIDWORD(v10) + *((_DWORD *)this + 174);
    *((_QWORD *)this + 157) += 8LL;
  }
  v17 = (_DWORD *)*((_QWORD *)this + 138);
  if ( (unsigned __int64)v17 >= *((_QWORD *)this + 139) )
  {
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
      (pathwide::WIDENER *)((char *)this + 976),
      (const struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v32,
      1);
    v16 = HIDWORD(v10);
  }
  else
  {
    *v17 = *v15 - v10;
    *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - v16;
    *((_QWORD *)this + 138) += 8LL;
  }
  if ( __PAIR64__(v16, v10) != v13 )
  {
    v18 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
    v19 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 88);
    v20 = (pathwide::WIDENER *)((char *)this + 816);
    if ( v8 )
    {
      v21 = pathwide::WIDEPENOBJ::cptAddRound(v20, this, v19, v18, v8, v9, v9);
      v23 = (_QWORD *)*((_QWORD *)this + 138);
      v24 = v21;
      if ( (unsigned __int64)v23 >= *((_QWORD *)this + 139) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 976),
          (const struct _POINTFIX *)((char *)this + 692),
          0LL,
          0);
      }
      else
      {
        *v23 = *(_QWORD *)v15;
        *((_QWORD *)this + 138) += 8LL;
      }
      if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
        goto LABEL_20;
      pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)v33, v22);
      if ( v24 )
        pathwide::WIDEPENOBJ::cptAddRound(
          (pathwide::WIDENER *)((char *)this + 816),
          this,
          *((struct pathwide::LINEDATA **)this + 89),
          *((struct pathwide::LINEDATA **)this + 88),
          v8 ^ 1,
          v9,
          v9);
      pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v32, v31);
      v30 = (pathwide::WIDENER *)((char *)this + 976);
    }
    else
    {
      v34 = pathwide::WIDEPENOBJ::cptAddRound(v20, this, v19, v18, 0, v9, v9);
      pathwide::WIDEPATHOBJ::vAddPoint(
        (pathwide::WIDENER *)((char *)this + 1128),
        (const struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      {
LABEL_20:
        v25 = (_DWORD *)*((_QWORD *)this + 157);
        if ( (unsigned __int64)v25 >= *((_QWORD *)this + 158) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
            (pathwide::WIDENER *)((char *)this + 1128),
            (const struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)v33,
            0);
          v26 = HIDWORD(v13);
        }
        else
        {
          *v25 = v13 + *v15;
          v26 = HIDWORD(v13);
          *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = HIDWORD(v13) + *((_DWORD *)this + 174);
          *((_QWORD *)this + 157) += 8LL;
        }
        v27 = (_DWORD *)*((_QWORD *)this + 138);
        if ( (unsigned __int64)v27 >= *((_QWORD *)this + 139) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
            (pathwide::WIDENER *)((char *)this + 976),
            (const struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)v33,
            1);
        }
        else
        {
          *v27 = *v15 - v13;
          *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - v26;
          *((_QWORD *)this + 138) += 8LL;
        }
        return;
      }
      v28 = (_DWORD *)*((_QWORD *)this + 157);
      if ( (unsigned __int64)v28 >= *((_QWORD *)this + 158) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 1128),
          (const struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)v33,
          0);
      }
      else
      {
        *v28 = v13 + *v15;
        *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = *((_DWORD *)this + 174) + HIDWORD(v13);
        *((_QWORD *)this + 157) += 8LL;
      }
      if ( v34 )
        pathwide::WIDEPENOBJ::cptAddRound(
          (pathwide::WIDENER *)((char *)this + 816),
          this,
          *((struct pathwide::LINEDATA **)this + 89),
          *((struct pathwide::LINEDATA **)this + 88),
          1,
          v9,
          v9);
      v29 = (_DWORD *)*((_QWORD *)this + 157);
      if ( (unsigned __int64)v29 >= *((_QWORD *)this + 158) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 1128),
          (const struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v32,
          0);
      }
      else
      {
        *v29 = v10 + *v15;
        *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = *((_DWORD *)this + 174) + HIDWORD(v10);
        *((_QWORD *)this + 157) += 8LL;
      }
      v30 = (pathwide::WIDENER *)((char *)this + 1128);
    }
    pathwide::WIDEPATHOBJ::vAddPoint(v30, (const struct _POINTFIX *)((char *)this + 692));
    goto LABEL_20;
  }
}

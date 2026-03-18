/*
 * XREFs of ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A4884
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A44FC (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1400A41F8 (-vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1400A4260 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z @ 0x1400A4CE8 (-bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A5728 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A6C70 (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z @ 0x140177700 (-cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140177B24 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddRoundJoin(pathwide::WIDENER *this, int a2, struct EVECTORFX *a3)
{
  struct pathwide::LINEDATA *v5; // r11
  int v6; // r12d
  __int64 v7; // r15
  struct pathwide::LINEDATA *v8; // rdx
  int v9; // eax
  __int64 v10; // r14
  _DWORD *v11; // rdx
  _DWORD *v12; // rsi
  int v13; // edx
  _DWORD *v14; // rcx
  int v15; // r13d
  pathwide::WIDEPENOBJ *v16; // rax
  struct pathwide::LINEDATA *v17; // r9
  struct pathwide::LINEDATA *v18; // r8
  unsigned int v19; // r15d
  _DWORD *v20; // rdx
  _DWORD *v21; // rcx
  pathwide::WIDEPATHOBJ *v22; // rcx
  _DWORD *v23; // rdx
  _DWORD *v24; // rdx
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26; // [rsp+48h] [rbp-40h]
  int v27; // [rsp+90h] [rbp+8h]
  int v28; // [rsp+90h] [rbp+8h]
  __int64 v29; // [rsp+A8h] [rbp+20h] BYREF

  v27 = pathwide::bTurnLeftRandom(
          (pathwide *)(*((_QWORD *)this + 88) + 48LL),
          (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL),
          a3);
  if ( (*((_DWORD *)this + 10) & 0x10) != 0 || a2 )
  {
    if ( (*(_DWORD *)v5 & 8) == 0 )
      pathwide::WIDENER::vVecDrawCompute(this, v5);
    v6 = 0;
    v7 = *(_QWORD *)(*((_QWORD *)this + 88) + 72LL);
  }
  else
  {
    if ( (*(_DWORD *)v5 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, v5);
    v6 = 1;
    v7 = *(_QWORD *)(*((_QWORD *)this + 88) + 64LL);
  }
  v8 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
  v29 = v7;
  v9 = *(_DWORD *)v8;
  if ( v6 )
  {
    if ( (v9 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, v8);
    v10 = *(_QWORD *)(*((_QWORD *)this + 89) + 64LL);
  }
  else
  {
    if ( (v9 & 8) == 0 )
      pathwide::WIDENER::vVecDrawCompute(this, v8);
    v10 = *(_QWORD *)(*((_QWORD *)this + 89) + 72LL);
  }
  v26 = v10;
  v11 = (_DWORD *)*((_QWORD *)this + 157);
  v12 = (_DWORD *)((char *)this + 692);
  v25 = v10;
  if ( (unsigned __int64)v11 >= *((_QWORD *)this + 158) )
  {
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
      (pathwide::WIDENER *)((char *)this + 1128),
      (const struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v29,
      0);
    v13 = HIDWORD(v7);
  }
  else
  {
    *v11 = v7 + *v12;
    v13 = HIDWORD(v7);
    *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = HIDWORD(v7) + *((_DWORD *)this + 174);
    *((_QWORD *)this + 157) += 8LL;
  }
  v14 = (_DWORD *)*((_QWORD *)this + 138);
  if ( (unsigned __int64)v14 >= *((_QWORD *)this + 139) )
  {
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
      (pathwide::WIDENER *)((char *)this + 976),
      (const struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v29,
      1);
    v13 = HIDWORD(v7);
  }
  else
  {
    *v14 = *v12 - v7;
    *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - v13;
    *((_QWORD *)this + 138) += 8LL;
  }
  v15 = HIDWORD(v26);
  if ( (_DWORD)v7 != (_DWORD)v10 || v13 != HIDWORD(v26) )
  {
    v16 = (pathwide::WIDENER *)((char *)this + 816);
    v17 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
    v18 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 88);
    if ( v27 )
    {
      v19 = pathwide::WIDEPENOBJ::cptAddRound(v16, this, v18, v17, v27, v6, v6);
      pathwide::WIDEPATHOBJ::vAddPoint(
        (pathwide::WIDENER *)((char *)this + 976),
        (const struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      {
LABEL_16:
        v20 = (_DWORD *)*((_QWORD *)this + 157);
        if ( (unsigned __int64)v20 >= *((_QWORD *)this + 158) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
            (pathwide::WIDENER *)((char *)this + 1128),
            (const struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)&v25,
            0);
        }
        else
        {
          *v20 = v10 + *v12;
          *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v15 + *((_DWORD *)this + 174);
          *((_QWORD *)this + 157) += 8LL;
        }
        v21 = (_DWORD *)*((_QWORD *)this + 138);
        if ( (unsigned __int64)v21 >= *((_QWORD *)this + 139) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
            (pathwide::WIDENER *)((char *)this + 976),
            (const struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)&v25,
            1);
        }
        else
        {
          *v21 = *v12 - v10;
          *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - v15;
          *((_QWORD *)this + 138) += 8LL;
        }
        return;
      }
      pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v25);
      if ( v19 )
        pathwide::WIDEPENOBJ::cptAddRound(
          (pathwide::WIDENER *)((char *)this + 816),
          this,
          *((struct pathwide::LINEDATA **)this + 89),
          *((struct pathwide::LINEDATA **)this + 88),
          0,
          v6,
          v6);
      pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v29);
      v22 = (pathwide::WIDENER *)((char *)this + 976);
    }
    else
    {
      v28 = pathwide::WIDEPENOBJ::cptAddRound(v16, this, v18, v17, 0, v6, v6);
      pathwide::WIDEPATHOBJ::vAddPoint(
        (pathwide::WIDENER *)((char *)this + 1128),
        (const struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
        goto LABEL_16;
      v23 = (_DWORD *)*((_QWORD *)this + 157);
      if ( (unsigned __int64)v23 >= *((_QWORD *)this + 158) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 1128),
          (const struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v25,
          0);
      }
      else
      {
        *v23 = v10 + *v12;
        *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v15 + *((_DWORD *)this + 174);
        *((_QWORD *)this + 157) += 8LL;
      }
      if ( v28 )
        pathwide::WIDEPENOBJ::cptAddRound(
          (pathwide::WIDENER *)((char *)this + 816),
          this,
          *((struct pathwide::LINEDATA **)this + 89),
          *((struct pathwide::LINEDATA **)this + 88),
          1,
          v6,
          v6);
      v24 = (_DWORD *)*((_QWORD *)this + 157);
      if ( (unsigned __int64)v24 >= *((_QWORD *)this + 158) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 1128),
          (const struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v29,
          0);
      }
      else
      {
        *v24 = v7 + *v12;
        *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = *((_DWORD *)this + 174) + HIDWORD(v7);
        *((_QWORD *)this + 157) += 8LL;
      }
      v22 = (pathwide::WIDENER *)((char *)this + 1128);
    }
    pathwide::WIDEPATHOBJ::vAddPoint(v22, (const struct _POINTFIX *)((char *)this + 692));
    goto LABEL_16;
  }
}

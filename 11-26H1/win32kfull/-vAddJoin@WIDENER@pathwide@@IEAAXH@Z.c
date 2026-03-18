/*
 * XREFs of ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x140108988
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?bMiterInLimit@WIDENER@pathwide@@IEAAHVEVECTORFX@@@Z @ 0x1401084B0 (-bMiterInLimit@WIDENER@pathwide@@IEAAHVEVECTORFX@@@Z.c)
 *     ?bComputeIntersect@pathwide@@YAHPEAVEVECTORFX@@0000@Z @ 0x14010851C (-bComputeIntersect@pathwide@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z @ 0x1401086AC (-bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1401087D8 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x14010B518 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vecOutPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x14010B9E8 (-vecOutPerp@WIDENER@pathwide@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x14010BA30 (-vecInPerp@WIDENER@pathwide@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BA78 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z @ 0x14010C244 (-vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1401AC260 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddJoin(pathwide::WIDENER *this, int a2, struct EVECTORFX *a3)
{
  int v3; // eax
  struct EVECTORFX *v5; // rdx
  int *v6; // rbx
  BOOL v7; // eax
  int v8; // ecx
  struct pathwide::LINEDATA *v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  _DWORD *v12; // rcx
  _DWORD *v13; // r15
  __int64 v14; // rdi
  int v15; // edx
  _DWORD *v16; // r8
  int v17; // r12d
  __int64 v18; // rdx
  struct EVECTORFX *v19; // r9
  int v20; // ebx
  int v21; // r8d
  _DWORD *v22; // rdx
  pathwide::WIDEPATHOBJ *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rdx
  BOOL v26; // r14d
  int v27; // r8d
  pathwide::WIDEPATHOBJ *v28; // rcx
  int v29; // r8d
  _QWORD v30[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+80h] [rbp+40h] BYREF
  __int64 v32; // [rsp+90h] [rbp+50h] BYREF
  __int64 v33; // [rsp+98h] [rbp+58h] BYREF

  v3 = *((_DWORD *)this + 320);
  if ( !v3 || a2 )
  {
    pathwide::WIDENER::vAddRoundJoin(this, a2);
    return;
  }
  v5 = (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL);
  if ( v3 != 1 )
  {
    v6 = (int *)*((_QWORD *)this + 88);
    v7 = pathwide::bTurnLeftRandom((pathwide *)(v6 + 12), v5, a3);
    v8 = *v6;
    LODWORD(v31) = v7;
    if ( (v8 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v6);
    v9 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
    v10 = *(_QWORD *)(*((_QWORD *)this + 88) + 64LL);
    v11 = *(_DWORD *)v9;
    v32 = v10;
    if ( (v11 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, v9);
    v12 = (_DWORD *)*((_QWORD *)this + 138);
    v13 = (_DWORD *)((char *)this + 692);
    v14 = *(_QWORD *)(*((_QWORD *)this + 89) + 64LL);
    v30[0] = v14;
    if ( (unsigned __int64)v12 >= *((_QWORD *)this + 139) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        (pathwide::WIDENER *)((char *)this + 976),
        (const struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v32,
        1);
      v15 = HIDWORD(v32);
    }
    else
    {
      v15 = HIDWORD(v32);
      *v12 = *v13 - v10;
      *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - v15;
      *((_QWORD *)this + 138) += 8LL;
    }
    v16 = (_DWORD *)*((_QWORD *)this + 157);
    if ( (unsigned __int64)v16 >= *((_QWORD *)this + 158) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        (pathwide::WIDENER *)((char *)this + 1128),
        (const struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v32,
        0);
      v15 = HIDWORD(v32);
    }
    else
    {
      *v16 = v10 + *v13;
      *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v15 + *((_DWORD *)this + 174);
      *((_QWORD *)this + 157) += 8LL;
    }
    v17 = HIDWORD(v30[0]);
    if ( (_DWORD)v10 == (_DWORD)v14 && v15 == HIDWORD(v30[0]) )
      return;
    v18 = *((_QWORD *)this + 88);
    v19 = (struct EVECTORFX *)(*((_QWORD *)this + 89) + 40LL);
    v33 = 0LL;
    if ( pathwide::bComputeIntersect(
           (pathwide *)&v32,
           (struct EVECTORFX *)(v18 + 40),
           (struct EVECTORFX *)v30,
           v19,
           (struct EVECTORFX *)&v33)
      && (v20 = v33, pathwide::WIDENER::bMiterInLimit((__int64)this, v33)) )
    {
      if ( (_DWORD)v31 )
      {
        v22 = (_DWORD *)*((_QWORD *)this + 157);
        if ( (unsigned __int64)v22 >= *((_QWORD *)this + 158) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
            (pathwide::WIDENER *)((char *)this + 1128),
            (const struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)&v33,
            0);
        }
        else
        {
          *v22 = v20 + *v13;
          *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = *((_DWORD *)this + 174) + HIDWORD(v33);
          *((_QWORD *)this + 157) += 8LL;
        }
        goto LABEL_21;
      }
      pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v33, v21);
    }
    else if ( (_DWORD)v31 )
    {
LABEL_21:
      v23 = (pathwide::WIDENER *)((char *)this + 976);
LABEL_22:
      pathwide::WIDEPATHOBJ::vAddPoint(v23, (const struct _POINTFIX *)((char *)this + 692));
      v24 = (_DWORD *)*((_QWORD *)this + 138);
      if ( (unsigned __int64)v24 >= *((_QWORD *)this + 139) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 976),
          (const struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)v30,
          1);
      }
      else
      {
        *v24 = *v13 - v14;
        *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - v17;
        *((_QWORD *)this + 138) += 8LL;
      }
      v25 = (_DWORD *)*((_QWORD *)this + 157);
      if ( (unsigned __int64)v25 >= *((_QWORD *)this + 158) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 1128),
          (const struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)v30,
          0);
      }
      else
      {
        *v25 = v14 + *v13;
        *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v17 + *((_DWORD *)this + 174);
        *((_QWORD *)this + 157) += 8LL;
      }
      return;
    }
    v23 = (pathwide::WIDENER *)((char *)this + 1128);
    goto LABEL_22;
  }
  v26 = pathwide::bTurnLeftRandom((pathwide *)(*((_QWORD *)this + 88) + 48LL), v5, a3);
  pathwide::WIDENER::vecInPerp(this, &v31);
  pathwide::WIDENER::vecOutPerp(this, &v32);
  pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v31, v27);
  pathwide::WIDEPATHOBJ::vAddPoint(
    (pathwide::WIDENER *)((char *)this + 1128),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v31,
    0);
  if ( v31 != v32 )
  {
    v28 = (pathwide::WIDENER *)((char *)this + 976);
    if ( !v26 )
      v28 = (pathwide::WIDENER *)((char *)this + 1128);
    pathwide::WIDEPATHOBJ::vAddPoint(v28, (const struct _POINTFIX *)((char *)this + 692));
    pathwide::WIDEPATHOBJ::vAddPoint(
      (pathwide::WIDENER *)((char *)this + 1128),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v32,
      0);
    pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v32, v29);
  }
}

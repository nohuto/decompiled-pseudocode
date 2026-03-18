/*
 * XREFs of ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A44FC
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x1400A5C54 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1400A41F8 (-vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1400A4260 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?bMiterInLimit@WIDENER@pathwide@@IEAAHVEVECTORFX@@@Z @ 0x1400A4490 (-bMiterInLimit@WIDENER@pathwide@@IEAAHVEVECTORFX@@@Z.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A4884 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z @ 0x1400A4CE8 (-bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?bComputeIntersect@pathwide@@YAHPEAVEVECTORFX@@0000@Z @ 0x1400A4D2C (-bComputeIntersect@pathwide@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?vecInPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x1400A5698 (-vecInPerp@WIDENER@pathwide@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecOutPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x1400A56E0 (-vecOutPerp@WIDENER@pathwide@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A5728 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140177AC0 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140177B24 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddJoin(pathwide::WIDENER *this, int a2, struct EVECTORFX *a3)
{
  int v3; // eax
  struct EVECTORFX *v5; // rdx
  pathwide *v6; // rcx
  int v7; // eax
  struct pathwide::LINEDATA *v8; // r11
  int v9; // ecx
  struct pathwide::LINEDATA *v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  _DWORD *v13; // rcx
  _DWORD *v14; // r15
  int v15; // r12d
  __int64 v16; // rdi
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  struct EVECTORFX *v19; // r9
  int v20; // ebx
  _DWORD *v21; // rdx
  pathwide::WIDEPATHOBJ *v22; // rcx
  _DWORD *v23; // rcx
  int v24; // ebx
  int v25; // edi
  _DWORD *v26; // rdx
  int v27; // r14d
  pathwide::WIDEPATHOBJ *v28; // rcx
  struct EVECTORFX *v29; // [rsp+28h] [rbp-18h]
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
  v6 = (pathwide *)(*((_QWORD *)this + 88) + 48LL);
  if ( v3 != 1 )
  {
    v7 = pathwide::bTurnLeftRandom(v6, v5, a3);
    v9 = *(_DWORD *)v8;
    LODWORD(v31) = v7;
    if ( (v9 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, v8);
    v10 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
    v11 = *(_QWORD *)(*((_QWORD *)this + 88) + 64LL);
    v12 = *(_DWORD *)v10;
    v30[0] = v11;
    if ( (v12 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, v10);
    v13 = (_DWORD *)*((_QWORD *)this + 138);
    v14 = (_DWORD *)((char *)this + 692);
    v15 = HIDWORD(v30[0]);
    v16 = *(_QWORD *)(*((_QWORD *)this + 89) + 64LL);
    v32 = v16;
    if ( (unsigned __int64)v13 >= *((_QWORD *)this + 139) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        (pathwide::WIDENER *)((char *)this + 976),
        (const struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)v30,
        1);
    }
    else
    {
      *v13 = *v14 - v11;
      *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - v15;
      *((_QWORD *)this + 138) += 8LL;
    }
    v17 = (_DWORD *)*((_QWORD *)this + 157);
    if ( (unsigned __int64)v17 >= *((_QWORD *)this + 158) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        (pathwide::WIDENER *)((char *)this + 1128),
        (const struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)v30,
        0);
    }
    else
    {
      *v17 = v11 + *v14;
      *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v15 + *((_DWORD *)this + 174);
      *((_QWORD *)this + 157) += 8LL;
    }
    if ( (_DWORD)v11 == (_DWORD)v16 && v15 == HIDWORD(v32) )
      return;
    v18 = *((_QWORD *)this + 88);
    v19 = (struct EVECTORFX *)(*((_QWORD *)this + 89) + 40LL);
    v33 = 0LL;
    if ( (unsigned int)pathwide::bComputeIntersect(
                         (pathwide *)v30,
                         (struct EVECTORFX *)(v18 + 40),
                         (struct EVECTORFX *)&v32,
                         v19,
                         (struct EVECTORFX *)&v33,
                         v29)
      && (v20 = v33, pathwide::WIDENER::bMiterInLimit((__int64)this, v33)) )
    {
      if ( (_DWORD)v31 )
      {
        v21 = (_DWORD *)*((_QWORD *)this + 157);
        if ( (unsigned __int64)v21 >= *((_QWORD *)this + 158) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
            (pathwide::WIDENER *)((char *)this + 1128),
            (const struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)&v33,
            0);
        }
        else
        {
          *v21 = v20 + *v14;
          *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = *((_DWORD *)this + 174) + HIDWORD(v33);
          *((_QWORD *)this + 157) += 8LL;
        }
        goto LABEL_21;
      }
      pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v33);
    }
    else if ( (_DWORD)v31 )
    {
LABEL_21:
      v22 = (pathwide::WIDENER *)((char *)this + 976);
LABEL_22:
      pathwide::WIDEPATHOBJ::vAddPoint(v22, (const struct _POINTFIX *)((char *)this + 692));
      v23 = (_DWORD *)*((_QWORD *)this + 138);
      v24 = v32;
      v25 = HIDWORD(v32);
      if ( (unsigned __int64)v23 >= *((_QWORD *)this + 139) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 976),
          (const struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v32,
          1);
      }
      else
      {
        *v23 = *v14 - v32;
        *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - v25;
        *((_QWORD *)this + 138) += 8LL;
      }
      v26 = (_DWORD *)*((_QWORD *)this + 157);
      if ( (unsigned __int64)v26 >= *((_QWORD *)this + 158) )
      {
        pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
          (pathwide::WIDENER *)((char *)this + 1128),
          (const struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v32,
          0);
      }
      else
      {
        *v26 = v24 + *v14;
        *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = v25 + *((_DWORD *)this + 174);
        *((_QWORD *)this + 157) += 8LL;
      }
      return;
    }
    v22 = (pathwide::WIDENER *)((char *)this + 1128);
    goto LABEL_22;
  }
  v27 = pathwide::bTurnLeftRandom(v6, v5, a3);
  pathwide::WIDENER::vecInPerp(this, &v31);
  pathwide::WIDENER::vecOutPerp(this, &v32);
  pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v31);
  pathwide::WIDEPATHOBJ::vAddPoint(
    (pathwide::WIDENER *)((char *)this + 1128),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v31,
    0);
  if ( v31 != v32 )
  {
    v28 = (pathwide::WIDENER *)((char *)this + 976);
    if ( !v27 )
      v28 = (pathwide::WIDENER *)((char *)this + 1128);
    pathwide::WIDEPATHOBJ::vAddPoint(v28, (const struct _POINTFIX *)((char *)this + 692));
    pathwide::WIDEPATHOBJ::vAddPoint(
      (pathwide::WIDENER *)((char *)this + 1128),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v32,
      0);
    pathwide::WIDENER::vAddLeft(this, (struct EVECTORFX *)&v32);
  }
}

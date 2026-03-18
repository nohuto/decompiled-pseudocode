/*
 * XREFs of ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A6614
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x1400A5C54 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A5728 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z @ 0x1400A695C (-vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z.c)
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A6C70 (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400C03B8 (-vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140177B24 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddStartCap(pathwide::WIDENER *this)
{
  int v2; // ecx
  struct pathwide::LINEDATA *v3; // rdx
  int v4; // ecx
  unsigned __int64 v5; // rbx
  pathwide::WIDEPATHOBJ *v6; // rsi
  _DWORD *v7; // rcx
  _DWORD *v8; // r14
  _DWORD *v9; // rdx
  int v10; // ecx
  int v11; // ecx
  struct pathwide::LINEDATA *v12; // rdx
  __int64 v13; // rbx
  _DWORD *v14; // rcx
  const struct _POINTFIX *v15; // rdi
  unsigned __int64 v16; // rbx
  _DWORD *v17; // rdx
  struct pathwide::LINEDATA *v18; // rdx
  __int64 v19; // rdx
  int v20; // ebx
  unsigned int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r14d
  unsigned int v25; // esi
  __int64 v26; // rax
  pathwide::WIDEPATHOBJ *v27; // rbx
  const struct _POINTFIX *v28; // rdi
  _DWORD *v29; // r8
  __int64 v30; // rax
  int v31; // ecx
  int v32; // edx
  _DWORD *v33; // rdx
  const struct _POINTFIX *v34; // rdx
  pathwide::WIDEPATHOBJ *v35; // rcx
  unsigned __int64 v36; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp+38h] BYREF

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
    v36 = v5;
    v7 = (_DWORD *)*((_QWORD *)this + 157);
    v8 = (_DWORD *)((char *)this + 692);
    if ( (unsigned __int64)v7 >= *((_QWORD *)this + 158) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        (pathwide::WIDENER *)((char *)this + 1128),
        (const struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v36,
        1);
    }
    else
    {
      *v7 = *v8 - v5;
      *(_DWORD *)(*((_QWORD *)this + 157) + 4LL) = *((_DWORD *)this + 174) - HIDWORD(v5);
      *((_QWORD *)this + 157) += 8LL;
    }
    pathwide::WIDEPENOBJ::vAddRoundEndCap(
      (pathwide::WIDENER *)((char *)this + 816),
      this,
      *((struct pathwide::LINEDATA **)this + 89),
      1,
      *((_DWORD *)this + 10) & 0x10);
    v9 = (_DWORD *)*((_QWORD *)this + 157);
    if ( (unsigned __int64)v9 < *((_QWORD *)this + 158) )
    {
      *v9 = v5 + *v8;
      v10 = HIDWORD(v5) + *((_DWORD *)this + 174);
LABEL_10:
      *(_DWORD *)(*((_QWORD *)v6 + 16) + 4LL) = v10;
      *((_QWORD *)v6 + 16) += 8LL;
      return;
    }
    v34 = (const struct _POINTFIX *)((char *)this + 692);
LABEL_34:
    v35 = v6;
LABEL_35:
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v35, v34, (struct EVECTORFX *)&v36, 0);
    return;
  }
  v11 = v2 - 1;
  if ( !v11 )
  {
    v18 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
    if ( (*(_DWORD *)v18 & 2) == 0 )
      pathwide::WIDENER::vVecSquareCompute(this, v18);
    v19 = *((_QWORD *)this + 89);
    v20 = -(int)*(_QWORD *)(v19 + 56);
    v21 = -HIDWORD(*(_QWORD *)(v19 + 56));
    v36 = __PAIR64__(v21, v20);
    v37 = __PAIR64__(v21, v20);
    if ( (*(_DWORD *)v19 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v19);
    v22 = *((_QWORD *)this + 89);
    v23 = *(_QWORD *)(v22 + 64);
    v24 = v20 + v23;
    v25 = HIDWORD(v23) + v21;
    LODWORD(v36) = v20 + v23;
    LODWORD(v23) = *(_DWORD *)v22;
    HIDWORD(v36) = v25;
    if ( (v23 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, (struct pathwide::LINEDATA *)v22);
    v26 = *((_QWORD *)this + 89);
    v27 = (pathwide::WIDENER *)((char *)this + 1128);
    v28 = (const struct _POINTFIX *)((char *)this + 692);
    v29 = (_DWORD *)*((_QWORD *)v27 + 16);
    v30 = *(_QWORD *)(v26 + 64);
    v31 = v37 - v30;
    v32 = HIDWORD(v37) - HIDWORD(v30);
    LODWORD(v37) = v37 - v30;
    HIDWORD(v37) -= HIDWORD(v30);
    if ( (unsigned __int64)v29 >= *((_QWORD *)v27 + 17) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v27, v28, (struct EVECTORFX *)&v37, 0);
    }
    else
    {
      *v29 = v28->x + v31;
      *(_DWORD *)(*((_QWORD *)v27 + 16) + 4LL) = v32 + v28->y;
      *((_QWORD *)v27 + 16) += 8LL;
    }
    v33 = (_DWORD *)*((_QWORD *)v27 + 16);
    if ( (unsigned __int64)v33 < *((_QWORD *)v27 + 17) )
    {
      *v33 = v24 + v28->x;
      *(_DWORD *)(*((_QWORD *)v27 + 16) + 4LL) = v25 + v28->y;
      *((_QWORD *)v27 + 16) += 8LL;
      return;
    }
    v34 = v28;
    v35 = v27;
    goto LABEL_35;
  }
  if ( v11 == 1 )
  {
    v12 = (struct pathwide::LINEDATA *)*((_QWORD *)this + 89);
    if ( (*(_DWORD *)v12 & 4) == 0 )
      pathwide::WIDENER::vVecPerpCompute(this, v12);
    v13 = *((_QWORD *)this + 89);
    v6 = (pathwide::WIDENER *)((char *)this + 1128);
    v14 = (_DWORD *)*((_QWORD *)this + 157);
    v15 = (const struct _POINTFIX *)((char *)this + 692);
    v16 = *(_QWORD *)(v13 + 64);
    v36 = v16;
    if ( (unsigned __int64)v14 >= *((_QWORD *)v6 + 17) )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(v6, v15, (struct EVECTORFX *)&v36, 1);
    }
    else
    {
      *v14 = v15->x - v16;
      *(_DWORD *)(*((_QWORD *)v6 + 16) + 4LL) = v15->y - HIDWORD(v16);
      *((_QWORD *)v6 + 16) += 8LL;
    }
    v17 = (_DWORD *)*((_QWORD *)v6 + 16);
    if ( (unsigned __int64)v17 < *((_QWORD *)v6 + 17) )
    {
      *v17 = v16 + v15->x;
      v10 = HIDWORD(v16) + v15->y;
      goto LABEL_10;
    }
    v34 = v15;
    goto LABEL_34;
  }
}

/*
 * XREFs of ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A5728
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A44FC (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A4884 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vecInPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x1400A5698 (-vecInPerp@WIDENER@pathwide@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecOutPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x1400A56E0 (-vecOutPerp@WIDENER@pathwide@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A590C (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A6614 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A6C70 (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 */

void __fastcall pathwide::WIDENER::vVecPerpCompute(pathwide::WIDENER *this, struct pathwide::LINEDATA *a2)
{
  int *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // ebp
  int v7; // r14d
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // r14d
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // esi
  int v24; // edx
  int v25; // r8d
  int v26; // ecx
  int v27; // r8d
  int v28; // ecx
  unsigned __int64 v29; // rcx

  if ( (*(_DWORD *)a2 & 8) == 0 )
    pathwide::WIDENER::vVecDrawCompute(this, a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  v5 = *((_QWORD *)a2 + 4);
  v6 = *v3;
  v7 = v3[1];
  if ( v4 > v5 )
  {
    v8 = v3[2] - v6;
    v9 = v3[3] - v7;
  }
  else
  {
    v8 = v6 - *(v3 - 2);
    v9 = v7 - *(v3 - 1);
  }
  v10 = v5 + v4;
  v11 = v6 - (v8 >> 1);
  v12 = v7 - (v9 >> 1);
  v13 = -v8;
  if ( v8 > 0 )
    v13 = v8;
  v14 = v4 * v13;
  v15 = -v9;
  if ( v9 > 0 )
    v15 = v9;
  v16 = v4 * v15;
  if ( v10 )
  {
    if ( v10 >= 0xFFFFFFFFLL )
    {
      LODWORD(v18) = 0;
      LODWORD(v20) = 0;
      v14 /= v10;
      v16 /= v10;
    }
    else
    {
      if ( v14 < 0 )
      {
        v17 = -v14;
        v14 = -(__int64)(-v14 / (unsigned __int64)(unsigned int)v10);
      }
      else
      {
        v17 = v14;
        v14 /= (unsigned __int64)(unsigned int)v10;
      }
      v18 = v17 % (unsigned int)v10;
      if ( v16 < 0 )
      {
        v29 = -v16;
        v16 = -(__int64)(-v16 / (unsigned __int64)(unsigned int)v10);
        v20 = v29 % (unsigned int)v10;
      }
      else
      {
        v19 = v16 % (unsigned __int64)(unsigned int)v10;
        v16 /= (unsigned __int64)(unsigned int)v10;
        LODWORD(v20) = v19;
      }
    }
  }
  else
  {
    LODWORD(v18) = 0;
    LODWORD(v20) = 0;
  }
  v21 = *(_DWORD *)a2;
  v22 = v14 + 1;
  v23 = (unsigned int)v10 >> 1;
  v24 = v16 + 1;
  if ( (unsigned int)v18 < v23 )
    v22 = v14;
  if ( (unsigned int)v20 < v23 )
    v24 = v16;
  v25 = -v22;
  if ( v8 >= 0 )
    v25 = v22;
  v26 = -v24;
  v27 = v11 + v25;
  if ( v9 >= 0 )
    v26 = v24;
  v28 = v12 + v26;
  if ( (v21 & 1) != 0 )
  {
    v27 = -v27;
    v28 = -v28;
  }
  *(_DWORD *)a2 = v21 | 4;
  *((_DWORD *)a2 + 16) = (v27 + ((v27 >> 31) & 1) + 3) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 17) = ((v28 >> 31) + v28 + 4) & 0xFFFFFFF8;
}

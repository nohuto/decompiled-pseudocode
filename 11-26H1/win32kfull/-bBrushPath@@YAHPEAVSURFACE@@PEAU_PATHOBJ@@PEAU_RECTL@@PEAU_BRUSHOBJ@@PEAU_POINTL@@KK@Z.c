/*
 * XREFs of ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140297AAC
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140118D68 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140119674 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 */

__int64 __fastcall bBrushPath(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // r10
  __int64 v9; // rbx
  int v10; // eax
  _QWORD *pvRbrush; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  int v14; // r10d
  LONG y; // r11d
  __int64 v16; // rcx
  _QWORD v18[4]; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+54h] [rbp-2Ch]
  __int64 v21; // [rsp+58h] [rbp-28h]
  unsigned int v22; // [rsp+60h] [rbp-20h]
  unsigned int v23; // [rsp+64h] [rbp-1Ch]
  unsigned int v24; // [rsp+68h] [rbp-18h]
  unsigned int v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+74h] [rbp-Ch]

  v7 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v7 - 1) > 5 )
    return 0LL;
  v18[2] = *((_QWORD *)a1 + 10);
  v9 = (unsigned int)v7;
  v10 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v26 = dword_140370F60[v7];
  v21 = 0LL;
  v27 = 0;
  v19 = v10;
  v18[3] = pvRbrush[4];
  v20 = *((_DWORD *)pvRbrush + 7);
  v12 = *((_DWORD *)pvRbrush + 5) * v26;
  v24 = v12;
  v13 = *((_DWORD *)pvRbrush + 6);
  v25 = v13;
  v14 = a5->x * v26;
  y = a5->y;
  v23 = y;
  v22 = v14;
  if ( v14 < 0 )
    v22 = v12 - ~v14 % v12 - 1;
  if ( y < 0 )
    v23 = v13 - (-1 - y) % v13 - 1;
  v16 = a6 + 3 * v9;
  v18[0] = qword_14035AD40[v16];
  v18[1] = qword_14035AE70[v16];
  return bEngFastFillEnum(
           (struct EPATHOBJ *)a2,
           a3,
           a7,
           (void (*)(struct _RECTL *, unsigned int, void *))vBrushPathEnum,
           (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPathEnumRow,
           v18);
}

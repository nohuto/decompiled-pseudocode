/*
 * XREFs of ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x140167E10
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x140227634 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

struct _SURFOBJ *__fastcall psoSpGetComposite(struct _SPRITESTATE *a1, struct _RECTL *a2, unsigned int *a3)
{
  struct W32_PUSH_LOCK *v3; // rbx
  struct _SURFOBJ *v4; // rdi
  signed int ClearBits; // eax
  __int64 v9; // rsi
  int v10; // r14d
  struct _SURFOBJ *v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // ecx
  int v16; // r8d
  struct _SURFOBJ *Surface; // rax
  int v19; // [rsp+20h] [rbp-38h]

  v3 = (struct _SPRITESTATE *)((char *)a1 + 696);
  v4 = 0LL;
  *a3 = -1;
  if ( a1 != (struct _SPRITESTATE *)-696LL )
    GreAcquirePushLockExclusive((struct _SPRITESTATE *)((char *)a1 + 696));
  ClearBits = RtlFindClearBits((PRTL_BITMAP)a1 + 42, 1u, 0);
  v9 = ClearBits;
  v10 = -1;
  if ( ClearBits == -1 )
  {
    v12 = -1LL;
  }
  else
  {
    v11 = (struct _SURFOBJ *)*((_QWORD *)a1 + ClearBits + 20);
    v12 = ClearBits;
    v4 = v11;
    if ( v11 && v11->sizlBitmap.cx >= a2->right - a2->left && v11->sizlBitmap.cy >= a2->bottom - a2->top )
    {
LABEL_21:
      *a3 = v9;
      RtlSetBits((PRTL_BITMAP)a1 + 42, v9, 1u);
      goto LABEL_22;
    }
  }
  vSpDeleteSurface(v4);
  if ( (_DWORD)v9 != -1 )
    *((_QWORD *)a1 + v12 + 20) = 0LL;
  v13 = *((_QWORD *)a1 + 1);
  v14 = -1;
  while ( v13 )
  {
    v15 = v14;
    v16 = *(_DWORD *)(v13 + 88) - *(_DWORD *)(v13 + 80);
    if ( v16 <= v10 )
      v16 = v10;
    v14 = *(_DWORD *)(v13 + 92) - *(_DWORD *)(v13 + 84);
    v13 = *(_QWORD *)(v13 + 24);
    v10 = v16;
    if ( v14 <= v15 )
      v14 = v15;
  }
  Surface = psoSpCreateSurface(a1, 0, v10, v14, v19);
  v4 = Surface;
  if ( Surface )
  {
    if ( (_DWORD)v9 != -1 )
      *((_QWORD *)a1 + v9 + 20) = Surface;
    Surface->fjBitmap |= 4u;
    if ( (_DWORD)v9 != -1 )
      goto LABEL_21;
  }
LABEL_22:
  if ( v3 )
    GreReleasePushLockExclusive(v3);
  return v4;
}

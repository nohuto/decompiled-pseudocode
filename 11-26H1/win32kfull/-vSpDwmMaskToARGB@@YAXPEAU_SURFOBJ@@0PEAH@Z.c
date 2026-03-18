/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x14019C908
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x14019C5C4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int *lDelta)
{
  char *pvScan0; // rdi
  char *v5; // rdx
  LONG v7; // r9d
  char *v8; // r10
  int v9; // r14d
  __int64 cx; // r12
  __int64 v11; // rsi
  int v12; // ebx
  _DWORD *v13; // r11
  __int64 v14; // rbp
  char *v15; // rax
  int v16; // ecx
  char *v17; // r10
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  __int64 i; // rax
  char *v21; // rdx
  __int64 v22; // rsi
  int v23; // r11d
  unsigned int *v24; // r8
  __int64 v25; // rbp
  char *v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  int v29; // [rsp+0h] [rbp-58h]
  int *v30; // [rsp+8h] [rbp-50h]
  _OWORD v31[4]; // [rsp+10h] [rbp-48h] BYREF

  pvScan0 = (char *)a1->pvScan0;
  v5 = 0LL;
  v7 = a1->sizlBitmap.cy >> 1;
  v30 = lDelta;
  LODWORD(lDelta) = a1->lDelta;
  v8 = &pvScan0[v7 * (int)lDelta];
  if ( a2 )
    v5 = (char *)a2->pvScan0;
  v9 = 0;
  v29 = 0;
  cx = a1->sizlBitmap.cx;
  v31[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  if ( v7 <= 0 )
    goto LABEL_16;
  v11 = (unsigned int)v7;
  do
  {
    v12 = 0;
    if ( cx > 0 )
    {
      v13 = v8;
      v14 = cx;
      do
      {
        if ( v5 )
          v15 = &v5[4 * v12];
        else
          v15 = &v8[4 * v12];
        v16 = *((_DWORD *)v31 + 2 * (*(_DWORD *)((char *)v13 + pvScan0 - v8) & 1) + (*(_DWORD *)v15 & 1));
        *v13 = v16;
        ++v12;
        v9 |= v16 == -1;
        ++v13;
        --v14;
      }
      while ( v14 );
    }
    if ( v5 )
      v5 += a2->lDelta;
    lDelta = (int *)a1->lDelta;
    pvScan0 = &pvScan0[(_QWORD)lDelta];
    v8 = &v8[(_QWORD)lDelta];
    --v11;
  }
  while ( v11 );
  v29 = v9;
  if ( !v9 )
  {
LABEL_16:
    v17 = (char *)a1->pvScan0;
    v18 = (unsigned int *)&v17[(int)lDelta * v7];
    if ( !a2 )
    {
      if ( v7 > 0 )
      {
        v19 = (unsigned int)v7;
        do
        {
          for ( i = 0LL; i < cx; ++i )
          {
            if ( v18[i] == 0xFFFFFF )
              v18[i] = -1;
          }
          v18 = (unsigned int *)((char *)v18 + a1->lDelta);
          --v19;
        }
        while ( v19 );
      }
      goto LABEL_14;
    }
    v21 = (char *)a2->pvScan0;
    if ( v7 <= 0 )
      goto LABEL_14;
    v22 = (unsigned int)v7;
    while ( 1 )
    {
      v23 = 0;
      if ( cx > 0 )
        break;
LABEL_36:
      v21 += a2->lDelta;
      v28 = a1->lDelta;
      v17 += v28;
      v18 = (unsigned int *)((char *)v18 + v28);
      if ( !--v22 )
        goto LABEL_14;
    }
    v24 = v18;
    v25 = cx;
    while ( 1 )
    {
      if ( v21 )
        v26 = &v21[4 * v23];
      else
        v26 = (char *)&v18[v23];
      v27 = *((_DWORD *)v31 + 2 * (*(_DWORD *)&v17[(char *)v24 - (char *)v18] & 1) + (*(_DWORD *)v26 & 1));
      switch ( v27 )
      {
        case -16777216:
          goto LABEL_34;
        case 0:
          *v24 = 0;
          break;
        case 16777215:
LABEL_34:
          *v24 = *(unsigned int *)((char *)v24 + v21 - (char *)v18) | 0xFF000000;
          break;
      }
      ++v23;
      ++v24;
      if ( !--v25 )
        goto LABEL_36;
    }
  }
LABEL_14:
  *v30 = v29;
}

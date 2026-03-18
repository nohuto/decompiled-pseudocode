/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x140174720
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1401743E4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *a1, struct _SURFOBJ *lDelta, int *a3)
{
  struct _SURFOBJ *v3; // r10
  struct _SURFOBJ *v4; // rdi
  __int64 cx; // rcx
  _BYTE *v6; // r8
  char *pvScan0; // rbx
  int v8; // r9d
  __int32 *v9; // r11
  int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // r12
  int v13; // r10d
  __int32 *v14; // r15
  __int64 v15; // r13
  __int32 *v16; // rdx
  __int32 v17; // ecx
  int v18; // eax
  char *v19; // rcx
  __int64 v20; // rdx
  __int64 i; // rax
  char *v22; // r11
  _BYTE *v23; // r8
  unsigned int *v24; // rbx
  __int64 v25; // r12
  unsigned int *v26; // rdx
  signed __int64 v27; // r14
  __int64 v28; // r13
  unsigned int *v29; // rax
  __int32 v30; // r9d
  __int64 v31; // rax
  int v32; // [rsp+0h] [rbp-68h]
  __m128i si128; // [rsp+18h] [rbp-50h] BYREF

  v3 = a1;
  v4 = lDelta;
  cx = a1->sizlBitmap.cx;
  v6 = 0LL;
  LODWORD(lDelta) = v3->lDelta;
  pvScan0 = (char *)v3->pvScan0;
  v8 = v3->sizlBitmap.cy >> 1;
  v9 = (__int32 *)&pvScan0[v8 * (int)lDelta];
  if ( v4 )
    v6 = v4->pvScan0;
  v10 = 0;
  v32 = 0;
  v11 = cx;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  if ( v8 <= 0 )
    goto LABEL_16;
  v12 = (unsigned int)v8;
  do
  {
    if ( v11 > 0 )
    {
      v13 = v32;
      v14 = v9;
      v15 = v11;
      do
      {
        v16 = (__int32 *)((char *)v14 + v6 - (_BYTE *)v9);
        if ( !v6 )
          v16 = v14;
        v17 = si128.m128i_i32[2 * (*(_DWORD *)&pvScan0[(char *)v14 - (char *)v9] & 1) + (*v16 & 1)];
        *v14++ = v17;
        v13 |= v17 == -1;
        --v15;
      }
      while ( v15 );
      v32 = v13;
      v10 = v13;
      v3 = a1;
    }
    if ( v6 )
      v6 += v4->lDelta;
    lDelta = (struct _SURFOBJ *)v3->lDelta;
    pvScan0 = &pvScan0[(_QWORD)lDelta];
    v9 = (__int32 *)((char *)v9 + (_QWORD)lDelta);
    --v12;
  }
  while ( v12 );
  v32 = v10;
  if ( !v10 )
  {
LABEL_16:
    v18 = (_DWORD)lDelta * v8;
    if ( !v4 )
    {
      v19 = (char *)v3->pvScan0 + v18;
      if ( v8 > 0 )
      {
        v20 = (unsigned int)v8;
        do
        {
          for ( i = 0LL; i < v11; ++i )
          {
            if ( *(_DWORD *)&v19[4 * i] == 0xFFFFFF )
              *(_DWORD *)&v19[4 * i] = -1;
          }
          v19 += v3->lDelta;
          --v20;
        }
        while ( v20 );
      }
      goto LABEL_15;
    }
    v22 = (char *)v3->pvScan0;
    v23 = v4->pvScan0;
    v24 = (unsigned int *)&v22[v18];
    if ( v8 <= 0 )
      goto LABEL_15;
    v25 = (unsigned int)v8;
    while ( v11 <= 0 )
    {
LABEL_37:
      v23 += v4->lDelta;
      v31 = v3->lDelta;
      v22 += v31;
      v24 = (unsigned int *)((char *)v24 + v31);
      if ( !--v25 )
        goto LABEL_15;
    }
    v26 = v24;
    v27 = v23 - (_BYTE *)v24;
    v28 = v11;
    while ( 1 )
    {
      v29 = (unsigned int *)((char *)v26 + v27);
      if ( !v23 )
        v29 = v26;
      v30 = si128.m128i_i32[2 * (*(_DWORD *)&v22[(char *)v26 - (char *)v24] & 1) + (*v29 & 1)];
      switch ( v30 )
      {
        case -16777216:
          goto LABEL_34;
        case 0:
          *v26 = 0;
          break;
        case 16777215:
LABEL_34:
          *v26 = *(unsigned int *)((char *)v26 + v27) | 0xFF000000;
          break;
      }
      ++v26;
      if ( !--v28 )
        goto LABEL_37;
    }
  }
LABEL_15:
  *a3 = v32;
}

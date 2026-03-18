/*
 * XREFs of ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x140078660
 * Callers:
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1400773DC (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1400A5648 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall bDoGetSetBitmapBits(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int a3)
{
  char *pvBits; // rsi
  char *pvScan0; // rdi
  LONG lDelta; // r12d
  size_t v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int cjBits; // ebx
  char *v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  char *v18; // rsi
  LONG cy; // eax
  size_t v20; // rbx
  char *v21; // r14
  LONG v22; // r12d
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // edi
  char *v26; // r14
  __int64 v27; // rdx
  unsigned int v28; // r15d
  unsigned int v29; // edi
  unsigned int v31; // r15d
  unsigned int v32; // r15d
  HDEV hdev; // [rsp+88h] [rbp+20h] BYREF

  if ( !a3 )
  {
    hdev = a1->hdev;
    if ( hdev )
      PDEVOBJ::vSync((PDEVOBJ *)&hdev, a1, 0LL, 0);
    pvBits = (char *)a2->pvBits;
    pvScan0 = (char *)a1->pvScan0;
    lDelta = a1->lDelta;
    v8 = ((unsigned int)(a1->sizlBitmap.cx * *(_DWORD *)&gaulConvert[2 * a1->iBitmapFormat] + 15) >> 3) & 0x1FFFFFFE;
    LODWORD(hdev) = v8;
    v9 = a1->sizlBitmap.cy * v8;
    v10 = a2->lDelta;
    if ( (v10 & 0x80000000) != 0 || v10 >= v9 )
    {
      a2->cjBits = 0;
    }
    else
    {
      cjBits = v9 - v10;
      if ( a2->cjBits + v10 <= v9 )
        cjBits = a2->cjBits;
      a2->cjBits = cjBits;
      v12 = &pvScan0[lDelta * (v10 / (unsigned int)v8)];
      v13 = v10 % (unsigned int)v8;
      if ( v10 % (unsigned int)v8 )
      {
        v32 = cjBits;
        if ( (unsigned int)v8 - v13 < cjBits )
          v32 = v8 - v13;
        memmove(&v12[v13], pvBits, v32);
        pvBits += v32;
        v12 += lDelta;
        cjBits -= v32;
      }
      v14 = cjBits / (unsigned int)v8;
      v15 = cjBits % (unsigned int)v8;
      LODWORD(hdev) = v15;
      while ( v14-- )
      {
        memmove(v12, pvBits, v8);
        pvBits += v8;
        v12 += lDelta;
      }
      if ( v15 )
        memmove(v12, pvBits, v15);
    }
    return 1LL;
  }
  hdev = a2->hdev;
  if ( hdev )
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, a2, 0LL, 0);
  v18 = (char *)a1->pvBits;
  cy = a2->sizlBitmap.cy;
  v20 = ((unsigned int)(*(_DWORD *)&gaulConvert[2 * a2->iBitmapFormat] * a2->sizlBitmap.cx + 15) >> 3) & 0x1FFFFFFE;
  if ( !v18 )
  {
    a1->cjBits = cy * v20;
    return 1LL;
  }
  v21 = (char *)a2->pvScan0;
  v22 = a2->lDelta;
  LODWORD(hdev) = ((unsigned int)(*(_DWORD *)&gaulConvert[2 * a2->iBitmapFormat] * a2->sizlBitmap.cx + 15) >> 3) & 0x1FFFFFFE;
  v23 = cy * v20;
  v24 = a1->lDelta;
  if ( (v24 & 0x80000000) == 0 && v24 < v23 )
  {
    v25 = v23 - v24;
    if ( a1->cjBits + v24 <= v23 )
      v25 = a1->cjBits;
    a1->cjBits = v25;
    v26 = &v21[v22 * (v24 / (unsigned int)v20)];
    v27 = v24 % (unsigned int)v20;
    if ( v24 % (unsigned int)v20 )
    {
      v31 = v25;
      if ( (int)v20 - (int)v27 < v25 )
        v31 = v20 - v27;
      memmove(v18, &v26[v27], v31);
      v18 += v31;
      v26 += v22;
      v25 -= v31;
    }
    v28 = v25 / (unsigned int)v20;
    v29 = v25 % (unsigned int)v20;
    LODWORD(hdev) = v29;
    while ( v28-- )
    {
      memmove(v18, v26, v20);
      v18 += v20;
      v26 += v22;
    }
    if ( v29 )
      memmove(v18, v26, v29);
    return 1LL;
  }
  a1->cjBits = 0;
  return 0LL;
}

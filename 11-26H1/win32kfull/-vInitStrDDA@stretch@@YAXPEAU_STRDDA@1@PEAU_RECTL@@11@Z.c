/*
 * XREFs of ?vInitStrDDA@stretch@@YAXPEAU_STRDDA@1@PEAU_RECTL@@11@Z @ 0x1400E9838
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vInitStrDDA(stretch *this, struct stretch::_STRDDA *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  __int64 v5; // r13
  LONG left; // edx
  struct _RECTL *v8; // r10
  int v10; // eax
  LONG right; // r9d
  int v12; // r11d
  int v13; // ebx
  int v14; // ecx
  LONG v15; // r8d
  int v16; // edx
  int v17; // r14d
  int v18; // esi
  _DWORD *v19; // rcx
  LONG v20; // ebp
  int v21; // eax
  int v22; // eax
  LONG bottom; // r9d
  int v24; // r11d
  int v25; // esi
  int v26; // ecx
  LONG v27; // r8d
  int v28; // edx
  int v29; // r10d
  int v30; // ebx
  int v31; // ecx
  int v32; // eax
  LONG v33; // ecx
  LONG top; // ecx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  LONG v38; // ebp
  __int64 v39; // rcx
  int v40; // eax
  LONG v41; // ebp
  __int128 v42; // [rsp+0h] [rbp-68h] BYREF
  __int128 v43; // [rsp+18h] [rbp-50h] BYREF

  v5 = 0LL;
  left = a3->left;
  v8 = a3;
  v42 = 0LL;
  v43 = 0LL;
  if ( __PAIR64__(a3->top, left) )
  {
    top = a3->top;
    v8 = (struct _RECTL *)&v43;
    LODWORD(v42) = *(_DWORD *)a2 - left;
    DWORD1(v42) = *((_DWORD *)a2 + 1) - top;
    DWORD2(v42) = *((_DWORD *)a2 + 2) - left;
    v35 = *((_DWORD *)a2 + 3);
    a2 = (struct stretch::_STRDDA *)&v42;
    HIDWORD(v42) = v35 - top;
    DWORD2(v43) = a3->right - left;
    HIDWORD(v43) = a3->bottom - top;
  }
  *((_QWORD *)this + 3) = (char *)this + 4 * v8->right + 32;
  v10 = a4->right - a4->left;
  right = v8->right;
  if ( v10 < 0 )
  {
    v13 = ~(~v10 / right);
    v12 = right - ~v10 % right - 1;
  }
  else
  {
    v12 = v10 % right;
    v13 = v10 / right;
  }
  v14 = v12 + ((right - 1) >> 1);
  v15 = v14;
  if ( v14 >= right )
    v15 = v14 - right;
  v16 = v13 + 1;
  v17 = 0;
  v18 = 0;
  if ( v14 < right )
    v16 = v13;
  if ( *(int *)a2 > 0 )
  {
    v39 = *(unsigned int *)a2;
    v18 = *(_DWORD *)a2;
    do
    {
      v15 += v12;
      v40 = v16 + v13;
      v17 = v16;
      v41 = v15;
      if ( v15 >= right )
        v15 -= right;
      v16 = v40 + 1;
      if ( v41 < right )
        v16 = v40;
      --v39;
    }
    while ( v39 );
  }
  *(_DWORD *)this = v17 + a4->left;
  if ( v18 < *((_DWORD *)a2 + 2) )
  {
    v19 = (_DWORD *)((char *)this + 32);
    do
    {
      v15 += v12;
      v20 = v15;
      *v19 = v16 - v17;
      v21 = v16 + v13;
      v17 = v16;
      if ( v15 >= right )
        v15 -= right;
      ++v18;
      v16 = v21 + 1;
      ++v19;
      if ( v20 < right )
        v16 = v21;
    }
    while ( v18 < *((_DWORD *)a2 + 2) );
  }
  *((_DWORD *)this + 2) = v17 + a4->left;
  v22 = a4->bottom - a4->top;
  bottom = v8->bottom;
  if ( v22 < 0 )
  {
    v25 = ~(~v22 / bottom);
    v24 = bottom - ~v22 % bottom - 1;
  }
  else
  {
    v24 = v22 % bottom;
    v25 = v22 / bottom;
  }
  v26 = v24 + ((bottom - 1) >> 1);
  v27 = v26;
  if ( v26 >= bottom )
    v27 = v26 - bottom;
  v28 = v25 + 1;
  v29 = 0;
  v30 = 0;
  if ( v26 < bottom )
    v28 = v25;
  if ( *((int *)a2 + 1) > 0 )
  {
    v36 = *((unsigned int *)a2 + 1);
    v30 = *((_DWORD *)a2 + 1);
    do
    {
      v27 += v24;
      v37 = v28 + v25;
      v29 = v28;
      v38 = v27;
      if ( v27 >= bottom )
        v27 -= bottom;
      v28 = v37 + 1;
      if ( v38 < bottom )
        v28 = v37;
      --v36;
    }
    while ( v36 );
  }
  *((_DWORD *)this + 1) = v29 + a4->top;
  while ( v30 < *((_DWORD *)a2 + 3) )
  {
    v27 += v24;
    v31 = v28 - v29;
    v29 = v28;
    *(_DWORD *)(*((_QWORD *)this + 3) + v5) = v31;
    v32 = v28 + v25;
    v33 = v27;
    if ( v27 >= bottom )
      v27 -= bottom;
    ++v30;
    v28 = v32 + 1;
    v5 += 4LL;
    if ( v33 < bottom )
      v28 = v32;
  }
  *((_DWORD *)this + 3) = v29 + a4->top;
}

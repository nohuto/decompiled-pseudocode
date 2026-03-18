/*
 * XREFs of ?vInitStrDDA@stretch@@YAXPEAU_STRDDA@1@PEAU_RECTL@@11@Z @ 0x140136250
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140133474 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall stretch::vInitStrDDA(stretch *this, struct stretch::_STRDDA *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  struct _RECTL *v4; // r10
  __int64 v5; // rdi
  LONG left; // r8d
  struct stretch::_STRDDA *v8; // r11
  int v10; // ecx
  LONG right; // r9d
  int v12; // ebx
  int v13; // esi
  int v14; // ecx
  LONG v15; // r8d
  int v16; // edx
  int v17; // r12d
  int v18; // r15d
  _DWORD *v19; // rcx
  LONG v20; // r13d
  int v21; // eax
  int v22; // ecx
  LONG v23; // r9d
  int v24; // r10d
  int v25; // r15d
  int v26; // ecx
  LONG v27; // r8d
  int v28; // edx
  int v29; // ebx
  int v30; // esi
  int v31; // ecx
  int v32; // eax
  LONG v33; // ecx
  LONG top; // ecx
  LONG bottom; // eax
  __int64 v36; // rcx
  int v37; // eax
  LONG v38; // r12d
  __int64 v39; // rcx
  int v40; // eax
  LONG v41; // r13d
  int v42; // ecx
  int v43; // ecx
  __int128 v44; // [rsp+0h] [rbp-68h] BYREF
  __int128 v45; // [rsp+10h] [rbp-58h] BYREF

  v4 = a3;
  v5 = 0LL;
  left = a3->left;
  v8 = a2;
  v44 = 0LL;
  v45 = 0LL;
  if ( __PAIR64__(v4->top, left) )
  {
    top = v4->top;
    v8 = (struct stretch::_STRDDA *)&v44;
    LODWORD(v44) = *(_DWORD *)a2 - left;
    DWORD1(v44) = *((_DWORD *)a2 + 1) - top;
    DWORD2(v44) = *((_DWORD *)a2 + 2) - left;
    HIDWORD(v44) = *((_DWORD *)a2 + 3) - top;
    DWORD2(v45) = v4->right - left;
    bottom = v4->bottom;
    v4 = (struct _RECTL *)&v45;
    HIDWORD(v45) = bottom - top;
  }
  *((_QWORD *)this + 3) = (char *)this + 4 * v4->right + 32;
  v10 = a4->right - a4->left;
  right = v4->right;
  if ( v10 < 0 )
  {
    v42 = ~v10;
    v13 = ~(v42 / right);
    v12 = right - v42 % right - 1;
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
  if ( *(int *)v8 > 0 )
  {
    v39 = *(unsigned int *)v8;
    v18 = *(_DWORD *)v8;
    do
    {
      v15 += v12;
      v40 = v13 + v16;
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
  if ( v18 < *((_DWORD *)v8 + 2) )
  {
    v19 = (_DWORD *)((char *)this + 32);
    do
    {
      v15 += v12;
      v20 = v15;
      *v19 = v16 - v17;
      v21 = v13 + v16;
      v17 = v16;
      if ( v15 >= right )
        v15 -= right;
      ++v18;
      v16 = v21 + 1;
      ++v19;
      if ( v20 < right )
        v16 = v21;
    }
    while ( v18 < *((_DWORD *)v8 + 2) );
  }
  *((_DWORD *)this + 2) = v17 + a4->left;
  v22 = a4->bottom - a4->top;
  v23 = v4->bottom;
  if ( v22 < 0 )
  {
    v43 = ~v22;
    v25 = ~(v43 / v23);
    v24 = v23 - v43 % v23 - 1;
  }
  else
  {
    v24 = v22 % v23;
    v25 = v22 / v23;
  }
  v26 = v24 + ((v23 - 1) >> 1);
  v27 = v26;
  if ( v26 >= v23 )
    v27 = v26 - v23;
  v28 = v25 + 1;
  v29 = 0;
  v30 = 0;
  if ( v26 < v23 )
    v28 = v25;
  if ( *((int *)v8 + 1) > 0 )
  {
    v36 = *((unsigned int *)v8 + 1);
    v30 = *((_DWORD *)v8 + 1);
    do
    {
      v27 += v24;
      v37 = v25 + v28;
      v29 = v28;
      v38 = v27;
      if ( v27 >= v23 )
        v27 -= v23;
      v28 = v37 + 1;
      if ( v38 < v23 )
        v28 = v37;
      --v36;
    }
    while ( v36 );
  }
  *((_DWORD *)this + 1) = v29 + a4->top;
  while ( v30 < *((_DWORD *)v8 + 3) )
  {
    v27 += v24;
    v31 = v28 - v29;
    v29 = v28;
    *(_DWORD *)(v5 + *((_QWORD *)this + 3)) = v31;
    v32 = v25 + v28;
    v33 = v27;
    if ( v27 >= v23 )
      v27 -= v23;
    ++v30;
    v28 = v32 + 1;
    v5 += 4LL;
    if ( v33 < v23 )
      v28 = v32;
  }
  *((_DWORD *)this + 3) = v29 + a4->top;
}

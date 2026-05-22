/*
 * XREFs of ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801B9CF8
 * Callers:
 *     ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B9BA0 (-Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801B9EF8 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801B9F24 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

void __fastcall DragRecognizer::AddPoint(
        DragRecognizer *this,
        const struct GestureSession *a2,
        const struct tagPOINT *a3,
        char a4)
{
  int v4; // eax
  int v7; // r11d
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r10
  int v14; // r11d
  _BYTE *v15; // r9
  char v16; // di
  char v17; // al
  unsigned int v18; // eax
  unsigned __int8 v19; // si
  bool v20; // zf
  bool v21; // sf
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r14d
  int v25; // edx
  int v26; // r8d
  int v27; // r11d
  int v28; // edx
  int v29; // r8d
  int v30; // eax
  _BYTE *v31; // rdx
  LONG y; // eax
  __int16 v33; // ax
  struct tagPOINT v34; // [rsp+50h] [rbp+8h] BYREF

  v4 = a3->y - *((_DWORD *)this + 15);
  v7 = a3->x - *((_DWORD *)this + 14);
  v9 = *((unsigned __int16 *)this + 18);
  v10 = *((unsigned __int16 *)this + 19);
  v34 = (struct tagPOINT)__PAIR64__(v4, v7);
  if ( !GestureRecognizer::ExceedsThreshold((GestureRecognizer *)__PAIR64__(v4, v7), &v34, v9, v10) && !a4 )
    return;
  v15 = (_BYTE *)(v13 + 30);
  *(struct tagPOINT *)(v13 + 56) = *a3;
  v16 = 0;
  v17 = *(_BYTE *)(v13 + 30);
  if ( (v17 & 2) != 0 )
  {
    v31 = (_BYTE *)(v13 + 30);
  }
  else
  {
    v16 = 1;
    *v15 = v17 | 2;
    v18 = -v14;
    if ( v14 > 0 )
      v18 = v14;
    if ( v18 <= v12 )
    {
      v22 = HIDWORD(v11);
      v19 = 0;
      v20 = (_DWORD)v22 == 0;
      v21 = (v22 & 0x80000000) != 0LL;
    }
    else
    {
      v19 = 1;
      v20 = v14 == 0;
      v21 = v14 < 0;
    }
    v23 = *((_QWORD *)a2 + 149);
    v24 = *(unsigned __int16 *)(v13 + 24);
    v25 = *(unsigned __int16 *)(v13 + 22) >> 1;
    v26 = v25 + *(unsigned __int16 *)(v13 + 16);
    v27 = *(unsigned __int16 *)(v13 + 22) - v25;
    v28 = -v26;
    if ( !v21 && !v20 )
      v28 = v26;
    if ( v19 )
    {
      *(_DWORD *)(v13 + 40) = v23 + v28 - v27;
      v11 = (unsigned int)(v24 + HIDWORD(v23));
      v29 = HIDWORD(v23) - v24;
      v30 = v27 + v28 + v23;
    }
    else
    {
      *(_DWORD *)(v13 + 40) = v23 - v24;
      v11 = (unsigned int)(v27 + v28 + HIDWORD(v23));
      v29 = v28 - v27 + HIDWORD(v23);
      v30 = v24 + v23;
    }
    *(_DWORD *)(v13 + 48) = v30;
    v31 = (_BYTE *)(v13 + 30);
    *(_DWORD *)(v13 + 44) = v29;
    *(_DWORD *)(v13 + 52) = v11;
    *(_QWORD *)(v13 + 64) = *(_QWORD *)(v13 + 56);
    *(_DWORD *)(v13 + 72) &= ~(16 * v19 + 16);
  }
  LOBYTE(v11) = *v15;
  if ( (*v15 & 6) == 2 )
  {
    if ( !*(_WORD *)(v13 + 22) )
    {
      LOBYTE(v11) = v11 | 4;
LABEL_25:
      *v31 = v11;
      goto LABEL_26;
    }
    if ( a3->x < *(_DWORD *)(v13 + 40) || a3->x > *(_DWORD *)(v13 + 48) )
    {
      LOBYTE(v11) = v11 | 4;
      *(_DWORD *)(v13 + 72) &= ~0x20u;
      goto LABEL_25;
    }
    y = a3->y;
    if ( y < *(_DWORD *)(v13 + 44) || y > *(_DWORD *)(v13 + 52) )
    {
      LOBYTE(v11) = v11 | 4;
      *(_DWORD *)(v13 + 72) &= ~0x10u;
      goto LABEL_25;
    }
  }
LABEL_26:
  v33 = *(_WORD *)(v13 + 28);
  *(_WORD *)(v13 + 36) = v33;
  *(_WORD *)(v13 + 38) = v33;
  v34.x = *(_DWORD *)(v13 + 56) - *(_DWORD *)(v13 + 64);
  v34.y = *(_DWORD *)(v13 + 60) - *(_DWORD *)(v13 + 68);
  if ( v16 || a4 || GestureRecognizer::ExceedsThreshold((GestureRecognizer *)v11, &v34, *(unsigned __int16 *)(v13 + 26)) )
    *(_BYTE *)(v13 + 30) = v11 | 8;
}

/*
 * XREFs of ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x140095050
 * Callers:
 *     bConstructGET @ 0x140094F10 (bConstructGET.c)
 * Callees:
 *     <none>
 */

struct EDGE *__fastcall AddEdgeToGET(
        struct EDGE *a1,
        struct EDGE *a2,
        struct _POINTFIX *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5)
{
  FIX y; // r10d
  int v6; // edi
  FIX v9; // ecx
  FIX v10; // edx
  int v11; // r11d
  int v12; // r15d
  FIX v13; // r12d
  int v14; // r14d
  struct _POINTFIX *v15; // rax
  FIX x; // r10d
  LONG v17; // eax
  FIX v18; // ebp
  LONG v19; // r9d
  int v20; // ecx
  int v21; // eax
  int v22; // ebp
  __int64 v23; // rcx
  int v24; // r11d
  unsigned int v25; // r8d
  __int64 v26; // rax
  int v27; // r8d
  bool v28; // zf
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rax
  struct EDGE *result; // rax
  LONG top; // eax
  LONG bottom; // r8d

  y = a4->y;
  v6 = 0;
  v9 = a3->y;
  v10 = y;
  v11 = y - v9;
  v12 = y - v9;
  v13 = 0;
  v14 = 0;
  if ( y - v9 < 0 )
    v12 = a3->y - y;
  if ( v11 < 0 )
  {
    v10 = a3->y;
    v9 = a4->y;
  }
  v15 = a3;
  if ( v11 < 0 )
  {
    v15 = a4;
    a4 = a3;
  }
  x = v15->x;
  v17 = v10;
  v18 = a4->x;
  v19 = v9;
  *((_DWORD *)a2 + 14) = ((v11 >> 31) & 0xFFFFFFFE) + 1;
  if ( a5 )
  {
    top = a5->top;
    if ( v10 < top )
      return a2;
    bottom = a5->bottom;
    if ( v9 > bottom )
      return a2;
    if ( v9 < top )
    {
      v13 = v9;
      v19 = a5->top;
    }
    LOBYTE(v14) = v9 < top;
    v17 = v10;
    if ( v10 > bottom )
      v17 = a5->bottom;
  }
  v20 = (v19 + 15) >> 4;
  v21 = ((v17 + 15) >> 4) - v20;
  *((_DWORD *)a2 + 4) = v20;
  *((_DWORD *)a2 + 2) = v21;
  if ( v21 <= 0 )
    return a2;
  v22 = v18 - x;
  if ( v22 < 0 )
  {
    v22 = -v22;
    v24 = -1;
    v23 = -v12;
  }
  else
  {
    v23 = -1LL;
    v24 = 1;
  }
  *((_DWORD *)a2 + 13) = v24;
  *((_QWORD *)a2 + 3) = v23;
  if ( v22 >= v12 )
  {
    *((_DWORD *)a2 + 12) = v22 / v12;
    v6 = v22 / v12;
    if ( v24 == -1 )
    {
      v6 = -v6;
      *((_DWORD *)a2 + 12) = v6;
    }
    v22 %= v12;
  }
  else
  {
    *((_DWORD *)a2 + 12) = 0;
  }
  *((_QWORD *)a2 + 4) = v22;
  *((_QWORD *)a2 + 5) = v12;
  if ( v14 )
  {
    v25 = a5->top;
    v19 = v13;
  }
  else
  {
    v25 = (v19 + 15) & 0xFFFFFFF0;
  }
  if ( v19 != v25 )
  {
    v26 = v25 - v19;
    do
    {
      x += v6;
      v23 += v22;
      if ( v23 >= 0 )
      {
        v23 -= v12;
        x += *((_DWORD *)a2 + 13);
      }
      --v26;
    }
    while ( v26 );
    *((_QWORD *)a2 + 3) = v23;
  }
  v27 = (x + 15) >> 4;
  v28 = *((_DWORD *)a2 + 13) == 1;
  *((_DWORD *)a2 + 3) = v27;
  if ( v28 )
    v29 = (int)(((x + 15) & 0xFFFFFFF0) - x);
  else
    v29 = ((_BYTE)x - 1) & 0xF;
  *((_QWORD *)a2 + 3) = v23 - v12 * v29;
  *((_QWORD *)a2 + 4) *= 16LL;
  v30 = *((_DWORD *)a2 + 4);
  *((_QWORD *)a2 + 5) = 16LL * v12;
  while ( 1 )
  {
    v31 = *(_QWORD *)a1;
    if ( v30 <= *(_DWORD *)(*(_QWORD *)a1 + 16LL)
      && (v30 != *(_DWORD *)(*(_QWORD *)a1 + 16LL) || v27 <= *(_DWORD *)(v31 + 12)) )
    {
      break;
    }
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v31;
  result = (struct EDGE *)((char *)a2 + 64);
  *(_QWORD *)a1 = a2;
  return result;
}

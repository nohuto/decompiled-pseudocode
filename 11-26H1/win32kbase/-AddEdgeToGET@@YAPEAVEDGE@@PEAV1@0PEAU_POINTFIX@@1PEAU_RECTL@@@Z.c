/*
 * XREFs of ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x14000E9D0
 * Callers:
 *     bConstructGET @ 0x14000E8C0 (bConstructGET.c)
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
  int v6; // esi
  FIX v9; // ecx
  FIX v10; // edx
  int v11; // r11d
  int v12; // r14d
  FIX v13; // r12d
  struct _POINTFIX *v14; // rax
  FIX x; // ebp
  LONG v16; // eax
  FIX v17; // r9d
  LONG v18; // r8d
  int v19; // r11d
  int v20; // ecx
  int v21; // eax
  int v22; // ebp
  __int64 v23; // rcx
  int v24; // r15d
  __int64 v25; // rax
  unsigned int v26; // r10d
  _QWORD *v27; // r14
  __int64 v28; // r11
  bool v29; // zf
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rax
  struct EDGE *result; // rax
  LONG top; // eax
  LONG bottom; // r10d

  y = a4->y;
  v6 = 0;
  v9 = a3->y;
  v10 = y;
  v11 = y - v9;
  v12 = y - v9;
  v13 = 0;
  if ( y - v9 < 0 )
    v12 = a3->y - y;
  if ( v11 < 0 )
  {
    v10 = a3->y;
    v9 = a4->y;
  }
  v14 = a4;
  if ( v11 < 0 )
  {
    v14 = a3;
    a3 = a4;
  }
  x = v14->x;
  v16 = v10;
  v17 = a3->x;
  v18 = v9;
  *((_DWORD *)a2 + 14) = ((v11 >> 31) & 0xFFFFFFFE) + 1;
  v19 = 0;
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
      v18 = a5->top;
    }
    LOBYTE(v19) = v9 < top;
    v16 = v10;
    if ( v10 > bottom )
      v16 = a5->bottom;
  }
  v20 = (v18 + 15) >> 4;
  v21 = ((v16 + 15) >> 4) - v20;
  *((_DWORD *)a2 + 4) = v20;
  *((_DWORD *)a2 + 2) = v21;
  if ( v21 <= 0 )
    return a2;
  v22 = x - v17;
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
  v25 = v12;
  *((_QWORD *)a2 + 4) = v22;
  *((_QWORD *)a2 + 5) = v12;
  if ( v19 )
  {
    v26 = a5->top;
    v18 = v13;
  }
  else
  {
    v26 = (v18 + 15) & 0xFFFFFFF0;
  }
  v27 = (_QWORD *)((char *)a2 + 40);
  if ( v18 != v26 )
  {
    do
    {
      v17 += v6;
      v23 += v22;
      if ( v23 >= 0 )
      {
        v23 -= v25;
        v17 += v24;
      }
      ++v18;
    }
    while ( v18 != v26 );
    v27 = (_QWORD *)((char *)a2 + 40);
  }
  v28 = *((_QWORD *)a2 + 5);
  v29 = *((_DWORD *)a2 + 13) == 1;
  *((_DWORD *)a2 + 3) = (v17 + 15) >> 4;
  if ( v29 )
    v30 = (int)(((v17 + 15) & 0xFFFFFFF0) - v17);
  else
    v30 = ((_BYTE)v17 - 1) & 0xF;
  *((_QWORD *)a2 + 3) = v23 - v28 * v30;
  *((_QWORD *)a2 + 4) = 16LL * v22;
  v31 = *((_DWORD *)a2 + 4);
  *v27 = 16 * v28;
  while ( 1 )
  {
    v32 = *(_QWORD *)a1;
    if ( v31 <= *(_DWORD *)(*(_QWORD *)a1 + 16LL)
      && (v31 != *(_DWORD *)(*(_QWORD *)a1 + 16LL) || *((_DWORD *)a2 + 3) <= *(_DWORD *)(v32 + 12)) )
    {
      break;
    }
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v32;
  result = (struct EDGE *)((char *)a2 + 64);
  *(_QWORD *)a1 = a2;
  return result;
}

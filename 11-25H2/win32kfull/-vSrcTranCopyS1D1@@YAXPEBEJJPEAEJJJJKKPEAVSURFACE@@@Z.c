/*
 * XREFs of ?vSrcTranCopyS1D1@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401B7740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D1(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned __int32 v9; // r11d
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int32 v12; // r10d
  int v13; // eax
  int v14; // edi
  int v15; // ebp
  unsigned __int8 *v16; // rdx
  const unsigned __int8 *v17; // rax
  const unsigned __int8 *v18; // rcx
  const unsigned __int8 *v19; // r9
  int v20; // r8d
  int v21; // r10d
  int v22; // eax
  __int64 v23; // r14
  int v24; // ebx
  __int64 v25; // rsi
  const unsigned __int8 *v26; // r8
  int v27; // eax
  __int64 v28; // r14
  int v29; // ebx
  __int64 v30; // rsi
  const unsigned __int8 *v31; // r8
  int v32; // eax
  int v33; // r10d
  int v34; // eax

  v9 = -1;
  v10 = a3;
  v11 = a2;
  v12 = -1;
  v13 = a6 + a2 - a5;
  v14 = ((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F;
  v15 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v12 = _byteswap_ulong(0xFFFFFFFF >> v15);
  if ( (((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F) != 0 )
    v9 = _byteswap_ulong(-1 << (32 - v14));
  v16 = &a4[((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v17 = &a1[((__int64)v13 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v18 = &a1[(v11 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v19 = &v18[v10 * a8];
  v20 = (_DWORD)v17 - (_DWORD)v18;
  if ( a9 )
  {
    if ( v18 == v17 )
    {
      v33 = v9 & v12;
      do
      {
        v34 = *(_DWORD *)v18;
        v18 += v10;
        *(_DWORD *)v16 |= v33 & v34;
        v16 += a7;
      }
      while ( v18 != v19 );
    }
    else
    {
      v28 = v20;
      v29 = v10 - v20;
      v30 = a7 - v20;
      do
      {
        v31 = &v18[v28];
        if ( v15 )
        {
          *(_DWORD *)v16 |= v12 & *(_DWORD *)v18;
          v16 += 4;
          v18 += 4;
        }
        while ( v18 != v31 )
        {
          v32 = *(_DWORD *)v18;
          v18 += 4;
          *(_DWORD *)v16 |= v32;
          v16 += 4;
        }
        if ( v14 )
          *(_DWORD *)v16 |= v9 & *(_DWORD *)v18;
        v18 += v29;
        v16 += v30;
      }
      while ( v18 != v19 );
    }
  }
  else if ( v18 == v17 )
  {
    v21 = v9 & v12;
    do
    {
      v22 = *(_DWORD *)v18;
      v18 += v10;
      *(_DWORD *)v16 &= ~(v21 & v22);
      v16 += a7;
    }
    while ( v18 != v19 );
  }
  else
  {
    v23 = v20;
    v24 = v10 - v20;
    v25 = a7 - v20;
    do
    {
      v26 = &v18[v23];
      if ( v15 )
      {
        *(_DWORD *)v16 &= ~(v12 & *(_DWORD *)v18);
        v16 += 4;
        v18 += 4;
      }
      while ( v18 != v26 )
      {
        v27 = *(_DWORD *)v18;
        v18 += 4;
        *(_DWORD *)v16 &= ~v27;
        v16 += 4;
      }
      if ( v14 )
        *(_DWORD *)v16 &= ~(v9 & *(_DWORD *)v18);
      v18 += v24;
      v16 += v25;
    }
    while ( v18 != v19 );
  }
}

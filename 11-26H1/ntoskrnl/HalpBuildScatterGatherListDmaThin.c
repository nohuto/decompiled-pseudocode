/*
 * XREFs of HalpBuildScatterGatherListDmaThin @ 0x1403E9120
 * Callers:
 *     HalBuildScatterGatherListDmaThinEx @ 0x1403E9070 (HalBuildScatterGatherListDmaThinEx.c)
 *     HalGetScatterGatherListDmaThinEx @ 0x14058DA30 (HalGetScatterGatherListDmaThinEx.c)
 * Callees:
 *     HalpConstructScatterGatherListDmaThin @ 0x1403E97E0 (HalpConstructScatterGatherListDmaThin.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpBuildScatterGatherListDmaThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *P,
        unsigned int a12,
        _QWORD *a13)
{
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned __int64 v17; // rax
  int v18; // edx
  __int64 *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // rsi
  unsigned int v23; // r9d
  unsigned int v24; // edx
  unsigned int v25; // r10d
  __int64 *i; // r11
  unsigned int v27; // edx
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  _DWORD *Pool2; // r14
  _DWORD *v31; // rsi
  __int64 result; // rax
  unsigned int v33; // ebx

  v14 = a2;
  v15 = a3;
  if ( !a4 )
    return 3221225485LL;
  if ( a13 )
    *a13 = 0LL;
  while ( 1 )
  {
    v17 = *((unsigned int *)a4 + 10);
    if ( a5 < v17 )
      break;
    a4 = (__int64 *)*a4;
    a5 -= v17;
    if ( !a4 )
      return 3221225485LL;
  }
  v18 = a5;
  v19 = a4;
  v20 = 0LL;
  v21 = a6;
  if ( a6 )
  {
    v22 = 0LL;
    do
    {
      if ( !v19 )
        break;
      v23 = v21;
      if ( *((_DWORD *)v19 + 10) - v18 <= (unsigned int)v21 )
        v23 = *((_DWORD *)v19 + 10) - v18;
      v24 = *((_DWORD *)v19 + 11) + v18;
      v21 = (unsigned int)v21 - v23;
      v25 = v24 & 0xFFF;
      for ( i = &v19[((unsigned __int64)v24 >> 12) + 6]; v23; v23 -= v27 )
      {
        v27 = v23;
        v28 = v25 + (*i << 12);
        if ( 4096 - v25 <= v23 )
          v27 = 4096 - v25;
        if ( v28 != v22 + 1 || !(_DWORD)v20 )
          v20 = (unsigned int)(v20 + 1);
        ++i;
        v25 = 0;
        v22 = v28 + v27 - 1LL;
      }
      v19 = (__int64 *)*v19;
      v18 = 0;
    }
    while ( (_DWORD)v21 );
    v15 = a3;
    v14 = a2;
  }
  v29 = 24 * v20 + 120;
  if ( P )
  {
    if ( a12 < v29 )
      return 3221225507LL;
    Pool2 = P;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x42uLL);
    if ( !Pool2 )
      return 3221225626LL;
    v15 = a3;
    v14 = a2;
  }
  v31 = &Pool2[6 * v20 + 4];
  *Pool2 = v20;
  *((_BYTE *)v31 + 97) = P == 0LL;
  *((_QWORD *)v31 + 3) = a1;
  *((_QWORD *)v31 + 4) = v14;
  *((_QWORD *)v31 + 5) = *(_QWORD *)(v14 + 32);
  *((_QWORD *)v31 + 8) = a8;
  *((_QWORD *)v31 + 9) = a9;
  v31[14] = a6;
  *((_QWORD *)v31 + 6) = a4;
  v31[15] = a5;
  *((_QWORD *)v31 + 10) = Pool2;
  *((_BYTE *)v31 + 96) = a7 & 1;
  v31[4] = 2;
  *((_BYTE *)v31 + 98) = 0;
  *((_QWORD *)v31 + 11) = 0LL;
  if ( v15
    && (v29 = v15 + 8,
        *(_QWORD *)(v15 + 88) = v31,
        *((_QWORD *)v31 + 11) = v15 + 8,
        _m_prefetchw((const void *)(v15 + 8)),
        (_InterlockedOr((volatile signed __int32 *)(v15 + 8), 4u) & 2) != 0) )
  {
    v33 = -1073741536;
  }
  else
  {
    result = HalpConstructScatterGatherListDmaThin(v31, v29, v21);
    v33 = result;
    if ( (int)result >= 0 )
    {
      if ( a13 )
        *a13 = Pool2;
      return result;
    }
  }
  if ( *((_BYTE *)v31 + 97) )
    ExFreePoolWithTag(Pool2, 0);
  return v33;
}

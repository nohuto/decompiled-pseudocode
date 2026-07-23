/*
 * XREFs of HalBuildScatterGatherListDmaThin @ 0x1403E95B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpConstructScatterGatherListDmaThin @ 0x1403E97E0 (HalpConstructScatterGatherListDmaThin.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalBuildScatterGatherListDmaThin(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *P,
        unsigned int a10)
{
  __int64 *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r14
  unsigned int v19; // r9d
  unsigned int v20; // edx
  unsigned int v21; // r10d
  __int64 *i; // r11
  unsigned int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // r14
  unsigned __int64 v26; // rdx
  __int64 result; // rax
  _DWORD *Pool2; // r12
  char *v29; // rbp
  unsigned int v30; // ebx

  v10 = a3;
  v11 = a4 - *((unsigned int *)a3 + 11) - a3[4];
  while ( 1 )
  {
    v13 = *((unsigned int *)v10 + 10);
    if ( v11 < v13 )
      break;
    v10 = (__int64 *)*v10;
    v11 -= v13;
    if ( !v10 )
      return 3221225485LL;
  }
  v14 = v11;
  v15 = 0LL;
  v16 = v10;
  v17 = a5;
  if ( a5 )
  {
    v18 = 0LL;
    do
    {
      if ( !v16 )
        break;
      v19 = v17;
      if ( *((_DWORD *)v16 + 10) - v14 <= (unsigned int)v17 )
        v19 = *((_DWORD *)v16 + 10) - v14;
      v20 = *((_DWORD *)v16 + 11) + v14;
      v17 = (unsigned int)v17 - v19;
      v21 = v20 & 0xFFF;
      for ( i = &v16[((unsigned __int64)v20 >> 12) + 6]; v19; v19 -= v23 )
      {
        v23 = v19;
        v24 = v21 + (*i << 12);
        if ( 4096 - v21 <= v19 )
          v23 = 4096 - v21;
        if ( v24 != v18 + 1 || !(_DWORD)v15 )
          v15 = (unsigned int)(v15 + 1);
        ++i;
        v21 = 0;
        v18 = v24 + v23 - 1LL;
      }
      v16 = (__int64 *)*v16;
      v14 = 0;
    }
    while ( (_DWORD)v17 );
  }
  v25 = 24 * v15 + 16;
  v26 = 24 * v15 + 120;
  if ( P )
  {
    if ( a10 < v26 )
      return 3221225507LL;
    Pool2 = P;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x42uLL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  *Pool2 = v15;
  v29 = (char *)Pool2 + v25;
  *((_QWORD *)v29 + 4) = a2;
  v29[97] = P == 0LL;
  *((_QWORD *)v29 + 3) = a1;
  *((_QWORD *)v29 + 5) = *(_QWORD *)(a2 + 32);
  *((_QWORD *)v29 + 8) = a6;
  *((_QWORD *)v29 + 9) = a7;
  *((_DWORD *)v29 + 14) = a5;
  *((_QWORD *)v29 + 6) = v10;
  *((_DWORD *)v29 + 15) = v11;
  *((_QWORD *)v29 + 10) = Pool2;
  v29[96] = 0;
  *((_DWORD *)v29 + 4) = 2;
  v29[98] = 0;
  *((_QWORD *)v29 + 11) = 0LL;
  result = HalpConstructScatterGatherListDmaThin((char *)Pool2 + v25, v26, v17);
  v30 = result;
  if ( (int)result < 0 )
  {
    if ( v29[97] )
    {
      ExFreePoolWithTag(Pool2, 0);
      return v30;
    }
  }
  return result;
}

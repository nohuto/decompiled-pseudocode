/*
 * XREFs of HalGetScatterGatherListDmaThin @ 0x1403E93E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpConstructScatterGatherListDmaThin @ 0x1403E97E0 (HalpConstructScatterGatherListDmaThin.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalGetScatterGatherListDmaThin(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 *v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r9d
  int v14; // ecx
  __int64 *v15; // rdx
  __int64 v16; // r14
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // r10d
  __int64 *i; // r11
  unsigned int v21; // ecx
  __int64 v22; // r15
  _DWORD *Pool2; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  void *v26; // r14
  int v27; // edi
  _DWORD *v29; // rbx

  v7 = a3;
  v8 = a4 - *((unsigned int *)a3 + 11) - a3[4];
  do
  {
    v11 = *((unsigned int *)v7 + 10);
    if ( v8 < v11 )
      break;
    v7 = (__int64 *)*v7;
    v8 -= v11;
  }
  while ( v7 );
  if ( v7 )
  {
    v12 = 0LL;
    v13 = a5;
    v14 = v8;
    v15 = v7;
    if ( a5 )
    {
      v16 = 0LL;
      do
      {
        if ( !v15 )
          break;
        v17 = v13;
        if ( *((_DWORD *)v15 + 10) - v14 <= v13 )
          v17 = *((_DWORD *)v15 + 10) - v14;
        v18 = *((_DWORD *)v15 + 11) + v14;
        v13 -= v17;
        v19 = v18 & 0xFFF;
        for ( i = &v15[((unsigned __int64)v18 >> 12) + 6]; v17; v17 -= v21 )
        {
          v21 = v17;
          v22 = v19 + (*i << 12);
          if ( 4096 - v19 <= v17 )
            v21 = 4096 - v19;
          if ( v22 != v16 + 1 || !(_DWORD)v12 )
            v12 = (unsigned int)(v12 + 1);
          ++i;
          v19 = 0;
          v16 = v22 + v21 - 1LL;
        }
        v15 = (__int64 *)*v15;
        v14 = 0;
      }
      while ( v13 );
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x42uLL);
    v26 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v12;
      v29 = &Pool2[6 * v12];
      *((_BYTE *)v29 + 113) = 1;
      *((_QWORD *)v29 + 5) = a1;
      *((_QWORD *)v29 + 6) = a2;
      *((_QWORD *)v29 + 7) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v29 + 10) = a6;
      v29[19] = v8;
      *((_QWORD *)v29 + 11) = a7;
      v29[18] = a5;
      *((_QWORD *)v29 + 8) = v7;
      *((_QWORD *)v29 + 12) = Pool2;
      *((_BYTE *)v29 + 112) = 0;
      v29[8] = 2;
      *((_BYTE *)v29 + 114) = 0;
      *((_QWORD *)v29 + 13) = 0LL;
      v27 = HalpConstructScatterGatherListDmaThin(v29 + 4, v24, v25);
      if ( v27 < 0 && *((_BYTE *)v29 + 113) )
        ExFreePoolWithTag(v26, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v27;
}

/*
 * XREFs of MiFindEmptyAddressRangeInTree @ 0x140A7CF64
 * Callers:
 *     MiFindEmptyAddressRange @ 0x14099635C (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x14048590C (MiHonorRangeStraddleRequirement.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeInTree(
        _QWORD **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned int v9; // r11d
  __int64 v10; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  _QWORD **v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD *i; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx

  v7 = a3 >> 12;
  v8 = (unsigned __int64)(a2 + 4095) >> 12;
  v9 = 0;
  v10 = a4 >> 12;
  v12 = ~((a3 >> 12) - 1);
  v13 = v12 & ((a3 >> 12) + (a5 >> 12) - 1);
  if ( a4 >> 12 )
    v13 = MiHonorRangeStraddleRequirement(v13, (unsigned __int64)(a2 + 4095) >> 12, v10, 0);
  v14 = a6 >> 12;
  if ( v13 > a6 >> 12 || v8 > v14 - v13 + 1 )
    return (unsigned int)-1073741801;
  v15 = *a1;
  if ( !*a1 )
    goto LABEL_36;
  do
  {
    v16 = (unsigned __int64)v15;
    v15 = (_QWORD *)*v15;
  }
  while ( v15 );
  v17 = v16;
  if ( (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) > v13
    && v8 <= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) - v13 )
  {
LABEL_36:
    *a7 = v13 << 12;
    return v9;
  }
  while ( 1 )
  {
    v18 = *(_QWORD ***)(v16 + 8);
    v19 = v16;
    if ( v18 )
    {
      v16 = *(_QWORD *)(v16 + 8);
      for ( i = *v18; i; i = (_QWORD *)*i )
        v16 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v16 || *(_QWORD *)v16 == v19 )
          break;
        v19 = v16;
      }
    }
    v21 = *(unsigned int *)(v17 + 28);
    if ( !v16 )
      break;
    if ( (v12 & (v7 + (v21 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) - 1)) < v13 )
    {
      if ( (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) <= v13 )
        goto LABEL_22;
      v22 = v13;
    }
    else
    {
      v22 = v12 & (v7 + (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)));
    }
    if ( v10 )
      v22 = MiHonorRangeStraddleRequirement(v22, v8, v10, 0);
    if ( v22 > v14 )
      return (unsigned int)-1073741801;
    if ( (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) > v22
      && v8 <= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) - v22
      && v8 <= v14 - v22 + 1 )
    {
      *a7 = v22 << 12;
      return v9;
    }
LABEL_22:
    v17 = v16;
  }
  v23 = v12 & (v7 + (v21 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)));
  if ( v23 < v13 )
    v23 = v13;
  if ( v10 )
    v23 = MiHonorRangeStraddleRequirement(v23, v8, v10, 0);
  if ( v14 >= v23 && v8 <= v14 - v23 + 1 )
  {
    *a7 = v23 << 12;
    return v9;
  }
  return (unsigned int)-1073741801;
}

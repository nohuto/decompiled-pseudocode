/*
 * XREFs of IntpInitClassContext @ 0x140D08400
 * Callers:
 *     IntPartCreate @ 0x140D08614 (IntPartCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall IntpInitClassContext(_BYTE *a1, unsigned __int8 a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  __int16 v5; // r14
  char *v7; // rsi
  __int16 v8; // dx
  __int64 v9; // rdi
  unsigned __int8 *v10; // r8
  __int64 v11; // r9
  __int16 v12; // cx
  unsigned int v13; // eax
  ULONG_PTR Pool2; // r8
  __int64 v15; // r9
  __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  ULONG_PTR result; // rax

  v3 = a2;
  v4 = 0;
  v5 = -1;
  v7 = a1;
  v8 = -1;
  v9 = v3;
  if ( (_BYTE)v3 )
  {
    v10 = a1 + 1;
    v11 = v3;
    do
    {
      v12 = *v10;
      v13 = v4 + 1;
      v10 += 2;
      if ( v12 == v8 )
      {
        v13 = v4;
        v12 = v8;
      }
      v4 = v13;
      v8 = v12;
      --v11;
    }
    while ( v11 );
  }
  Pool2 = ExAllocatePool2(64LL, 24LL * v4, 0x5049654Bu);
  if ( Pool2 )
  {
    v15 = 0xFFFFFFFFLL;
    if ( (_BYTE)v3 )
    {
      do
      {
        v16 = (unsigned __int8)v7[1];
        if ( v16 != v5 )
        {
          v15 = (unsigned int)(v15 + 1);
          v5 = (unsigned __int8)v7[1];
          v17 = 3LL * (unsigned int)v15;
          *(_WORD *)(Pool2 + 8 * v17) = (unsigned __int8)v16;
          *(_QWORD *)(Pool2 + 8 * v17 + 8) = 0LL;
        }
        v18 = 3 * v15;
        ++*(_BYTE *)(Pool2 + 8 * v18 + 1);
        v19 = *v7;
        v7 += 2;
        *(_QWORD *)(Pool2 + 8 * v18 + 8) = *(_QWORD *)(Pool2 + 24 * v15 + 8) | (1LL << v19);
        --v9;
      }
      while ( v9 );
    }
  }
  result = Pool2;
  *a3 = v4;
  return result;
}

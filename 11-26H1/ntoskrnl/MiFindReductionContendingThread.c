/*
 * XREFs of MiFindReductionContendingThread @ 0x1402F5EDC
 * Callers:
 *     MiReduceZeroingThreads @ 0x1405211AC (MiReduceZeroingThreads.c)
 * Callees:
 *     MiZeroThreadContending @ 0x1402F6640 (MiZeroThreadContending.c)
 *     MiEngineAffinity @ 0x1402F6724 (MiEngineAffinity.c)
 */

_QWORD *__fastcall MiFindReductionContendingThread(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // r13d
  __int64 v8; // rdi
  _QWORD *result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *j; // r14
  unsigned int v13; // edx
  _QWORD *v14; // rdx
  _QWORD *i; // rcx
  int v16; // [rsp+58h] [rbp+10h]

  v16 = a2;
  if ( !*(_DWORD *)a1 )
  {
    v14 = (_QWORD *)(a1 + 168);
    for ( i = *(_QWORD **)(a1 + 168); i != v14; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(i - 4) & 2) == 0 )
      {
        result = i - 20;
        ++*(_DWORD *)(a1 + 220);
        return result;
      }
    }
    return 0LL;
  }
  v3 = *(unsigned int *)(MiEngineAffinity(a1, a2, (unsigned int)a2) + 8);
  if ( (_DWORD)v3 )
  {
    v5 = 0LL;
    v6 = (unsigned int)v3;
    do
    {
      v5 += 48LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 88) + v5 - 12) = 0;
      --v6;
    }
    while ( v6 );
  }
  v7 = 0;
LABEL_6:
  if ( v7 >= (unsigned int)v3 )
    return 0LL;
  v8 = 0LL;
  if ( !(_DWORD)v3 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 88);
  v11 = v3;
  do
  {
    if ( !*(_DWORD *)(v10 + 36) )
    {
      v13 = *(_DWORD *)(v10 + 32);
      if ( v13 )
      {
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 32) < v13 )
            v8 = v10;
        }
        else
        {
          v8 = v10;
        }
      }
    }
    v10 += 48LL;
    --v11;
  }
  while ( v11 );
  if ( !v8 )
    return 0LL;
  for ( j = *(_QWORD **)(v8 + 16); ; j = (_QWORD *)*j )
  {
    if ( j == (_QWORD *)(v8 + 16) )
    {
      *(_DWORD *)(v8 + 36) = 1;
      ++v7;
      goto LABEL_6;
    }
    if ( v4 )
      break;
    if ( (*(_DWORD *)(j - 6) & 2) == 0 )
    {
      ++*(_DWORD *)(a1 + 220);
      return j - 22;
    }
LABEL_17:
    ;
  }
  if ( !(unsigned int)MiZeroThreadContending(j - 22) )
  {
    v4 = v16;
    goto LABEL_17;
  }
  ++*(_DWORD *)(a1 + 216);
  return j - 22;
}

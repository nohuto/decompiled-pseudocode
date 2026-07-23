/*
 * XREFs of MiMarkHugeRangeTransition @ 0x14048852C
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 * Callees:
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiMarkHugeRangeTransition(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ebp
  int v4; // esi
  unsigned int v5; // edi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  char v8; // r10
  __int64 *i; // r8
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD **v12; // rdx
  unsigned __int64 v13; // rax
  _QWORD *j; // rdx
  __int64 v15; // r14

  v1 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 1;
LABEL_2:
  v8 = MiLockIoPfnTree((unsigned int)(v3 + 1));
  for ( i = qword_140E35FC0; (__int64)i < (__int64)&xmmword_140E36040; i += 8 )
  {
    v10 = (_QWORD *)*i;
    if ( !*i )
      continue;
    v7 = a1 + 0x3FFFF;
    v6 = 0LL;
    do
    {
      v11 = v10[3];
      if ( v7 >= v11 )
      {
        if ( a1 >= v11 + 512 )
        {
          v10 = (_QWORD *)v10[1];
          continue;
        }
        v6 = (unsigned __int64)v10;
      }
      v10 = (_QWORD *)*v10;
    }
    while ( v10 );
    while ( v6 && v7 >= *(_QWORD *)(v6 + 24) )
    {
      if ( *(_DWORD *)(v6 + 32) )
      {
        if ( !v3 )
        {
          LOBYTE(v6) = v8;
          MiUnlockIoPfnTree(v6, 1LL, i, v7);
          v3 = 1;
          goto LABEL_2;
        }
        ++v4;
      }
      v12 = *(_QWORD ***)(v6 + 8);
      v13 = v6;
      if ( v12 )
      {
        v6 = *(_QWORD *)(v6 + 8);
        for ( j = *v12; j; j = (_QWORD *)*j )
          v6 = (unsigned __int64)j;
      }
      else
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)v6 == v13 )
            break;
          v13 = v6;
        }
      }
    }
  }
  if ( v3 )
  {
    if ( v4 )
    {
      v15 = (a1 >> 18) & 0x3FFFFF;
      v6 = *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v15) & 0x7FF8LL | ((unsigned __int64)(v4 & 0x1FF) << 15) | 5;
      *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v15) = v6;
    }
    v5 = 2;
  }
  LOBYTE(v6) = v8;
  MiUnlockIoPfnTree(v6, v5, i, v7);
  LOBYTE(v1) = v4 != 0;
  return v1;
}

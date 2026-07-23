/*
 * XREFs of MiIsProbeActive @ 0x1406F91A4
 * Callers:
 *     MmIsIoSpaceActive @ 0x1406F9BE0 (MmIsIoSpaceActive.c)
 * Callees:
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  char v6; // al
  _QWORD *v7; // rcx
  _WORD *v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _QWORD **v14; // rdx
  _QWORD *v15; // rax
  _QWORD *i; // rdx

  v2 = a1 + a2;
  v4 = 0;
  v5 = a1 + a2 - 1;
  v6 = MiLockIoPfnTree(1LL);
  v9 = (_QWORD *)qword_140E35FC0[0];
  LOBYTE(v10) = v6;
  if ( !qword_140E35FC0[0] )
    goto LABEL_30;
  v7 = 0LL;
  do
  {
    v11 = v9[3];
    if ( v5 >= v11 )
    {
      if ( a1 >= v11 + 512 )
      {
        v9 = (_QWORD *)v9[1];
        continue;
      }
      v7 = v9;
    }
    v9 = (_QWORD *)*v9;
  }
  while ( v9 );
  while ( v7 )
  {
    v8 = (_WORD *)v7[3];
    if ( v5 < (unsigned __int64)v8 )
      break;
    v12 = a1 - (_QWORD)v8;
    if ( a1 < (unsigned __int64)v8 )
      v12 = 0LL;
    if ( v2 > (unsigned __int64)(v8 + 256) )
      v13 = 512LL;
    else
      v13 = v5 - (_QWORD)v8 + 1;
    v8 = (_WORD *)v7 + v12 + 88;
    while ( v12 < v13 )
    {
      if ( *v8 )
      {
        v4 = 1;
        goto LABEL_30;
      }
      ++v12;
      ++v8;
    }
    v14 = (_QWORD **)v7[1];
    v15 = v7;
    if ( v14 )
    {
      v7 = (_QWORD *)v7[1];
      for ( i = *v14; i; i = (_QWORD *)*i )
        v7 = i;
    }
    else
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v7 || (_QWORD *)*v7 == v15 )
          break;
        v15 = v7;
      }
    }
  }
LABEL_30:
  LOBYTE(v7) = v10;
  MiUnlockIoPfnTree(v7, 1LL, v8, v10);
  return v4;
}

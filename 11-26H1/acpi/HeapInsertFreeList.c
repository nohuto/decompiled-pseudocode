/*
 * XREFs of HeapInsertFreeList @ 0x1400106A0
 * Callers:
 *     PushCall @ 0x140003230 (PushCall.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     ParseAcquire @ 0x14000D400 (ParseAcquire.c)
 *     NewNameSpaceObject @ 0x14000FA34 (NewNameSpaceObject.c)
 *     ParseObjName @ 0x14000FE10 (ParseObjName.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HeapInsertFreeList(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rax
  unsigned int *i; // r8
  __int64 **v5; // rcx
  __int64 *v6; // r10
  _QWORD *v7; // r11
  __int64 v8; // rcx
  unsigned int *v9; // rax
  unsigned int *v10; // r11
  unsigned __int64 result; // rax
  unsigned __int64 *v12; // rdx
  unsigned __int64 *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 **v19; // rax

  v2 = *(unsigned int **)(a1 + 40);
  for ( i = (unsigned int *)(a1 + 40); v2 != i; v2 = *(unsigned int **)v2 )
  {
    if ( a2 + 4 < v2 )
      break;
  }
  v5 = (__int64 **)*((_QWORD *)v2 + 1);
  v6 = (__int64 *)(a2 + 4);
  if ( *v5 != (__int64 *)v2 )
    goto LABEL_10;
  *((_QWORD *)a2 + 3) = v5;
  *v6 = (__int64)v2;
  *v5 = v6;
  *((_QWORD *)v2 + 1) = v6;
  v7 = (_QWORD *)*v6;
  v8 = *v6 - 16;
  if ( (unsigned int *)*v6 != i )
  {
    v14 = a2[1];
    if ( (unsigned int *)v8 == (unsigned int *)((char *)a2 + v14) )
    {
      a2[1] = v14 + *(_DWORD *)(v8 + 4);
      v15 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_10;
      v16 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v16 != v7 )
        goto LABEL_10;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
  }
  v9 = (unsigned int *)*((_QWORD *)a2 + 3);
  v10 = v9 - 4;
  if ( v9 != i )
  {
    v17 = v10[1];
    if ( a2 == (unsigned int *)((char *)v10 + v17) )
    {
      v10[1] = a2[1] + v17;
      v18 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 )
        goto LABEL_10;
      v19 = (__int64 **)*((_QWORD *)a2 + 3);
      if ( *v19 != v6 )
        goto LABEL_10;
      *v19 = v18;
      a2 = v10;
      v18[1] = (__int64)v19;
    }
  }
  result = (unsigned __int64)a2 + a2[1];
  if ( *(_QWORD *)(a1 + 32) > result )
    return result;
  *(_QWORD *)(a1 + 32) = a2;
  v12 = (unsigned __int64 *)(a2 + 4);
  result = *v12;
  if ( *(unsigned __int64 **)(*v12 + 8) != v12 || (v13 = (unsigned __int64 *)v12[1], (unsigned __int64 *)*v13 != v12) )
LABEL_10:
    __fastfail(3u);
  *v13 = result;
  *(_QWORD *)(result + 8) = v13;
  return result;
}

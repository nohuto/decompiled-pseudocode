/*
 * XREFs of Xp10ScatteredCopyBits @ 0x140814638
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x14080FFC0 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10BitCopy @ 0x14081025C (Xp10BitCopy.c)
 *     Xp10ScatteredNextBuffer @ 0x140814894 (Xp10ScatteredNextBuffer.c)
 */

__int64 __fastcall Xp10ScatteredCopyBits(__int64 a1, int *a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebp
  unsigned int v5; // r12d
  unsigned __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // zf
  unsigned int v13; // r14d
  unsigned __int8 **v14; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r14d
  unsigned __int8 *v22; // r8
  unsigned __int64 v23; // rdx
  __int64 result; // rax

  v3 = a3;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)a2 < (unsigned __int64)a3 )
    v3 = *a2;
  if ( a2[4] )
  {
    while ( 1 )
    {
      v8 = 8LL * *(_QWORD *)(a1 + 8) - 8LL * *(_QWORD *)a1 - (v5 & 7);
      if ( v8 >= (unsigned int)a2[4] )
        v8 = (unsigned int)a2[4];
      if ( v3 - v4 <= v8 )
        LODWORD(v8) = v3 - v4;
      v9 = v8;
      Xp10BitCopy(*(char **)a1, v5 & 7, (unsigned __int8 *)a2 + 8, 0, (unsigned int)v8);
      v4 += v9;
      v11 = ((v9 + v5) >> 3) - (v5 >> 3);
      v5 += v9;
      *(_QWORD *)a1 += v11;
      *((_QWORD *)a2 + 1) >>= v9;
      v12 = a2[4] == v9;
      a2[4] -= v9;
      if ( v12 )
        break;
      if ( v4 == v3 || !(unsigned int)Xp10ScatteredNextBuffer(a1, v10) )
        goto LABEL_24;
    }
  }
  v13 = 0;
  v14 = (unsigned __int8 **)(a2 + 6);
  do
  {
    v15 = 8LL * *(_QWORD *)(a1 + 8) - 8LL * *(_QWORD *)a1 - (v5 & 7);
    v16 = v13 & 7;
    if ( v15 >= 8LL * *((_QWORD *)a2 + 4) - 8 * (__int64)*v14 - v16 )
      v15 = 8LL * *((_QWORD *)a2 + 4) - 8LL * (_QWORD)*v14 - v16;
    if ( v3 - v4 <= v15 )
      LODWORD(v15) = v3 - v4;
    v17 = v15;
    Xp10BitCopy(*(char **)a1, v5 & 7, *v14, v13 & 7, (unsigned int)v15);
    v4 += v17;
    v19 = ((v17 + v5) >> 3) - (v5 >> 3);
    v5 += v17;
    *(_QWORD *)a1 += v19;
    v20 = ((v17 + v13) >> 3) - (v13 >> 3);
    v13 += v17;
    *v14 += v20;
  }
  while ( v4 != v3
       && (*(_QWORD *)a1 != *(_QWORD *)(a1 + 8) || (unsigned int)Xp10ScatteredNextBuffer(a1, v18))
       && (*v14 != *((unsigned __int8 **)a2 + 4) || (unsigned int)Xp10ScatteredNextBuffer(a2 + 6, v18)) );
  v21 = v13 & 7;
  if ( v21 )
  {
    v22 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
    a2[4] = 8 - v21;
    v23 = (unsigned __int64)*v22 >> v21;
    *((_QWORD *)a2 + 3) = v22 + 1;
    *((_QWORD *)a2 + 1) = v23;
  }
LABEL_24:
  result = v4;
  *(_QWORD *)a2 -= v4;
  return result;
}

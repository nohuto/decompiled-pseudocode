/*
 * XREFs of MiMergeMemoryBlocks @ 0x14086CC54
 * Callers:
 *     MiPerformMemoryChange @ 0x1406EE614 (MiPerformMemoryChange.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall MiMergeMemoryBlocks(_QWORD *a1, __int64 a2, __int64 **a3, int a4, int a5)
{
  unsigned int *v5; // r10
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  unsigned int *v8; // rsi
  ULONG_PTR v9; // rdx
  unsigned int *v10; // rdi
  ULONG_PTR v11; // r12
  unsigned int *v12; // rbx
  __int64 **v13; // rcx
  unsigned int *v14; // r9
  char v15; // al
  unsigned int *v16; // r14
  __int64 v17; // r11
  __int64 v18; // r15
  char v19; // bp
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  unsigned int *v24; // rax
  unsigned int *v25; // rdx
  unsigned int *v26; // r8
  unsigned int v27; // r12d
  __int64 v28; // r14
  void *result; // rax
  int v30; // [rsp+30h] [rbp-78h]
  __int128 v31; // [rsp+38h] [rbp-70h]
  unsigned int *v33; // [rsp+B8h] [rbp+10h]
  char v36; // [rsp+D0h] [rbp+28h]

  v5 = (unsigned int *)(a2 + 16);
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = (unsigned int *)(a1 + 2);
  v9 = *((unsigned int *)a1 + 4);
  v10 = 0LL;
  v11 = *v5;
  v12 = 0LL;
  v30 = *((_DWORD *)a1 + 4);
  a1[3] = v7;
  *(_QWORD *)&v31 = 0LL;
  v33 = v5;
  if ( a5 )
  {
    v12 = &v5[4 * *v5 + 4];
    v10 = &v8[4 * v9 + 4];
  }
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 4) + (int)v11 )
    KeBugCheckEx(0x1Au, 0x40F00uLL, v9, v11, *((unsigned int *)a3 + 4));
  v13 = (__int64 **)*a3;
  v14 = v8 + 4;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v36 = 0;
  v18 = 0LL;
  if ( *a3 != (__int64 *)a3 )
  {
    while ( 1 )
    {
      v19 = 0;
      v20 = 0LL;
      v21 = (unsigned __int64)v13[3];
      v22 = (unsigned __int64)v13[2];
LABEL_7:
      *((_QWORD *)&v31 + 1) = v20;
      while ( (unsigned int)v17 < (unsigned int)v11 )
      {
        if ( v19 )
        {
          v19 = 0;
        }
        else
        {
          v16 = &v33[4 * (unsigned int)v17 + 4];
          v20 = *((_QWORD *)v16 + 1);
          v31 = *(_OWORD *)v16;
          v6 = *(_QWORD *)v16;
        }
        if ( a4 )
        {
          if ( v6 > v22 )
            break;
          goto LABEL_14;
        }
        if ( v22 < v6 || v22 >= v20 + v6 )
          goto LABEL_14;
        if ( v22 != v6 )
        {
          v20 = v22 - v6;
          *((_QWORD *)&v31 + 1) = v22 - v6;
          v19 = 1;
          goto LABEL_14;
        }
        v23 = *((_QWORD *)v8 + 1);
        if ( v21 < v20 )
        {
          v20 -= v21;
          v36 = 1;
          v6 += v21;
          *((_QWORD *)&v31 + 1) = v20;
          *(_QWORD *)&v31 = v6;
          *((_QWORD *)v8 + 1) = v23 - v21;
LABEL_14:
          *(_OWORD *)v14 = v31;
          if ( v10 )
          {
            *(_QWORD *)v10 = *(_QWORD *)v12;
            v10 += 2;
          }
          v18 = (unsigned int)(v18 + 1);
          v14 += 4;
          if ( v19 )
          {
            v15 = v36;
            v6 += v20;
            *(_QWORD *)&v31 = v6;
            v20 = *(_QWORD *)v16 + *((_QWORD *)v16 + 1) - v6;
            goto LABEL_7;
          }
          goto LABEL_26;
        }
        if ( v21 == v20 )
        {
          v36 = 1;
          *((_QWORD *)v8 + 1) = v23 - v21;
        }
        else
        {
          v22 += v20;
          *((_QWORD *)v8 + 1) = v23 - v20;
          v21 -= v20;
        }
LABEL_26:
        v17 = (unsigned int)(v17 + 1);
        v24 = v12 + 2;
        v16 += 4;
        if ( !v12 )
          v24 = 0LL;
        v12 = v24;
        v15 = v36;
        if ( v36 )
          goto LABEL_32;
      }
      if ( v15 )
      {
LABEL_32:
        v15 = 0;
        v36 = 0;
        goto LABEL_57;
      }
      if ( a4 )
      {
        v25 = 0LL;
        *((_QWORD *)v8 + 1) += v13[3];
        v26 = 0LL;
        if ( v14 != v8 + 4 )
        {
          v25 = v14 - 4;
          if ( (__int64 *)(*((_QWORD *)v14 - 2) + *((_QWORD *)v14 - 1)) != v13[2]
            || v12 && (*(v10 - 2) != *((_DWORD *)v13 + 8) || *((_BYTE *)v10 - 4) != *((_BYTE *)v13 + 36)) )
          {
            v25 = 0LL;
          }
        }
        if ( (_DWORD)v17 != (_DWORD)v11 )
        {
          v26 = v16;
          if ( (__int64 *)((char *)v13[3] + (_QWORD)v13[2]) != *(__int64 **)v16
            || v12 && (*v12 != *((_DWORD *)v13 + 8) || *((_BYTE *)v12 + 4) != *((_BYTE *)v13 + 36)) )
          {
            v26 = 0LL;
          }
        }
        if ( v25 )
        {
          if ( v26 )
          {
            v17 = (unsigned int)(v17 + 1);
            *((_QWORD *)v25 + 1) += (char *)v13[3] + *((_QWORD *)v26 + 1);
            if ( v12 )
              v12 += 2;
          }
          else
          {
            *((_QWORD *)v25 + 1) += v13[3];
          }
        }
        else
        {
          *(_OWORD *)v14 = *((_OWORD *)v13 + 1);
          if ( v26 )
          {
            v17 = (unsigned int)(v17 + 1);
            *((_QWORD *)v14 + 1) += *((_QWORD *)v26 + 1);
            v16 += 4;
          }
          if ( v10 )
          {
            *v10 = *((_DWORD *)v13 + 8);
            *((_BYTE *)v10 + 4) = *((_BYTE *)v13 + 36);
            v10 += 2;
          }
          v14 += 4;
          v18 = (unsigned int)(v18 + 1);
        }
        v15 = v36;
      }
LABEL_57:
      v13 = (__int64 **)*v13;
      if ( v13 == a3 )
      {
        v5 = v33;
        break;
      }
    }
  }
  v27 = v11 - v17;
  if ( v27 )
  {
    v28 = (unsigned int)v17;
    memmove(v14, &v5[4 * v17 + 4], 16LL * v27);
    if ( v10 )
      memmove(v10, &v33[4 * *v33 + 4 + 2 * v28], 8LL * v27);
    v18 = v27 + (unsigned int)v18;
  }
  result = a1;
  a1[1] = 1LL;
  *a1 = &MiSystemPartition;
  if ( (_DWORD)v18 != v30 && v12 )
    result = memmove(&v8[4 * (unsigned int)v18 + 4], &v8[4 * *v8 + 4], 8 * v18);
  *v8 = v18;
  return result;
}

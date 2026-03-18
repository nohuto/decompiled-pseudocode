/*
 * XREFs of CreateNewEventEntry @ 0x14012E718
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14004D500 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferAllocate @ 0x14012E980 (CBufferAllocate.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CreateNewEventEntry(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r10
  __int64 v10; // r8
  char v11; // r11
  unsigned int *v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // r14
  char *v17; // r12
  unsigned __int8 v18; // bp
  char *v19; // rdi
  __int128 v20; // xmm0
  unsigned __int8 v21; // si
  const void **v22; // r14
  __int64 v23; // r15
  size_t v24; // r8
  void *v25; // rsi
  char *v26; // rdx
  int v27; // eax
  unsigned int v29; // ecx
  size_t v30; // r8
  void *v31; // rax
  const void *v32; // rdx
  __int128 v33; // [rsp+20h] [rbp-48h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = 0LL;
  v10 = 0LL;
  LOBYTE(a4) = 0;
  v11 = a1;
  *a7 = 0LL;
  v33 = 0LL;
  if ( (_BYTE)v8 )
  {
    v12 = (unsigned int *)(v7 + 8);
    do
    {
      a1 = *v12;
      v12 += 4;
      if ( (unsigned __int8)a4 >= 2u )
        v9 += a1;
      v13 = a1 + v10;
      if ( (unsigned __int8)a4 >= 2u )
        v13 = v10;
      LOBYTE(a4) = a4 + 1;
      v10 = v13;
    }
    while ( (unsigned __int8)a4 < (unsigned __int8)v8 );
    if ( (unsigned __int64)(v9 + v13) > 0xFFFF )
      return 3221225621LL;
  }
  v14 = 16 * v8;
  LOBYTE(a1) = v11;
  if ( !(unsigned int)CBufferAllocate(a1, &v33, v9 + 16 * v8 + 46, a4) )
    return 3221225495LL;
  v15 = *((_QWORD *)&v33 + 1);
  if ( v14 && *((_QWORD *)&v33 + 1) >= v14 )
  {
    v16 = v33;
    v15 = *((_QWORD *)&v33 + 1) - v14;
    v17 = (char *)(v33 + v14);
  }
  else
  {
    v17 = (char *)v33;
    v16 = 0LL;
  }
  v18 = 0;
  if ( a5 != -2 )
  {
    v29 = a5 + 2;
    do
    {
      if ( v18 >= 2u )
      {
        v30 = *(unsigned int *)(v7 + 16LL * v18 + 8);
        if ( *(_DWORD *)(v7 + 16LL * v18 + 8) && v15 >= v30 )
        {
          v31 = v17;
          v17 += v30;
          v15 -= v30;
        }
        else
        {
          v31 = 0LL;
        }
        v32 = *(const void **)(v7 + 16LL * v18);
        *(_QWORD *)&v33 = v31;
        memmove(v31, v32, v30);
        v29 = a5 + 2;
        *(_QWORD *)(v16 + 16LL * v18) = v33;
        *(_DWORD *)(v16 + 16LL * v18 + 12) = *(_DWORD *)(v7 + 16LL * v18 + 12);
        *(_DWORD *)(v16 + 16LL * v18 + 8) = *(_DWORD *)(v7 + 16LL * v18 + 8);
      }
      else
      {
        *(_OWORD *)(v16 + 16LL * v18) = *(_OWORD *)(v7 + 16LL * v18);
      }
      ++v18;
    }
    while ( v18 < v29 );
  }
  if ( v15 < 0x2E )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = v17;
    v17 += 46;
    v15 -= 46LL;
  }
  *((_QWORD *)v19 + 2) = v16;
  v20 = *a2;
  v19[45] = a5;
  v21 = a5 + 2;
  v19[44] = v8;
  *((_DWORD *)v19 + 10) = a6;
  *(_OWORD *)v19 = v20;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v8 )
  {
    v22 = (const void **)(v7 + 16LL * v21 + 8);
    v23 = (unsigned __int8)(v8 - v21);
    do
    {
      v24 = *(unsigned int *)v22;
      if ( *(_DWORD *)v22 && v15 >= v24 )
      {
        v25 = v17;
        v17 += v24;
        v15 -= v24;
      }
      else
      {
        v25 = 0LL;
      }
      memmove(v25, *(v22 - 1), v24);
      v26 = (char *)v22 - 8 - v7;
      *(_QWORD *)&v26[*((_QWORD *)v19 + 2)] = v25;
      *(_DWORD *)&v26[*((_QWORD *)v19 + 2) + 12] = *((_DWORD *)v22 + 1);
      v27 = *(_DWORD *)v22;
      v22 += 2;
      *(_DWORD *)&v26[*((_QWORD *)v19 + 2) + 8] = v27;
      --v23;
    }
    while ( v23 );
  }
  *a7 = v19;
  return 0LL;
}

/*
 * XREFs of CreateNewEventEntry @ 0x140045C78
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400460D4 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memmove @ 0x1400468C0 (memmove.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall CreateNewEventEntry(
        char a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        char a5,
        int a6,
        _QWORD *a7)
{
  unsigned __int8 v7; // r14
  __int64 v8; // r15
  __int128 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned __int8 v14; // r8
  unsigned int *v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v19; // rdi
  SIZE_T v20; // rbx
  char *PoolWithTag; // rax
  char *v22; // rbp
  char *v23; // rsi
  char *v24; // rax
  char v25; // dl
  unsigned __int8 v26; // cl
  const void **v27; // rdi
  char *v28; // r12
  __int64 v29; // r15
  size_t v30; // r8
  char *v31; // rax
  unsigned __int64 v32; // rax
  char *v33; // rdi
  __int128 v34; // xmm0
  const void **v35; // r14
  __int64 v36; // r15
  size_t v37; // r8
  char *v38; // rbp
  char *v39; // rdx
  int v40; // eax
  char *v41; // [rsp+28h] [rbp-50h]
  char *v42; // [rsp+30h] [rbp-48h]

  v7 = 0;
  v8 = a3;
  v11 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  *a7 = 0LL;
  if ( (_BYTE)v8 )
  {
    v15 = (unsigned int *)(a4 + 8);
    do
    {
      v16 = *v15;
      v17 = v12;
      v15 += 4;
      if ( v14 >= 2u )
        v13 += v16;
      v12 += v16;
      if ( v14 >= 2u )
        v12 = v17;
      ++v14;
    }
    while ( v14 < (unsigned __int8)v8 );
    if ( (unsigned __int64)(v13 + v12) > 0xFFFF )
      return 3221225621LL;
  }
  v19 = 16 * v8;
  v20 = v13 + 16 * v8 + 46;
  if ( !v20 )
    return 3221225495LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : NonPagedPoolNx), v20, 0x47417254u);
  v22 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v20);
  if ( v19 && v20 >= v19 )
  {
    v23 = &v22[v19];
    v20 -= v19;
    v24 = v22;
  }
  else
  {
    v24 = 0LL;
    v23 = v22;
  }
  v25 = a5;
  v42 = v24;
  v26 = a5 + 2;
  if ( a5 != -2 )
  {
    v27 = (const void **)(a4 + 8);
    v28 = &v24[-a4];
    v29 = a4 - (_QWORD)v24;
    do
    {
      if ( v7 >= 2u )
      {
        v30 = *(unsigned int *)v27;
        if ( *(_DWORD *)v27 && v20 >= v30 )
        {
          v31 = v23;
          v23 += v30;
          v20 -= v30;
        }
        else
        {
          v31 = 0LL;
        }
        v41 = v31;
        memmove(v31, *(v27 - 1), v30);
        *(const void **)((char *)v27 + (_QWORD)v28 - 8) = v41;
        *(_DWORD *)((char *)v27 + (_QWORD)v28 + 4) = *(_DWORD *)((char *)v27 + (_QWORD)v28 + v29 + 4);
        *(_DWORD *)((char *)v27 + (_QWORD)v28) = *(_DWORD *)v27;
      }
      else
      {
        *(_OWORD *)((char *)v27 + (_QWORD)v28 - 8) = *(_OWORD *)(v27 - 1);
      }
      ++v7;
      v27 += 2;
    }
    while ( v7 < (unsigned __int8)(a5 + 2) );
    LOBYTE(v8) = a3;
    v26 = a5 + 2;
    v25 = a5;
    v11 = a2;
  }
  v32 = v20;
  v33 = v23;
  if ( v20 >= 0x2E )
  {
    v23 += 46;
    v20 -= 46LL;
  }
  if ( v32 < 0x2E )
    v33 = 0LL;
  *((_QWORD *)v33 + 2) = v42;
  v34 = *v11;
  v33[44] = v8;
  v33[45] = v25;
  *((_DWORD *)v33 + 10) = a6;
  *(_OWORD *)v33 = v34;
  if ( v26 < (unsigned __int8)v8 )
  {
    v35 = (const void **)(a4 + 16LL * v26 + 8);
    v36 = (unsigned __int8)(v8 - v26);
    do
    {
      v37 = *(unsigned int *)v35;
      if ( *(_DWORD *)v35 && v20 >= v37 )
      {
        v38 = v23;
        v23 += v37;
        v20 -= v37;
      }
      else
      {
        v38 = 0LL;
      }
      memmove(v38, *(v35 - 1), v37);
      v39 = (char *)v35 - 8 - a4;
      *(_QWORD *)&v39[*((_QWORD *)v33 + 2)] = v38;
      *(_DWORD *)&v39[*((_QWORD *)v33 + 2) + 12] = *((_DWORD *)v35 + 1);
      v40 = *(_DWORD *)v35;
      v35 += 2;
      *(_DWORD *)&v39[*((_QWORD *)v33 + 2) + 8] = v40;
      --v36;
    }
    while ( v36 );
  }
  *a7 = v33;
  return 0LL;
}

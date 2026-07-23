/*
 * XREFs of CreateNewEventEntry @ 0x140451BB8
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140451644 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferAllocate @ 0x140451E48 (CBufferAllocate.c)
 *     memmove @ 0x140742080 (memmove.c)
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
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int8 v12; // r8
  unsigned int *v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // rsi
  char *v19; // r14
  char v20; // al
  unsigned __int8 v21; // r12
  unsigned __int8 v22; // cl
  const void **v23; // rbx
  __int64 v24; // rdx
  size_t v25; // r8
  void *v26; // rax
  _DWORD *v27; // rcx
  char *v28; // rbx
  __int128 v29; // xmm0
  const void **v30; // rsi
  __int64 v31; // r12
  size_t v32; // r8
  void *v33; // rbp
  char *v34; // rdx
  int v35; // eax
  void *v37; // [rsp+28h] [rbp-50h]
  __int128 v38; // [rsp+30h] [rbp-48h] BYREF

  v7 = a3;
  v8 = 0LL;
  v10 = 0LL;
  v11 = (unsigned __int64)a7;
  v12 = 0;
  v38 = 0LL;
  *a7 = 0LL;
  if ( (_BYTE)v7 )
  {
    v14 = (unsigned int *)(a4 + 8);
    do
    {
      v11 = *v14;
      v15 = v8;
      v14 += 4;
      if ( v12 >= 2u )
        v10 += v11;
      v8 += v11;
      if ( v12 >= 2u )
        v8 = v15;
      ++v12;
    }
    while ( v12 < (unsigned __int8)v7 );
    if ( (unsigned __int64)(v10 + v8) > 0xFFFF )
      return 3221225621LL;
  }
  v16 = 16 * v7;
  LOBYTE(v11) = a1;
  if ( !(unsigned int)CBufferAllocate(v11, &v38, v10 + 16 * v7 + 46) )
    return 3221225495LL;
  v17 = *((_QWORD *)&v38 + 1);
  if ( v16 && *((_QWORD *)&v38 + 1) >= v16 )
  {
    v18 = v38;
    v17 = *((_QWORD *)&v38 + 1) - v16;
    v19 = (char *)(v16 + v38);
  }
  else
  {
    v19 = (char *)v38;
    v18 = 0LL;
  }
  v20 = a5;
  v21 = 0;
  v22 = a5 + 2;
  if ( a5 != -2 )
  {
    v23 = (const void **)(a4 + 8);
    v24 = v18 - a4;
    *(_QWORD *)&v38 = v18 - a4;
    do
    {
      if ( v21 < 2u )
      {
        *(_OWORD *)((char *)v23 + v24 - 8) = *(_OWORD *)(v23 - 1);
      }
      else
      {
        v25 = *(unsigned int *)v23;
        if ( *(_DWORD *)v23 && v17 >= v25 )
        {
          v26 = v19;
          v19 += v25;
          v17 -= v25;
        }
        else
        {
          v26 = 0LL;
        }
        v37 = v26;
        memmove(v26, *(v23 - 1), v25);
        v24 = v38;
        v27 = (_DWORD *)((char *)v23 + v38);
        *((_QWORD *)v27 - 1) = v37;
        v27[1] = *(_DWORD *)((char *)v27 + a4 - v18 + 4);
        *v27 = *(_DWORD *)v23;
      }
      ++v21;
      v23 += 2;
    }
    while ( v21 < (unsigned __int8)(a5 + 2) );
    LOBYTE(v7) = a3;
    v22 = a5 + 2;
    v20 = a5;
  }
  if ( v17 < 0x2E )
  {
    v28 = 0LL;
  }
  else
  {
    v28 = v19;
    v19 += 46;
    v17 -= 46LL;
  }
  *((_QWORD *)v28 + 2) = v18;
  v29 = *a2;
  v28[45] = v20;
  v28[44] = v7;
  *((_DWORD *)v28 + 10) = a6;
  *(_OWORD *)v28 = v29;
  if ( v22 < (unsigned __int8)v7 )
  {
    v30 = (const void **)(a4 + 16LL * v22 + 8);
    v31 = (unsigned __int8)(v7 - v22);
    do
    {
      v32 = *(unsigned int *)v30;
      if ( *(_DWORD *)v30 && v17 >= v32 )
      {
        v33 = v19;
        v19 += v32;
        v17 -= v32;
      }
      else
      {
        v33 = 0LL;
      }
      memmove(v33, *(v30 - 1), v32);
      v34 = (char *)v30 - 8 - a4;
      *(_QWORD *)&v34[*((_QWORD *)v28 + 2)] = v33;
      *(_DWORD *)&v34[*((_QWORD *)v28 + 2) + 12] = *((_DWORD *)v30 + 1);
      v35 = *(_DWORD *)v30;
      v30 += 2;
      *(_DWORD *)&v34[*((_QWORD *)v28 + 2) + 8] = v35;
      --v31;
    }
    while ( v31 );
  }
  *a7 = v28;
  return 0LL;
}

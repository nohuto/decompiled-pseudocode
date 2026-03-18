/*
 * XREFs of CreateNewEventEntry @ 0x14000AA9C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14000B5E0 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferAllocate @ 0x14000AD24 (CBufferAllocate.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
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
  unsigned __int64 v18; // rdi
  __int64 v19; // rsi
  char *v20; // r14
  char v21; // al
  unsigned __int8 v22; // r12
  unsigned __int8 v23; // cl
  char *v24; // rbx
  __int128 v25; // xmm0
  const void **v26; // rsi
  __int64 v27; // r12
  size_t v28; // r8
  void *v29; // rbp
  char *v30; // rdx
  int v31; // eax
  const void **v32; // rbx
  __int64 v33; // rdx
  size_t v34; // r8
  void *v35; // rax
  _DWORD *v36; // rcx
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
  v18 = *((_QWORD *)&v38 + 1);
  if ( v16 && *((_QWORD *)&v38 + 1) >= v16 )
  {
    v19 = v38;
    v18 = *((_QWORD *)&v38 + 1) - v16;
    v20 = (char *)(v16 + v38);
  }
  else
  {
    v20 = (char *)v38;
    v19 = 0LL;
  }
  v21 = a5;
  v22 = 0;
  v23 = a5 + 2;
  if ( a5 != -2 )
  {
    v32 = (const void **)(a4 + 8);
    v33 = v19 - a4;
    *(_QWORD *)&v38 = v19 - a4;
    do
    {
      if ( v22 >= 2u )
      {
        v34 = *(unsigned int *)v32;
        if ( *(_DWORD *)v32 && v18 >= v34 )
        {
          v35 = v20;
          v20 += v34;
          v18 -= v34;
        }
        else
        {
          v35 = 0LL;
        }
        v37 = v35;
        memmove(v35, *(v32 - 1), v34);
        v33 = v38;
        v36 = (_DWORD *)((char *)v32 + v38);
        *((_QWORD *)v36 - 1) = v37;
        v36[1] = *(_DWORD *)((char *)v36 + a4 - v19 + 4);
        *v36 = *(_DWORD *)v32;
      }
      else
      {
        *(_OWORD *)((char *)v32 + v33 - 8) = *(_OWORD *)(v32 - 1);
      }
      ++v22;
      v32 += 2;
    }
    while ( v22 < (unsigned __int8)(a5 + 2) );
    LOBYTE(v7) = a3;
    v23 = a5 + 2;
    v21 = a5;
  }
  if ( v18 < 0x2E )
  {
    v24 = 0LL;
  }
  else
  {
    v24 = v20;
    v20 += 46;
    v18 -= 46LL;
  }
  *((_QWORD *)v24 + 2) = v19;
  v25 = *a2;
  v24[45] = v21;
  v24[44] = v7;
  *((_DWORD *)v24 + 10) = a6;
  *(_OWORD *)v24 = v25;
  if ( v23 < (unsigned __int8)v7 )
  {
    v26 = (const void **)(a4 + 16LL * v23 + 8);
    v27 = (unsigned __int8)(v7 - v23);
    do
    {
      v28 = *(unsigned int *)v26;
      if ( *(_DWORD *)v26 && v18 >= v28 )
      {
        v29 = v20;
        v20 += v28;
        v18 -= v28;
      }
      else
      {
        v29 = 0LL;
      }
      memmove(v29, *(v26 - 1), v28);
      v30 = (char *)v26 - 8 - a4;
      *(_QWORD *)&v30[*((_QWORD *)v24 + 2)] = v29;
      *(_DWORD *)&v30[*((_QWORD *)v24 + 2) + 12] = *((_DWORD *)v26 + 1);
      v31 = *(_DWORD *)v26;
      v26 += 2;
      *(_DWORD *)&v30[*((_QWORD *)v24 + 2) + 8] = v31;
      --v27;
    }
    while ( v27 );
  }
  *a7 = v24;
  return 0LL;
}

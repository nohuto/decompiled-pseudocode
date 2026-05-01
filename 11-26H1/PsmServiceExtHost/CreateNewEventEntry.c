/*
 * XREFs of CreateNewEventEntry @ 0x18001C9D4
 * Callers:
 *     CrmLogSrvActivityStopStop @ 0x18001C010 (CrmLogSrvActivityStopStop.c)
 * Callees:
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall CreateNewEventEntry(__int128 *a1, __int64 a2, __int64 a3, char a4, int a5, _QWORD *a6)
{
  const void **v6; // rsi
  unsigned __int8 v7; // r14
  __int64 v8; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 v12; // r10
  unsigned int *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  SIZE_T v16; // rbx
  HANDLE ProcessHeap; // rax
  char *v18; // rdi
  char *v19; // r13
  bool v20; // zf
  unsigned __int8 v21; // bp
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  char *v24; // r15
  __int64 v25; // r12
  size_t v26; // r8
  void *v27; // rax
  unsigned __int64 v28; // rax
  char *v29; // rsi
  __int128 v30; // xmm0
  const void **v31; // r14
  __int64 v32; // r12
  size_t v33; // r8
  void *v34; // rbp
  char *v35; // rdx
  int v36; // eax
  void *v38; // [rsp+20h] [rbp-58h]

  v6 = (const void **)(a3 + 8);
  v7 = 0;
  v8 = a3;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  *a6 = 0LL;
  v13 = (unsigned int *)(a3 + 8);
  do
  {
    v14 = *v13;
    v15 = v10;
    v13 += 4;
    if ( v12 >= 2u )
      v11 += v14;
    v10 += v14;
    if ( v12 >= 2u )
      v10 = v15;
    ++v12;
  }
  while ( v12 < 0xDu );
  if ( (unsigned __int64)(v11 + v10) > 0xFFFF )
    return 534LL;
  v16 = v11 + 254;
  if ( !v16 )
    return 8LL;
  ProcessHeap = GetProcessHeap();
  v18 = (char *)HeapAlloc(ProcessHeap, 8u, v16);
  if ( !v18 )
    return 8LL;
  if ( v16 < 0xD0 )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = v18;
    v18 += 208;
    v16 -= 208LL;
  }
  v20 = a4 == -2;
  v21 = a4 + 2;
  v22 = v21;
  if ( !v20 )
  {
    v23 = v8 - (_QWORD)v19;
    v24 = &v19[-a3];
    v25 = v23;
    do
    {
      if ( v7 < 2u )
      {
        *(_OWORD *)((char *)v6 + (_QWORD)v24 - 8) = *(_OWORD *)(v6 - 1);
      }
      else
      {
        v26 = *(unsigned int *)v6;
        if ( *(_DWORD *)v6 && v16 >= v26 )
        {
          v27 = v18;
          v18 += v26;
          v16 -= v26;
        }
        else
        {
          v27 = 0LL;
        }
        v38 = v27;
        memcpy_0(v27, *(v6 - 1), v26);
        *(const void **)((char *)v6 + (_QWORD)v24 - 8) = v38;
        *(_DWORD *)((char *)v6 + (_QWORD)v24 + 4) = *(_DWORD *)((char *)v6 + (_QWORD)v24 + v25 + 4);
        *(_DWORD *)((char *)v6 + (_QWORD)v24) = *(_DWORD *)v6;
      }
      ++v7;
      v6 += 2;
    }
    while ( v7 < v21 );
    v8 = a3;
    v22 = v21;
  }
  v28 = v16;
  v29 = v18;
  if ( v16 >= 0x2E )
  {
    v18 += 46;
    v16 -= 46LL;
  }
  if ( v28 < 0x2E )
    v29 = 0LL;
  *((_QWORD *)v29 + 2) = v19;
  v30 = *a1;
  v29[45] = a4;
  *((_DWORD *)v29 + 10) = a5;
  v29[44] = 13;
  *(_OWORD *)v29 = v30;
  if ( v22 < 0xDu )
  {
    v31 = (const void **)(v8 + 8 + 16LL * v22);
    v32 = (unsigned __int8)(13 - v22);
    do
    {
      v33 = *(unsigned int *)v31;
      if ( *(_DWORD *)v31 && v16 >= v33 )
      {
        v34 = v18;
        v18 += v33;
        v16 -= v33;
      }
      else
      {
        v34 = 0LL;
      }
      memcpy_0(v34, *(v31 - 1), v33);
      v35 = (char *)v31 - 8 - a3;
      *(_QWORD *)&v35[*((_QWORD *)v29 + 2)] = v34;
      *(_DWORD *)&v35[*((_QWORD *)v29 + 2) + 12] = *((_DWORD *)v31 + 1);
      v36 = *(_DWORD *)v31;
      v31 += 2;
      *(_DWORD *)&v35[*((_QWORD *)v29 + 2) + 8] = v36;
      --v32;
    }
    while ( v32 );
  }
  *a6 = v29;
  return 0LL;
}

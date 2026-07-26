/*
 * XREFs of CreateNewEventEntry @ 0x1400E8A48
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400E8E58 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferGetNextOffset @ 0x1400E88E8 (CBufferGetNextOffset.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall CreateNewEventEntry(
        char a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 *a7)
{
  unsigned __int8 v7; // di
  __int64 v8; // rsi
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int8 v13; // r8
  unsigned int *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  SIZE_T v18; // r15
  PVOID PoolWithTag; // rax
  __int64 v20; // rbx
  __int64 NextOffset; // rax
  __int64 v22; // r12
  const void **v23; // r14
  __int64 v24; // rsi
  __int64 v25; // r15
  unsigned int v26; // edx
  void *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int128 v30; // xmm0
  __int64 v31; // r15
  const void **v32; // r14
  __int64 v33; // rsi
  unsigned int v34; // edx
  void *v35; // rbx
  char *v36; // rdx
  int v37; // eax
  __int64 v38; // [rsp+28h] [rbp-50h]
  __int64 v39[9]; // [rsp+30h] [rbp-48h] BYREF

  v7 = 0;
  v8 = a3;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  *a7 = 0LL;
  if ( (_BYTE)v8 )
  {
    v14 = (unsigned int *)(a4 + 8);
    do
    {
      v15 = *v14;
      v16 = v11;
      v14 += 4;
      if ( v13 >= 2u )
        v12 += v15;
      v11 += v15;
      if ( v13 >= 2u )
        v11 = v16;
      ++v13;
    }
    while ( v13 < (unsigned __int8)v8 );
    if ( (unsigned __int64)(v12 + v11) > 0xFFFF )
      return 3221225621LL;
  }
  v18 = v12 + 16 * v8 + 46;
  if ( !v18 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : NonPagedPoolNx), v18, 0x47417254u);
  v20 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v18);
  v39[0] = v20;
  v39[1] = v18;
  NextOffset = CBufferGetNextOffset(v39, 16 * v8);
  v38 = NextOffset;
  v22 = (unsigned __int8)(a5 + 2);
  if ( a5 != -2 )
  {
    v23 = (const void **)(a4 + 8);
    v24 = a4 - NextOffset;
    v25 = NextOffset - a4;
    do
    {
      if ( v7 >= 2u )
      {
        v27 = (void *)CBufferGetNextOffset(v39, *(unsigned int *)v23);
        memmove(v27, *(v23 - 1), v26);
        *(const void **)((char *)v23 + v25 - 8) = v27;
        *(_DWORD *)((char *)v23 + v25 + 4) = *(_DWORD *)((char *)v23 + v25 + v24 + 4);
        *(_DWORD *)((char *)v23 + v25) = *(_DWORD *)v23;
      }
      else
      {
        *(_OWORD *)((char *)v23 + v25 - 8) = *(_OWORD *)(v23 - 1);
      }
      ++v7;
      v23 += 2;
    }
    while ( v7 < (unsigned __int8)(a5 + 2) );
    LOBYTE(v8) = a3;
  }
  v29 = CBufferGetNextOffset(v39, 0x2EuLL);
  *(_QWORD *)(v29 + 16) = v38;
  v30 = *a2;
  *(_BYTE *)(v29 + 44) = v8;
  *(_BYTE *)(v29 + 45) = a5;
  *(_DWORD *)(v29 + 40) = a6;
  *(_OWORD *)v29 = v30;
  if ( (unsigned __int8)v22 < (unsigned __int8)v8 )
  {
    v31 = v28 - 54 - a4;
    v32 = (const void **)(a4 + 16 * v22 + 8);
    v33 = (unsigned __int8)(v8 - v22);
    do
    {
      v35 = (void *)CBufferGetNextOffset(v39, *(unsigned int *)v32);
      memmove(v35, *(v32 - 1), v34);
      v36 = (char *)v32 + v31;
      *(_QWORD *)&v36[*(_QWORD *)(v29 + 16)] = v35;
      *(_DWORD *)&v36[*(_QWORD *)(v29 + 16) + 12] = *((_DWORD *)v32 + 1);
      v37 = *(_DWORD *)v32;
      v32 += 2;
      *(_DWORD *)&v36[*(_QWORD *)(v29 + 16) + 8] = v37;
      --v33;
    }
    while ( v33 );
  }
  *a7 = v29;
  return 0LL;
}

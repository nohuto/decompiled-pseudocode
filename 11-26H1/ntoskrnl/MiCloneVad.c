/*
 * XREFs of MiCloneVad @ 0x1402EC978
 * Callers:
 *     MiCloneVadTree @ 0x140A075D8 (MiCloneVadTree.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 *     MiUnlockClonePageTable @ 0x1402ED6FC (MiUnlockClonePageTable.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiCloneWriteWatch @ 0x140707E64 (MiCloneWriteWatch.c)
 *     MiUpdateForkMaps @ 0x140AF6AB0 (MiUpdateForkMaps.c)
 */

__int64 __fastcall MiCloneVad(const __m128i *a1)
{
  __int64 v1; // r13
  const __m128i *v2; // r12
  __int64 v3; // r15
  signed __int32 v5; // ebx
  unsigned __int64 v6; // r8
  __int64 v7; // r8
  ULONG_PTR updated; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  int v11; // r15d
  __int8 v12; // al
  int v13; // r8d
  unsigned __int64 NextPageTable; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  KIRQL v20; // al
  __int64 v21; // rdx
  int v23; // ecx
  __int64 v24; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+90h] [rbp+8h] BYREF
  int v26; // [rsp+98h] [rbp+10h]
  signed __int32 v27; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v1 = a1[17].m128i_i64[0];
  v2 = a1 + 3;
  v3 = a1[16].m128i_i64[1];
  v25 = 0;
  v24 = v3;
  v5 = *(_DWORD *)(v1 + 48);
  v6 = *(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32);
  v28 = v1;
  v7 = v6 & 0xFFFFFFFFFLL;
  v27 = v5;
  LODWORD(updated) = 8 * v7;
  v9 = (*(unsigned int *)(v1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 33) << 32)) & 0xFFFFFFFFFLL;
  v10 = 8 * v9 - 0x98000000000LL;
  v11 = v5 & 0x1C;
  v26 = v11;
  do
  {
    v12 = MiLockWorkingSetShared(a1[2].m128i_i64[0], v9, v7);
    a1[2].m128i_i8[8] = v12;
    LOBYTE(v13) = v12;
    NextPageTable = MiGetNextPageTable(updated, v10, v13, 0, (__int64)&v25);
    v16 = NextPageTable;
    if ( NextPageTable )
    {
      v17 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v23 = v25;
      if ( v25 )
      {
        do
        {
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v23;
        }
        while ( v23 );
        v11 = v26;
        v2 = a1 + 3;
        v25 = 0;
      }
      MiUnlockPageTableInternal(a1[2].m128i_i64[0], v17);
    }
    else
    {
      v17 = 0LL;
    }
    LOBYTE(v15) = a1[2].m128i_i8[8];
    MiUnlockWorkingSetShared(a1[2].m128i_i64[0], v15);
    if ( v16 )
      updated = MiUpdateForkMaps(v2, v16, a1->m128i_i64[0]);
    else
      updated = v10 + 8;
    a1[20].m128i_i64[1] = v2[4].m128i_i64[0];
    if ( v11 != 20 )
    {
      if ( updated > v10 )
        break;
      v18 = a1[2].m128i_i64[0];
      v19 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
      a1[19].m128i_i64[1] = v2[2].m128i_i64[1];
      a1[19].m128i_i64[0] = updated;
      if ( v19 > v10 )
        v19 = v10;
      v20 = MiLockWorkingSetShared(v18, v9, v7);
      a1[2].m128i_i8[8] = v20;
      MiMakeSystemAddressValid(updated, 0, v20, 0);
      do
      {
        if ( (int)MiBuildForkPte(a1) >= 0 )
          a1[19] = _mm_add_epi64(_mm_load_si128((const __m128i *)&_xmm), _mm_loadu_si128(a1 + 19));
      }
      while ( a1[19].m128i_i64[0] <= v19 );
      MiUnlockClonePageTable(a1, v17);
      LOBYTE(v21) = a1[2].m128i_i8[8];
      MiUnlockWorkingSetShared(a1[2].m128i_i64[0], v21);
      updated = a1[19].m128i_u64[0];
      v11 = v26;
    }
  }
  while ( updated <= v10 );
  if ( (_bittest(&v27, 0x14u) & _bittest(&v27, 0x13u)) != 0 )
    MiCloneWriteWatch(v24, v28);
  return a1[21].m128i_i32[2] != 0 ? 0xC000009A : 0;
}

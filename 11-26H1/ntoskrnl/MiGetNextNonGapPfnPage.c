/*
 * XREFs of MiGetNextNonGapPfnPage @ 0x1406EDDA8
 * Callers:
 *     MiFreedUnusedPfnPagesDpc @ 0x1406ED820 (MiFreedUnusedPfnPagesDpc.c)
 *     MiGetFileOnlyRanges @ 0x1406EDB28 (MiGetFileOnlyRanges.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 */

__int64 __fastcall MiGetNextNonGapPfnPage(unsigned __int64 *a1, unsigned __int64 *a2, char a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r13
  void *volatile *v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 i; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 LeafVa; // r12
  __int64 v18; // r15
  int v20; // [rsp+30h] [rbp-48h] BYREF
  int v21; // [rsp+34h] [rbp-44h]
  void *volatile *v22; // [rsp+38h] [rbp-40h]

  v4 = *a1;
  v5 = 0LL;
  v20 = 0;
  if ( !v4 )
    v4 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = *a2;
  if ( *a2 )
  {
    v7 = v4 + 8 * (v6 >> 12) - 8;
    v8 = (__int64)((v4 + 8 * (v6 >> 12)) << 25) >> 16;
  }
  else
  {
    v8 = 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL;
    v7 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( ((v8 >> 9) & 0xFF8) == 0 )
      v7 = (((unsigned __int64)(48 * qword_140E2D920 - 0x21FFFFFFFFD0LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  }
  v21 = a4 != 0 ? 7 : 3;
  v9 = MiSystemVaTypeToVm(3);
  v22 = v9;
  v10 = 0LL;
  v11 = 0LL;
  i = 0LL;
LABEL_8:
  if ( v4 <= v7 )
  {
    if ( v10 )
    {
      MiUnlockPageTableInternal((__int64)v9, v10);
      v10 = 0LL;
    }
    NextPageTable = MiGetNextPageTable(v4, v7, a3, v21, &v20);
    v4 = NextPageTable;
    if ( !NextPageTable )
      goto LABEL_42;
    if ( !a4 )
      v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v20 )
    {
      v11 = NextPageTable;
      v15 = NextPageTable;
      if ( v20 > 0 )
      {
        v16 = (unsigned int)v20;
        do
        {
          if ( v10 )
            v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v16;
        }
        while ( v16 );
      }
      LeafVa = MiGetLeafVa(v15 + 8);
      i = LeafVa - MiGetLeafVa(v4);
      v9 = v22;
      v18 = (__int64)(v7 - v4) >> 3;
      if ( i >> 12 > v18 + 1 )
        i = (v18 + 1) << 12;
    }
    else
    {
      while ( (*(_QWORD *)NextPageTable & 1) == 0
           || qword_140E36180[0] != (PVOID)qword_140E36198
           && (PVOID)((*(_QWORD *)NextPageTable >> 12) & 0xFFFFFFFFFFLL) == qword_140E36180[0] )
      {
        NextPageTable += 8LL;
        if ( NextPageTable > v7 || (NextPageTable & 0xFFF) == 0 )
        {
          v4 = NextPageTable;
          v9 = v22;
          goto LABEL_8;
        }
      }
      v11 = NextPageTable;
      for ( i = 4096LL; ; i += 4096LL )
      {
        NextPageTable += 8LL;
        if ( NextPageTable > v7
          || (NextPageTable & 0xFFF) == 0
          || (*(_QWORD *)NextPageTable & 1) == 0
          || qword_140E36180[0] != (PVOID)qword_140E36198
          && (PVOID)((*(_QWORD *)NextPageTable >> 12) & 0xFFFFFFFFFFLL) == qword_140E36180[0] )
        {
          break;
        }
      }
      v9 = v22;
    }
  }
  if ( v10 )
    MiUnlockPageTableInternal((__int64)v9, v10);
  if ( !v11 )
  {
LABEL_42:
    v14 = 0LL;
    goto LABEL_43;
  }
  v4 = v11 + 8 * (i >> 12);
  v14 = (__int64)(v11 << 25) >> 16;
  v5 = v8 - v14;
  if ( v14 + i <= v8 )
    v5 = i;
LABEL_43:
  *a2 = v5;
  *a1 = v4;
  return v14;
}

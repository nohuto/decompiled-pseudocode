/*
 * XREFs of MiCreatePagefileMemoryExtents @ 0x140884604
 * Callers:
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x14088488C (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140466660 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     MiComparePageFileMemoryExtents @ 0x140711534 (MiComparePageFileMemoryExtents.c)
 *     MiInsertPageFileMemoryExtents @ 0x1407118E8 (MiInsertPageFileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x140884944 (MiDeletePageFileMemoryExtents.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1408851A8 (MiSpecialPurposeMemoryTypeDereference.c)
 */

__int64 __fastcall MiCreatePagefileMemoryExtents(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // r12d
  unsigned __int64 v10; // rdi
  unsigned int v11; // eax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v14; // r15
  _DWORD *v15; // rax
  signed __int64 v16; // rbx
  BOOLEAN v17; // r8
  int v18; // esi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // esi
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rbx
  int v26; // [rsp+20h] [rbp-49h]
  __int64 v27; // [rsp+70h] [rbp+7h] BYREF
  PRTL_BALANCED_NODE Parent[2]; // [rsp+78h] [rbp+Fh] BYREF
  ULONG_PTR v29; // [rsp+D0h] [rbp+67h] BYREF
  __int64 SpecialPurposeMemoryPartitionForCaching; // [rsp+E8h] [rbp+7Fh]

  v5 = *(_QWORD *)(a1 + 224);
  v29 = 0LL;
  *(_OWORD *)Parent = 0LL;
  v27 = 0LL;
  v6 = a3;
  SpecialPurposeMemoryPartitionForCaching = MiGetSpecialPurposeMemoryPartitionForCaching(v5, &v27, a3, a4);
  v7 = SpecialPurposeMemoryPartitionForCaching;
  if ( SpecialPurposeMemoryPartitionForCaching )
  {
    v9 = 0;
    LODWORD(v10) = v6;
    while ( v6 )
    {
      v11 = v6;
      if ( (unsigned int)v10 <= v6 )
        v11 = v10;
      v10 = v11;
      if ( (int)MiFindContiguousPagesEx(
                  v7,
                  0LL,
                  qword_140E2D920,
                  0LL,
                  v26,
                  v11,
                  1,
                  0x80000000,
                  255,
                  1048577,
                  0,
                  0LL,
                  0LL,
                  &v29) >= 0 )
      {
        CurrentProcessorColor = MmGetCurrentProcessorColor();
        PoolMm = ExAllocatePoolMm(64LL, 0x28uLL, 1699768653, CurrentProcessorColor | 0x80000000);
        v14 = PoolMm;
        if ( !PoolMm )
        {
          MiFreeContiguousPages(v29, v10, 0);
          v8 = -1073741670;
          goto LABEL_30;
        }
        v15 = (_DWORD *)(PoolMm + 24);
        v6 -= v10;
        *v15 = v9;
        v9 += v10;
        *(_DWORD *)(v14 + 28) = v9 - 1;
        *(_QWORD *)(v14 + 32) = v29;
        v16 = (signed __int64)Parent[0];
        if ( ((__int64)Parent[1] & 1) != 0 && Parent[0] )
          v16 = (unsigned __int64)Parent ^ (unsigned __int64)Parent[0];
        v17 = 0;
        v18 = (__int64)Parent[1] & 1;
        if ( v16 )
        {
          while ( 1 )
          {
            if ( (int)MiComparePageFileMemoryExtents(v15, v16) < 0 )
            {
              v19 = *(_QWORD *)v16;
              if ( v18 )
              {
                if ( !v19 )
                  goto LABEL_26;
                v19 ^= v16;
              }
              if ( !v19 )
              {
LABEL_26:
                v17 = 0;
                break;
              }
            }
            else
            {
              v19 = *(_QWORD *)(v16 + 8);
              if ( v18 )
              {
                if ( !v19 )
                  goto LABEL_20;
                v19 ^= v16;
              }
              if ( !v19 )
              {
LABEL_20:
                v17 = 1;
                break;
              }
            }
            v16 = v19;
            v15 = (_DWORD *)(v14 + 24);
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)Parent, (PRTL_BALANCED_NODE)v16, v17, (PRTL_BALANCED_NODE)v14);
        v7 = SpecialPurposeMemoryPartitionForCaching;
      }
      else
      {
        if ( (_DWORD)v10 == 512 )
          goto LABEL_2;
        v7 = SpecialPurposeMemoryPartitionForCaching;
        LODWORD(v10) = (((unsigned int)v10 >> 1) + 511) & 0xFFFFFE00;
      }
    }
    MiInsertPageFileMemoryExtents(a1, (__int64)Parent);
    v8 = 0;
  }
  else
  {
LABEL_2:
    v8 = -1073741670;
  }
LABEL_30:
  if ( v27 )
    MiSpecialPurposeMemoryTypeDereference(*(_QWORD *)(a1 + 224), v27);
  v20 = (unsigned __int64)Parent[0];
  if ( ((__int64)Parent[1] & 1) != 0 )
  {
    if ( Parent[0] )
      v20 = (unsigned __int64)Parent ^ (unsigned __int64)Parent[0];
    else
      v20 = 0LL;
  }
  v21 = (__int64)Parent[1] & 1;
  if ( v20 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)v20;
        v23 = (_QWORD *)v20;
        if ( !*(_QWORD *)v20 )
        {
          v23 = (_QWORD *)(v20 + 8);
          v22 = *(_QWORD *)(v20 + 8);
          if ( !v22 )
            break;
        }
        if ( v21 )
          v20 ^= v22;
        else
          v20 = v22;
        *v23 = 0LL;
      }
      v24 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v21 && v24 )
        v24 ^= v20;
      MiDeletePageFileMemoryExtents((PVOID)v20);
      if ( !v24 )
        break;
      v20 = v24;
    }
  }
  return v8;
}

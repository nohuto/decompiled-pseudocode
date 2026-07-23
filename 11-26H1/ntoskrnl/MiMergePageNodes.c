/*
 * XREFs of MiMergePageNodes @ 0x14070DDA8
 * Callers:
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 *     MiReturnPartitionPagesToParent @ 0x14070E56C (MiReturnPartitionPagesToParent.c)
 *     MiFinishChildPartitionHotAdd @ 0x1408821A0 (MiFinishChildPartitionHotAdd.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     RtlMergeBitMapsEx @ 0x14061BB30 (RtlMergeBitMapsEx.c)
 *     MiUpdatePhysicalPages @ 0x14070EC74 (MiUpdatePhysicalPages.c)
 */

__int64 __fastcall MiMergePageNodes(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  volatile LONG *v4; // rbx
  __int64 v6; // r12
  KIRQL v8; // r15
  unsigned __int64 v9; // rbp
  unsigned int v10; // esi
  _QWORD **v11; // r12
  _QWORD *v12; // rbx
  bool v13; // di
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rsi
  unsigned __int64 *v19; // rbx
  unsigned __int64 v20; // rdx
  __int64 *v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  bool i; // zf
  __int64 v28; // [rsp+20h] [rbp-88h]
  __int128 v29; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+10h]

  v4 = (volatile LONG *)(a1 + 272);
  v6 = a4;
  v29 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
  v9 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v10 = 0;
  v28 = *(_QWORD *)(a2 + 32);
  v30 = *(_QWORD *)(a2 + 40);
  *((_QWORD *)&v29 + 1) = v30;
  *(_QWORD *)&v29 = 0x40000LL;
  if ( v28 )
  {
    v11 = (_QWORD **)(a1 + 24);
    while ( 1 )
    {
      v12 = *v11;
      v13 = 0;
      if ( *v11 )
      {
        v14 = v9 & 0x3FFFFFFFFFFFFFFFLL;
        while ( 1 )
        {
          v15 = v12[3] & 0x3FFFFFFFFFFFFFFFLL;
          if ( v14 >= v15 )
          {
            if ( v14 < v12[4] + v15 )
            {
              v18 = (__int64)v12;
              goto LABEL_11;
            }
            v16 = (_QWORD *)v12[1];
            if ( !v16 )
            {
              v13 = 1;
              break;
            }
          }
          else
          {
            v16 = (_QWORD *)*v12;
            if ( !*v12 )
              break;
          }
          v12 = v16;
        }
      }
      if ( !a3 || (v17 = (_QWORD *)*a3) == 0LL )
      {
        RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 24), (unsigned __int64)v12, v13, (_QWORD *)a2);
        goto LABEL_35;
      }
      do
      {
        v18 = (__int64)v17;
        v17 = (_QWORD *)*v17;
      }
      while ( v17 );
      RtlAvlRemoveNode(a3, v18);
      *(_QWORD *)(v18 + 24) = v9 & 0x3FFFFFFFFFFFFFFFLL;
      RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 24), (unsigned __int64)v12, v13, (_QWORD *)v18);
LABEL_11:
      v19 = (unsigned __int64 *)(v18 + 32);
      RtlMergeBitMapsEx((unsigned __int64 *)(v18 + 32), (__int64 *)&v29);
      if ( !_bittest64((const signed __int64 *)(a2 + 24), 0x3Eu)
        || !_bittest64((const signed __int64 *)(v18 + 24), 0x3Eu) )
      {
        *(_QWORD *)(v18 + 24) &= ~0x4000000000000000uLL;
      }
      v20 = *v19;
      if ( *v19 )
      {
        if ( v20 <= 1 )
        {
          if ( v20 != 1 || !_bittest64(*(const signed __int64 **)(v18 + 40), 0) )
            goto LABEL_33;
LABEL_32:
          *(_QWORD *)(v18 + 24) |= 0x8000000000000000uLL;
          goto LABEL_33;
        }
        v21 = *(__int64 **)(v18 + 40);
        v22 = *v21;
        v23 = &v21[(v20 - 1) >> 6];
        if ( v21 != v23 )
        {
          for ( i = v22 == -1; i; i = *v21 == -1 )
          {
            if ( ++v21 == v23 )
            {
              v24 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v20 - 1);
              v25 = *v21 & v24;
              goto LABEL_31;
            }
          }
          goto LABEL_33;
        }
        v24 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20);
        v25 = v22 & v24;
LABEL_31:
        if ( v25 == v24 )
          goto LABEL_32;
      }
LABEL_33:
      v10 = 1;
LABEL_35:
      v30 += 0x8000LL;
      *((_QWORD *)&v29 + 1) = v30;
      v9 = (v9 + 0x40000) ^ ((v9 + 0x40000) ^ v9) & 0xC000000000000000uLL;
      v28 -= 0x40000LL;
      if ( !v28 )
      {
        v4 = (volatile LONG *)(a1 + 272);
        v6 = a4;
        break;
      }
    }
  }
  if ( v6 )
    MiUpdatePhysicalPages(a1, v6, 0LL);
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v8);
  return v10;
}

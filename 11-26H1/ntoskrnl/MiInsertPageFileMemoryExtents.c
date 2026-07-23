/*
 * XREFs of MiInsertPageFileMemoryExtents @ 0x1407118E8
 * Callers:
 *     MiCreatePagefileMemoryExtents @ 0x140884604 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     MiComparePageFileMemoryExtents @ 0x140711534 (MiComparePageFileMemoryExtents.c)
 */

void __fastcall MiInsertPageFileMemoryExtents(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rdi
  __int64 v3; // r15
  KIRQL v5; // cl
  unsigned __int64 v6; // rbx
  int v7; // r12d
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rbp
  signed __int64 v12; // rdi
  BOOLEAN v13; // r8
  int v14; // r14d
  unsigned __int64 v15; // rax
  char v16; // al
  KIRQL v18; // [rsp+68h] [rbp+10h]

  v2 = (volatile LONG *)(a1 + 200);
  v3 = a1;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v6 = *(_QWORD *)a2;
  v18 = v5;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v6 )
    v6 ^= a2;
  v7 = *(_BYTE *)(a2 + 8) & 1;
  if ( !v6 )
    goto LABEL_35;
  v8 = v3 + 232;
  while ( 2 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)v6;
      v10 = (_QWORD *)v6;
      if ( !*(_QWORD *)v6 )
      {
        v10 = (_QWORD *)(v6 + 8);
        v9 = *(_QWORD *)(v6 + 8);
        if ( !v9 )
          break;
      }
      if ( v7 )
        v6 ^= v9;
      else
        v6 = v9;
      *v10 = 0LL;
    }
    v11 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v7 && v11 )
      v11 ^= v6;
    v12 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v3 + 240) & 1) != 0 && v12 )
      v12 ^= v8;
    v13 = 0;
    v14 = *(_BYTE *)(v8 + 8) & 1;
    if ( !v12 )
      goto LABEL_32;
    while ( 1 )
    {
      if ( (int)MiComparePageFileMemoryExtents((_DWORD *)(v6 + 24), v12) >= 0 )
      {
        v15 = *(_QWORD *)(v12 + 8);
        if ( v14 )
        {
          if ( !v15 )
            goto LABEL_24;
          v15 ^= v12;
        }
        if ( !v15 )
        {
LABEL_24:
          v13 = 1;
          goto LABEL_31;
        }
        goto LABEL_29;
      }
      v15 = *(_QWORD *)v12;
      if ( v14 )
      {
        if ( !v15 )
          break;
        v15 ^= v12;
      }
      if ( !v15 )
        break;
LABEL_29:
      v12 = v15;
    }
    v13 = 0;
LABEL_31:
    v3 = a1;
LABEL_32:
    RtlRbInsertNodeEx((PRTL_RB_TREE)v8, (PRTL_BALANCED_NODE)v12, v13, (PRTL_BALANCED_NODE)v6);
    if ( v11 )
    {
      v6 = v11;
      continue;
    }
    break;
  }
  v5 = v18;
  v2 = (volatile LONG *)(v3 + 200);
LABEL_35:
  v16 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (v16 & 1) != 0 )
    *(_BYTE *)(a2 + 8) = 1;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
}

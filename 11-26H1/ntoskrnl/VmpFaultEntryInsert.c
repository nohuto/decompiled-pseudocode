/*
 * XREFs of VmpFaultEntryInsert @ 0x1406C4A08
 * Callers:
 *     VmpAccessFaultBatch @ 0x1406C45B0 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 */

void __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  volatile LONG *v3; // rbx
  _RTL_BALANCED_NODE *v5; // rdi
  unsigned __int64 v6; // rbp
  KIRQL v7; // r14
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rdx
  BOOLEAN v10; // r8
  unsigned __int64 v11; // rax

  v3 = (volatile LONG *)(a1 + 112);
  v5 = a2;
  v6 = (unsigned __int64)&a2[2 * a3];
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  if ( (unsigned __int64)v5 < v6 )
  {
    v8 = (unsigned __int64 *)(a1 + 96);
    do
    {
      if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
      {
        if ( *v8 )
          v9 = *v8 ^ (unsigned __int64)v8;
        else
          v9 = 0LL;
      }
      else
      {
        v9 = *v8;
      }
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          if ( ((unsigned __int64)v5[1].Children[0] & 0xFFFFFFFFFFFFFLL) >= (*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v11 = *(_QWORD *)(v9 + 8);
            if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_20;
              v11 ^= v9;
            }
            if ( !v11 )
            {
LABEL_20:
              v10 = 1;
              break;
            }
          }
          else
          {
            v11 = *(_QWORD *)v9;
            if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
            {
              if ( !v11 )
                break;
              v11 ^= v9;
            }
            if ( !v11 )
              break;
          }
          v9 = v11;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v9, v10, v5);
      v5 += 2;
    }
    while ( (unsigned __int64)v5 < v6 );
    v3 = (volatile LONG *)(a1 + 112);
  }
  ExReleaseSpinLockExclusive(v3, v7);
}

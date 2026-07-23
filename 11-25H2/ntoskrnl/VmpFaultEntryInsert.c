/*
 * XREFs of VmpFaultEntryInsert @ 0x14042B478
 * Callers:
 *     VmpAccessFaultBatch @ 0x14042B2B8 (VmpAccessFaultBatch.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  unsigned __int8 CurrentIrql; // si
  volatile LONG *v7; // rbx
  _RTL_BALANCED_NODE **v8; // rbx
  unsigned __int64 v9; // rdx
  BOOLEAN v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax

  v3 = a2;
  v4 = a1;
  v5 = (unsigned __int64)&a2[2 * a3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v7 = (volatile LONG *)(v4 + 96);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 96));
  if ( (unsigned __int64)v3 < v5 )
  {
    v8 = (_RTL_BALANCED_NODE **)(v4 + 80);
    do
    {
      v9 = (unsigned __int64)*v8;
      if ( (*(_BYTE *)(v4 + 88) & 1) != 0 && v9 )
        v9 ^= (unsigned __int64)v8;
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          if ( ((unsigned __int64)v3[1].Children[0] & 0xFFFFFFFFFFFFFLL) >= (*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v11 = *(_QWORD *)(v9 + 8);
            if ( (*(_BYTE *)(v4 + 88) & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_15;
              v11 ^= v9;
            }
            if ( !v11 )
            {
LABEL_15:
              v10 = 1;
              break;
            }
          }
          else
          {
            v11 = *(_QWORD *)v9;
            if ( (*(_BYTE *)(v4 + 88) & 1) != 0 )
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
      RtlRbInsertNodeEx((PRTL_RB_TREE)(v4 + 80), (PRTL_BALANCED_NODE)v9, v10, v3);
      v3 += 2;
    }
    while ( (unsigned __int64)v3 < v5 );
    v7 = (volatile LONG *)(v4 + 96);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

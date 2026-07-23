/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x14086F5B8
 * Callers:
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     MiReturnPartitionPagesToParent @ 0x14070E56C (MiReturnPartitionPagesToParent.c)
 */

void __fastcall MiFreePartitionPhysicalPages(_QWORD *a1, ULONG *a2)
{
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v5; // eax
  ULONG_PTR *v6; // rcx
  ULONG_PTR v7; // r9
  unsigned __int64 v8; // rdx
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // r8
  __int64 v11; // r11
  unsigned __int64 v12; // rdx

  BugCheckParameter4 = a1[2786];
  MiReturnPartitionPagesToParent((ULONG_PTR)a1);
  v5 = 0;
  v6 = (ULONG_PTR *)(a1[2] + 14176LL);
  while ( v5 < (unsigned __int16)KeNumberNodes )
  {
    if ( *v6 )
      KeBugCheckEx(0x1Au, 0x41008uLL, *v6, 0LL, 0LL);
    v6 += 7040;
    ++v5;
  }
  v7 = a1[2808];
  v8 = a1[2816];
  v9 = a1[2786];
  if ( a1[930] )
    KeBugCheckEx(0x1Au, 0x41006uLL, BugCheckParameter4, v9, a1[2808]);
  if ( v9 )
    KeBugCheckEx(0x1Au, 0x41005uLL, BugCheckParameter4, v9, a1[2808]);
  if ( v7 )
    KeBugCheckEx(0x1Au, 0x41004uLL, BugCheckParameter4, v7, 0LL);
  v10 = a1[2888];
  if ( v10 )
    KeBugCheckEx(0x1Au, 0x41009uLL, v10, a1[2931], BugCheckParameter4);
  if ( v8 != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41003uLL, BugCheckParameter4, a1[2816], a1[2931]);
  MiReturnResident((__int64)a2, v8);
  v12 = a1[2931];
  if ( a2 == &MiSystemPartition )
    MiReturnCommit((__int64)a2, v12, 0);
  else
    MiIncreaseCommitLimits((__int64)a2, v12, v12, 0LL, v11, v11);
}

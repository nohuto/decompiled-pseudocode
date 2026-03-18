/*
 * XREFs of KeDeleteCpuPartition @ 0x1407BB114
 * Callers:
 *     PspDeleteCpuPartition @ 0x1407F2A60 (PspDeleteCpuPartition.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiRundownAvailableCpusWorkItem @ 0x140463B20 (KiRundownAvailableCpusWorkItem.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F3880 (KeCpuPartitionMoveCpus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall KeDeleteCpuPartition(PVOID P, __int64 a2)
{
  struct _KAFFINITY_EX *v2; // rdi
  unsigned __int16 i; // cx
  struct _KAFFINITY_EX v6; // [rsp+20h] [rbp-138h] BYREF

  v2 = *(struct _KAFFINITY_EX **)P;
  for ( i = 0; i < v2->Count; ++i )
  {
    if ( v2->Bitmap[i] )
    {
      memset_0(&v6.8, 0, sizeof(v6.8));
      *(_QWORD *)&v6.Count = 2097153LL;
      memset_0(&v6.8, 0, sizeof(v6.8));
      RtlpCopyAffinityEx(&v6, 0x20u, v2);
      KeCpuPartitionMoveCpus(a2, (_WORD **)P, &v6, 1);
      break;
    }
  }
  KiRundownAvailableCpusWorkItem((struct _EX_RUNDOWN_REF *)P + 5);
  ExFreePoolWithTag(P, 0);
}

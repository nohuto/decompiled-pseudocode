/*
 * XREFs of ?ExpLookasideMgrWorkerSetCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@@Z @ 0x14084D1D0
 * Callers:
 *     ?ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CDCC (-ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 * Callees:
 *     IoFreeWorkItem @ 0x14049BA70 (IoFreeWorkItem.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpLookasideMgrWorkerSetCleanup(struct _EXP_LOOKASIDE_MGR_WORKER_SET *a1)
{
  unsigned int i; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  struct _IO_WORKITEM *v5; // rcx
  void *v6; // rcx

  if ( *((_QWORD *)a1 + 1) )
  {
    for ( i = 0; i < *(_DWORD *)a1; ++i )
    {
      v3 = *((_QWORD *)a1 + 1);
      v4 = 32LL * i;
      v5 = *(struct _IO_WORKITEM **)(v4 + v3 + 8);
      if ( v5 )
      {
        IoFreeWorkItem(v5);
        *(_QWORD *)(v4 + v3 + 8) = 0LL;
      }
      v6 = *(void **)(v4 + v3 + 16);
      if ( v6 )
      {
        ExFreePoolWithTag(v6, 0);
        *(_QWORD *)(v4 + v3 + 16) = 0LL;
      }
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    *((_QWORD *)a1 + 1) = 0LL;
  }
}

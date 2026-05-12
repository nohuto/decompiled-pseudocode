/*
 * XREFs of NvmeControllerDeleteReenumerationContext @ 0x1400C5BB4
 * Callers:
 *     NvmeControllerInitReenumerationContext @ 0x1400C6298 (NvmeControllerInitReenumerationContext.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerDeleteReenumerationContext(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  struct _IO_WORKITEM *v4; // rcx

  v2 = *(_QWORD *)(a1 + 1656);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 48);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74456152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1656) + 48LL) = 0LL;
    }
    v4 = *(struct _IO_WORKITEM **)(*(_QWORD *)(a1 + 1656) + 40LL);
    if ( v4 )
    {
      IoFreeWorkItem(v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 1656) + 40LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1656), 0x74456152u);
    *(_QWORD *)(a1 + 1656) = 0LL;
  }
}

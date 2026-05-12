/*
 * XREFs of sub_1400AFD68 @ 0x1400AFD68
 * Callers:
 *     sub_140042038 @ 0x140042038 (sub_140042038.c)
 * Callees:
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 */

void __fastcall sub_1400AFD68(__int64 a1, char a2)
{
  __int64 v3; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( !*(_QWORD *)(a1 + 1136)
    || (v3 = *(_QWORD *)(a1 + 160), *(_DWORD *)(v3 + 68) == 1) && (*(_DWORD *)(v3 + 76) & 0x27) == 0 )
  {
    if ( a2 < 0 && (int)sub_1400CA35C(a1) >= 0 )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, sub_1400B1180, NormalWorkQueue, WorkItem);
      else
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
    }
  }
}

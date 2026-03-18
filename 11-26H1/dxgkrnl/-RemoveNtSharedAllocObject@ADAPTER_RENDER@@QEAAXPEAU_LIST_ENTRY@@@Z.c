/*
 * XREFs of ?RemoveNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140053D48
 * Callers:
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x140355BB0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::RemoveNtSharedAllocObject(ADAPTER_RENDER *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = (char *)this + 256;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}

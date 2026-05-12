/*
 * XREFs of sub_1400FAE88 @ 0x1400FAE88
 * Callers:
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400F82EC @ 0x1400F82EC (sub_1400F82EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400FAE88(__int64 a1)
{
  struct _IO_WORKITEM **v2; // rcx
  struct _IO_WORKITEM *v3; // rcx

  v2 = *(struct _IO_WORKITEM ***)(a1 + 496);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      IoFreeWorkItem(v3);
      **(_QWORD **)(a1 + 496) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 496), 0x4D4E6152u);
    *(_QWORD *)(a1 + 496) = 0LL;
  }
}

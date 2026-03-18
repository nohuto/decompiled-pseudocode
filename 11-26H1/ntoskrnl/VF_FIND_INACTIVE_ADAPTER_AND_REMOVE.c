/*
 * XREFs of VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x140C2301C
 * Callers:
 *     VfReleaseInactiveDmaAdapter @ 0x140C25B84 (VfReleaseInactiveDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

struct _LIST_ENTRY *__fastcall VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rbx
  KIRQL v3; // r8
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F08290);
  for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
  {
    if ( i[4].Flink == a1 && (SHIDWORD(i[4].Blink) <= 0 || LOBYTE(i[4].Blink) == 1) )
    {
      Flink = i->Flink;
      v2 = i;
      if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      break;
    }
  }
  KeReleaseSpinLock(&qword_140F08290, v3);
  return v2;
}

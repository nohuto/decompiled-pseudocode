/*
 * XREFs of VfHalDeleteDevice @ 0x140C25180
 * Callers:
 *     VfIoDeleteDevice @ 0x140C306C0 (VfIoDeleteDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140C22F98 (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x140C27B3C (ViReleaseDmaAdapter.c)
 */

void __fastcall VfHalDeleteDevice(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v3; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  KIRQL v5; // al
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v7; // rax

  if ( ViVerifyDma )
  {
    Blink = a1[19].Blink;
    v3 = a1;
    if ( !Blink )
      goto LABEL_16;
    do
    {
      Flink = Blink[3].Flink;
      if ( !Flink )
        break;
      Blink = Flink[19].Blink;
      v3 = Flink;
    }
    while ( Blink );
    if ( v3 == a1 )
    {
LABEL_16:
      while ( 1 )
      {
        v7 = VF_FIND_DEVICE_INFORMATION_AND_REMOVE(a1);
        if ( !v7 )
          break;
        ViReleaseDmaAdapter((__int64)v7);
      }
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F08290);
      for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
      {
        if ( i[4].Flink == v3 )
          LOBYTE(i[4].Blink) = 1;
      }
      KeReleaseSpinLock(&qword_140F08290, v5);
    }
  }
}

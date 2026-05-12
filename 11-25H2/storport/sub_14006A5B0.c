/*
 * XREFs of sub_14006A5B0 @ 0x14006A5B0
 * Callers:
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 * Callees:
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_14006A664 @ 0x14006A664 (sub_14006A664.c)
 */

void sub_14006A5B0()
{
  PVOID *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned int)sub_1400567A0() )
    KeAcquireInStackQueuedSpinLock(&qword_140169200, &LockHandle);
  else
    ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = (PVOID *)qword_140169290; i != &qword_140169290; i = (PVOID *)*i )
    sub_14006A664(i + 7);
  if ( (unsigned int)sub_1400567A0() )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    ExReleaseResourceLite(&Resource);
}

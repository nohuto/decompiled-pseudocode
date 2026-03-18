/*
 * XREFs of RtlpHpEnvCompactionIsScheduled @ 0x140494D94
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x140520DB8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvCompactionIsScheduled(_QWORD *a1)
{
  if ( BYTE1(*a1) == 1 )
    return *(unsigned int *)&ExSaPageGroupDescriptorArrayLock.Tag;
  else
    return ExSaPageGroupDescriptorArrayLock.SystemCallNumber;
}

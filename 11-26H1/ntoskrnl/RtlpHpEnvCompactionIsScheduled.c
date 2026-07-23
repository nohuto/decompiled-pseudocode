/*
 * XREFs of RtlpHpEnvCompactionIsScheduled @ 0x14048E8E4
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvCompactionIsScheduled(_QWORD *a1)
{
  if ( BYTE1(*a1) == 1 )
    return HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase);
  else
    return LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock);
}

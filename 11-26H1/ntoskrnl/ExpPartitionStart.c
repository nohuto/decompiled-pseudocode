/*
 * XREFs of ExpPartitionStart @ 0x14083FE48
 * Callers:
 *     PspAllocatePartition @ 0x1407FDBD8 (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KeIsNodeInitialized @ 0x14038227C (KeIsNodeInitialized.c)
 *     ExpWorkQueueManagerStart @ 0x140840394 (ExpWorkQueueManagerStart.c)
 */

__int64 __fastcall ExpPartitionStart(__int64 a1)
{
  unsigned __int16 i; // bx
  USHORT *v3; // rcx
  USHORT v4; // cx
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    if ( KeIsNodeInitialized(i) )
      v3 = (USHORT *)KeNodeBlock[i];
    else
      v3 = 0LL;
    v4 = *v3;
    Affinity = 0LL;
    KeQueryNodeActiveAffinity(v4, &Affinity, 0LL);
    if ( Affinity.Mask )
    {
      result = ExpWorkQueueManagerStart(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * i));
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}

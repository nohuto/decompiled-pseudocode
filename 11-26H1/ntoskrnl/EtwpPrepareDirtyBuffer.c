/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x1402191F4
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x140A133D8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     EtwpCompressionDpc @ 0x140532BE0 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1405348E8 (EtwpReenableCompression.c)
 */

__int64 __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, a2, 4LL);
      if ( !*(_DWORD *)(a1 + 1432) && *(_QWORD *)(a1 + 1528) >= 2LL * *(_QWORD *)(a1 + 1536) )
        EtwpReenableCompression(a1);
      result = *(unsigned int *)(a1 + 1432);
      if ( (_DWORD)result )
      {
        result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 1400), 2);
        if ( !(_DWORD)result )
        {
          if ( (unsigned __int8)KeGetEffectiveIrql(v7, v6, v8) > 2u )
            return KiInsertQueueDpc(a1 + 1456, 0);
          else
            return EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      return EtwpEnqueueAvailableBuffer(a1, a2, 0LL);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 3;
    result = EtwpGetLoggerTimeStamp(a1);
    *(_QWORD *)(a2 + 16) = result;
  }
  return result;
}

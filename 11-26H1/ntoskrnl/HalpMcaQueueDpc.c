/*
 * XREFs of HalpMcaQueueDpc @ 0x1402219D8
 * Callers:
 *     HalpTimerClockInterrupt @ 0x140221DE0 (HalpTimerClockInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaQueueDpc(char a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v4; // rcx

  if ( a1 )
  {
    result = McaWmiCallback;
    if ( McaWmiCallback )
      result = guard_dispatch_icall_no_overrides(1496727831LL, 1LL, 0LL);
  }
  if ( a2 )
  {
    result = KiProcessorBlock[0];
    v4 = *(_QWORD *)(KiProcessorBlock[0] + 128);
    if ( v4 )
    {
      *(_QWORD *)(KiProcessorBlock[0] + 128) = 0LL;
      return KiInsertQueueDpc(v4, 0);
    }
  }
  return result;
}

/*
 * XREFs of KiAllocateSmtIsolationThread @ 0x1405F8EE4
 * Callers:
 *     KiAllocateAndStartBootProcessorSchedulerStructures @ 0x1405EC424 (KiAllocateAndStartBootProcessorSchedulerStructures.c)
 *     KiAllocateProcessorSchedulerStructures @ 0x1405EC84C (KiAllocateProcessorSchedulerStructures.c)
 * Callees:
 *     PsAssignThreadId @ 0x14049C08C (PsAssignThreadId.c)
 *     KiAllocatePrcbThread @ 0x1405EECFC (KiAllocatePrcbThread.c)
 */

__int64 __fastcall KiAllocateSmtIsolationThread(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  result = KiAllocatePrcbThread(
             &v7,
             (__int64)KiExecuteSmtIsolationThread,
             a3,
             a4,
             a2,
             (PCUNICODE_STRING)KiSmtIsolationThreadName,
             0);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    result = PsAssignThreadId(v7);
    if ( (int)result >= 0 )
      *a1 = v6;
  }
  return result;
}

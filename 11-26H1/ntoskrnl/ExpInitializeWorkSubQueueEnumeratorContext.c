/*
 * XREFs of ExpInitializeWorkSubQueueEnumeratorContext @ 0x140488DEC
 * Callers:
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitializeWorkSubQueueEnumeratorContext(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 result; // rax

  result = a5;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = a5;
  return result;
}

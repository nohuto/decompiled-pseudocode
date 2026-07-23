/*
 * XREFs of KiAllocateDpcDelegateThread @ 0x1405EC528
 * Callers:
 *     KiAllocateAndStartBootProcessorSchedulerStructures @ 0x1405EC424 (KiAllocateAndStartBootProcessorSchedulerStructures.c)
 *     KiAllocateProcessorSchedulerStructures @ 0x1405EC84C (KiAllocateProcessorSchedulerStructures.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsAssignThreadId @ 0x14049C08C (PsAssignThreadId.c)
 *     KiAllocatePrcbThread @ 0x1405EECFC (KiAllocatePrcbThread.c)
 */

__int64 __fastcall KiAllocateDpcDelegateThread(_QWORD *a1, int a2, int a3, int a4)
{
  int PrcbThread; // eax
  PVOID v6; // rbx
  int v7; // edi
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  PrcbThread = KiAllocatePrcbThread(
                 (int)&Object,
                 (int)KiExecuteDpcDelegate,
                 a3,
                 a4,
                 a2,
                 (PCUNICODE_STRING)KiDpcDelegateThreadName,
                 0);
  v6 = Object;
  v7 = PrcbThread;
  if ( PrcbThread >= 0 )
  {
    v7 = PsAssignThreadId((__int64)Object);
    if ( v7 >= 0 )
    {
      *a1 = v6;
      v6 = 0LL;
    }
  }
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  return (unsigned int)v7;
}

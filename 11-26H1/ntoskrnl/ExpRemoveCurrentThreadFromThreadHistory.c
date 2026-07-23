/*
 * XREFs of ExpRemoveCurrentThreadFromThreadHistory @ 0x1404A9E14
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

unsigned __int8 __fastcall ExpRemoveCurrentThreadFromThreadHistory(__int64 a1)
{
  unsigned __int8 result; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rdi

  result = *(_DWORD *)(a1 + 408) & 7;
  if ( result != 4 )
  {
    CurrentThread = KeGetCurrentThread();
    for ( result = 0; result < 4u; ++result )
    {
      v4 = result;
      if ( *(struct _KTHREAD **)(a1 + 8LL * result + 72) == CurrentThread )
      {
        result = ObfDereferenceObjectWithTag(CurrentThread, 0x746C6644u);
        *(_QWORD *)(a1 + 8 * v4 + 72) = 0LL;
        return result;
      }
    }
  }
  return result;
}

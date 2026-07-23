/*
 * XREFs of ExpSvmFaultRoutine @ 0x1406D62F0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall ExpSvmFaultRoutine(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = 104LL * a1;
  result = (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(v1
                                                     + *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16]
                                                     + 96),
                           1,
                           0);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(
             v1 + *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16] + 32LL,
             0LL,
             0LL,
             0LL,
             0);
  return result;
}

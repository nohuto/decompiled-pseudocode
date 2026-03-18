/*
 * XREFs of ExpSvmFaultRoutine @ 0x1406D22C0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 __fastcall ExpSvmFaultRoutine(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = 104LL * a1;
  result = (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)((char *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Blink[6]
                                                     + v1),
                           1,
                           0);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(
             (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Blink[2] + v1,
             0LL,
             0LL,
             0LL,
             0);
  return result;
}

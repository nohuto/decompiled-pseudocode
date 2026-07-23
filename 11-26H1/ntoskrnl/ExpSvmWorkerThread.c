/*
 * XREFs of ExpSvmWorkerThread @ 0x1406D6520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpSvmWorkerThread(unsigned int a1, __int64 a2)
{
  char i; // bl
  __int64 result; // rax

  for ( i = 0; ; i = 1 )
  {
    do
      result = guard_dispatch_icall_no_overrides(a1, a2);
    while ( (_BYTE)result );
    if ( i )
      break;
    a2 = 104LL * a1;
    _InterlockedExchange(
      (volatile __int32 *)(a2 + *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16] + 96),
      0);
  }
  return result;
}

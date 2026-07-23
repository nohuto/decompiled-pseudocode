/*
 * XREFs of IoCancelThreadIo @ 0x14094BAC8
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     IopDisassociateThreadIrp @ 0x140522674 (IopDisassociateThreadIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

struct _KTHREAD *__fastcall IoCancelThreadIo(LARGE_INTEGER a1)
{
  struct _KTHREAD *result; // rax
  unsigned int *p_SystemCallNumber; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int *i; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  unsigned __int8 v7; // di
  bool j; // zf
  __int64 v9; // rcx
  unsigned int v10; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  Interval = a1;
  result = KeGetCurrentThread();
  p_SystemCallNumber = &result[1].SystemCallNumber;
  if ( *(unsigned int **)p_SystemCallNumber != p_SystemCallNumber )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
      IoCancelIrp((PIRP)(i - 8));
    v5 = 100 * IopIrpCompletionTimeoutInSeconds;
    v6 = 0;
    Interval.QuadPart = -100000LL;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v7 = KeGetCurrentIrql();
    if ( v7 != 1 )
      __writecr8(1uLL);
    for ( j = KiIrqlFlags == 0; ; j = KiIrqlFlags == 0 )
    {
      if ( !j )
        KiRaiseIrqlProcessIrqlFlags(v7, 1);
      if ( *(unsigned int **)p_SystemCallNumber == p_SystemCallNumber )
        break;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
      KeDelayExecutionThread(0, 0, &Interval);
      v10 = v6++;
      if ( v10 > v5 )
        IopDisassociateThreadIrp(v9);
      v7 = KeGetCurrentIrql();
      if ( v7 != 1 )
        __writecr8(1uLL);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    result = (struct _KTHREAD *)v7;
    __writecr8(v7);
  }
  return result;
}

/*
 * XREFs of NtCancelIoFile @ 0x140ACE000
 * Callers:
 *     DifNtCancelIoFileWrapper @ 0x14066E310 (DifNtCancelIoFileWrapper.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x14051B53C (IopCancelIrpsInFileObjectList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtCancelIoFile(void *a1, unsigned int *a2)
{
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 result; // rax
  int v8; // edx
  struct _KTHREAD *v9; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned int *p_SystemCallNumber; // rsi
  unsigned int *i; // rbx
  char v13; // di
  unsigned __int8 v14; // bl
  unsigned int *j; // rcx
  int ULongFromUser; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-40h] BYREF
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = 0;
  Src = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, (ULONG_PTR *)&Object, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = KeGetCurrentThread();
    ++v9->OtherOperationCount;
    __incgsdword(0x2EE4u);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
    }
    p_SystemCallNumber = &CurrentThread[1].SystemCallNumber;
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
    {
      if ( *((PVOID *)i + 20) == Object )
      {
        v4 = 1;
        IoCancelIrp((PIRP)(i - 8));
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( 2 )
      {
        v13 = 0;
        v14 = KeGetCurrentIrql();
        if ( v14 != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v8) = 1;
          KiRaiseIrqlProcessIrqlFlags(v14, v8);
        }
        for ( j = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != j; j = *(unsigned int **)j )
        {
          if ( *((PVOID *)j + 20) == Object )
          {
            v13 = 1;
            break;
          }
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        __writecr8(v14);
        if ( v13 )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          continue;
        }
        break;
      }
    }
    IopCancelIrpsInFileObjectList(
      (__int64)Object,
      (int)KeGetCurrentThread()->ApcState.Process,
      0,
      (int)KeGetCurrentThread(),
      1,
      0);
    if ( PreviousMode )
      RtlCopyToUser(a2, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(a2, &Src, 0x10uLL);
    ObfDereferenceObject(Object);
    return 0LL;
  }
  return result;
}

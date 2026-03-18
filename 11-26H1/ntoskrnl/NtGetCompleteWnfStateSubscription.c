/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x14094A2E0
 * Callers:
 *     DifNtGetCompleteWnfStateSubscriptionWrapper @ 0x140678B40 (DifNtGetCompleteWnfStateSubscriptionWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14094A448 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14094C014 (ExpWnfCompleteThreadSubscriptions.c)
 */

__int64 __fastcall NtGetCompleteWnfStateSubscription(
        volatile void *a1,
        volatile void *a2,
        int a3,
        int a4,
        volatile void *Address,
        SIZE_T Length)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  __int64 v10; // rsi
  int v11; // r9d
  int v13; // [rsp+38h] [rbp-30h]
  __int64 ULong64FromUser; // [rsp+40h] [rbp-28h] BYREF

  ULong64FromUser = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v9 = -1073741811;
    v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[3].BasePriority;
    if ( v10 )
    {
      if ( !a1
        || !a2
        || a3
        && (!a4 || a4 == -1073741267)
        && (ULong64FromUser = RtlReadULong64FromUser(a1),
            v13 = RtlReadULong64FromUser(a2),
            v9 = ExpWnfCompleteThreadSubscriptions(v10, (unsigned int)&ULong64FromUser, v13, v11, a4),
            v9 >= 0) )
      {
        if ( (_DWORD)Length )
        {
          if ( (unsigned int)Length < 0x1030 )
          {
            v9 = -1073741789;
          }
          else
          {
            ProbeForWrite(Address, (unsigned int)Length, 8u);
            v9 = ExpWnfDeliverThreadNotifications(v10, Address, (unsigned int)Length);
          }
        }
      }
    }
  }
  else
  {
    v9 = -1073741796;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}

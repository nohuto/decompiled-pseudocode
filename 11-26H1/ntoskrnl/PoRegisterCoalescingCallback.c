/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140B608A0
 * Callers:
 *     CmpCmdInit @ 0x14085AB84 (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x140CD7580 (PopCoalescingInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(__int64 a1, char a2, __int64 *a3, __int64 a4)
{
  __int64 Pool2; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  _QWORD *v13; // rcx
  _QWORD *v14; // rax

  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = Pool2;
  *(_QWORD *)(Pool2 + 8) = PopCoalescingCallback;
  *(_QWORD *)(Pool2 + 40) = a4;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_QWORD *)Pool2 = 0LL;
  *(_BYTE *)(Pool2 + 32) = a2 != 0;
  if ( !ExCompareExchangeCallBack((signed __int64 *)(Pool2 + 64), (struct _EX_RUNDOWN_REF *)Pool2, 0LL) )
    return 3221225485LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoalRegistrationListLock, v10, v11, v12);
  v13 = off_140E073D8;
  v14 = (_QWORD *)(Pool2 + 48);
  if ( *(_UNKNOWN ***)off_140E073D8 != &PopCoalRegistrationList )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 56) = off_140E073D8;
  *v14 = &PopCoalRegistrationList;
  *v13 = v14;
  off_140E073D8 = (_UNKNOWN *)(Pool2 + 48);
  PopReleaseRwLock((struct _KTHREAD *)&PopCoalRegistrationListLock);
  result = 0LL;
  *a3 = Pool2;
  return result;
}

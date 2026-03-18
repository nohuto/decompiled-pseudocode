/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140B5D720
 * Callers:
 *     CmpCmdInit @ 0x140854874 (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x140CD13D8 (PopCoalescingInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x140463604 (ExCompareExchangeCallBack.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
  PopAcquireRwLockExclusive(&stru_140F11D08.AffinityVersion, v10, v11, v12);
  v13 = off_140E073D8;
  v14 = (_QWORD *)(Pool2 + 48);
  if ( *(_UNKNOWN ***)off_140E073D8 != &PopCoalRegistrationList )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 56) = off_140E073D8;
  *v14 = &PopCoalRegistrationList;
  *v13 = v14;
  off_140E073D8 = (_UNKNOWN *)(Pool2 + 48);
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F11D08.AffinityVersion);
  result = 0LL;
  *a3 = Pool2;
  return result;
}

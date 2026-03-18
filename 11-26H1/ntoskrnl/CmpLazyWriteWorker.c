/*
 * XREFs of CmpLazyWriteWorker @ 0x1406E2810
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmpCompleteLazyWrite @ 0x1404D48EC (CmpCompleteLazyWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDiskFullWarning @ 0x140854AE8 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  KSPIN_LOCK *p_QuadPart; // rsi
  KIRQL v3; // al
  char v4; // di
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  char v7; // [rsp+78h] [rbp+10h] BYREF
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v8 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v3 = KeAcquireSpinLockRaiseToDpc(p_QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KeReleaseSpinLock(p_QuadPart, v3);
    v4 = guard_dispatch_icall_no_overrides(&v7, &v8);
    if ( Timer == &CmpLazyWriterData && CmpCannotWriteConfiguration )
    {
      if ( v7 )
        CmpDiskFullWarning();
      else
        CmpCannotWriteConfiguration = 0;
    }
    CmpCompleteLazyWrite(Timer, (__int64 *)((unsigned __int64)&v8 & -(__int64)(v4 != 0)));
    KeGetCurrentThread()[1].UserAffinity = (_KAFFINITY_EX *)v5;
  }
}

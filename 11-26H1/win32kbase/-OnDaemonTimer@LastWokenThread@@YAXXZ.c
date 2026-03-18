/*
 * XREFs of ?OnDaemonTimer@LastWokenThread@@YAXXZ @ 0x1400D12C0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x1400D1338 (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 */

void __fastcall LastWokenThread::OnDaemonTimer(LastWokenThread *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = MEMORY[0xFFFFF78000000014];
  v2 = *((_QWORD *)GetCurrentProcessUserGlobals() + 381);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)v2);
  if ( *(_BYTE *)(v2 + 17) && v1 - 20000000 > *(_QWORD *)(v2 + 24) )
  {
    ForegroundBoost::SetForegroundPriority(*(_QWORD *)(v2 + 8), 0, 0x10u);
    *(_BYTE *)(v2 + 17) = 0;
    *(_QWORD *)(v2 + 24) = 0LL;
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v2);
}

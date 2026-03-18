/*
 * XREFs of ?Clear@CLastWokenThread@@QEAAXXZ @ 0x1400CCAE4
 * Callers:
 *     ?Clear@LastWokenThread@@YAXXZ @ 0x1400CCAC0 (-Clear@LastWokenThread@@YAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 */

void __fastcall CLastWokenThread::Clear(CLastWokenThread *this)
{
  W32AcquirePushLockExclusiveEx(this);
  if ( *((_BYTE *)this + 17) )
  {
    ForegroundBoost::SetForegroundPriority(*((_QWORD *)this + 1), 0LL, 16LL);
    *((_BYTE *)this + 17) = 0;
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  W32ReleasePushLockExclusiveEx(this);
}

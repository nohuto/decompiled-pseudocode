/*
 * XREFs of ?DeBoostIfTime@CLastWokenThread@@QEAAX_J@Z @ 0x14009AA58
 * Callers:
 *     ?OnDaemonTimer@LastWokenThread@@YAXXZ @ 0x14009AA20 (-OnDaemonTimer@LastWokenThread@@YAXXZ.c)
 * Callees:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 */

void __fastcall CLastWokenThread::DeBoostIfTime(CLastWokenThread *this, __int64 a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 17) && a2 > *((_QWORD *)this + 3) )
  {
    ForegroundBoost::_SetForegroundPriority(
      *(_QWORD *)(*((_QWORD *)this + 1) + 464LL),
      *((_QWORD *)this + 1),
      0LL,
      16LL);
    *((_QWORD *)this + 3) = 0LL;
    *((_BYTE *)this + 17) = 0;
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}

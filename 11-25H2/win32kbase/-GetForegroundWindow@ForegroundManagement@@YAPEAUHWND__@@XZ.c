/*
 * XREFs of ?GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ @ 0x1401A9DB0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall ForegroundManagement::GetForegroundWindow(ForegroundManagement *this, __int64 a2)
{
  __int64 v2; // rdi
  CPushLock *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi

  v2 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 18864);
  v3 = (CPushLock *)(v2 + 16);
  RIMLockShared(v2 + 16);
  v4 = *(_QWORD *)(v2 + 32);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 72);
  CPushLock::ReleaseLock(v3);
  return v5;
}

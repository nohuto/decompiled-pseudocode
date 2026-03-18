/*
 * XREFs of ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1401A9C40
 * Callers:
 *     NtUserConfigureActivationObject @ 0x14013ABD0 (NtUserConfigureActivationObject.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall ForegroundManagement::CheckProcessForeground(ForegroundManagement *this, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rdi
  CPushLock *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi

  v2 = (int)this;
  v3 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 18864);
  v4 = (CPushLock *)(v3 + 16);
  RIMLockShared(v3 + 16);
  v5 = *(_QWORD *)(v3 + 32);
  if ( v5 )
    v6 = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v5 + 24)) & 0xFFFFFFFC;
  else
    v6 = 0;
  CPushLock::ReleaseLock(v4);
  return v2 == v6;
}

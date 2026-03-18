/*
 * XREFs of ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1402134C8
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1401BBF70 (NtUserAddVisualIdentifier.c)
 *     NtUserRemoveVisualIdentifier @ 0x1401BF8C0 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CDesktopInputSink::IsEqualByLuid(const struct _LUID *a1, __int64 a2)
{
  CPushLock *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx

  v3 = *(CPushLock **)(W32GetUserSessionState(a1, a2) + 19128);
  RIMLockShared((__int64)v3);
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19128) + 24LL);
  CPushLock::ReleaseLock(v3);
  return v6 == *a1;
}
